stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Sensors2Missile
    BEGIN Definition
        Object		 Constellation/LEOSatsSensors
        Object		 Missile/HypersonicMissile
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 19 Mar 2025 02:26:28.000000000
                Stop		 20 Mar 2025 02:26:28.000000000
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
            STKInst		 Satellite/LEOSats_P1_S1/Sensor/Sensor_P1_S1
            STKInst		 Satellite/LEOSats_P1_S2/Sensor/Sensor_P1_S2
            STKInst		 Satellite/LEOSats_P1_S3/Sensor/Sensor_P1_S3
            STKInst		 Satellite/LEOSats_P1_S4/Sensor/Sensor_P1_S4
            STKInst		 Satellite/LEOSats_P1_S5/Sensor/Sensor_P1_S5
            STKInst		 Satellite/LEOSats_P1_S6/Sensor/Sensor_P1_S6
            STKInst		 Satellite/LEOSats_P2_S1/Sensor/Sensor_P2_S1
            STKInst		 Satellite/LEOSats_P2_S2/Sensor/Sensor_P2_S2
            STKInst		 Satellite/LEOSats_P2_S3/Sensor/Sensor_P2_S3
            STKInst		 Satellite/LEOSats_P2_S4/Sensor/Sensor_P2_S4
            STKInst		 Satellite/LEOSats_P2_S5/Sensor/Sensor_P2_S5
            STKInst		 Satellite/LEOSats_P2_S6/Sensor/Sensor_P2_S6
            STKInst		 Satellite/LEOSats_P3_S1/Sensor/Sensor_P3_S1
            STKInst		 Satellite/LEOSats_P3_S2/Sensor/Sensor_P3_S2
            STKInst		 Satellite/LEOSats_P3_S3/Sensor/Sensor_P3_S3
            STKInst		 Satellite/LEOSats_P3_S4/Sensor/Sensor_P3_S4
            STKInst		 Satellite/LEOSats_P3_S5/Sensor/Sensor_P3_S5
            STKInst		 Satellite/LEOSats_P3_S6/Sensor/Sensor_P3_S6
            STKInst		 Satellite/LEOSats_P4_S1/Sensor/Sensor_P4_S1
            STKInst		 Satellite/LEOSats_P4_S2/Sensor/Sensor_P4_S2
            STKInst		 Satellite/LEOSats_P4_S3/Sensor/Sensor_P4_S3
            STKInst		 Satellite/LEOSats_P4_S4/Sensor/Sensor_P4_S4
            STKInst		 Satellite/LEOSats_P4_S5/Sensor/Sensor_P4_S5
            STKInst		 Satellite/LEOSats_P4_S6/Sensor/Sensor_P4_S6
            STKInst		 Satellite/LEOSats_P5_S1/Sensor/Sensor_P5_S1
            STKInst		 Satellite/LEOSats_P5_S2/Sensor/Sensor_P5_S2
            STKInst		 Satellite/LEOSats_P5_S3/Sensor/Sensor_P5_S3
            STKInst		 Satellite/LEOSats_P5_S4/Sensor/Sensor_P5_S4
            STKInst		 Satellite/LEOSats_P5_S5/Sensor/Sensor_P5_S5
            STKInst		 Satellite/LEOSats_P5_S6/Sensor/Sensor_P5_S6
            STKInst		 Missile/HypersonicMissile
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 4 30
            Start		  7.2374214896889898e+04
            Stop		  7.2905245062778413e+04
            Strand		 5 30
            Start		  7.1831348732402403e+04
            Stop		  7.2313334932996309e+04
            Strand		 8 30
            Start		  7.3023777353703932e+04
            Stop		  7.3449511314000003e+04
            Strand		 9 30
            Start		  7.2346934044748064e+04
            Stop		  7.2891738023807004e+04
            Strand		 10 30
            Start		  7.1895931843739221e+04
            Stop		  7.2255534093396491e+04
            Strand		 14 30
            Start		  7.2512671409047151e+04
            Stop		  7.2987159098956035e+04
            Strand		 15 30
            Start		  7.1858396670243907e+04
            Stop		  7.2385441230318524e+04
            Strand		 20 30
            Start		  7.2291250812771003e+04
            Stop		  7.2810520426960691e+04
            Strand		 26 30
            Start		  7.2067787936353780e+04
            Stop		  7.3420751191488569e+04
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

                StaticColor		 #ff00ff
                AnimationColor		 #ffff00
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

