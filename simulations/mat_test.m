pe = pyenv('Version', 'C:\Your\path\to\python311\install');
if pe.Status == "NotLoaded"
    disp('Python not loaded correctly');
else
    disp(['Using Python version: ', pe.Version]);
end

if count(py.sys.path, 'C:\Your\path\to\HYPERION\src\objects') == 0
    insert(py.sys.path, int32(0), 'C:\Your\path\to\HYPERION\src\objects');
end

mod = py.importlib.import_module('objects');

% Attach to an open STK instance through Python
stk = py.agi.stk12.stkdesktop.STKDesktop.AttachToApplication();
root = stk.Root;

% Check for active scenario
scenario = root.CurrentScenario;
if isempty(scenario)
    error('No scenario is currently open.');
else
    disp(['Clearing objects in scenario: ', string(scenario.InstanceName)]);
end

% Clear current scenario
while scenario.Children.Count > 0
    children = scenario.Children;
    disp(['Number of objects remaining: ', num2str(children.Count)]);

    % Always target the first object to avoid skipping objects
    try
        child = children.Item(int32(0)); 
        disp(['Deleting object: ', char(child.InstanceName)]);
        child.Unload();  
    catch ME
        disp(['Failed to delete object: ', ME.message]);
    end
end

disp('All objects have been cleared.');


% Constants
mu_E = 3.986004415e5;  % km^3 / s^2
r_E = 6.378137e3;      % km

% Orbital parameters for the Walker constellation
a = 1000 + r_E;        % Semi-major axis (altitude)
i = 82;                % Inclination
omega = 0;             % Argument of perigee
e = 0;                 % Eccentricity
Omega_0 = 0;           % Right ascension of ascending node
M_0 = 0;               % Mean anomaly

% Walker parameters
total_sats = 30;
planes = 5;
phasing = 3;
delta_M = (phasing * 360) / total_sats;
sats_per_plane = total_sats / planes;
conic_angle = 45;

% Loop through planes and satellites
for plane = 0:(planes-1)
    for sat = 0:(sats_per_plane-1)
        Omega = (plane / planes) * 360 + Omega_0;
        M = (sat / sats_per_plane) * 360 + delta_M * plane + M_0;
        
        % Satellite name and creation using Python class
        sat_name = sprintf('Sat_P%d_S%d', plane+1, sat+1);
        satellite = mod.Satellite(root, sat_name, a, i, Omega, omega, e, M);
        satellite.loadObject();  % Calls the Python method to create the satellite
        
        % Sensor creation and attachment
        sensor_name = "LEOSensor";
        sensor = mod.Sensor(root, sat_name, sensor_name, conic_angle);
        sensor.loadObject();  % Calls the Python method to create and attach the sensor
    end
end

disp('All LEO satellites and sensors loaded successfully.');
root.Save();  % Save the scenario
disp('Scenario saved successfully.');