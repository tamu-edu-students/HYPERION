stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile81Chain
    BEGIN Definition
        Object		 Aircraft/Missile81
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 23:49:35.000000000
                Stop		 4 Feb 2025 01:44:13.771170198
            END Interval
            IntervalState		 Explicit
        END EVENTINTERVAL

        ConstConstraintsByStrands		 Yes
        UseSaveIntervalFile		 No
        UseMinAngle		 No
        UseMaxAngle		 No
        UseMinLinkTime		 No
        LTDelayCriterion		 2
        TimeConvergence		 0.005
        AbsValueConvergence		 1e-14
        RelValueConvergence		 1e-08
        MaxTimeStep		 360
        MinTimeStep		 0.01
        UseLightTimeDelay		 Yes
        DetectEventsUsingSamplesOnly		 No
        UseLoadIntervalFile		 No
        AllowSameInstInStrands		 No
        KeepStrandsWithNoIntvls		 No
        CovAssetMode		 Append
        ComputeOptimalPath		 No
        OptimalPathSampleTime		  1.0000000000000000e+01
        OptimalPathIncludeAccessEdgeTimesInSamples		 Yes
        OptimalPathNumBestStrandsToStore		 1
        OptimalPathMetric		 Distance
        OptimalPathLinkCompare		 Min
        OptimalPathStrandCompare		 Min
        OptimalPathCalcScalarIgnoreCommonParentLinks		 Yes
        BEGIN StrandObjIndexes
            STKInst		 Aircraft/Missile81
            STKInst		 Satellite/Sat_P1_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S6/Sensor/LEOSensor
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 5
            Start		  6.6743841680583413e+04
            Stop		  6.7742469783130728e+04
            Strand		 0 6
            Start		  6.5783759651564847e+04
            Stop		  6.6764903821687549e+04
            Strand		 0 7
            Start		  6.4396264829162843e+04
            Stop		  6.5173319768799491e+04
            Strand		 0 8
            Start		  6.4175000000000000e+04
            Stop		  6.4403632936447655e+04
            Strand		 0 10
            Start		  6.6808515816560699e+04
            Stop		  6.7335679178567952e+04
            Strand		 0 11
            Start		  6.5970094936192661e+04
            Stop		  6.6658952609723638e+04
            Strand		 0 12
            Start		  6.5169916980024369e+04
            Stop		  6.5929674069228960e+04
            Strand		 0 13
            Start		  6.8368818310621209e+04
            Stop		  6.8913288020249383e+04
            Strand		 0 14
            Start		  6.7519011308531422e+04
            Stop		  6.8229223470631143e+04
            Strand		 0 15
            Start		  6.6691486902192366e+04
            Stop		  6.7498214415935363e+04
            Strand		 0 16
            Start		  6.5909431697507986e+04
            Stop		  6.6706123677328433e+04
            Start		  7.0789564824958099e+04
            Stop		  7.0974706108063066e+04
            Strand		 0 17
            Start		  6.5217104676558964e+04
            Stop		  6.5827823217416837e+04
            Start		  7.0061192697504608e+04
            Stop		  7.0222520686606484e+04
            Strand		 0 18
            Start		  6.9226695480276845e+04
            Stop		  6.9566559157836571e+04
            Strand		 0 21
            Start		  6.6201328306023846e+04
            Stop		  6.6788945920330283e+04
            Strand		 0 22
            Start		  6.4834048481965088e+04
            Stop		  6.6029338471480965e+04
            Strand		 0 23
            Start		  6.4175000000000000e+04
            Stop		  6.4797373917722354e+04
            Strand		 0 25
            Start		  6.9385793271183662e+04
            Stop		  7.0990962430298358e+04
            Strand		 0 26
            Start		  6.7872791634283509e+04
            Stop		  6.9270425069378587e+04
            Strand		 0 27
            Start		  6.6575778153199775e+04
            Stop		  6.7147337957866694e+04
            Strand		 0 30
            Start		  7.0984517613506367e+04
            Stop		  7.1053771170197608e+04
        END StrandAccessesByIndex


    END Definition

    BEGIN Extensions

        BEGIN ExternData
        END ExternData

        BEGIN ADFFileData
        END ADFFileData

        BEGIN Desc
        END Desc

        BEGIN Crdn
        END Crdn

        BEGIN Graphics

            BEGIN Attributes

                StaticColor		 #00ff00
                AnimationColor		 #00ffff
                OptStrandsRampStartColor		 #00ff00
                OptStrandsRampEndColor		 #ff0000
                AnimationLineWidth		 2
                StaticLineWidth		 3
                OptStrandsLineWidth		 5

            END Attributes

            BEGIN Graphics
                ShowGfx		 On
                Show2dGfx		 On
                ShowStatic		 Off
                ShowAnimationHighlight		 On
                ShowAnimationLine		 On
                ShowLinkDirection		 Off
                ShowOptStrands		 On
                UseHideAnimGfxIfMoreThanNStrands		 On
                HideAnimGfxIfMoreThanNStrandsNum		 100000
                NumOptStrandsToDisplay		 1
            END Graphics
        END Graphics

        BEGIN VO
        END VO

    END Extensions

END Chain

