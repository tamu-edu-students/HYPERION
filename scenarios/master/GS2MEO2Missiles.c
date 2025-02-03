stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 GS2MEO2Missiles
    BEGIN Definition
        BEGIN RoutingData
            StartInst		 Constellation/GroundStations
            EndInst		 Constellation/Missiles
            MaxStrandDepth		 10
            BEGIN Connections
                BEGIN ConnectionsForInst
SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites
SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites 0 1
SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors 0 1
                END ConnectionsForInst
                BEGIN ConnectionsForInst
SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors
Constellation/Missiles 0 1
                END ConnectionsForInst
                BEGIN ConnectionsForInst
Constellation/GroundStations
SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites 0 1
                END ConnectionsForInst
            END Connections
        END RoutingData
        Recompute		 No
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 10 Nov 2024 18:00:00.000000000
                Stop		 11 Nov 2024 18:00:00.000000000
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
            STKInst		 Facility/ASFS
            STKInst		 Facility/WGS
            STKInst		 Facility/WSC
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S3.Sensor.MEOSWIR
            STKInst		 Aircraft/Missile1
            STKInst		 Aircraft/Missile2
            STKInst		 Aircraft/Missile3
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 3 24 45
            Start		  3.0547415745238814e+03
            Stop		  4.3945040870000003e+03
            Strand		 0 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 0 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 8 29 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.4011382872398076e+03
            Strand		 0 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 30 47
            Start		  7.7942833807377057e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 11 42 46
            Start		  4.4864866832618784e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 0 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  2.4850105921379741e+03
            Strand		 0 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 17 38 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 19 40 45
            Start		  5.9303818036413065e+02
            Stop		  4.3945039289999995e+03
            Strand		 0 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 42 46
            Start		  4.5531980162643995e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 0 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 3 24 45
            Start		  3.0727421642317750e+03
            Stop		  4.3945040870000003e+03
            Strand		 1 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 6 27 45
            Start		  1.3201006232944014e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 7 28 47
            Start		  7.7804646890238073e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 1 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3944997640000001e+03
            Strand		 1 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 14 35 45
            Start		  4.5057672081463130e+02
            Stop		  4.3945017829999997e+03
            Strand		 1 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 17 34 47
            Start		  7.6806138819554908e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.3984250463360220e+03
            Strand		 1 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 1 19 40 46
            Start		  4.5080608089763438e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 1 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.5404881732764525e+03
            Strand		 1 23 44 47
            Start		  7.5822923411025709e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 2 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 6 27 45
            Start		  1.9516023826102262e+03
            Stop		  4.3944948189999996e+03
            Strand		 2 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 7 28 47
            Start		  7.8308355280273958e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 2 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 2 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3944997640000001e+03
            Strand		 2 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 2 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 2 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.1316251863909802e+03
            Strand		 2 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 14 35 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 16 33 45
            Start		  3.0969037088418060e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 2 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 2 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 17 39 47
            Start		  7.7179166890795139e+04
            Stop		  7.7815019931310715e+04
            Strand		 2 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 2 19 40 46
            Start		  4.5634892421668439e+04
            Stop		  4.6703456899999997e+04
            Strand		 2 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 20 30 47
            Start		  7.7765331762172907e+04
            Stop		  7.7777693616952747e+04
            Strand		 2 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 2 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.5493245522686648e+03
            Strand		 2 23 44 47
            Start		  7.7336250920413630e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 3 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 3 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 3 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 0 3 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 0 3 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 3 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 0 3 5 30 46
            Start		  4.3605811354052174e+04
            Stop		  4.3802175337874032e+04
            Strand		 0 3 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 3 5 35 45
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 0 3 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 0 3 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 0 3 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 0 3 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 3 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 0 3 6 27 45
            Start		  3.0547415745238814e+03
            Stop		  4.3944948189999996e+03
            Strand		 0 3 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 3 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593135536922055e+04
            Strand		 0 3 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 3 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 3 8 30 45
            Start		  3.0547415745238814e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 3 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 3 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 3 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 3 9 30 45
            Start		  3.0547415745238814e+03
            Stop		  4.3944997640000001e+03
            Strand		 0 3 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 3 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 0 3 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 0 3 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Strand		 0 3 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 3 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 3 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 3 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 3 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337833247839866e+04
            Strand		 0 3 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 0 3 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 3 12 37 45
            Start		  3.0547415745238814e+03
            Stop		  3.3543378179378906e+03
            Strand		 0 3 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 0 3 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 0 3 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 3 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 0 3 13 30 45
            Start		  3.7139763768527096e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 3 13 30 46
            Start		  4.5443098210665798e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 3 13 38 46
            Start		  4.5443098210665798e+04
            Stop		  4.6021370468229026e+04
            Strand		 0 3 14 35 45
            Start		  3.0547415745238814e+03
            Stop		  4.3945017829999997e+03
            Strand		 0 3 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 3 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 3 15 24 45
            Start		  3.0547415745238814e+03
            Stop		  3.1183757370565140e+03
            Strand		 0 3 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 0 3 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 0 3 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 3 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 3 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 3 16 37 45
            Start		  3.0547415745238814e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 3 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 3 17 38 45
            Start		  3.0547415745238814e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 3 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 3 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 3 18 24 45
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 0 3 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 0 3 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 0 3 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 0 3 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 0 3 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 0 3 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 0 3 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 0 3 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 3 19 40 45
            Start		  3.0547415745238814e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 3 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 3 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 3 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 0 3 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 0 3 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 3 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 0 3 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 0 3 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 0 3 21 42 45
            Start		  3.0547415745238814e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 3 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 3 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 3 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 3 22 43 45
            Start		  3.0547415745238814e+03
            Stop		  3.3863886548372107e+03
            Strand		 0 4 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  3.3089966887153478e+03
            Strand		 0 4 3 30 47
            Start		  7.9757365290597605e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 4 3 33 47
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 4 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 0 4 5 26 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 4 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0730537535350741e+03
            Strand		 0 4 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 0 4 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 0 4 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 0 4 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 0 4 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 0 4 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 0 4 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  3.3089966887153478e+03
            Strand		 0 4 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 0 4 7 28 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 4 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 0 4 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 0 4 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 0 4 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 4 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 0 4 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  3.3089966887153478e+03
            Strand		 0 4 9 30 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 4 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 0 4 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 4 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 0 4 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 0 4 10 43 45
            Start		  5.9571832601451149e+02
            Stop		  6.3450924735044964e+02
            Strand		 0 4 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 4 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 4 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 4 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.3544875475832150e+03
            Strand		 0 4 12 33 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 4 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Strand		 0 4 13 26 47
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 0 4 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 4 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 4 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 13 38 47
            Start		  7.9364882619584343e+04
            Stop		  7.9857722623146023e+04
            Strand		 0 4 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 4 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 4 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 0 4 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 4 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  3.3089966887153478e+03
            Strand		 0 4 14 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 4 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 0 4 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 4 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 4 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 4 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 4 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 4 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 4 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 0 4 17 38 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 4 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 0 4 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 0 4 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 0 4 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 4 19 28 47
            Start		  7.9364882619584343e+04
            Stop		  7.9386013076512885e+04
            Strand		 0 4 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 0 4 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.3089966887153478e+03
            Strand		 0 4 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 4 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 0 4 20 41 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 4 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 4 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 4 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3089966887153478e+03
            Strand		 0 4 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 0 4 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 0 4 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Start		  3.2171863050275970e+03
            Stop		  3.3089966887153478e+03
            Strand		 0 4 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216096913284073e+03
            Strand		 0 4 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 4 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 0 4 23 44 47
            Start		  7.9364882619584343e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 5 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 0 5 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 0 5 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 0 5 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 0 5 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 0 5 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 5 6 26 47
            Start		  7.8613476729234389e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 5 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 5 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 0 5 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 0 5 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 0 5 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 5 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 5 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 5 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 5 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6901089585741312e+04
            Start		  7.7099112328425981e+04
            Stop		  7.7720157284543748e+04
            Strand		 0 5 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 0 5 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 0 5 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 0 5 11 44 47
            Start		  7.7099112328425981e+04
            Stop		  7.7137903460033733e+04
            Strand		 0 5 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 5 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857881576446322e+04
            Strand		 0 5 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 0 5 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 5 14 26 47
            Start		  7.6862325337286093e+04
            Stop		  7.6992002058380516e+04
            Strand		 0 5 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 0 5 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 0 5 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 0 5 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 5 16 26 47
            Start		  7.8727023301326233e+04
            Stop		  7.8865902471668742e+04
            Strand		 0 5 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 5 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 5 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 0 5 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 5 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 5 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 0 5 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 5 19 26 47
            Start		  7.7386568903625302e+04
            Stop		  7.7582890635244315e+04
            Strand		 0 5 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 0 5 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 0 5 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 5 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 5 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 5 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 5 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 0 5 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 0 5 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 0 5 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 5 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 5 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 0 5 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 0 5 22 39 47
            Start		  7.8116637973937948e+04
            Stop		  7.8316010505344981e+04
            Strand		 0 5 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.9519030253220175e+04
            Strand		 0 6 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  4.3945040870000003e+03
            Strand		 0 6 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 6 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 6 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 6 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 0 6 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 6 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 0 6 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 0 6 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 6 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 0 6 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 0 6 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 0 6 7 38 46
            Start		  4.5939872886117562e+04
            Stop		  4.6078768202060164e+04
            Strand		 0 6 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 0 6 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344282546115552e+04
            Strand		 0 6 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 0 6 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 0 6 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 6 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 6 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 0 6 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 6 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  9.8282911629191904e+02
            Strand		 0 6 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 0 6 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 6 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 0 6 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3944997640000001e+03
            Strand		 0 6 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 6 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 6 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 6 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 6 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 6 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 6 12 24 46
            Start		  4.6299060006581349e+04
            Stop		  4.6337836440726373e+04
            Strand		 0 6 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3719208435707660e+03
            Strand		 0 6 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 0 6 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 6 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 0 6 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 0 6 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 0 6 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 0 6 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 6 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 0 6 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 6 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 6 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 6 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 0 6 13 40 45
            Start		  2.3734704433522720e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 6 13 40 46
            Start		  4.4102596379091548e+04
            Stop		  4.4427555832139180e+04
            Strand		 0 6 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 6 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 0 6 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 6 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 0 6 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 6 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280597112964992e+03
            Start		  4.3331404574756698e+03
            Stop		  4.3944948189999996e+03
            Strand		 0 6 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  1.6280597112964992e+03
            Strand		 0 6 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3357185425745811e+04
            Strand		 0 6 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 0 6 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 0 6 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 6 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 6 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 6 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 6 16 33 45
            Start		  7.3332608729372009e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 6 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 6 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 6 16 41 45
            Start		  7.3332608729372009e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 6 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 6 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 0 6 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 6 18 24 45
            Start		  2.8428156008669043e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 0 6 18 24 46
            Start		  4.4571937357096023e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 0 6 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 0 6 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 0 6 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 0 6 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 0 6 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 6 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 0 6 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375558461927612e+03
            Strand		 0 6 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 6 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 0 6 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.7375558461927612e+03
            Strand		 0 6 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 0 6 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.7375558461927612e+03
            Strand		 0 6 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.5466673688812109e+04
            Strand		 0 6 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 0 6 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 6 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 0 6 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 6 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6419336201485014e+04
            Strand		 0 6 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 6 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 6 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 0 6 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 0 6 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0973470582385248e+03
            Strand		 0 6 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 0 6 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 0 6 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.0973470582385248e+03
            Strand		 0 6 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.3826468666143599e+04
            Strand		 0 6 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 0 7 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 7 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 7 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 7 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 7 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 7 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 0 7 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 0 7 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 0 7 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 7 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 0 7 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 0 7 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 0 7 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 0 7 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 0 7 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 0 7 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 7 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 7 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 7 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 7 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 7 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 7 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 7 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 7 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 7 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 0 7 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 7 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 0 7 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 7 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 0 7 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 0 7 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 0 7 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 7 14 41 47
            Start		  7.8876863869212990e+04
            Stop		  7.9201823822535895e+04
            Strand		 0 7 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Strand		 0 7 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 7 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 7 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 7 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131453661573629e+04
            Strand		 0 7 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 7 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 7 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 0 7 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 7 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 7 17 39 47
            Start		  7.7236718067456721e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 7 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240942872483749e+04
            Strand		 0 7 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0240942872483749e+04
            Strand		 0 7 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 7 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 0 7 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 0 7 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 0 7 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 7 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 7 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 7 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 7 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600741243954966e+04
            Strand		 0 7 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 0 7 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 7 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8600741243954966e+04
            Strand		 0 7 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 0 7 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 0 7 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 7 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6405358913221513e+04
            Strand		 0 7 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 0 7 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 0 7 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 0 7 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 8 3 24 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 8 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 8 4 35 46
            Start		  4.6341075018089410e+04
            Stop		  4.6460224885735610e+04
            Strand		 0 8 4 42 46
            Start		  4.6341075018089410e+04
            Stop		  4.6573853051103186e+04
            Strand		 0 8 5 32 46
            Start		  4.6341075018089410e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 8 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 0 8 11 32 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 8 14 35 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 8 17 38 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 8 19 40 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 8 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 8 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 8 21 42 46
            Start		  4.6341075018089410e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 9 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  2.4011382872398076e+03
            Strand		 0 9 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 9 3 30 47
            Start		  7.9757365290597605e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 9 3 33 47
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 9 3 36 47
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 0 9 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 0 9 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 9 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 9 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 0 9 5 26 47
            Start		  7.7942833807377057e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 9 5 30 45
            Start		  1.8767504963307849e+03
            Stop		  2.0730537535350741e+03
            Strand		 0 9 5 30 46
            Start		  4.3605870375564395e+04
            Stop		  4.3802175337874032e+04
            Strand		 0 9 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4011382872398076e+03
            Strand		 0 9 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 0 9 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 9 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.4011382872398076e+03
            Strand		 0 9 6 33 47
            Start		  7.7942833807377057e+04
            Stop		  7.8208198579857679e+04
            Strand		 0 9 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 9 6 44 47
            Start		  7.7942833807377057e+04
            Stop		  7.8073508634380312e+04
            Strand		 0 9 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 0 9 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 0 9 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 9 7 28 47
            Start		  7.7942833807377057e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 9 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 0 9 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 0 9 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 0 9 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 0 9 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 9 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.4011382872398076e+03
            Strand		 0 9 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 0 9 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 0 9 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 9 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 0 9 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 9 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 0 9 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Strand		 0 9 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Strand		 0 9 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 9 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 9 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 9 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 0 9 11 44 47
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 0 9 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 0 9 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 12 33 47
            Start		  7.7942833807377057e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 9 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9360965187833746e+04
            Strand		 0 9 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9360965187833746e+04
            Strand		 0 9 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 0 9 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 9 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 0 9 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.4011382872398076e+03
            Strand		 0 9 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 9 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 0 9 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 9 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 0 9 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 9 15 27 45
            Start		  1.5893013161533554e+03
            Stop		  1.6280629042081121e+03
            Strand		 0 9 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3912834781567919e+03
            Start		  1.5893013161533554e+03
            Stop		  2.2103092342780601e+03
            Strand		 0 9 15 30 46
            Start		  4.3318424585951441e+04
            Stop		  4.3939430832193284e+04
            Strand		 0 9 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 9 15 36 47
            Start		  7.7942833807377057e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 9 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 0 9 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 0 9 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 9 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 9 16 26 47
            Start		  7.8727015444888515e+04
            Stop		  7.8865902471668742e+04
            Strand		 0 9 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 9 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131456854470380e+04
            Strand		 0 9 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 0 9 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 9 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 9 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 9 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  2.4011382872398076e+03
            Strand		 0 9 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 9 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.4011382872398076e+03
            Strand		 0 9 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Strand		 0 9 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 0 9 18 30 45
            Start		  1.3524918432570853e+03
            Stop		  1.4821592182916540e+03
            Strand		 0 9 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 0 9 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 9 18 39 47
            Start		  7.7942833807377057e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 9 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 0 9 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.4011382872398076e+03
            Strand		 0 9 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480476963240599e+03
            Strand		 0 9 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077168609438202e+04
            Strand		 0 9 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 0 9 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 9 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Strand		 0 9 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 0 9 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 0 9 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 0 9 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 9 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 9 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 0 9 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.4780863763293324e+04
            Strand		 0 9 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 9 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 9 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.4011382872398076e+03
            Strand		 0 9 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  7.5689498913962996e+02
            Strand		 0 9 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5689498913962996e+02
            Strand		 0 9 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  7.5689498913962996e+02
            Strand		 0 9 23 44 47
            Start		  7.7942833807377057e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 10 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620084360787543e+04
            Strand		 0 10 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5620084360787543e+04
            Strand		 0 10 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 10 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 10 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 0 10 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 10 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 10 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7720157284543748e+04
            Strand		 0 10 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 0 10 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 0 10 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137903460033733e+04
            Strand		 0 10 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 10 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 0 10 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 0 10 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 10 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 16 28 47
            Start		  7.8092694285910067e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 10 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 10 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 0 10 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 10 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 0 10 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 10 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 10 17 44 47
            Start		  7.5896207892015751e+04
            Stop		  7.6221157158777016e+04
            Strand		 0 10 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 10 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 10 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 10 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260284353046562e+04
            Strand		 0 10 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 10 22 28 47
            Start		  7.6365549268944567e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 0 10 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Strand		 0 10 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 0 10 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 0 10 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 10 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.8102343681039521e+04
            Strand		 0 11 3 24 45
            Start		  2.5065831587565281e+03
            Stop		  4.3945040870000003e+03
            Strand		 0 11 3 24 46
            Start		  4.4864866832618784e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 11 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 11 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 11 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 0 11 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 0 11 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 11 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 0 11 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 11 5 35 45
            Start		  3.8363625241812410e+03
            Stop		  3.8761784848755201e+03
            Strand		 0 11 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5605298609154401e+04
            Strand		 0 11 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 0 11 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 11 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 0 11 6 27 45
            Start		  2.5065831587565281e+03
            Stop		  4.3944948189999996e+03
            Strand		 0 11 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 11 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 11 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 11 8 30 46
            Start		  4.4864866832618784e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 11 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 11 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 0 11 9 30 45
            Start		  2.5065831587565281e+03
            Stop		  4.3944997640000001e+03
            Strand		 0 11 9 30 46
            Start		  4.4864866832618784e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 11 10 24 45
            Start		  2.5065831587565281e+03
            Stop		  2.5941215890431640e+03
            Strand		 0 11 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 11 10 38 45
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 0 11 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 0 11 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 0 11 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 0 11 10 43 45
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 0 11 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  2.8575719976681921e+03
            Strand		 0 11 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 0 11 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 11 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 0 11 13 27 45
            Start		  2.5065831587565281e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 11 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 11 13 30 46
            Start		  4.4864866832618784e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 11 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 0 11 13 40 45
            Start		  2.5065831587565281e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 11 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 11 14 35 45
            Start		  2.5065831587565281e+03
            Stop		  4.3945017829999997e+03
            Strand		 0 11 14 35 46
            Start		  4.4864866832618784e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 11 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 0 11 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 11 16 33 46
            Start		  4.4864866832618784e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 11 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 11 17 38 45
            Start		  2.5065831587565281e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 11 17 38 46
            Start		  4.4864866832618784e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 11 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 11 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 0 11 18 38 46
            Start		  4.6436642212613915e+04
            Stop		  4.6522439338621218e+04
            Strand		 0 11 19 40 45
            Start		  2.5065831587565281e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 11 19 40 46
            Start		  4.4864866832618784e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 11 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 11 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 0 11 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 11 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 0 11 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 0 11 20 42 46
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 0 11 21 42 45
            Start		  3.1163701506536672e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 11 21 42 46
            Start		  4.4864866832618784e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 11 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 11 22 43 45
            Start		  2.5065831587565281e+03
            Stop		  3.3863886548372107e+03
            Strand		 0 11 23 30 45
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 0 11 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 0 11 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 0 11 23 35 45
            Start		  2.5065831587565281e+03
            Stop		  2.6216096913284073e+03
            Strand		 0 11 23 38 45
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 11 23 38 46
            Start		  4.4864866832618784e+04
            Stop		  4.4933019772875239e+04
            Strand		 0 12 3 30 47
            Start		  8.0339753440740184e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 12 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 0 12 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 12 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 0 12 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 0 12 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 0 12 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 12 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 12 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 12 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 12 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 12 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 0 12 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7398931621109514e+04
            Strand		 0 12 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 0 12 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 12 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 0 12 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 12 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 0 12 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594290423398095e+04
            Strand		 0 12 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 0 12 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 0 12 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9594290423398095e+04
            Strand		 0 12 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 12 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 12 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 12 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 12 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 12 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 12 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 0 12 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 12 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 0 12 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 12 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 0 12 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 0 12 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 0 12 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 0 12 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 12 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 0 12 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 0 12 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 0 12 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 12 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 12 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 12 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 12 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 12 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 0 12 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 12 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 12 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 12 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 0 12 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 0 12 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 12 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 12 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 0 12 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 0 12 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 0 12 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 12 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 12 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 12 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 12 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 0 12 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 0 12 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124996131761174e+04
            Strand		 0 12 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 12 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9124996131761174e+04
            Strand		 0 12 22 26 47
            Start		  7.8230252474766821e+04
            Stop		  7.8808521779158225e+04
            Strand		 0 12 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 12 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 0 12 22 39 47
            Start		  7.8230252474766821e+04
            Stop		  7.8316010505344981e+04
            Strand		 0 12 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 14 3 24 45
            Start		  1.3572688655238713e+02
            Stop		  4.3945040870000003e+03
            Strand		 0 14 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 14 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 14 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6460217029369276e+04
            Strand		 0 14 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 14 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 14 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460217029369276e+04
            Strand		 0 14 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 0 14 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 14 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6460217029369276e+04
            Strand		 0 14 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 14 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 0 14 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 0 14 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 0 14 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 14 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 0 14 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 0 14 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 0 14 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 14 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 0 14 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 0 14 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 14 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0908963342426882e+03
            Strand		 0 14 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820017965221588e+04
            Strand		 0 14 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 0 14 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 0 14 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.0908963342426882e+03
            Strand		 0 14 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 14 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 14 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 14 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 0 14 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 14 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  8.9554139193317098e+02
            Strand		 0 14 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 0 14 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 14 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 0 14 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3944997640000001e+03
            Strand		 0 14 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 14 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 14 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 14 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 14 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 14 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 14 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 14 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 0 14 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 0 14 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 0 14 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 14 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 0 14 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 0 14 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 0 14 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 0 14 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 14 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 0 14 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 14 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 14 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 14 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 0 14 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 14 13 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 0 14 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 0 14 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 14 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 0 14 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 0 14 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 14 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 14 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 14 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 14 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 14 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 14 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 14 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 14 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 14 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 0 14 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 14 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 14 18 24 45
            Start		  3.3670161632636914e+03
            Stop		  3.6919241850389699e+03
            Strand		 0 14 18 24 46
            Start		  4.5096137793069058e+04
            Stop		  4.5421045674933775e+04
            Strand		 0 14 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Strand		 0 14 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 0 14 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 0 14 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 0 14 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 0 14 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 0 14 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 14 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 0 14 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 14 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 14 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 0 14 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 14 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 0 14 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 14 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 0 14 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 0 14 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 0 14 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 0 14 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 14 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 14 21 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 14 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 14 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 14 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 0 14 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 0 14 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 0 14 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 0 14 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 0 14 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216064994216908e+03
            Strand		 0 14 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  2.6216064994216908e+03
            Strand		 0 14 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4350728118028928e+04
            Strand		 0 14 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 0 15 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 0 15 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144343015909530e+04
            Start		  7.8849436420779224e+04
            Stop		  7.8979092875829985e+04
            Strand		 0 15 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6144343015909530e+04
            Strand		 0 15 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 15 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 15 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 15 6 33 47
            Start		  7.7359103026254161e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 0 15 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 0 15 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 15 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 0 15 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8253837170245170e+04
            Strand		 0 15 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253837170245170e+04
            Strand		 0 15 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 0 15 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 15 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 15 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 15 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 15 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613644627198126e+04
            Strand		 0 15 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 15 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 0 15 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 0 15 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 15 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 0 15 16 26 47
            Start		  7.8727015444888515e+04
            Stop		  7.8865902471668742e+04
            Strand		 0 15 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131456854470380e+04
            Strand		 0 15 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 15 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 15 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 0 15 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 15 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 0 15 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 15 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 15 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 0 15 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 15 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 15 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 15 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 15 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 15 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 0 15 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 0 15 21 33 47
            Start		  7.9086229337381097e+04
            Stop		  7.9124999323664815e+04
            Strand		 0 15 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 15 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8888210133939981e+04
            Start		  7.9086229337381097e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 15 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 0 15 22 28 47
            Start		  7.6889739160611396e+04
            Stop		  7.7214620669011289e+04
            Strand		 0 15 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Strand		 0 15 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 0 15 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 0 15 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 0 15 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.9495014183132385e+04
            Strand		 0 16 3 24 45
            Start		  2.2842692089177549e+03
            Stop		  4.3945040870000003e+03
            Strand		 0 16 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 16 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 0 16 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 0 16 6 27 45
            Start		  2.2842692089177549e+03
            Stop		  4.3944948189999996e+03
            Strand		 0 16 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 0 16 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 0 16 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 0 16 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 16 9 30 45
            Start		  2.2842692089177549e+03
            Stop		  4.3944997640000001e+03
            Strand		 0 16 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 0 16 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 16 10 38 45
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 0 16 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 0 16 10 43 45
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 0 16 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 16 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 0 16 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 0 16 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 16 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 16 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 16 13 40 45
            Start		  2.2842692089177549e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 16 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 16 14 35 45
            Start		  2.2842692089177549e+03
            Stop		  4.3945017829999997e+03
            Strand		 0 16 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 0 16 15 27 45
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 0 16 17 38 45
            Start		  2.2842692089177549e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 16 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 16 18 24 45
            Start		  2.2842692089177549e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 0 16 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 0 16 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 0 16 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 16 19 40 45
            Start		  2.2842692089177549e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 16 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 0 16 20 30 45
            Start		  2.2842692089177549e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 16 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8510940959098289e+03
            Strand		 0 16 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.8510940959098289e+03
            Strand		 0 16 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 16 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 16 22 43 45
            Start		  2.2842692089177549e+03
            Stop		  3.3863886548372107e+03
            Strand		 0 16 23 30 45
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 0 16 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216096913284073e+03
            Strand		 0 16 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 16 23 38 45
            Start		  2.2842692089177549e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 17 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  2.4850105921379741e+03
            Strand		 0 17 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 17 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 17 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 0 17 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 17 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 17 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070699616787031e+04
            Strand		 0 17 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 0 17 5 26 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 17 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 17 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 0 17 5 38 45
            Start		  2.3460510466552087e+03
            Stop		  2.4757033203900614e+03
            Strand		 0 17 5 38 46
            Start		  4.4075172670238768e+04
            Stop		  4.4204824897160041e+04
            Strand		 0 17 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 0 17 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.4850105921379741e+03
            Strand		 0 17 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 17 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.7504470494268530e+03
            Strand		 0 17 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3479568717841074e+04
            Strand		 0 17 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 17 7 28 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 17 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504470494268530e+03
            Strand		 0 17 7 38 46
            Start		  4.5939880742416412e+04
            Stop		  4.6078768202060164e+04
            Strand		 0 17 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 0 17 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 17 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 17 8 33 47
            Start		  7.9507638277452119e+04
            Stop		  7.9594349437920406e+04
            Strand		 0 17 8 35 45
            Start		  8.5571359388815006e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 0 17 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  9.8282911629191904e+02
            Strand		 0 17 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 17 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 0 17 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 0 17 8 44 47
            Start		  7.9507638277452119e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 17 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.4850105921379741e+03
            Strand		 0 17 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 17 9 30 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 17 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 17 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1025971217641383e+02
            Strand		 0 17 10 38 46
            Start		  4.4599425707535389e+04
            Stop		  4.4795732450285963e+04
            Strand		 0 17 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 0 17 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 0 17 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 17 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 17 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 17 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 17 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 17 11 44 47
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 0 17 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 0 17 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 0 17 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 17 12 33 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 17 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 0 17 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 0 17 13 30 46
            Start		  4.5329463665419091e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 17 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 0 17 13 38 47
            Start		  7.9507638277452119e+04
            Stop		  7.9857722623146023e+04
            Strand		 0 17 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 17 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.4850105921379741e+03
            Strand		 0 17 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 17 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 17 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 17 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 0 17 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 17 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280629042081121e+03
            Strand		 0 17 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  2.2103092342780601e+03
            Strand		 0 17 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 0 17 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 17 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 0 17 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 0 17 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 17 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 17 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 17 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 17 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 0 17 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 17 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 17 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 17 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 0 17 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 0 17 18 38 46
            Start		  4.5826332806080434e+04
            Stop		  4.6522439338621218e+04
            Strand		 0 17 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 17 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 0 17 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.4850105921379741e+03
            Strand		 0 17 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 17 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 17 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 17 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 0 17 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 17 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 0 17 20 41 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 17 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 0 17 21 27 45
            Start		  3.8635372851504587e+02
            Stop		  7.1123114113683107e+02
            Strand		 0 17 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 17 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 0 17 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 17 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 17 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 17 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.4850105921379741e+03
            Strand		 0 17 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 0 17 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 0 17 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 0 17 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 0 17 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 0 17 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 0 17 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3848207967973563e+03
            Strand		 0 17 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4113939122955788e+04
            Start		  4.4311961176240315e+04
            Stop		  4.4933019772875239e+04
            Strand		 0 17 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 0 17 23 44 47
            Start		  7.9507638277452119e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 18 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 0 18 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 0 18 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 0 18 3 36 47
            Start		  7.6105559507277227e+04
            Stop		  7.6144346207543058e+04
            Strand		 0 18 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5907539782390537e+04
            Start		  7.6105559507277227e+04
            Stop		  7.6726641263246187e+04
            Strand		 0 18 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 18 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 18 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 0 18 6 39 47
            Start		  7.5868781748276931e+04
            Stop		  7.5998443474048778e+04
            Strand		 0 18 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864311274238149e+04
            Strand		 0 18 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 18 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 18 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 18 11 39 47
            Start		  7.7733491526117024e+04
            Stop		  7.7872372009142753e+04
            Strand		 0 18 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 18 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 0 18 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 0 18 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 18 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 0 18 14 39 47
            Start		  7.6393038053699172e+04
            Stop		  7.6589347738471290e+04
            Strand		 0 18 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 18 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 18 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 0 18 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 18 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 18 19 26 47
            Start		  7.7386509887875174e+04
            Stop		  7.7582890635244315e+04
            Strand		 0 18 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 0 18 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Strand		 0 18 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 0 18 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 18 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 18 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 18 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 0 18 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 18 22 39 47
            Start		  7.7619946883459517e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 18 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.7990087253752135e+04
            Strand		 0 19 3 24 45
            Start		  5.9303818036413065e+02
            Stop		  4.3945040870000003e+03
            Strand		 0 19 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 19 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 19 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 19 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 19 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 19 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 0 19 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 0 19 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 19 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 0 19 5 32 46
            Start		  4.6089669317113679e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 19 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 0 19 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 0 19 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 0 19 6 27 45
            Start		  5.9303818036413065e+02
            Stop		  4.3944948189999996e+03
            Strand		 0 19 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 19 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 0 19 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 0 19 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 19 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 0 19 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 0 19 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 0 19 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151577252877337e+03
            Strand		 0 19 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344279354258950e+04
            Strand		 0 19 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 0 19 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 19 8 30 45
            Start		  2.7204022923045586e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 19 8 30 46
            Start		  4.4449527654520192e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 19 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 19 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 0 19 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 19 9 30 45
            Start		  5.9303818036413065e+02
            Stop		  4.3944997640000001e+03
            Strand		 0 19 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 19 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 0 19 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 0 19 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 0 19 10 43 45
            Start		  5.9303818036413065e+02
            Stop		  6.3450924735044964e+02
            Strand		 0 19 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 19 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 19 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 19 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 19 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 19 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.0844707976405962e+03
            Strand		 0 19 12 33 45
            Start		  5.9303818036413065e+02
            Stop		  1.4768307637209587e+03
            Strand		 0 19 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 19 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 0 19 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0844707976405962e+03
            Strand		 0 19 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813592443054549e+04
            Strand		 0 19 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 0 19 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 19 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 0 19 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 19 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 19 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 19 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 0 19 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 19 13 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 0 19 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 19 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 0 19 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.8891104721613151e+03
            Strand		 0 19 14 35 45
            Start		  5.9303818036413065e+02
            Stop		  4.3945017829999997e+03
            Strand		 0 19 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 19 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 19 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 19 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 19 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 19 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 19 16 33 45
            Start		  5.9303818036413065e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 19 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 19 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 19 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 19 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 19 17 38 45
            Start		  5.9303818036413065e+02
            Stop		  3.1472599270283408e+03
            Strand		 0 19 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 19 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 19 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 0 19 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 0 19 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 0 19 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 0 19 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 0 19 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 0 19 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 0 19 18 35 45
            Start		  5.9303818036413065e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 0 19 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 0 19 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 0 19 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 19 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 19 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 0 19 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 19 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 0 19 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 19 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 0 19 20 41 45
            Start		  5.9303818036413065e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 19 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 0 19 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 0 19 21 27 45
            Start		  5.9303818036413065e+02
            Stop		  7.1123114113683107e+02
            Strand		 0 19 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 19 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 19 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 0 19 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 0 19 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 19 22 43 45
            Start		  5.9303818036413065e+02
            Stop		  3.3863886548372107e+03
            Strand		 0 19 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  8.7044250076385526e+02
            Strand		 0 19 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 0 19 23 40 45
            Start		  5.9303818036413065e+02
            Stop		  8.7044250076385526e+02
            Strand		 0 20 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 20 5 26 47
            Start		  7.7998674340605663e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 20 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 0 20 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 0 20 6 26 47
            Start		  7.9223791736379848e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 20 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 20 7 28 47
            Start		  7.7998674340605663e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 20 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092149164194649e+02
            Strand		 0 20 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 0 20 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 0 20 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  5.0244401238858336e+02
            Strand		 0 20 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 0 20 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118547354195194e+04
            Strand		 0 20 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0118547354195194e+04
            Strand		 0 20 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 9 30 47
            Start		  7.7998674340605663e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 20 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 20 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 20 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 20 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 0 20 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 12 33 47
            Start		  7.7998674340605663e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 20 13 26 47
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 0 20 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 20 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 0 20 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 0 20 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 0 20 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 0 20 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 20 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 0 20 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  5.0244401238858336e+02
            Strand		 0 20 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 20 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 0 20 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8392497545670893e+04
            Strand		 0 20 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 20 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 20 15 36 47
            Start		  7.7998674340605663e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 20 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 0 20 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 20 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Strand		 0 20 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 0 20 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  5.0244401238858336e+02
            Strand		 0 20 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 20 18 39 47
            Start		  7.7998674340605663e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 20 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 0 20 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 0 20 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 0 20 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  5.0244401238858336e+02
            Strand		 0 20 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 0 20 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 20 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 0 20 22 39 47
            Start		  7.7998674340605663e+04
            Stop		  7.8316010505344981e+04
            Strand		 0 20 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  5.0244401238858336e+02
            Strand		 0 20 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  5.0244401238858336e+02
            Strand		 0 20 23 44 47
            Start		  7.7998674340605663e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 21 3 24 46
            Start		  4.5531980162643995e+04
            Stop		  4.6703458679999996e+04
            Strand		 0 21 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 0 21 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6573774343253266e+04
            Strand		 0 21 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 0 21 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6573774343253266e+04
            Strand		 0 21 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 0 21 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 0 21 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 0 21 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 7 38 46
            Start		  4.5939872886117562e+04
            Stop		  4.6078768202060164e+04
            Strand		 0 21 8 29 46
            Start		  4.5531980162643995e+04
            Stop		  4.6703451721999998e+04
            Strand		 0 21 9 30 46
            Start		  4.5531980162643995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 21 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 0 21 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 0 21 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 0 21 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 0 21 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 14 35 46
            Start		  4.5531980162643995e+04
            Stop		  4.6703456608000000e+04
            Strand		 0 21 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Strand		 0 21 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 0 21 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 17 38 46
            Start		  4.5531980162643995e+04
            Stop		  4.6703452747999996e+04
            Strand		 0 21 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 18 29 46
            Start		  4.5531980162643995e+04
            Stop		  4.5567470076559097e+04
            Strand		 0 21 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 0 21 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 0 21 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 0 21 19 40 46
            Start		  4.5531980162643995e+04
            Stop		  4.6703456899999997e+04
            Strand		 0 21 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 21 20 42 46
            Start		  4.5531980162643995e+04
            Stop		  4.6076990733798804e+04
            Strand		 0 21 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 21 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 0 21 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5850054029715917e+04
            Strand		 0 22 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  4.3945040870000003e+03
            Strand		 0 22 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 22 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 0 22 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 22 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 0 22 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 22 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 0 22 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 0 22 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 0 22 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 0 22 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 0 22 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 22 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 0 22 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 0 22 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 0 22 7 40 45
            Start		  3.5763666110480781e+03
            Stop		  3.6151609171476152e+03
            Strand		 0 22 7 40 46
            Start		  4.5305487541316921e+04
            Stop		  4.5344282546115552e+04
            Strand		 0 22 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 0 22 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3783477523809484e+03
            Strand		 0 22 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 0 22 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 0 22 8 35 45
            Start		  1.3799007589949290e+03
            Stop		  1.7048090261505220e+03
            Strand		 0 22 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 0 22 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 0 22 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 0 22 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 0 22 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3351328118086303e+03
            Strand		 0 22 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 0 22 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 22 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 0 22 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 0 22 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450605411922038e+02
            Start		  3.3395941706756880e+03
            Stop		  3.3863886548372107e+03
            Strand		 0 22 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 0 22 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 0 22 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 0 22 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 0 22 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 0 22 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 0 22 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4473136547860093e+04
            Strand		 0 22 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  2.7440148702870420e+03
            Strand		 0 22 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440148702870420e+03
            Strand		 0 22 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 0 22 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 0 22 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 0 22 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 0 22 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 13 40 45
            Start		  1.8492717806797796e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 0 22 13 40 46
            Start		  4.3578389470760099e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 0 22 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 0 22 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 0 22 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 0 22 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 0 22 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 0 22 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 0 22 15 27 45
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 0 22 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.1038201520506848e+03
            Strand		 0 22 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 0 22 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038201520506848e+03
            Strand		 0 22 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 0 22 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 0 22 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 0 22 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 0 22 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 0 22 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 22 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 0 22 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 0 22 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 0 22 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 0 22 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 0 22 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 0 22 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 0 22 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 0 22 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 0 22 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 0 22 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 0 22 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 0 22 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 0 22 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 0 22 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 0 22 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.5562882394219130e+04
            Strand		 0 22 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 0 22 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 0 22 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 0 22 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 0 22 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 0 22 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216096913284073e+03
            Strand		 0 22 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 0 22 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 0 22 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 0 22 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 0 23 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 0 23 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 23 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 0 23 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 0 23 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 0 23 6 33 47
            Start		  7.7883294904616530e+04
            Stop		  7.8208198579857679e+04
            Strand		 0 23 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 0 23 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 0 23 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 0 23 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 0 23 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 0 23 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 0 23 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 0 23 8 41 47
            Start		  8.0079752187905164e+04
            Stop		  8.0118550546052778e+04
            Strand		 0 23 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9881737623492168e+04
            Start		  8.0079752187905164e+04
            Stop		  8.0340205507999999e+04
            Strand		 0 23 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 0 23 9 34 47
            Start		  7.6243149358639042e+04
            Stop		  7.6821387838576702e+04
            Strand		 0 23 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 0 23 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 0 23 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 0 23 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 0 23 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7137900267626203e+04
            Strand		 0 23 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 0 23 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137900267626203e+04
            Start		  7.9842979329793539e+04
            Stop		  7.9972650068662377e+04
            Strand		 0 23 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 0 23 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 0 23 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 0 23 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9247408552547218e+04
            Strand		 0 23 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 23 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9247408552547218e+04
            Strand		 0 23 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247408552547218e+04
            Strand		 0 23 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 0 23 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 23 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 0 23 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 0 23 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 0 23 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 0 23 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 23 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7607205187996238e+04
            Strand		 0 23 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 23 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607205187996238e+04
            Strand		 0 23 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 0 23 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 0 23 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 0 23 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 23 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 0 23 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 0 23 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 0 23 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 0 23 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 0 23 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 0 23 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 0 23 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 0 23 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 0 23 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 0 23 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 0 23 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 0 23 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 0 23 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 0 23 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 0 23 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 0 23 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 0 23 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 0 23 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 0 23 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 0 23 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 3 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 3 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 3 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 1 3 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 1 3 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 3 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 1 3 5 30 46
            Start		  4.3605811354052174e+04
            Stop		  4.3802175337874032e+04
            Strand		 1 3 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 1 3 5 35 45
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 1 3 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 1 3 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 1 3 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 1 3 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 3 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 1 3 6 27 45
            Start		  3.0727421642317750e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 3 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 3 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593135536922055e+04
            Strand		 1 3 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 3 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 3 8 30 45
            Start		  3.0727421642317750e+03
            Stop		  3.2986229655621528e+03
            Strand		 1 3 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 3 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 3 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 3 9 30 45
            Start		  3.0727421642317750e+03
            Stop		  4.3944997640000001e+03
            Strand		 1 3 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 3 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 1 3 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 1 3 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Strand		 1 3 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 3 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 3 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 3 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 3 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337833247839866e+04
            Strand		 1 3 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 1 3 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 3 12 37 45
            Start		  3.0727421642317750e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 3 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 1 3 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 1 3 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 1 3 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 3 13 30 45
            Start		  3.7139763768527096e+03
            Stop		  3.7997811049599864e+03
            Strand		 1 3 13 30 46
            Start		  4.5443098210665798e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 3 13 38 46
            Start		  4.5443098210665798e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 3 14 35 45
            Start		  3.0727421642317750e+03
            Stop		  4.3945017829999997e+03
            Strand		 1 3 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 3 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 3 15 24 45
            Start		  3.0727421642317750e+03
            Stop		  3.1183757370565140e+03
            Strand		 1 3 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 1 3 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 1 3 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 3 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 3 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 3 16 37 45
            Start		  3.0727421642317750e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 3 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 3 17 38 45
            Start		  3.0727421642317750e+03
            Stop		  3.1472599270283408e+03
            Strand		 1 3 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 3 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 3 18 24 45
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 3 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 1 3 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 1 3 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 1 3 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 1 3 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 3 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 1 3 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 1 3 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 3 19 40 45
            Start		  3.0727421642317750e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 3 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 3 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 3 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 1 3 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 3 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 3 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 1 3 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 1 3 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 3 21 42 45
            Start		  3.0727421642317750e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 3 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 3 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 3 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 3 22 43 45
            Start		  3.0727421642317750e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 4 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  2.4195482766741875e+03
            Strand		 1 4 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0730537535350741e+03
            Strand		 1 4 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 1 4 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 1 4 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4195482766741875e+03
            Strand		 1 4 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 1 4 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 1 4 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.4195482766741875e+03
            Strand		 1 4 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 4 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 4 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 1 4 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.4195482766741875e+03
            Strand		 1 4 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.4195482766741875e+03
            Strand		 1 4 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 1 4 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 1 4 10 43 45
            Start		  5.9571832601451149e+02
            Stop		  6.3450924735044964e+02
            Strand		 1 4 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 1 4 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 4 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.3544875475832150e+03
            Strand		 1 4 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Strand		 1 4 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.4195482766741875e+03
            Strand		 1 4 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.4195482766741875e+03
            Strand		 1 4 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 1 4 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 1 4 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.4195482766741875e+03
            Strand		 1 4 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 4 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 4 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 4 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 4 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  2.4195482766741875e+03
            Strand		 1 4 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.4195482766741875e+03
            Strand		 1 4 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 1 4 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.4195482766741875e+03
            Strand		 1 4 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 1 4 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 1 4 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 4 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.4195482766741875e+03
            Strand		 1 4 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 1 4 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 1 4 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 1 4 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Strand		 1 4 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 1 5 3 30 47
            Start		  7.9757365290597605e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 5 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 1 5 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 5 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 1 5 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 1 5 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 1 5 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 1 5 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 5 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 5 6 26 47
            Start		  7.8613476729234389e+04
            Stop		  7.9309538250559315e+04
            Strand		 1 5 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 1 5 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 5 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 5 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 1 5 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 5 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 5 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 1 5 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 5 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 5 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 5 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 1 5 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 5 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 5 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 5 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6901089585741312e+04
            Start		  7.7099112328425981e+04
            Stop		  7.7720157284543748e+04
            Strand		 1 5 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 1 5 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 1 5 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 1 5 11 44 47
            Start		  7.7099112328425981e+04
            Stop		  7.7137903460033733e+04
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 1 5 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 5 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 5 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857881576446322e+04
            Start		  8.0116547947444575e+04
            Stop		  8.0261543134538762e+04
            Strand		 1 5 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 5 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 1 5 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 5 14 26 47
            Start		  7.6862325337286093e+04
            Stop		  7.6992002058380516e+04
            Strand		 1 5 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 1 5 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 5 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 1 5 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 1 5 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 5 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 5 16 26 47
            Start		  7.8727023301326233e+04
            Stop		  7.8865902471668742e+04
            Strand		 1 5 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 1 5 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 5 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 5 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 5 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 5 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 5 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 5 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 5 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 1 5 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 5 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 1 5 19 26 47
            Start		  7.7386568903625302e+04
            Stop		  7.7582890635244315e+04
            Strand		 1 5 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 1 5 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 1 5 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 1 5 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 1 5 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 5 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 5 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 5 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 1 5 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 5 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 1 5 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 5 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 5 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 5 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 5 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 5 22 39 47
            Start		  7.8116637973937948e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 5 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 6 3 24 45
            Start		  1.3201006232944014e+03
            Stop		  4.3945040870000003e+03
            Strand		 1 6 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 6 4 33 45
            Start		  1.3201006232944014e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 6 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 6 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 1 6 7 24 45
            Start		  1.3201006232944014e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 6 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 1 6 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 6 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 1 6 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 1 6 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 6 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 1 6 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 1 6 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 1 6 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 8 35 45
            Start		  1.3201006232944014e+03
            Stop		  1.7048090261505220e+03
            Strand		 1 6 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 6 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 1 6 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 6 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 1 6 9 30 45
            Start		  1.3201006232944014e+03
            Stop		  4.3944997640000001e+03
            Strand		 1 6 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 6 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 6 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3719208435707660e+03
            Strand		 1 6 12 33 45
            Start		  1.3201006232944014e+03
            Stop		  1.4768307637209587e+03
            Strand		 1 6 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 6 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 1 6 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 1 6 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 1 6 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 1 6 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 1 6 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 13 40 45
            Start		  2.3734704433522720e+03
            Stop		  2.6984342309074391e+03
            Strand		 1 6 13 40 46
            Start		  4.4102596379091548e+04
            Stop		  4.4427555832139180e+04
            Strand		 1 6 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 1 6 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 1 6 14 35 45
            Start		  1.3201006232944014e+03
            Stop		  4.3945017829999997e+03
            Strand		 1 6 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 6 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280597112964992e+03
            Start		  4.3331404574756698e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 6 15 30 45
            Start		  1.3201006232944014e+03
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  1.6280597112964992e+03
            Strand		 1 6 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3357185425745811e+04
            Strand		 1 6 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 6 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 6 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 6 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 6 17 38 45
            Start		  1.3201006232944014e+03
            Stop		  3.1472599270283408e+03
            Strand		 1 6 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 6 18 24 45
            Start		  2.8428156008669043e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 6 18 24 46
            Start		  4.4571937357096023e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 1 6 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 6 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 6 19 40 45
            Start		  1.3201006232944014e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 6 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375558461927612e+03
            Strand		 1 6 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 1 6 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 6 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.7375558461927612e+03
            Strand		 1 6 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.7375558461927612e+03
            Strand		 1 6 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Strand		 1 6 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 6 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 6 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.4882858431143424e+04
            Strand		 1 6 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 6 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 6 22 43 45
            Start		  1.3201006232944014e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 6 23 24 45
            Start		  1.3201006232944014e+03
            Stop		  1.3672212038433343e+03
            Strand		 1 6 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0973470582385248e+03
            Strand		 1 6 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 1 6 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.0973470582385248e+03
            Strand		 1 6 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.3826468666143599e+04
            Strand		 1 7 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  1.8640950656691368e+03
            Strand		 1 7 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 7 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 7 5 26 47
            Start		  7.7804646890238073e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 7 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0037151742947569e+03
            Strand		 1 7 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 1 7 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 1 7 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 1 7 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 1 7 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 1 7 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.0037151742947569e+03
            Strand		 1 7 6 33 47
            Start		  7.7804646890238073e+04
            Stop		  7.8208198579857679e+04
            Strand		 1 7 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 1 7 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 1 7 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 7 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 1 7 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 1 7 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 7 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  9.8282911629191904e+02
            Strand		 1 7 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 1 7 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 1 7 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 7 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.0037151742947569e+03
            Strand		 1 7 9 30 47
            Start		  7.7804646890238073e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 7 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 7 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 1 7 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 7 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.0037151742947569e+03
            Strand		 1 7 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Strand		 1 7 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 1 7 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 7 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 1 7 12 33 47
            Start		  7.7804646890238073e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 7 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Strand		 1 7 13 26 47
            Start		  7.7804646890238073e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 1 7 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 7 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 1 7 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 1 7 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Strand		 1 7 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 1 7 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 1 7 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 1 7 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 1 7 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 1 7 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.0037151742947569e+03
            Strand		 1 7 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 7 14 41 47
            Start		  7.8876863869212990e+04
            Stop		  7.9201823822535895e+04
            Strand		 1 7 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 7 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280629042081121e+03
            Strand		 1 7 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  2.0037151742947569e+03
            Strand		 1 7 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 7 15 36 47
            Start		  7.7804646890238073e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 7 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 1 7 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 7 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131453661573629e+04
            Strand		 1 7 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 7 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 7 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.7504549068088827e+03
            Strand		 1 7 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 7 17 39 47
            Start		  7.7804646890238073e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 7 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Strand		 1 7 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240942872483749e+04
            Strand		 1 7 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 1 7 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Strand		 1 7 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0240942872483749e+04
            Strand		 1 7 18 39 47
            Start		  7.7804646890238073e+04
            Stop		  7.9039371821339722e+04
            Strand		 1 7 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 1 7 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 1 7 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.0037151742947569e+03
            Strand		 1 7 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  3.6092623081139129e+02
            Strand		 1 7 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 7 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 1 7 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600741243954966e+04
            Strand		 1 7 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 7 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8600741243954966e+04
            Strand		 1 7 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 1 7 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 7 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 7 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 7 22 39 47
            Start		  7.7804646890238073e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 7 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.0037151742947569e+03
            Strand		 1 7 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 1 7 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0037151742947569e+03
            Strand		 1 7 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 1 7 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.0037151742947569e+03
            Strand		 1 7 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 1 7 23 44 47
            Start		  7.7804646890238073e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 8 3 24 46
            Start		  4.4125653195225794e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 8 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 1 8 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 1 8 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 1 8 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 1 8 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 1 8 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 8 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 8 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 8 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 1 8 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 1 8 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 1 8 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 1 8 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 1 8 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 8 5 38 46
            Start		  4.4125653195225794e+04
            Stop		  4.4204824897160041e+04
            Strand		 1 8 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 1 8 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 8 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 1 8 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 1 8 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 1 8 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 1 8 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 1 8 7 38 46
            Start		  4.5939872886117562e+04
            Stop		  4.6078768202060164e+04
            Strand		 1 8 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344282546115552e+04
            Strand		 1 8 9 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 8 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 8 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 1 8 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 1 8 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 8 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4795732450285963e+04
            Strand		 1 8 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 1 8 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 1 8 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7720157284543748e+04
            Strand		 1 8 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 8 11 33 46
            Start		  4.4125653195225794e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 8 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 1 8 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 1 8 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 8 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137903460033733e+04
            Strand		 1 8 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 1 8 12 33 46
            Start		  4.4125653195225794e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 8 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 8 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 1 8 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 8 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 1 8 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 8 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 1 8 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 8 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 8 13 40 46
            Start		  4.4125653195225794e+04
            Stop		  4.4427555832139180e+04
            Strand		 1 8 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 1 8 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 1 8 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Strand		 1 8 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 8 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 1 8 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 1 8 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 1 8 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 8 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131456854470380e+04
            Strand		 1 8 16 29 46
            Start		  4.5839062679663606e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 8 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 8 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 1 8 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 8 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 8 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 8 17 38 46
            Start		  4.4125653195225794e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 8 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 8 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 8 18 24 46
            Start		  4.4125653195225794e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 1 8 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 1 8 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 1 8 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 8 19 26 47
            Start		  7.7386509887875174e+04
            Stop		  7.7582890635244315e+04
            Strand		 1 8 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 1 8 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Strand		 1 8 19 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 8 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 8 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 1 8 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 8 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 8 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 8 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 20 42 46
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 8 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 8 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 8 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 21 42 46
            Start		  4.4125653195225794e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 8 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 8 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 1 8 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Strand		 1 8 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 1 8 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 8 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 8 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 1 8 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 8 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 1 8 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 1 8 23 38 46
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 1 8 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.8551541500395368e+04
            Strand		 1 9 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  4.3945040870000003e+03
            Strand		 1 9 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 9 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 9 5 30 45
            Start		  1.8767504963307849e+03
            Stop		  2.0730537535350741e+03
            Strand		 1 9 5 35 45
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 1 9 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 1 9 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 1 9 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 9 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 1 9 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 9 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 1 9 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 9 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 1 9 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 1 9 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 1 9 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 1 9 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 9 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 1 9 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 1 9 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 9 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 1 9 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 1 9 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 1 9 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 9 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 1 9 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 9 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 9 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 1 9 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 1 9 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 9 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 1 9 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 1 9 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 1 9 13 30 45
            Start		  3.1036286233726109e+03
            Stop		  3.7997811049599864e+03
            Strand		 1 9 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 1 9 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 1 9 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 1 9 15 27 45
            Start		  1.5893013161533554e+03
            Stop		  1.6280629042081121e+03
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 9 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3912834781567919e+03
            Start		  1.5893013161533554e+03
            Stop		  2.2103092342780601e+03
            Strand		 1 9 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 1 9 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 1 9 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 9 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 9 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 9 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 9 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 9 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 1 9 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 9 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 9 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 1 9 18 30 45
            Start		  1.3524918432570853e+03
            Stop		  1.4821592182916540e+03
            Strand		 1 9 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 9 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 9 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 1 9 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480476963240599e+03
            Strand		 1 9 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 1 9 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 1 9 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 9 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 1 9 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 9 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 9 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 1 9 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  7.5689498913962996e+02
            Strand		 1 9 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5689498913962996e+02
            Start		  3.2171941620691778e+03
            Stop		  3.3560862603444762e+03
            Strand		 1 9 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 9 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  7.5689498913962996e+02
            Strand		 1 10 3 30 47
            Start		  7.9757365290597605e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 10 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620084360787543e+04
            Strand		 1 10 3 33 47
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 10 3 36 47
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 1 10 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 1 10 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5620084360787543e+04
            Strand		 1 10 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 10 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 10 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 10 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 10 6 26 47
            Start		  7.9110159751067011e+04
            Stop		  7.9309538250559315e+04
            Strand		 1 10 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 1 10 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 10 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 10 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 1 10 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 10 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 10 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 1 10 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 10 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 10 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 10 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 1 10 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7720157284543748e+04
            Strand		 1 10 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 1 10 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 1 10 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 1 10 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137903460033733e+04
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 1 10 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 10 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 10 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 1 10 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 10 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 1 10 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 10 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 1 10 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 1 10 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 10 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 10 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 10 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 10 16 26 47
            Start		  7.8727015444888515e+04
            Stop		  7.8865902471668742e+04
            Strand		 1 10 16 28 47
            Start		  7.8092694285910067e+04
            Stop		  7.8131456854470380e+04
            Strand		 1 10 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 1 10 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 10 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 10 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 1 10 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 10 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 10 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 10 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 10 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 10 17 44 47
            Start		  7.5896207892015751e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 10 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 10 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 1 10 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 1 10 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 1 10 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 1 10 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 10 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 10 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 10 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260284353046562e+04
            Strand		 1 10 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 10 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 10 22 28 47
            Start		  7.6365549268944567e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 1 10 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 10 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 1 10 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 10 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 1 10 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 10 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 11 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 11 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 11 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 11 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 11 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 1 11 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 1 11 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 1 11 5 30 46
            Start		  4.3605811354052174e+04
            Stop		  4.3802175337874032e+04
            Strand		 1 11 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 1 11 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5605298609154401e+04
            Strand		 1 11 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 1 11 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 1 11 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 11 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 1 11 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 11 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 11 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 11 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 11 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 11 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 1 11 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 1 11 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4795732450285963e+04
            Strand		 1 11 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 1 11 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 1 11 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 11 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 11 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 11 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 11 13 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 1 11 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 1 11 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 11 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 11 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 1 11 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 1 11 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 11 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 11 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 11 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 11 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 11 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 1 11 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 1 11 18 38 46
            Start		  4.6436642212613915e+04
            Stop		  4.6522439338621218e+04
            Strand		 1 11 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 11 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 11 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 11 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 11 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 11 21 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 11 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 11 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 1 11 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 1 11 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 1 11 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 1 12 3 30 47
            Start		  8.0339753440740184e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 12 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 1 12 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 12 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 1 12 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 1 12 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 1 12 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 12 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 12 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 12 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 12 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 1 12 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 1 12 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7398931621109514e+04
            Strand		 1 12 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 1 12 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 1 12 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 1 12 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 12 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 12 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594290423398095e+04
            Strand		 1 12 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 12 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 12 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9594290423398095e+04
            Strand		 1 12 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 12 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 12 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 1 12 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 12 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 12 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 12 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 1 12 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 12 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 1 12 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 12 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 1 12 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 1 12 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 1 12 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 1 12 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 12 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 1 12 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 1 12 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 1 12 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 12 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 12 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 12 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 12 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 12 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 12 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 12 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 12 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 12 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 12 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 1 12 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 12 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 1 12 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 1 12 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 1 12 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 1 12 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 1 12 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 12 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 12 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 12 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 1 12 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 12 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124996131761174e+04
            Strand		 1 12 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 12 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9124996131761174e+04
            Strand		 1 12 22 26 47
            Start		  7.8230252474766821e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 12 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 12 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 12 22 39 47
            Start		  7.8230252474766821e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 12 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 14 3 24 45
            Start		  4.5057672081463130e+02
            Stop		  4.3945040870000003e+03
            Strand		 1 14 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 14 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 14 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6460217029369276e+04
            Strand		 1 14 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 14 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 14 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460217029369276e+04
            Strand		 1 14 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 1 14 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 14 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6460217029369276e+04
            Strand		 1 14 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 1 14 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 1 14 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 1 14 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 14 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 1 14 6 27 45
            Start		  4.5057672081463130e+02
            Stop		  4.3944948189999996e+03
            Strand		 1 14 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 14 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 14 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 1 14 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 14 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0908963342426882e+03
            Strand		 1 14 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820017965221588e+04
            Strand		 1 14 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 14 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.0908963342426882e+03
            Strand		 1 14 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 14 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 1 14 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 14 8 35 45
            Start		  4.5057672081463130e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 1 14 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 14 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  8.9554139193317098e+02
            Strand		 1 14 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 1 14 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 14 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 1 14 9 30 45
            Start		  4.5057672081463130e+02
            Stop		  4.3944997640000001e+03
            Strand		 1 14 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 14 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 14 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 14 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 14 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 14 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 14 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 1 14 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 1 14 12 33 45
            Start		  4.5057672081463130e+02
            Stop		  1.4768307637209587e+03
            Strand		 1 14 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 14 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 14 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 1 14 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 1 14 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 1 14 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 1 14 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 14 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 1 14 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 1 14 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 14 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 14 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 1 14 13 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 1 14 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 1 14 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 1 14 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 1 14 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 14 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 14 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 14 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 14 16 33 45
            Start		  4.5057672081463130e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 14 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 14 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 14 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 14 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 14 17 38 45
            Start		  4.5057672081463130e+02
            Stop		  3.1472599270283408e+03
            Strand		 1 14 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 14 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 14 18 24 45
            Start		  3.3670161632636914e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 14 18 24 46
            Start		  4.5096137793069058e+04
            Stop		  4.5421045674933775e+04
            Strand		 1 14 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 1 14 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 1 14 18 35 45
            Start		  4.5057672081463130e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 14 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 1 14 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 1 14 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 14 19 40 45
            Start		  4.5057672081463130e+02
            Stop		  4.3945039289999995e+03
            Strand		 1 14 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 14 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 14 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 1 14 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 1 14 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 14 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 14 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 1 14 20 41 45
            Start		  4.5057672081463130e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 14 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 1 14 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 14 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 14 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 14 21 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 14 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 14 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 14 22 43 45
            Start		  4.5057672081463130e+02
            Stop		  3.3863886548372107e+03
            Strand		 1 14 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 1 14 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 1 14 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 1 14 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 1 14 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216064994216908e+03
            Strand		 1 14 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  2.6216064994216908e+03
            Strand		 1 14 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4350728118028928e+04
            Strand		 1 14 23 40 45
            Start		  4.5057672081463130e+02
            Stop		  8.7052120853547842e+02
            Strand		 1 15 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 1 15 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144343015909530e+04
            Strand		 1 15 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6144343015909530e+04
            Strand		 1 15 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 15 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 15 6 33 47
            Start		  7.7359103026254161e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 1 15 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 15 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 15 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 1 15 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613644627198126e+04
            Strand		 1 15 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 15 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 1 15 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 15 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 15 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 1 15 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 15 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 15 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 15 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 15 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 1 15 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 15 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 15 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 15 22 28 47
            Start		  7.6889739160611396e+04
            Stop		  7.7214620669011289e+04
            Strand		 1 15 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Strand		 1 15 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 1 15 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 15 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.7631451861395704e+04
            Strand		 1 16 3 24 45
            Start		  2.1228397491054989e+03
            Stop		  4.3945040870000003e+03
            Strand		 1 16 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 16 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 16 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0730537535350741e+03
            Strand		 1 16 5 35 45
            Start		  1.1027228386639167e+03
            Stop		  1.1312892354345045e+03
            Strand		 1 16 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 1 16 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 1 16 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 1 16 6 27 45
            Start		  1.1027228386639167e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 16 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 16 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 1 16 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 16 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 1 16 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 1 16 8 35 45
            Start		  1.1027228386639167e+03
            Stop		  1.7048090261505220e+03
            Strand		 1 16 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 16 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 1 16 9 30 45
            Start		  1.1027228386639167e+03
            Stop		  4.3944997640000001e+03
            Strand		 1 16 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 1 16 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 16 10 38 45
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 1 16 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 1 16 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 1 16 10 43 45
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 16 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 16 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 16 12 33 45
            Start		  1.1027228386639167e+03
            Stop		  1.4768307637209587e+03
            Strand		 1 16 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 16 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 1 16 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 1 16 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 1 16 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 1 16 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 1 16 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 1 16 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 1 16 14 35 45
            Start		  1.1027228386639167e+03
            Stop		  4.3945017829999997e+03
            Strand		 1 16 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 1 16 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280629042081121e+03
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 16 15 30 45
            Start		  1.1027228386639167e+03
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  2.2103092342780601e+03
            Strand		 1 16 15 43 45
            Start		  1.1027228386639167e+03
            Stop		  1.1038791670460275e+03
            Strand		 1 16 17 38 45
            Start		  1.1027228386639167e+03
            Stop		  3.1472599270283408e+03
            Strand		 1 16 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 16 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 16 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 1 16 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 1 16 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 16 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 16 19 40 45
            Start		  1.1027228386639167e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 16 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 1 16 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 1 16 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8510940959098289e+03
            Strand		 1 16 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.8510940959098289e+03
            Strand		 1 16 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 16 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 16 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 16 22 43 45
            Start		  1.1027228386639167e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 16 23 24 45
            Start		  1.1027228386639167e+03
            Stop		  1.3672212038433343e+03
            Strand		 1 16 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 1 16 23 30 45
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 1 16 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216096913284073e+03
            Strand		 1 16 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 16 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 1 17 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  1.3984250463360220e+03
            Strand		 1 17 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 17 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 17 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 1 17 3 34 47
            Start		  7.6806138819554908e+04
            Stop		  7.6878835395062808e+04
            Strand		 1 17 3 36 47
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 1 17 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 1 17 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 17 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 17 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070699616787031e+04
            Strand		 1 17 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 1 17 5 26 47
            Start		  7.6806138819554908e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 17 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 1 17 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 1 17 5 38 46
            Start		  4.4075172670238768e+04
            Stop		  4.4204824897160041e+04
            Strand		 1 17 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 1 17 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3984250463360220e+03
            Strand		 1 17 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 17 6 33 47
            Start		  7.6806138819554908e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 1 17 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 1 17 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 1 17 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.3984250463360220e+03
            Strand		 1 17 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3479568717841074e+04
            Strand		 1 17 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 17 7 28 47
            Start		  7.7236725923803548e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 17 7 38 46
            Start		  4.5939880742416412e+04
            Stop		  4.6078768202060164e+04
            Strand		 1 17 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 1 17 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 17 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 17 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 17 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 1 17 8 35 45
            Start		  8.5571359388815006e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.3984250463360220e+03
            Strand		 1 17 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 17 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  9.8282911629191904e+02
            Strand		 1 17 8 39 47
            Start		  7.6806138819554908e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 17 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 17 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 1 17 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.3984250463360220e+03
            Strand		 1 17 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 17 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  1.3984250463360220e+03
            Strand		 1 17 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 17 9 30 47
            Start		  7.6806138819554908e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 17 9 34 47
            Start		  7.6806138819554908e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 17 10 31 47
            Start		  7.6806138819554908e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 17 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 17 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1025971217641383e+02
            Strand		 1 17 10 38 46
            Start		  4.4599425707535389e+04
            Stop		  4.4795732450285963e+04
            Strand		 1 17 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 17 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 1 17 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 1 17 11 26 47
            Start		  7.6806138819554908e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7720157284543748e+04
            Strand		 1 17 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 17 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 1 17 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 17 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 1 17 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 17 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 1 17 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 17 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137903460033733e+04
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 1 17 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 1 17 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.3984250463360220e+03
            Strand		 1 17 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 17 12 33 47
            Start		  7.6806138819554908e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 17 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 1 17 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 17 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 1 17 13 30 46
            Start		  4.5329463665419091e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 17 13 30 47
            Start		  7.6806138819554908e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 1 17 13 34 47
            Start		  7.6806138819554908e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 17 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 17 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 1 17 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 1 17 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 1 17 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 1 17 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 1 17 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  1.3984250463360220e+03
            Strand		 1 17 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 17 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 17 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 1 17 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 17 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 1 17 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 1 17 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 17 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3923318954919373e+03
            Strand		 1 17 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 1 17 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 17 15 36 47
            Start		  7.6806138819554908e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 17 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 1 17 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 1 17 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 17 16 26 47
            Start		  7.8727015444888515e+04
            Stop		  7.8865902471668742e+04
            Strand		 1 17 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 17 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131456854470380e+04
            Strand		 1 17 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 17 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 1 17 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 17 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 17 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 17 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 17 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 1 17 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 1 17 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 1 17 18 38 46
            Start		  4.5826332806080434e+04
            Stop		  4.6522439338621218e+04
            Strand		 1 17 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 17 18 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.9039371821339722e+04
            Strand		 1 17 19 26 47
            Start		  7.7386509887875174e+04
            Stop		  7.7582890635244315e+04
            Strand		 1 17 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 1 17 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 1 17 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 1 17 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  1.3984250463360220e+03
            Strand		 1 17 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 17 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 17 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 17 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 17 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 17 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 1 17 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 17 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 17 21 27 45
            Start		  3.8635372851504587e+02
            Stop		  7.1123114113683107e+02
            Strand		 1 17 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 1 17 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 17 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 1 17 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 17 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 1 17 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 17 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 17 22 28 47
            Start		  7.6806138819554908e+04
            Stop		  7.7214620669011289e+04
            Strand		 1 17 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 17 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 17 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 17 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 1 17 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 17 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  1.3984250463360220e+03
            Strand		 1 17 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 1 17 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 1 17 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 1 17 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 1 17 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 1 17 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4113939122955788e+04
            Start		  4.4311961176240315e+04
            Stop		  4.4933019772875239e+04
            Strand		 1 17 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 1 17 23 44 47
            Start		  7.6806138819554908e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 18 3 24 45
            Start		  4.2820549559812443e+03
            Stop		  4.3945040870000003e+03
            Strand		 1 18 4 42 45
            Start		  4.2820549559812443e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 18 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 18 6 27 45
            Start		  4.2820549559812443e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 18 9 30 45
            Start		  4.2820549559812443e+03
            Stop		  4.3944997640000001e+03
            Strand		 1 18 10 37 45
            Start		  4.2820549559812443e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 18 12 27 45
            Start		  4.2820549559812443e+03
            Stop		  4.3729693885912811e+03
            Strand		 1 18 14 35 45
            Start		  4.2820549559812443e+03
            Stop		  4.3945017829999997e+03
            Strand		 1 18 15 27 45
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 18 16 37 45
            Start		  4.2820549559812443e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 18 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 18 19 40 45
            Start		  4.2820549559812443e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 18 20 42 45
            Start		  4.2820549559812443e+03
            Stop		  4.3478662689594312e+03
            Strand		 1 18 21 42 45
            Start		  4.2820549559812443e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 18 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 19 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  4.3945040870000003e+03
            Strand		 1 19 3 24 46
            Start		  4.5080608089763438e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 19 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 19 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 19 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 19 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 1 19 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 19 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 1 19 5 32 46
            Start		  4.6089669317113679e+04
            Stop		  4.6414548536554314e+04
            Strand		 1 19 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 1 19 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 1 19 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 19 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 1 19 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 1 19 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 1 19 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 19 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 19 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 1 19 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 19 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151577252877337e+03
            Strand		 1 19 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344279354258950e+04
            Strand		 1 19 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 1 19 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 1 19 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 19 8 30 45
            Start		  2.7204022923045586e+03
            Stop		  3.2986229655621528e+03
            Strand		 1 19 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 19 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 1 19 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3944997640000001e+03
            Strand		 1 19 9 30 46
            Start		  4.5080608089763438e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 19 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 1 19 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 1 19 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 1 19 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Strand		 1 19 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 19 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 19 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 19 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.0844707976405962e+03
            Strand		 1 19 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 1 19 12 33 46
            Start		  4.5080608089763438e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 19 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 19 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0844707976405962e+03
            Strand		 1 19 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813592443054549e+04
            Strand		 1 19 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 1 19 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 1 19 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 19 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 1 19 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 1 19 13 30 46
            Start		  4.5080608089763438e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 19 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 19 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 1 19 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 1 19 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 1 19 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.8891104721613151e+03
            Strand		 1 19 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 1 19 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 1 19 14 35 46
            Start		  4.5080608089763438e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 19 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 1 19 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 19 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 19 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 19 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 19 16 33 46
            Start		  4.5080608089763438e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 19 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 19 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 19 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 1 19 17 38 46
            Start		  4.5080608089763438e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 19 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 19 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 19 18 24 46
            Start		  4.5080608089763438e+04
            Stop		  4.5421045674933775e+04
            Strand		 1 19 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 1 19 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 1 19 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 1 19 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 1 19 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 19 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 1 19 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 1 19 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 19 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 19 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 1 19 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 1 19 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 19 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 1 19 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 1 19 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 1 19 20 42 46
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 19 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 1 19 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 19 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 1 19 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 19 21 42 46
            Start		  4.5080608089763438e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 19 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 19 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 1 19 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  8.7044250076385526e+02
            Strand		 1 19 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 1 19 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7044250076385526e+02
            Strand		 1 20 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 20 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 1 20 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 1 20 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 1 20 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 1 20 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 1 20 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 20 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 20 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 20 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 1 20 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 20 5 30 46
            Start		  4.3605811354052174e+04
            Stop		  4.3802175337874032e+04
            Strand		 1 20 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 1 20 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 20 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 1 20 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Strand		 1 20 6 26 47
            Start		  7.9223791736379848e+04
            Stop		  7.9309538250559315e+04
            Strand		 1 20 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 1 20 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 1 20 7 28 47
            Start		  7.5645570943592131e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 20 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 1 20 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344282546115552e+04
            Strand		 1 20 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 20 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 20 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 1 20 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 20 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 20 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 20 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118547354195194e+04
            Strand		 1 20 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0118547354195194e+04
            Strand		 1 20 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 20 9 30 47
            Start		  7.7632687084206482e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 20 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 1 20 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 1 20 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 20 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 20 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4795732450285963e+04
            Strand		 1 20 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 20 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Strand		 1 20 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7720157284543748e+04
            Strand		 1 20 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 20 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 1 20 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 1 20 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 1 20 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 20 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137903460033733e+04
            Strand		 1 20 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 20 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 20 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 20 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 1 20 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 20 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 1 20 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 20 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 20 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 1 20 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 20 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 1 20 13 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 1 20 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 1 20 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 1 20 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 1 20 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 1 20 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 20 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 1 20 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 1 20 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 20 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Start		  7.8352660439261919e+04
            Stop		  7.8392497545670893e+04
            Strand		 1 20 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 1 20 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 20 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 1 20 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 20 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 20 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 20 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 20 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 20 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 20 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 20 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 20 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 20 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 20 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 20 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 20 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 1 20 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 1 20 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 1 20 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 1 20 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 1 20 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 20 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 1 20 19 26 47
            Start		  7.7386509887875174e+04
            Stop		  7.7582890635244315e+04
            Strand		 1 20 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 1 20 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 1 20 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 1 20 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 1 20 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 20 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 20 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.5906273270609316e+04
            Strand		 1 20 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 20 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 1 20 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 20 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 1 20 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 20 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 20 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 1 20 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 1 20 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 1 20 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 1 20 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 1 20 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 1 20 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 21 3 24 45
            Start		  2.5516816271306038e+03
            Stop		  4.3945040870000003e+03
            Strand		 1 21 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 1 21 5 35 45
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 1 21 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 1 21 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 21 6 27 45
            Start		  2.5516816271306038e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 21 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 1 21 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 1 21 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 1 21 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 1 21 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 1 21 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 1 21 9 30 45
            Start		  2.5516816271306038e+03
            Stop		  4.3944997640000001e+03
            Strand		 1 21 10 24 45
            Start		  2.5516816271306038e+03
            Stop		  2.5941215890431640e+03
            Strand		 1 21 10 38 45
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 1 21 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 1 21 10 43 45
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 21 11 42 45
            Start		  3.1163748891529808e+03
            Stop		  3.2613859626793596e+03
            Strand		 1 21 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 1 21 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 1 21 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 1 21 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 1 21 13 27 45
            Start		  2.5516816271306038e+03
            Stop		  2.5637177943188312e+03
            Strand		 1 21 13 40 45
            Start		  2.5516816271306038e+03
            Stop		  2.6984342309074391e+03
            Strand		 1 21 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 1 21 14 35 45
            Start		  2.5516816271306038e+03
            Stop		  4.3945017829999997e+03
            Strand		 1 21 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 1 21 15 27 45
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 1 21 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 21 17 38 45
            Start		  2.5516816271306038e+03
            Stop		  3.1472599270283408e+03
            Strand		 1 21 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 21 18 24 45
            Start		  2.5516816271306038e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 1 21 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 1 21 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 1 21 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 1 21 19 40 45
            Start		  2.5516816271306038e+03
            Stop		  4.3945039289999995e+03
            Strand		 1 21 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 1 21 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 1 21 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 1 21 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 1 21 22 43 45
            Start		  2.5516816271306038e+03
            Stop		  3.3863886548372107e+03
            Strand		 1 21 23 30 45
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 1 21 23 35 45
            Start		  2.5516816271306038e+03
            Stop		  2.6216096913284073e+03
            Strand		 1 21 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 1 21 23 38 45
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 1 22 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  2.5404881732764525e+03
            Strand		 1 22 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 22 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 22 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 22 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 1 22 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 22 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 1 22 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 1 22 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 1 22 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.5404881732764525e+03
            Strand		 1 22 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 1 22 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 1 22 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 1 22 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 22 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 1 22 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 1 22 7 38 46
            Start		  4.5939872886117562e+04
            Stop		  4.6078768202060164e+04
            Strand		 1 22 7 40 46
            Start		  4.5305487541316921e+04
            Stop		  4.5344282546115552e+04
            Strand		 1 22 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 1 22 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 1 22 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 1 22 8 35 45
            Start		  1.3799007589949290e+03
            Stop		  1.7048090261505220e+03
            Strand		 1 22 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 1 22 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 1 22 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.5404881732764525e+03
            Strand		 1 22 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 1 22 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 1 22 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 1 22 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 1 22 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450605411922038e+02
            Strand		 1 22 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 1 22 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 1 22 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 1 22 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 1 22 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 1 22 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 1 22 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4473136547860093e+04
            Strand		 1 22 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 1 22 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5404881732764525e+03
            Strand		 1 22 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 1 22 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 1 22 13 40 45
            Start		  1.8492717806797796e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.5404881732764525e+03
            Strand		 1 22 13 40 46
            Start		  4.3578389470760099e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 1 22 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 1 22 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 1 22 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 1 22 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.5404881732764525e+03
            Strand		 1 22 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 22 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 1 22 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.1038201520506848e+03
            Strand		 1 22 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 1 22 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038201520506848e+03
            Strand		 1 22 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 1 22 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 1 22 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 1 22 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 1 22 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 1 22 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 1 22 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 1 22 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 1 22 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  2.5404881732764525e+03
            Strand		 1 22 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 1 22 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 1 22 18 38 46
            Start		  4.6323026961442331e+04
            Stop		  4.6522439338621218e+04
            Strand		 1 22 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.5404881732764525e+03
            Strand		 1 22 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 1 22 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 1 22 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 1 22 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 1 22 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 1 22 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 1 22 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 1 22 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 1 22 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 1 22 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 1 22 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 1 22 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 1 22 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 1 22 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 1 22 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 1 22 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 1 22 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 1 22 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.5404881732764525e+03
            Strand		 1 22 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Strand		 1 22 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 1 22 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 1 23 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 1 23 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 23 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0340205830999999e+04
            Strand		 1 23 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 1 23 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 1 23 6 33 47
            Start		  7.7883294904616530e+04
            Stop		  7.8208198579857679e+04
            Strand		 1 23 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 1 23 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 1 23 7 28 47
            Start		  7.5822923411025709e+04
            Stop		  8.0340207139999999e+04
            Strand		 1 23 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 1 23 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 1 23 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 1 23 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 1 23 8 41 47
            Start		  8.0079752187905164e+04
            Stop		  8.0118550546052778e+04
            Strand		 1 23 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9881737623492168e+04
            Start		  8.0079752187905164e+04
            Stop		  8.0340205507999999e+04
            Strand		 1 23 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 1 23 9 34 47
            Start		  7.6243149358639042e+04
            Stop		  7.6821387838576702e+04
            Strand		 1 23 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 1 23 10 31 47
            Start		  7.5822923411025709e+04
            Stop		  7.7759359124965384e+04
            Strand		 1 23 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 1 23 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 1 23 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Start		  7.7098063971822194e+04
            Stop		  7.7137900267626203e+04
            Strand		 1 23 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 1 23 11 44 47
            Start		  7.7010777895567415e+04
            Stop		  7.7137900267626203e+04
            Start		  7.9842979329793539e+04
            Stop		  7.9972650068662377e+04
            Strand		 1 23 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 1 23 12 37 47
            Start		  7.5822923411025709e+04
            Stop		  7.6380300600222938e+04
            Strand		 1 23 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 1 23 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9247408552547218e+04
            Strand		 1 23 13 34 47
            Start		  7.5822923411025709e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 23 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9247408552547218e+04
            Strand		 1 23 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247408552547218e+04
            Strand		 1 23 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 1 23 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 23 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 1 23 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 1 23 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 1 23 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 1 23 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 23 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7607205187996238e+04
            Strand		 1 23 16 37 47
            Start		  7.5822923411025709e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 23 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607205187996238e+04
            Strand		 1 23 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 1 23 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 1 23 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 1 23 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 23 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 1 23 17 44 47
            Start		  7.5822923411025709e+04
            Stop		  7.6221157158777016e+04
            Strand		 1 23 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 1 23 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 1 23 18 39 47
            Start		  7.5822923411025709e+04
            Stop		  7.9039371821339722e+04
            Strand		 1 23 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 1 23 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 1 23 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 1 23 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 1 23 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 1 23 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 1 23 21 34 47
            Start		  7.5822923411025709e+04
            Stop		  7.5870785696398496e+04
            Strand		 1 23 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 1 23 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 1 23 22 28 47
            Start		  7.5822923411025709e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7214620669011289e+04
            Strand		 1 23 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 1 23 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 1 23 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 1 23 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7079955032023543e+04
            Strand		 1 23 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 2 3 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 3 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 3 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 2 3 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 2 3 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 2 3 5 30 46
            Start		  4.3605811354052174e+04
            Stop		  4.3802175337874032e+04
            Strand		 2 3 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 2 3 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 2 3 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 2 3 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 2 3 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 3 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593135536922055e+04
            Strand		 2 3 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 3 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 3 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 2 3 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 3 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 2 3 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 2 3 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 2 3 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Strand		 2 3 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 2 3 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 3 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 2 3 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337833247839866e+04
            Strand		 2 3 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 3 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 2 3 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 2 3 13 30 46
            Start		  4.5443098210665798e+04
            Stop		  4.5528902750698777e+04
            Strand		 2 3 13 38 46
            Start		  4.5443098210665798e+04
            Stop		  4.6021370468229026e+04
            Strand		 2 3 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 3 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 2 3 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 2 3 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 2 3 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 2 3 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 2 3 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 2 3 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 3 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 2 3 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 2 3 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 2 3 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 2 3 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 2 3 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 2 3 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 2 3 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 2 3 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 3 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 3 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 3 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 2 3 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 2 3 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 4 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  3.9178615660626670e+03
            Strand		 2 4 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0730537535350741e+03
            Strand		 2 4 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 2 4 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Start		  3.8363625241812410e+03
            Stop		  3.9178615660626670e+03
            Strand		 2 4 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 2 4 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 2 4 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 2 4 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 2 4 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  3.9178615660626670e+03
            Strand		 2 4 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 4 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 2 4 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 4 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 2 4 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 4 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 2 4 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 2 4 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 2 4 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  3.9178615660626670e+03
            Strand		 2 4 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 2 4 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 2 4 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 2 4 10 43 45
            Start		  5.9571832601451149e+02
            Stop		  6.3450924735044964e+02
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 2 4 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 2 4 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 4 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 2 4 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  3.9178615660626670e+03
            Strand		 2 4 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.3544875475832150e+03
            Strand		 2 4 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  3.9178615660626670e+03
            Strand		 2 4 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 2 4 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 2 4 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 2 4 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 2 4 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 2 4 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 2 4 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 4 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  3.9178615660626670e+03
            Strand		 2 4 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 2 4 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 4 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 4 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 4 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.9178615660626670e+03
            Strand		 2 4 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 4 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 2 4 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 2 4 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 2 4 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 2 4 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 2 4 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.9178615660626670e+03
            Strand		 2 4 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 2 4 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 2 4 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 2 4 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 2 4 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.9178615660626670e+03
            Strand		 2 4 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 4 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  3.9178615660626670e+03
            Strand		 2 4 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 2 4 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 2 4 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 2 4 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 2 4 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216096913284073e+03
            Strand		 2 4 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 2 4 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 2 5 3 30 47
            Start		  7.9757365290597605e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 5 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 2 5 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 5 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 2 5 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 2 5 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 2 5 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 2 5 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 2 5 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 5 6 26 47
            Start		  7.8613476729234389e+04
            Stop		  7.9309538250559315e+04
            Strand		 2 5 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 2 5 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 5 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 2 5 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 2 5 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 2 5 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 2 5 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 2 5 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 5 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 5 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 2 5 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 2 5 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 2 5 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 2 5 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 2 5 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6901089585741312e+04
            Start		  7.7099112328425981e+04
            Stop		  7.7720157284543748e+04
            Strand		 2 5 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 2 5 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 2 5 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 2 5 11 44 47
            Start		  7.7099112328425981e+04
            Stop		  7.7137903460033733e+04
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 2 5 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 5 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 5 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857881576446322e+04
            Start		  8.0116547947444575e+04
            Stop		  8.0261543134538762e+04
            Strand		 2 5 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 5 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 2 5 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 5 14 26 47
            Start		  7.6862325337286093e+04
            Stop		  7.6992002058380516e+04
            Strand		 2 5 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 2 5 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 5 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 2 5 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 2 5 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 2 5 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 5 16 26 47
            Start		  7.8727023301326233e+04
            Stop		  7.8865902471668742e+04
            Strand		 2 5 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 2 5 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 5 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 2 5 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 2 5 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 5 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 5 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 2 5 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 2 5 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 2 5 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 5 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 2 5 19 26 47
            Start		  7.7386568903625302e+04
            Stop		  7.7582890635244315e+04
            Strand		 2 5 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 2 5 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 2 5 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 2 5 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 2 5 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 2 5 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 2 5 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 2 5 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 2 5 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 2 5 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 2 5 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 5 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 5 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 2 5 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 2 5 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 2 5 22 39 47
            Start		  7.8116637973937948e+04
            Stop		  7.8316010505344981e+04
            Strand		 2 5 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 6 3 24 45
            Start		  1.9516023826102262e+03
            Stop		  4.3945040870000003e+03
            Strand		 2 6 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 6 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 6 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 2 6 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 2 6 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 6 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 2 6 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 2 6 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 2 6 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 2 6 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 2 6 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 2 6 9 30 45
            Start		  1.9516023826102262e+03
            Stop		  4.3944997640000001e+03
            Strand		 2 6 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 2 6 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3719208435707660e+03
            Strand		 2 6 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 2 6 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 2 6 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 2 6 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 2 6 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 2 6 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 2 6 13 40 45
            Start		  2.3734704433522720e+03
            Stop		  2.6984342309074391e+03
            Strand		 2 6 13 40 46
            Start		  4.4102596379091548e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 2 6 14 35 45
            Start		  1.9516023826102262e+03
            Stop		  4.3945017829999997e+03
            Strand		 2 6 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 2 6 15 27 45
            Start		  4.3331404574756698e+03
            Stop		  4.3944948189999996e+03
            Strand		 2 6 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3357185425745811e+04
            Strand		 2 6 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 6 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 2 6 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 6 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 6 17 38 45
            Start		  1.9516023826102262e+03
            Stop		  3.1472599270283408e+03
            Strand		 2 6 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 6 18 24 45
            Start		  2.8428156008669043e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 2 6 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 2 6 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 2 6 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 6 19 40 45
            Start		  1.9516023826102262e+03
            Stop		  4.3945039289999995e+03
            Strand		 2 6 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375558461927612e+03
            Strand		 2 6 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 2 6 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 6 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.7375558461927612e+03
            Strand		 2 6 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.7375558461927612e+03
            Strand		 2 6 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Strand		 2 6 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 6 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.4238964893069242e+04
            Strand		 2 6 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 2 6 22 43 45
            Start		  1.9516023826102262e+03
            Stop		  3.3863886548372107e+03
            Strand		 2 6 23 27 45
            Start		  1.9516023826102262e+03
            Stop		  2.0973470582385248e+03
            Strand		 2 6 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 2 6 23 38 45
            Start		  1.9516023826102262e+03
            Stop		  2.0973470582385248e+03
            Strand		 2 6 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.3826468666143599e+04
            Strand		 2 7 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  1.8640950656691368e+03
            Strand		 2 7 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 7 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 7 5 26 47
            Start		  7.8308355280273958e+04
            Stop		  8.0340205830999999e+04
            Strand		 2 7 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0730537535350741e+03
            Strand		 2 7 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 2 7 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 2 7 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 2 7 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 2 7 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 2 7 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.1767513734676850e+03
            Strand		 2 7 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 2 7 8 30 47
            Start		  7.8308355280273958e+04
            Stop		  7.8864188440426879e+04
            Strand		 2 7 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 2 7 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 2 7 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  9.8282911629191904e+02
            Strand		 2 7 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 2 7 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 2 7 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 7 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.1767513734676850e+03
            Strand		 2 7 9 30 47
            Start		  7.8308355280273958e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 7 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 2 7 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 2 7 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 2 7 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 2 7 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Strand		 2 7 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 2 7 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 7 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 2 7 12 33 47
            Start		  7.8308355280273958e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 7 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Strand		 2 7 13 26 47
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 2 7 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 7 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 2 7 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 2 7 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.1767513734676850e+03
            Strand		 2 7 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 2 7 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 2 7 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 2 7 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 7 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 2 7 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.1767513734676850e+03
            Strand		 2 7 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 7 14 41 47
            Start		  7.8876863869212990e+04
            Stop		  7.9201823822535895e+04
            Strand		 2 7 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 2 7 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280629042081121e+03
            Strand		 2 7 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  2.1767513734676850e+03
            Strand		 2 7 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 7 15 36 47
            Start		  7.8308355280273958e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 7 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 2 7 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.1767513734676850e+03
            Strand		 2 7 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 7 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 7 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 7 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.7504549068088827e+03
            Strand		 2 7 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 7 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Strand		 2 7 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240942872483749e+04
            Strand		 2 7 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 2 7 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Strand		 2 7 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0240942872483749e+04
            Strand		 2 7 18 39 47
            Start		  7.8308355280273958e+04
            Stop		  7.9039371821339722e+04
            Strand		 2 7 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 2 7 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 2 7 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.1767513734676850e+03
            Strand		 2 7 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  3.6092623081139129e+02
            Strand		 2 7 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 2 7 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 2 7 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600741243954966e+04
            Strand		 2 7 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 7 21 36 47
            Start		  7.8308355280273958e+04
            Stop		  7.8600741243954966e+04
            Strand		 2 7 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 2 7 22 26 47
            Start		  7.8308355280273958e+04
            Stop		  7.8808521779158225e+04
            Strand		 2 7 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 2 7 22 33 47
            Start		  7.8308355280273958e+04
            Stop		  7.8363298072889360e+04
            Strand		 2 7 22 39 47
            Start		  7.8308355280273958e+04
            Stop		  7.8316010505344981e+04
            Strand		 2 7 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  2.1767513734676850e+03
            Strand		 2 7 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 2 7 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 2 7 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 2 7 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.1767513734676850e+03
            Strand		 2 7 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 2 7 23 44 47
            Start		  7.8308355280273958e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 8 3 24 46
            Start		  4.4060722454817194e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 8 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 2 8 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 2 8 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 2 8 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 2 8 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 8 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 8 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 2 8 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 2 8 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 2 8 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 2 8 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 2 8 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 2 8 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 8 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 2 8 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 2 8 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 8 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 2 8 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 2 8 7 38 46
            Start		  4.5939872886117562e+04
            Stop		  4.6078768202060164e+04
            Strand		 2 8 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344282546115552e+04
            Strand		 2 8 9 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5555447850741293e+04
            Strand		 2 8 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 2 8 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 2 8 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 2 8 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4795732450285963e+04
            Strand		 2 8 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 2 8 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 2 8 11 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.6902137901162248e+04
            Strand		 2 8 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 2 8 11 33 46
            Start		  4.4060722454817194e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 8 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 2 8 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 2 8 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 2 8 12 33 46
            Start		  4.4060722454817194e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 8 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 8 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 2 8 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 2 8 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 2 8 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 2 8 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 8 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 2 8 13 40 46
            Start		  4.4060722454817194e+04
            Stop		  4.4427555832139180e+04
            Strand		 2 8 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 2 8 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 2 8 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Strand		 2 8 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 8 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 2 8 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Strand		 2 8 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 2 8 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 16 29 46
            Start		  4.5839062679663606e+04
            Stop		  4.5984058959636735e+04
            Strand		 2 8 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 2 8 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 8 17 38 46
            Start		  4.4060722454817194e+04
            Stop		  4.6703452747999996e+04
            Strand		 2 8 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 2 8 18 24 46
            Start		  4.4060722454817194e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5421045674933775e+04
            Strand		 2 8 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 2 8 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 2 8 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.6864316014078300e+04
            Strand		 2 8 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 2 8 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 19 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.6703456899999997e+04
            Strand		 2 8 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 8 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 2 8 20 30 46
            Start		  4.4060722454817194e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 8 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 8 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 2 8 20 42 46
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 2 8 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 8 21 42 46
            Start		  4.4060722454817194e+04
            Stop		  4.6703464905000001e+04
            Strand		 2 8 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 2 8 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 8 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 8 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 2 8 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 2 8 23 38 46
            Start		  4.4060722454817194e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 2 8 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.7008036475070345e+04
            Strand		 2 9 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  4.3945040870000003e+03
            Strand		 2 9 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 9 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 9 5 30 45
            Start		  1.8767504963307849e+03
            Stop		  2.0730537535350741e+03
            Strand		 2 9 5 35 45
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 2 9 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 2 9 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 2 9 5 40 45
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 2 9 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 2 9 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 9 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 2 9 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 9 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 2 9 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 9 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 2 9 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 2 9 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 2 9 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 2 9 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 2 9 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 9 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 2 9 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 2 9 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 2 9 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 2 9 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 2 9 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 9 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 2 9 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.3729693885912811e+03
            Strand		 2 9 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 2 9 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 2 9 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 2 9 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 2 9 13 24 45
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 2 9 13 30 45
            Start		  3.1036286233726109e+03
            Stop		  3.7997811049599864e+03
            Strand		 2 9 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 9 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 2 9 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 2 9 15 27 45
            Start		  1.5893013161533554e+03
            Stop		  1.6280629042081121e+03
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 2 9 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3912834781567919e+03
            Start		  1.5893013161533554e+03
            Stop		  2.2103092342780601e+03
            Strand		 2 9 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 2 9 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 2 9 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 9 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 9 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 9 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 9 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 9 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 2 9 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 9 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 2 9 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 2 9 18 30 45
            Start		  1.3524918432570853e+03
            Stop		  1.4821592182916540e+03
            Strand		 2 9 18 35 45
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 2 9 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 9 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 2 9 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480476963240599e+03
            Strand		 2 9 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 2 9 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 2 9 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 9 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 2 9 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 9 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 2 9 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 2 9 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  7.5689498913962996e+02
            Strand		 2 9 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5689498913962996e+02
            Start		  3.2171941620691778e+03
            Stop		  3.3560862603444762e+03
            Strand		 2 9 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 9 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  7.5689498913962996e+02
            Strand		 2 10 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620084360787543e+04
            Strand		 2 10 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5620084360787543e+04
            Strand		 2 10 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 10 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 2 10 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 10 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 2 10 17 44 47
            Start		  7.5896207892015751e+04
            Stop		  7.6221157158777016e+04
            Strand		 2 10 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 2 10 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 10 22 28 47
            Start		  7.6365549268944567e+04
            Stop		  7.6404310027288768e+04
            Strand		 2 10 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 10 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.6469380460594577e+04
            Strand		 2 11 3 24 46
            Start		  4.3665023055230107e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 11 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 11 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 11 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 2 11 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 2 11 4 42 46
            Start		  4.3665023055230107e+04
            Stop		  4.4038487655715006e+04
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 2 11 5 30 46
            Start		  4.3665023055230107e+04
            Stop		  4.3802175337874032e+04
            Strand		 2 11 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 2 11 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5605298609154401e+04
            Strand		 2 11 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 2 11 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 2 11 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 11 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 11 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 2 11 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 11 9 30 46
            Start		  4.3665023055230107e+04
            Stop		  4.5555447850741293e+04
            Strand		 2 11 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 2 11 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4795732450285963e+04
            Strand		 2 11 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 2 11 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 2 11 12 33 46
            Start		  4.3665023055230107e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 11 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 2 11 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 2 11 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 2 11 13 40 46
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 2 11 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 2 11 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 11 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 2 11 15 30 46
            Start		  4.3665023055230107e+04
            Stop		  4.3939430832193284e+04
            Strand		 2 11 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 2 11 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 2 11 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 2 11 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.6703452747999996e+04
            Strand		 2 11 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 2 11 18 38 46
            Start		  4.6436642212613915e+04
            Stop		  4.6522439338621218e+04
            Strand		 2 11 19 40 46
            Start		  4.3665023055230107e+04
            Stop		  4.6703456899999997e+04
            Strand		 2 11 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 11 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 11 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 11 20 42 46
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 2 11 21 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.6703464905000001e+04
            Strand		 2 11 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 11 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 2 11 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 2 11 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 2 12 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 2 12 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 2 12 3 34 47
            Start		  7.6739934777925213e+04
            Stop		  7.6878835395062808e+04
            Strand		 2 12 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 2 12 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6726641263246187e+04
            Strand		 2 12 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 2 12 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 12 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 2 12 6 33 47
            Start		  7.6776709433798154e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 2 12 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7398931621109514e+04
            Strand		 2 12 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 2 12 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 2 12 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 2 12 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 2 12 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594290423398095e+04
            Strand		 2 12 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 2 12 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 2 12 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9594290423398095e+04
            Strand		 2 12 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 2 12 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 2 12 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7759359124965384e+04
            Strand		 2 12 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 2 12 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 2 12 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 2 12 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 12 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 2 12 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 2 12 14 26 47
            Start		  7.6862322144327612e+04
            Stop		  7.6992002058380516e+04
            Strand		 2 12 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 2 12 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 2 12 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 2 12 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 2 12 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 2 12 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 12 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 12 17 28 47
            Start		  7.7236725923803548e+04
            Stop		  7.7369771430123306e+04
            Strand		 2 12 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 2 12 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 12 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 17 39 47
            Start		  7.7123173985950343e+04
            Stop		  7.7815019931310715e+04
            Strand		 2 12 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 2 12 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.9039371821339722e+04
            Strand		 2 12 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 2 12 19 33 47
            Start		  7.6914063504072808e+04
            Stop		  7.7110433647224665e+04
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 2 12 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 2 12 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 2 12 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 2 12 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 2 12 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 12 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 2 12 21 31 47
            Start		  7.7127241879121153e+04
            Stop		  7.7260292209088992e+04
            Strand		 2 12 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124996131761174e+04
            Strand		 2 12 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 12 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9124996131761174e+04
            Strand		 2 12 22 26 47
            Start		  7.8230252474766821e+04
            Stop		  7.8808521779158225e+04
            Strand		 2 12 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 2 12 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 2 12 22 39 47
            Start		  7.8230252474766821e+04
            Stop		  7.8316010505344981e+04
            Strand		 2 12 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  8.0067494300308448e+04
            Strand		 2 14 3 24 45
            Start		  1.3572688655238713e+02
            Stop		  4.1316251863909802e+03
            Strand		 2 14 3 24 46
            Start		  4.4388884778289219e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 14 3 30 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 14 3 33 47
            Start		  8.0339756633701603e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 14 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6460217029369276e+04
            Strand		 2 14 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 14 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 14 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460217029369276e+04
            Strand		 2 14 4 35 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 14 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 2 14 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6460217029369276e+04
            Strand		 2 14 5 26 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340205830999999e+04
            Strand		 2 14 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 2 14 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 2 14 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Start		  3.8363625241812410e+03
            Stop		  3.9634744230964652e+03
            Strand		 2 14 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 2 14 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 2 14 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 2 14 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.1316251863909802e+03
            Strand		 2 14 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 14 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 14 7 28 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 14 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0908963342426882e+03
            Strand		 2 14 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820017965221588e+04
            Strand		 2 14 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 14 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 14 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.0908963342426882e+03
            Strand		 2 14 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 14 8 30 45
            Start		  2.6068536755902574e+03
            Stop		  3.2986229655621528e+03
            Strand		 2 14 8 30 46
            Start		  4.4388884778289219e+04
            Stop		  4.5027744538821244e+04
            Strand		 2 14 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 2 14 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.1316251863909802e+03
            Strand		 2 14 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  8.9554139193317098e+02
            Strand		 2 14 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 2 14 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 14 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 2 14 8 44 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 14 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.1316251863909802e+03
            Strand		 2 14 9 30 46
            Start		  4.4388884778289219e+04
            Stop		  4.5555447850741293e+04
            Strand		 2 14 9 30 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 14 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 2 14 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 2 14 11 33 46
            Start		  4.4388884778289219e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 14 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 14 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 2 14 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 2 14 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 2 14 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.1316251863909802e+03
            Strand		 2 14 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 2 14 12 33 46
            Start		  4.4388884778289219e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 14 12 33 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 14 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 2 14 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0845298132657617e+03
            Strand		 2 14 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 2 14 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 2 14 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 2 14 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 2 14 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 2 14 13 28 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 14 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 2 14 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5528902750698777e+04
            Strand		 2 14 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 2 14 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 2 14 13 40 46
            Start		  4.4388884778289219e+04
            Stop		  4.4427555832139180e+04
            Strand		 2 14 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 2 14 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 2 14 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 2 14 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 2 14 15 35 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 14 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 14 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 14 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 2 14 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 14 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 2 14 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.1316251863909802e+03
            Strand		 2 14 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 14 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 2 14 17 38 46
            Start		  4.4388884778289219e+04
            Stop		  4.6703452747999996e+04
            Strand		 2 14 17 38 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 14 18 24 45
            Start		  3.3670161632636914e+03
            Stop		  3.6919241850389699e+03
            Strand		 2 14 18 24 46
            Start		  4.5096137793069058e+04
            Stop		  4.5421045674933775e+04
            Strand		 2 14 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Strand		 2 14 18 29 46
            Start		  4.5422457758604090e+04
            Stop		  4.5567470076559097e+04
            Strand		 2 14 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 2 14 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 2 14 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 2 14 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 2 14 18 38 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 14 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.1316251863909802e+03
            Strand		 2 14 19 40 46
            Start		  4.4388884778289219e+04
            Stop		  4.6703456899999997e+04
            Strand		 2 14 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 14 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 2 14 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 2 14 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 14 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 2 14 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 2 14 20 41 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340211121999993e+04
            Strand		 2 14 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.1316251863909802e+03
            Strand		 2 14 20 42 46
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 2 14 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 14 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.1316251863909802e+03
            Strand		 2 14 21 42 46
            Start		  4.4388884778289219e+04
            Stop		  4.6703464905000001e+04
            Strand		 2 14 22 33 46
            Start		  4.4388884778289219e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 14 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 2 14 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 2 14 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 2 14 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 2 14 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216064994216908e+03
            Strand		 2 14 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  2.6216064994216908e+03
            Strand		 2 14 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 2 14 23 44 47
            Start		  8.0317542903582507e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 15 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 2 15 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144343015909530e+04
            Strand		 2 15 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6144343015909530e+04
            Strand		 2 15 4 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.6780838183788190e+04
            Strand		 2 15 5 26 47
            Start		  7.6783107458776707e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 15 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 8 39 47
            Start		  7.6722614072557291e+04
            Stop		  7.6864316014078300e+04
            Strand		 2 15 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6821387838576702e+04
            Strand		 2 15 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 2 15 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613644627198126e+04
            Strand		 2 15 12 33 47
            Start		  7.6726306479351289e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 15 13 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6825743899182198e+04
            Strand		 2 15 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 15 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6796580946605594e+04
            Strand		 2 15 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 2 15 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6970289987693381e+04
            Strand		 2 15 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 2 15 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 2 15 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6796580946605594e+04
            Strand		 2 15 21 34 47
            Start		  7.5729078490063126e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 15 22 28 47
            Start		  7.6889739160611396e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 22 36 47
            Start		  7.6889798175015181e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 15 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.7075265895794364e+04
            Strand		 2 16 3 24 45
            Start		  2.1228397491054989e+03
            Stop		  4.3945040870000003e+03
            Strand		 2 16 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 16 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 16 5 30 45
            Start		  1.8766914813132016e+03
            Stop		  2.0730537535350741e+03
            Strand		 2 16 5 33 45
            Start		  3.0969037088418060e+02
            Stop		  3.7544582598933556e+02
            Strand		 2 16 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 2 16 5 37 45
            Start		  3.1019077774343368e+03
            Stop		  3.2407862120076047e+03
            Strand		 2 16 5 38 45
            Start		  2.3460478549340833e+03
            Stop		  2.4757033203900614e+03
            Strand		 2 16 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Strand		 2 16 6 27 45
            Start		  7.3333394566186792e+02
            Stop		  4.3944948189999996e+03
            Strand		 2 16 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 16 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 2 16 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 16 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151609171476152e+03
            Strand		 2 16 7 41 45
            Start		  3.0969037088418060e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 16 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 2 16 8 35 45
            Start		  4.1447279058516961e+02
            Stop		  8.9449321111718086e+02
            Start		  1.0925159574748564e+03
            Stop		  1.7048090261505220e+03
            Strand		 2 16 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 2 16 8 38 45
            Start		  8.5571678658846974e+02
            Stop		  9.8282911629191904e+02
            Strand		 2 16 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 2 16 9 30 45
            Start		  3.0969037088418060e+02
            Stop		  4.3944997640000001e+03
            Strand		 2 16 10 24 45
            Start		  2.3977651047079416e+03
            Stop		  2.5941215890431640e+03
            Strand		 2 16 10 37 45
            Start		  4.2475016440028630e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 16 10 38 45
            Start		  2.8702459328390350e+03
            Stop		  3.0666108701674893e+03
            Strand		 2 16 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 2 16 10 42 45
            Start		  4.0954324780241623e+03
            Stop		  4.2343174377899413e+03
            Strand		 2 16 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Start		  3.3395909779669992e+03
            Stop		  3.3863886548372107e+03
            Strand		 2 16 11 33 45
            Start		  3.0969037088418060e+02
            Stop		  3.1799798892735595e+02
            Strand		 2 16 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 16 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 2 16 12 33 45
            Start		  3.0969037088418060e+02
            Stop		  1.4768307637209587e+03
            Strand		 2 16 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 2 16 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 2 16 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 2 16 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 2 16 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 2 16 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 2 16 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 2 16 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 2 16 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 2 16 15 24 45
            Start		  2.9887179865391331e+03
            Stop		  3.1183757370565140e+03
            Strand		 2 16 15 27 45
            Start		  1.5009509731556068e+03
            Stop		  1.6280629042081121e+03
            Start		  4.3331372641481366e+03
            Stop		  4.3944948189999996e+03
            Strand		 2 16 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.3923318954919373e+03
            Start		  1.5882529932531202e+03
            Stop		  2.2103092342780601e+03
            Strand		 2 16 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 2 16 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038791670460275e+03
            Strand		 2 16 17 38 45
            Start		  3.0969037088418060e+02
            Stop		  3.1472599270283408e+03
            Strand		 2 16 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 16 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 2 16 18 27 45
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 2 16 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 2 16 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 2 16 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 16 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  4.3945039289999995e+03
            Strand		 2 16 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 2 16 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 2 16 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8510940959098289e+03
            Strand		 2 16 20 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 16 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  3.8510940959098289e+03
            Strand		 2 16 21 27 45
            Start		  3.0969037088418060e+02
            Stop		  7.1123114113683107e+02
            Strand		 2 16 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 16 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 2 16 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 16 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 2 16 22 43 45
            Start		  3.0969037088418060e+02
            Stop		  3.3863886548372107e+03
            Strand		 2 16 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 2 16 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 2 16 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Start		  3.2171863050275970e+03
            Stop		  3.3560862603444762e+03
            Strand		 2 16 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.6216096913284073e+03
            Strand		 2 16 23 37 45
            Start		  4.3848728636978485e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 16 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Start		  2.5817939048765329e+03
            Stop		  3.1472599270283408e+03
            Strand		 2 16 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 2 17 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 17 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 17 3 33 47
            Start		  7.7505000168371771e+04
            Stop		  7.7634674272810051e+04
            Strand		 2 17 3 36 47
            Start		  7.8849433229068061e+04
            Stop		  7.8979092875829985e+04
            Strand		 2 17 3 38 47
            Start		  7.9605294352711280e+04
            Stop		  7.9744176326216606e+04
            Strand		 2 17 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 17 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070699616787031e+04
            Strand		 2 17 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 2 17 5 26 47
            Start		  7.7179166890795139e+04
            Stop		  8.0340205830999999e+04
            Strand		 2 17 5 32 46
            Start		  4.5802266741516069e+04
            Stop		  4.6414548536554314e+04
            Strand		 2 17 5 35 46
            Start		  4.5565484143857582e+04
            Stop		  4.5692595991144495e+04
            Strand		 2 17 5 38 46
            Start		  4.4075172670238768e+04
            Stop		  4.4204824897160041e+04
            Strand		 2 17 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 2 17 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 6 33 46
            Start		  4.5479868221715165e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 17 6 33 47
            Start		  7.7179166890795139e+04
            Stop		  7.7397884001644590e+04
            Start		  7.7595901066605016e+04
            Stop		  7.8208198579857679e+04
            Strand		 2 17 6 36 47
            Start		  7.7359106218399626e+04
            Stop		  7.7486218669612354e+04
            Strand		 2 17 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 2 17 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3479568717841074e+04
            Strand		 2 17 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 17 7 28 47
            Start		  7.7236725923803548e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 17 7 38 46
            Start		  4.5939880742416412e+04
            Stop		  4.6078768202060164e+04
            Strand		 2 17 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 17 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 17 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 2 17 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 2 17 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 2 17 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 2 17 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 17 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118550546052778e+04
            Strand		 2 17 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 17 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.5555447850741293e+04
            Strand		 2 17 9 30 47
            Start		  7.7179166890795139e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 17 10 31 47
            Start		  7.7179166890795139e+04
            Stop		  7.7759359124965384e+04
            Strand		 2 17 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 2 17 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1025971217641383e+02
            Strand		 2 17 10 38 46
            Start		  4.4599425707535389e+04
            Stop		  4.4795732450285963e+04
            Strand		 2 17 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 2 17 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 2 17 10 42 46
            Start		  4.5824550924371062e+04
            Stop		  4.5963439151324797e+04
            Strand		 2 17 11 26 47
            Start		  7.7179166890795139e+04
            Stop		  7.7720157284543748e+04
            Strand		 2 17 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 2 17 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 2 17 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 17 11 39 47
            Start		  7.7733483670039626e+04
            Stop		  7.7872372009142753e+04
            Strand		 2 17 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 2 17 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 2 17 11 44 47
            Start		  7.9842976137072706e+04
            Stop		  7.9972650068662377e+04
            Strand		 2 17 12 24 46
            Start		  4.6210724919041430e+04
            Stop		  4.6337836440726373e+04
            Strand		 2 17 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5480552730310868e+04
            Strand		 2 17 12 33 47
            Start		  7.7179166890795139e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 17 12 40 46
            Start		  4.5623493671610137e+04
            Stop		  4.5813651458701279e+04
            Strand		 2 17 13 24 46
            Start		  4.5443106067277928e+04
            Stop		  4.5576150939132232e+04
            Strand		 2 17 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 2 17 13 30 46
            Start		  4.5329463665419091e+04
            Stop		  4.5528902750698777e+04
            Strand		 2 17 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 2 17 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.6021370468229026e+04
            Strand		 2 17 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 2 17 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 2 17 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 17 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 2 17 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  5.3289955830845554e+02
            Strand		 2 17 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 17 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 17 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 2 17 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 2 17 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 2 17 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 2 17 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 2 17 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 2 17 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 17 15 36 47
            Start		  7.7179166890795139e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 17 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 2 17 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 2 17 16 26 47
            Start		  7.8727015444888515e+04
            Stop		  7.8865902471668742e+04
            Strand		 2 17 16 28 47
            Start		  7.8004340536595453e+04
            Stop		  7.8131456854470380e+04
            Strand		 2 17 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 2 17 16 30 47
            Start		  7.9894713707270974e+04
            Stop		  8.0091071650403974e+04
            Strand		 2 17 16 31 47
            Start		  7.7282539190382711e+04
            Stop		  7.7759359124965384e+04
            Strand		 2 17 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  5.3289955830845554e+02
            Strand		 2 17 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 2 17 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607264203075814e+04
            Strand		 2 17 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 2 17 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 2 17 18 38 46
            Start		  4.5826332806080434e+04
            Stop		  4.6522439338621218e+04
            Strand		 2 17 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 17 18 39 47
            Start		  7.7179166890795139e+04
            Stop		  7.9039371821339722e+04
            Strand		 2 17 19 26 47
            Start		  7.7386509887875174e+04
            Stop		  7.7582890635244315e+04
            Strand		 2 17 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 2 17 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 2 17 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 2 17 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  5.3289955830845554e+02
            Strand		 2 17 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.6703456899999997e+04
            Strand		 2 17 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 17 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 17 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 2 17 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 17 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 2 17 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Start		  4.5380787705421812e+04
            Stop		  4.6076990733798804e+04
            Strand		 2 17 21 27 45
            Start		  3.8635372851504587e+02
            Stop		  5.3289955830845554e+02
            Strand		 2 17 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 2 17 21 31 47
            Start		  7.7179166890795139e+04
            Stop		  7.7260292209088992e+04
            Strand		 2 17 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 2 17 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 17 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.3289955830845554e+02
            Strand		 2 17 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.6703464905000001e+04
            Strand		 2 17 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 2 17 22 28 47
            Start		  7.7179166890795139e+04
            Stop		  7.7214620669011289e+04
            Strand		 2 17 22 30 47
            Start		  7.7216092047897371e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 2 17 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 17 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 2 17 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
            Strand		 2 17 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  5.3289955830845554e+02
            Strand		 2 17 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 2 17 23 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.5841059090821858e+04
            Strand		 2 17 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 2 17 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4113939122955788e+04
            Start		  4.4311961176240315e+04
            Stop		  4.4933019772875239e+04
            Strand		 2 17 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  5.3289955830845554e+02
            Strand		 2 17 23 44 47
            Start		  7.7179166890795139e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 19 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  4.3945040870000003e+03
            Strand		 2 19 3 24 46
            Start		  4.5634892421668439e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 19 4 29 46
            Start		  4.6374288520665170e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 19 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 19 4 35 46
            Start		  4.6327172836616497e+04
            Stop		  4.6460224885735610e+04
            Strand		 2 19 4 42 45
            Start		  4.1529312880838124e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 19 4 42 46
            Start		  4.5882052905744487e+04
            Stop		  4.6573853051103186e+04
            Strand		 2 19 5 32 46
            Start		  4.6089669317113679e+04
            Stop		  4.6414548536554314e+04
            Strand		 2 19 5 33 45
            Start		  2.3654540444359651e+02
            Stop		  3.7544582598933556e+02
            Strand		 2 19 5 35 45
            Start		  1.0016105163520029e+03
            Stop		  1.1312892354345045e+03
            Strand		 2 19 5 40 45
            Start		  1.4042189586537254e+03
            Stop		  1.6005871616518843e+03
            Start		  4.3606109353801148e+03
            Stop		  4.3945039289999995e+03
            Strand		 2 19 5 40 46
            Start		  4.6089728339777859e+04
            Stop		  4.6279878581248355e+04
            Strand		 2 19 5 41 45
            Start		  6.0043261999999999e+01
            Stop		  2.2325311583849350e+02
            Strand		 2 19 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  4.3944948189999996e+03
            Strand		 2 19 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 19 7 35 45
            Start		  2.9007683825006957e+03
            Stop		  3.0909553488338192e+03
            Strand		 2 19 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 19 7 40 45
            Start		  3.4880229404913903e+03
            Stop		  3.6151577252877337e+03
            Strand		 2 19 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 19 7 43 45
            Start		  2.7661481654056970e+03
            Stop		  3.3793962491982611e+03
            Strand		 2 19 8 29 46
            Start		  4.5634892421668439e+04
            Stop		  4.6703451721999998e+04
            Strand		 2 19 8 30 45
            Start		  2.7204022923045586e+03
            Stop		  3.2986229655621528e+03
            Strand		 2 19 8 37 45
            Start		  4.1099442810279497e+03
            Stop		  4.2516581959971745e+03
            Strand		 2 19 8 40 45
            Start		  2.7204101489886966e+03
            Stop		  2.8534517020941289e+03
            Strand		 2 19 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  4.3944997640000001e+03
            Strand		 2 19 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 2 19 10 40 45
            Start		  1.9951679737490729e+03
            Stop		  2.1248310890690891e+03
            Strand		 2 19 10 40 46
            Start		  4.6559040384486543e+04
            Stop		  4.6686169144604173e+04
            Strand		 2 19 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450924735044964e+02
            Strand		 2 19 11 32 46
            Start		  4.5735695069129702e+04
            Stop		  4.6703458376999995e+04
            Strand		 2 19 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 19 11 42 45
            Start		  3.1163701506536672e+03
            Stop		  3.2613859626793596e+03
            Strand		 2 19 12 27 45
            Start		  3.7597843121790461e+03
            Stop		  4.0844707976405962e+03
            Strand		 2 19 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 2 19 12 37 45
            Start		  2.7221210854738133e+03
            Stop		  3.3543378179378906e+03
            Strand		 2 19 12 40 45
            Start		  3.8943723432058873e+03
            Stop		  4.0844707976405962e+03
            Strand		 2 19 12 40 46
            Start		  4.5634892421668439e+04
            Stop		  4.5813592443054549e+04
            Strand		 2 19 12 43 45
            Start		  2.6109864526098177e+03
            Stop		  2.7440227268575718e+03
            Strand		 2 19 13 24 45
            Start		  1.1147700395992097e+03
            Stop		  1.2536647673027373e+03
            Start		  3.7139842334491764e+03
            Stop		  3.8470293391951745e+03
            Strand		 2 19 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5637177943188312e+03
            Strand		 2 19 13 30 45
            Start		  3.1035498964664025e+03
            Stop		  3.7997811049599864e+03
            Strand		 2 19 13 38 46
            Start		  4.5634892421668439e+04
            Stop		  4.6021370468229026e+04
            Strand		 2 19 13 40 45
            Start		  1.2668298664199422e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.6984342309074391e+03
            Strand		 2 19 13 41 45
            Start		  6.0043261999999999e+01
            Stop		  8.5958200452468887e+01
            Strand		 2 19 13 42 45
            Start		  2.6997875513755303e+03
            Stop		  2.8448143287324920e+03
            Strand		 2 19 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.8891104721613151e+03
            Strand		 2 19 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 19 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  4.3945017829999997e+03
            Strand		 2 19 14 35 46
            Start		  4.5634892421668439e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 19 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 2 19 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 19 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 19 16 29 46
            Start		  4.5839057941739433e+04
            Stop		  4.5984058959636735e+04
            Strand		 2 19 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 19 16 37 45
            Start		  2.7221210854738133e+03
            Stop		  4.3944996940000001e+03
            Strand		 2 19 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 19 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  3.1472599270283408e+03
            Strand		 2 19 17 38 46
            Start		  4.5634892421668439e+04
            Stop		  4.6703452747999996e+04
            Strand		 2 19 17 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 19 18 24 45
            Start		  2.2603918312987239e+03
            Stop		  2.8815798609506337e+03
            Start		  3.0795971733900333e+03
            Stop		  3.6919241850389699e+03
            Strand		 2 19 18 27 45
            Start		  6.0037262999999996e+01
            Stop		  1.3773081971602508e+02
            Start		  2.8428187932636502e+03
            Stop		  2.9699494367996190e+03
            Strand		 2 19 18 30 45
            Start		  1.3524886498574097e+03
            Stop		  1.4821592182916540e+03
            Strand		 2 19 18 32 46
            Start		  4.6436650070273907e+04
            Stop		  4.6569696652597930e+04
            Strand		 2 19 18 35 45
            Start		  4.1447279058516961e+02
            Stop		  6.0703946135007175e+02
            Start		  3.3670751768210880e+03
            Stop		  3.5572437882761164e+03
            Strand		 2 19 18 38 46
            Start		  4.5826254110837188e+04
            Stop		  4.6522439338621218e+04
            Strand		 2 19 18 39 45
            Start		  4.3460196776674811e+03
            Stop		  4.3945082130000001e+03
            Strand		 2 19 20 24 46
            Start		  4.6617026648799605e+04
            Stop		  4.6703458679999996e+04
            Strand		 2 19 20 27 45
            Start		  3.6045204271217126e+03
            Stop		  3.7375637025367387e+03
            Strand		 2 19 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 2 19 20 35 46
            Start		  4.6482448006892686e+04
            Stop		  4.6703456608000000e+04
            Strand		 2 19 20 37 45
            Start		  3.1593962360483915e+03
            Stop		  3.8511728174085843e+03
            Strand		 2 19 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 2 19 20 42 45
            Start		  3.6516662077090846e+03
            Stop		  4.3478662689594312e+03
            Strand		 2 19 20 42 46
            Start		  4.5634892421668439e+04
            Stop		  4.6076990733798804e+04
            Strand		 2 19 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 2 19 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 19 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 2 19 21 42 45
            Start		  2.6894365408898211e+03
            Stop		  4.3944997210000001e+03
            Strand		 2 19 21 42 46
            Start		  4.5634892421668439e+04
            Stop		  4.6703464905000001e+04
            Strand		 2 19 22 30 45
            Start		  4.1901310429165833e+03
            Stop		  4.3351328118086303e+03
            Strand		 2 19 22 43 45
            Start		  6.0035751999999995e+01
            Stop		  3.3863886548372107e+03
            Strand		 2 19 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  8.7044250076385526e+02
            Strand		 2 19 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 2 19 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7044250076385526e+02
            Strand		 2 20 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 20 4 33 46
            Start		  4.5342280073068425e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 20 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.5070704356462345e+04
            Strand		 2 20 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 2 20 5 26 47
            Start		  7.7765331762172907e+04
            Stop		  8.0340205830999999e+04
            Strand		 2 20 5 30 46
            Start		  4.3605811354052174e+04
            Stop		  4.3802175337874032e+04
            Strand		 2 20 5 38 46
            Start		  4.4075169478515534e+04
            Stop		  4.4204824897160041e+04
            Strand		 2 20 5 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3329708787777614e+04
            Strand		 2 20 6 26 47
            Start		  7.9223791736379848e+04
            Stop		  7.9309538250559315e+04
            Strand		 2 20 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 2 20 7 28 47
            Start		  7.7765331762172907e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 20 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 2 20 7 40 46
            Start		  4.5217144536657848e+04
            Stop		  4.5344282546115552e+04
            Strand		 2 20 8 29 46
            Start		  4.5169674764780320e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.5027744538821244e+04
            Strand		 2 20 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 2 20 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 2 20 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 2 20 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 20 8 41 47
            Start		  7.9991412490646355e+04
            Stop		  8.0118547354195194e+04
            Strand		 2 20 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9882785793236355e+04
            Start		  8.0078703818298876e+04
            Stop		  8.0118547354195194e+04
            Strand		 2 20 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 20 9 30 47
            Start		  7.7765331762172907e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 20 10 24 46
            Start		  4.4126887694854144e+04
            Stop		  4.4323243179967911e+04
            Strand		 2 20 10 31 46
            Start		  4.3219267849606156e+04
            Stop		  4.3345096702431125e+04
            Strand		 2 20 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 2 20 10 38 46
            Start		  4.4599366691069044e+04
            Stop		  4.4795732450285963e+04
            Strand		 2 20 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 2 20 10 40 46
            Start		  4.3724288879628031e+04
            Stop		  4.3853957157788675e+04
            Strand		 2 20 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 20 11 39 47
            Start		  7.7765331762172907e+04
            Stop		  7.7872372009142753e+04
            Strand		 2 20 11 41 47
            Start		  7.8498556854081224e+04
            Stop		  7.8628224923920730e+04
            Strand		 2 20 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4990507510731732e+04
            Strand		 2 20 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 12 33 47
            Start		  7.7765331762172907e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 20 13 26 47
            Start		  7.7765331762172907e+04
            Stop		  7.7857886314429226e+04
            Start		  8.0116543209387528e+04
            Stop		  8.0261543134538762e+04
            Strand		 2 20 13 28 47
            Start		  8.0263174022273553e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 20 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9361043908726700e+04
            Strand		 2 20 13 38 46
            Start		  4.5329542403752195e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9857722623146023e+04
            Strand		 2 20 13 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 2 20 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 2 20 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247416409047553e+04
            Strand		 2 20 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 2 20 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 20 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 2 20 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 2 20 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8392497545670893e+04
            Strand		 2 20 15 24 46
            Start		  4.4717843455610528e+04
            Stop		  4.4847501834608978e+04
            Strand		 2 20 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 2 20 15 30 46
            Start		  4.3317376458893028e+04
            Stop		  4.3939430832193284e+04
            Strand		 2 20 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 20 15 36 47
            Start		  7.7765331762172907e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 20 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 2 20 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.5083538088222507e+04
            Strand		 2 20 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 20 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 20 17 39 47
            Start		  7.7765331762172907e+04
            Stop		  7.7815019931310715e+04
            Strand		 2 20 18 24 46
            Start		  4.3989511957147392e+04
            Stop		  4.4610701576532672e+04
            Start		  4.4808722911277873e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 2 20 18 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.3211280787703567e+04
            Strand		 2 20 18 35 46
            Start		  4.5096196806577856e+04
            Stop		  4.5286365318388649e+04
            Strand		 2 20 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 20 18 39 47
            Start		  7.7765331762172907e+04
            Stop		  7.9039371821339722e+04
            Strand		 2 20 19 28 47
            Start		  7.9346208352899164e+04
            Stop		  7.9473338997822633e+04
            Strand		 2 20 19 30 47
            Start		  7.8611729168189471e+04
            Stop		  7.8750623098391967e+04
            Strand		 2 20 19 33 47
            Start		  7.9870460157602211e+04
            Stop		  8.0060633348888106e+04
            Strand		 2 20 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.5404291497193764e+04
            Strand		 2 20 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 2 20 22 30 47
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 2 20 22 33 46
            Start		  4.4334249401186062e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 20 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 2 20 22 39 47
            Start		  7.7765331762172907e+04
            Stop		  7.8316010505344981e+04
            Strand		 2 20 23 30 46
            Start		  4.4946307926853704e+04
            Stop		  4.5085207865545759e+04
            Strand		 2 20 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 2 20 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4933019772875239e+04
            Strand		 2 20 23 44 47
            Start		  7.7765331762172907e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 21 3 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.5620143374375504e+04
            Strand		 2 21 3 36 47
            Start		  7.6017202249236099e+04
            Stop		  7.6144346207543058e+04
            Strand		 2 21 3 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.5908588139076601e+04
            Start		  7.6104511076371171e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 5 37 47
            Start		  7.6127867556585683e+04
            Stop		  7.6266749087323478e+04
            Strand		 2 21 6 39 47
            Start		  7.5868778556114339e+04
            Stop		  7.5998443474048778e+04
            Strand		 2 21 7 28 47
            Start		  7.5600036968999993e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 9 30 47
            Start		  7.6464765233225393e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 9 34 47
            Start		  7.6129596078741248e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 9 44 47
            Start		  7.6243157215497049e+04
            Stop		  7.6376202954874796e+04
            Strand		 2 21 10 31 47
            Start		  7.5604834894785730e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 11 36 47
            Start		  7.6423536242815549e+04
            Stop		  7.6613703648122770e+04
            Strand		 2 21 12 37 47
            Start		  7.5684130887985622e+04
            Stop		  7.6380300600222938e+04
            Strand		 2 21 13 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5870785696398496e+04
            Strand		 2 21 14 28 47
            Start		  7.5920507724121126e+04
            Stop		  7.6116863459259461e+04
            Strand		 2 21 14 39 47
            Start		  7.6392979040202990e+04
            Stop		  7.6589347738471290e+04
            Strand		 2 21 14 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.5647569146941489e+04
            Strand		 2 21 15 36 47
            Start		  7.5995797151773819e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 16 37 47
            Start		  7.5600037725999995e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 17 31 47
            Start		  7.5896266912777137e+04
            Stop		  7.6086454130070095e+04
            Strand		 2 21 17 34 47
            Start		  7.6626302081586415e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 17 44 47
            Start		  7.5608807121223916e+04
            Stop		  7.6221157158777016e+04
            Strand		 2 21 18 39 47
            Start		  7.5600045146999997e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 19 28 47
            Start		  7.6511456446785465e+04
            Stop		  7.6641120380756678e+04
            Strand		 2 21 19 34 47
            Start		  7.5600043762999994e+04
            Stop		  7.5733066285832538e+04
            Strand		 2 21 20 28 47
            Start		  7.5645570943592131e+04
            Stop		  7.5787278582499217e+04
            Strand		 2 21 20 37 47
            Start		  7.6185358968459812e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 22 28 47
            Start		  7.5783149691542887e+04
            Stop		  7.6404310027288768e+04
            Start		  7.6602327668304570e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 21 22 31 47
            Start		  7.6365552461674437e+04
            Stop		  7.6492670507567993e+04
            Strand		 2 21 23 44 47
            Start		  7.5600053062430670e+04
            Stop		  7.6702044346635666e+04
            Strand		 2 22 3 24 45
            Start		  6.0048305999999997e+01
            Stop		  2.5493245522686648e+03
            Strand		 2 22 3 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 3 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 22 4 33 45
            Start		  1.2094975603532698e+03
            Stop		  1.3544875475832150e+03
            Strand		 2 22 4 38 46
            Start		  4.4929005102873271e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 4 42 46
            Start		  4.3342369963544545e+04
            Stop		  4.4038487655715006e+04
            Strand		 2 22 6 27 45
            Start		  6.0037262999999996e+01
            Stop		  2.5493245522686648e+03
            Strand		 2 22 7 24 45
            Start		  1.1723240279843799e+03
            Stop		  1.8640950656691368e+03
            Strand		 2 22 7 24 46
            Start		  4.3200048689999996e+04
            Stop		  4.3593214242139904e+04
            Strand		 2 22 7 28 46
            Start		  4.3237609540759542e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 22 7 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4820076979909267e+04
            Strand		 2 22 7 38 45
            Start		  1.6174129074472428e+03
            Stop		  1.7504549068088827e+03
            Strand		 2 22 7 41 45
            Start		  2.1922412410142232e+02
            Stop		  3.6092623081139129e+02
            Strand		 2 22 8 30 46
            Start		  4.4335975243648812e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 8 35 45
            Start		  1.3799007589949290e+03
            Stop		  1.7048090261505220e+03
            Strand		 2 22 8 40 46
            Start		  4.4449535511290131e+04
            Stop		  4.4582573292079607e+04
            Strand		 2 22 8 43 45
            Start		  1.3799597812593463e+03
            Stop		  1.5701190829096604e+03
            Strand		 2 22 9 30 45
            Start		  6.0037189999999995e+01
            Stop		  2.5493245522686648e+03
            Strand		 2 22 9 30 46
            Start		  4.3200045485999995e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 10 38 45
            Start		  6.0037861999999997e+01
            Stop		  1.1031872759773016e+02
            Strand		 2 22 10 43 45
            Start		  5.0739281251247479e+02
            Stop		  6.3450605411922038e+02
            Strand		 2 22 11 33 45
            Start		  6.0041362999999997e+01
            Stop		  3.1799798892735595e+02
            Strand		 2 22 11 33 46
            Start		  4.3890487338176004e+04
            Stop		  4.4586692452116942e+04
            Strand		 2 22 11 40 45
            Start		  1.1293022387437902e+03
            Stop		  1.2710086601826310e+03
            Strand		 2 22 11 42 46
            Start		  4.4845496026004788e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 12 33 45
            Start		  6.0041362999999997e+01
            Stop		  1.4768307637209587e+03
            Strand		 2 22 12 33 46
            Start		  4.3200038781999996e+04
            Stop		  4.4473136547860093e+04
            Strand		 2 22 13 27 45
            Start		  2.3735294573550182e+03
            Stop		  2.5493245522686648e+03
            Strand		 2 22 13 30 46
            Start		  4.4832671501168385e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 13 40 45
            Start		  1.8492717806797796e+03
            Stop		  1.8880622087645258e+03
            Start		  2.0860807465661733e+03
            Stop		  2.5493245522686648e+03
            Strand		 2 22 13 40 46
            Start		  4.3578389470760099e+04
            Stop		  4.3617180471081330e+04
            Start		  4.3815199283115951e+04
            Stop		  4.4427555832139180e+04
            Strand		 2 22 13 42 46
            Start		  4.4428909120344841e+04
            Stop		  4.4573939752978695e+04
            Strand		 2 22 13 43 45
            Start		  1.8492749728162671e+03
            Stop		  1.9764101533767250e+03
            Strand		 2 22 14 24 45
            Start		  1.3572688655238713e+02
            Stop		  2.8072678582723864e+02
            Strand		 2 22 14 35 45
            Start		  4.1447279058516961e+02
            Stop		  2.5493245522686648e+03
            Strand		 2 22 14 35 46
            Start		  4.4738283316917797e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 14 42 46
            Start		  4.3455979838926454e+04
            Stop		  4.3594864720171594e+04
            Strand		 2 22 15 30 45
            Start		  7.7915245942627973e+02
            Stop		  1.1038201520506848e+03
            Strand		 2 22 15 40 45
            Start		  3.5879400241598574e+02
            Stop		  3.7366774697514705e+02
            Strand		 2 22 15 43 45
            Start		  9.1372110720208809e+02
            Stop		  1.1038201520506848e+03
            Strand		 2 22 16 24 45
            Start		  2.1228397491054989e+03
            Stop		  2.2645459023098620e+03
            Strand		 2 22 16 24 46
            Start		  4.3851965370655955e+04
            Stop		  4.3993667465546801e+04
            Strand		 2 22 16 27 45
            Start		  7.3333394566186792e+02
            Stop		  8.6638186202818122e+02
            Strand		 2 22 16 33 45
            Start		  1.2291728175477766e+02
            Stop		  8.1914229707263848e+02
            Strand		 2 22 16 33 46
            Start		  4.4391790490978179e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 16 41 45
            Start		  6.1977968032679530e+02
            Stop		  1.0077942511511961e+03
            Strand		 2 22 17 28 46
            Start		  4.3340671553197237e+04
            Stop		  4.3354552569789594e+04
            Strand		 2 22 17 38 45
            Start		  6.0037861999999997e+01
            Stop		  2.5493245522686648e+03
            Strand		 2 22 17 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 19 40 45
            Start		  3.5879400241598574e+02
            Stop		  2.5493245522686648e+03
            Strand		 2 22 19 40 46
            Start		  4.3200046847999998e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 20 30 45
            Start		  2.2063445793319429e+03
            Stop		  2.3480524351002796e+03
            Strand		 2 22 20 30 46
            Start		  4.3935463816564872e+04
            Stop		  4.4077173348361845e+04
            Strand		 2 22 20 41 45
            Start		  6.0043261999999999e+01
            Stop		  1.0077942511511961e+03
            Strand		 2 22 20 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.3537520014729846e+04
            Strand		 2 22 21 27 45
            Start		  9.8938356436276024e+01
            Stop		  7.1123114113683107e+02
            Strand		 2 22 21 35 45
            Start		  1.7268661197630224e+03
            Stop		  1.8599085196704250e+03
            Strand		 2 22 21 38 45
            Start		  3.8641276052852953e+02
            Stop		  5.7656548894437219e+02
            Strand		 2 22 21 42 46
            Start		  4.3200036986999999e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 23 24 45
            Start		  6.7097156281790956e+02
            Stop		  1.3672212038433343e+03
            Strand		 2 22 23 27 45
            Start		  1.9072253617747531e+03
            Stop		  2.0974060764578503e+03
            Strand		 2 22 23 30 45
            Start		  6.2385592484102233e+02
            Stop		  7.5690284523746720e+02
            Strand		 2 22 23 33 46
            Start		  4.3355193751205225e+04
            Stop		  4.3500215157606617e+04
            Strand		 2 22 23 35 45
            Start		  2.4944709710330203e+03
            Stop		  2.5493245522686648e+03
            Strand		 2 22 23 38 45
            Start		  1.7726252403066505e+03
            Stop		  2.3858658683381177e+03
            Strand		 2 22 23 38 46
            Start		  4.3781715455268539e+04
            Stop		  4.4114987488863342e+04
            Start		  4.4310913028485316e+04
            Stop		  4.4929027237950708e+04
            Strand		 2 22 23 40 45
            Start		  3.5879400241598574e+02
            Stop		  8.7052120853547842e+02
            Strand		 2 23 4 35 47
            Start		  8.0217361581131336e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 23 5 26 47
            Start		  7.7336250920413630e+04
            Stop		  8.0340205830999999e+04
            Strand		 2 23 6 26 47
            Start		  7.8613398018314008e+04
            Stop		  7.9309538250559315e+04
            Strand		 2 23 6 33 47
            Start		  7.7883294904616530e+04
            Stop		  7.8208198579857679e+04
            Strand		 2 23 6 41 47
            Start		  7.9223799593143485e+04
            Stop		  7.9356841253531995e+04
            Strand		 2 23 6 44 47
            Start		  7.7883353920290392e+04
            Stop		  7.8073508634380312e+04
            Strand		 2 23 7 28 47
            Start		  7.7336250920413630e+04
            Stop		  8.0340207139999999e+04
            Strand		 2 23 8 30 47
            Start		  7.8167934436860203e+04
            Stop		  7.8864188440426879e+04
            Strand		 2 23 8 33 47
            Start		  7.9404161288885836e+04
            Stop		  7.9594349437920406e+04
            Strand		 2 23 8 36 47
            Start		  7.8120798865088815e+04
            Stop		  7.8253845026957177e+04
            Strand		 2 23 8 41 47
            Start		  8.0079752187905164e+04
            Stop		  8.0118550546052778e+04
            Strand		 2 23 8 44 47
            Start		  7.9269536944777297e+04
            Stop		  7.9881737623492168e+04
            Start		  8.0079752187905164e+04
            Stop		  8.0340205507999999e+04
            Strand		 2 23 9 30 47
            Start		  7.7336250920413630e+04
            Stop		  8.0340211291999993e+04
            Strand		 2 23 10 31 47
            Start		  7.7336250920413630e+04
            Stop		  7.7759359124965384e+04
            Strand		 2 23 10 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0298814636163821e+04
            Strand		 2 23 10 39 47
            Start		  7.8706420259070670e+04
            Stop		  7.8851441027043882e+04
            Strand		 2 23 11 44 47
            Start		  7.9842979329793539e+04
            Stop		  7.9972650068662377e+04
            Strand		 2 23 12 33 47
            Start		  7.7336250920413630e+04
            Stop		  8.0340215046999991e+04
            Strand		 2 23 13 26 47
            Start		  7.7716167733076436e+04
            Stop		  7.7857886314429226e+04
            Strand		 2 23 13 30 47
            Start		  7.8669315383655223e+04
            Stop		  7.9247408552547218e+04
            Strand		 2 23 13 38 47
            Start		  7.9161557678393467e+04
            Stop		  7.9247408552547218e+04
            Strand		 2 23 13 44 47
            Start		  7.9114373651164395e+04
            Stop		  7.9247408552547218e+04
            Strand		 2 23 14 28 47
            Start		  7.8876922894515359e+04
            Stop		  7.9067107371457707e+04
            Strand		 2 23 14 35 47
            Start		  7.9830302856975162e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 23 14 41 47
            Start		  7.8589469820538186e+04
            Stop		  7.9201823822535895e+04
            Strand		 2 23 14 44 47
            Start		  7.8352660439261919e+04
            Stop		  7.8479799722104537e+04
            Strand		 2 23 15 26 47
            Start		  7.9699943345327512e+04
            Stop		  7.9844972070210119e+04
            Strand		 2 23 15 35 47
            Start		  8.0103728921173330e+04
            Stop		  8.0340211985999995e+04
            Strand		 2 23 15 36 47
            Start		  7.7336250920413630e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 23 16 31 47
            Start		  7.7336250920413630e+04
            Stop		  7.7607205187996238e+04
            Strand		 2 23 16 44 47
            Start		  7.7417112713295341e+04
            Stop		  7.7607205187996238e+04
            Strand		 2 23 17 28 47
            Start		  7.7336250920413630e+04
            Stop		  7.7369771430123306e+04
            Strand		 2 23 17 38 47
            Start		  7.8954879899878957e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 23 17 39 47
            Start		  7.7336250920413630e+04
            Stop		  7.7815019931310715e+04
            Strand		 2 23 18 28 47
            Start		  8.0107906896448243e+04
            Stop		  8.0240950733330770e+04
            Strand		 2 23 18 38 47
            Start		  7.9662785774580785e+04
            Stop		  8.0340201293999999e+04
            Strand		 2 23 18 39 47
            Start		  7.7336250920413630e+04
            Stop		  7.9039371821339722e+04
            Strand		 2 23 20 30 47
            Start		  7.7632687084206482e+04
            Stop		  7.7777693616952747e+04
            Strand		 2 23 20 41 47
            Start		  7.8443532036160366e+04
            Stop		  8.0340211121999993e+04
            Strand		 2 23 21 28 47
            Start		  7.8410615470546181e+04
            Stop		  7.8600800257278068e+04
            Strand		 2 23 21 33 47
            Start		  7.8997860518153087e+04
            Stop		  7.9124999323664815e+04
            Strand		 2 23 21 36 47
            Start		  7.8276016391313300e+04
            Stop		  7.8889258118656886e+04
            Start		  7.9085180978539327e+04
            Stop		  7.9248269590057957e+04
            Strand		 2 23 22 26 47
            Start		  7.8116716671209855e+04
            Stop		  7.8808521779158225e+04
            Strand		 2 23 22 30 47
            Start		  7.7336250920413630e+04
            Stop		  7.7361091150357213e+04
            Start		  7.9619765882231455e+04
            Stop		  7.9761482316157504e+04
            Strand		 2 23 22 33 47
            Start		  7.8230260330851408e+04
            Stop		  7.8363298072889360e+04
            Strand		 2 23 22 39 47
            Start		  7.7619868166778135e+04
            Stop		  7.8316010505344981e+04
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

                StaticColor		 #ffff00
                AnimationColor		 #ff00ff
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

