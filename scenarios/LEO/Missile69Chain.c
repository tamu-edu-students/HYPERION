stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile69Chain
    BEGIN Definition
        Object		 Aircraft/Missile69
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 07:46:02.000000000
                Stop		 3 Feb 2025 09:49:52.662521579
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
            STKInst		 Aircraft/Missile69
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
            Start		  6.4121862404322128e+03
            Stop		  7.8778229886177687e+03
            Strand		 0 2
            Start		  6.3620000000000000e+03
            Stop		  6.3805044276773024e+03
            Strand		 0 3
            Start		  1.2329723829829893e+04
            Stop		  1.3552215372596893e+04
            Strand		 0 4
            Start		  1.0812178742591606e+04
            Stop		  1.2213641669378549e+04
            Strand		 0 5
            Start		  9.3343195323388463e+03
            Stop		  1.0809414670098718e+04
            Strand		 0 6
            Start		  7.8650891095788129e+03
            Stop		  9.3561207502141169e+03
            Strand		 0 9
            Start		  1.1076513386945138e+04
            Stop		  1.2114212292125423e+04
            Strand		 0 10
            Start		  9.8107656350325797e+03
            Stop		  1.1014403429538297e+04
            Strand		 0 11
            Start		  8.7865148998330023e+03
            Stop		  9.8124960898627050e+03
            Strand		 0 13
            Start		  7.2455323688677172e+03
            Stop		  7.3291390000660631e+03
            Start		  1.2053077661247484e+04
            Stop		  1.2677077359826397e+04
            Strand		 0 14
            Start		  1.1069220618960755e+04
            Stop		  1.1928433134182396e+04
            Strand		 0 15
            Start		  1.0184930010911832e+04
            Stop		  1.1076853440004637e+04
            Strand		 0 16
            Start		  9.3701110282603695e+03
            Stop		  1.0176891127779414e+04
            Strand		 0 17
            Start		  8.6121558019950335e+03
            Stop		  9.2477742293124629e+03
            Strand		 0 18
            Start		  7.9002690691047956e+03
            Stop		  8.3042936991086863e+03
            Strand		 0 19
            Start		  6.4565482005901531e+03
            Stop		  7.0788888884279522e+03
            Start		  1.1492813384501313e+04
            Stop		  1.2083665153617114e+04
            Strand		 0 20
            Start		  1.0642968338396280e+04
            Stop		  1.1295554902098758e+04
            Strand		 0 21
            Start		  9.7672186867226355e+03
            Stop		  1.0516736280002668e+04
            Strand		 0 22
            Start		  8.8898331517690676e+03
            Stop		  9.7248191607264980e+03
            Strand		 0 23
            Start		  8.0264679955542088e+03
            Stop		  8.8977129173458688e+03
            Start		  1.3090240986910092e+04
            Stop		  1.3745045291129283e+04
            Strand		 0 24
            Start		  7.2021121690668251e+03
            Stop		  8.0242824171009779e+03
            Start		  1.2305888437895330e+04
            Stop		  1.2900362155602494e+04
            Strand		 0 26
            Start		  1.0253457142103545e+04
            Stop		  1.1033101929596140e+04
            Strand		 0 27
            Start		  9.0788816294089556e+03
            Stop		  1.0172988141228461e+04
            Strand		 0 28
            Start		  8.0338695272444820e+03
            Stop		  9.0852925893742631e+03
            Strand		 0 29
            Start		  7.3509640086590898e+03
            Stop		  7.5553743133200933e+03
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

                StaticColor		 #ffffff
                AnimationColor		 #00ff00
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

