stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile51Chain
    BEGIN Definition
        Object		 Aircraft/Missile51
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 4 Feb 2025 01:05:12.000000000
                Stop		 4 Feb 2025 02:17:31.419103722
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
            STKInst		 Aircraft/Missile51
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
            Strand		 0 1
            Start		  7.0342124826124680e+04
            Stop		  7.1076728891819774e+04
            Strand		 0 5
            Start		  7.2164731181761803e+04
            Stop		  7.2524570909458795e+04
            Strand		 0 6
            Start		  7.1087899754881815e+04
            Stop		  7.1983647727921998e+04
            Strand		 0 7
            Start		  6.8712000000000000e+04
            Stop		  7.0004200992868631e+04
            Strand		 0 12
            Start		  7.0133197231370592e+04
            Stop		  7.1193144515415173e+04
            Strand		 0 17
            Start		  7.1975836161365500e+04
            Stop		  7.3051419103721812e+04
            Strand		 0 18
            Start		  7.1415002445942824e+04
            Stop		  7.1609270533923293e+04
            Strand		 0 19
            Start		  6.9875809394570286e+04
            Stop		  7.0310483211372863e+04
            Strand		 0 22
            Start		  7.2242755411166683e+04
            Stop		  7.2493521767233382e+04
            Strand		 0 23
            Start		  7.1218459416776954e+04
            Stop		  7.2004052524856452e+04
            Strand		 0 24
            Start		  7.0458269420765922e+04
            Stop		  7.1233655665625061e+04
            Strand		 0 25
            Start		  6.9292694872814434e+04
            Stop		  6.9628413156057737e+04
            Strand		 0 26
            Start		  6.8712000000000000e+04
            Stop		  6.8958630534166718e+04
            Start		  7.2636051698196999e+04
            Stop		  7.3051419103721812e+04
            Strand		 0 27
            Start		  7.1954093571639198e+04
            Stop		  7.2571245131455464e+04
            Strand		 0 28
            Start		  7.1282517504105082e+04
            Stop		  7.1830304210578382e+04
            Strand		 0 29
            Start		  7.0626924244054797e+04
            Stop		  7.1085190337120133e+04
            Strand		 0 30
            Start		  6.9971802364931646e+04
            Stop		  7.0343361138266569e+04
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

                StaticColor		 #00ffff
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

