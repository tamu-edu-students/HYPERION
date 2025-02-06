stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile36Chain
    BEGIN Definition
        Object		 Aircraft/Missile36
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 14:42:01.000000000
                Stop		 3 Feb 2025 16:11:27.616668392
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
            STKInst		 Aircraft/Missile36
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
            Start		  3.2975448865317325e+04
            Stop		  3.3871799811190082e+04
            Strand		 0 2
            Start		  3.2248194524530754e+04
            Stop		  3.2898756617968851e+04
            Strand		 0 5
            Start		  3.4882980524086197e+04
            Stop		  3.5299617169213532e+04
            Strand		 0 6
            Start		  3.3864200904415469e+04
            Stop		  3.4672916746253461e+04
            Strand		 0 7
            Start		  3.1561188819745421e+04
            Stop		  3.2526480706442566e+04
            Strand		 0 11
            Start		  3.4165139768518660e+04
            Stop		  3.5386942801464305e+04
            Strand		 0 12
            Start		  3.2827216689014727e+04
            Stop		  3.4190281468654444e+04
            Strand		 0 15
            Start		  3.6219741583020834e+04
            Stop		  3.6687616668392169e+04
            Strand		 0 16
            Start		  3.4544114704189262e+04
            Stop		  3.6168127191220738e+04
            Strand		 0 17
            Start		  3.3041239935129495e+04
            Stop		  3.4568702950400067e+04
            Strand		 0 18
            Start		  3.1775893239837242e+04
            Stop		  3.2925389554753834e+04
            Strand		 0 21
            Start		  3.4782474786619059e+04
            Stop		  3.5727756420316444e+04
            Strand		 0 22
            Start		  3.3842829177599982e+04
            Stop		  3.4797622860044125e+04
            Strand		 0 23
            Start		  3.3221309742219812e+04
            Stop		  3.3628993850817758e+04
            Strand		 0 25
            Start		  3.1321000000000000e+04
            Stop		  3.1952504224015054e+04
            Start		  3.5841061287488687e+04
            Stop		  3.6646279090500466e+04
            Strand		 0 26
            Start		  3.5068666178445572e+04
            Stop		  3.5847748088511878e+04
            Strand		 0 27
            Start		  3.4318955729846137e+04
            Stop		  3.5033884590752954e+04
            Strand		 0 28
            Start		  3.3572852635640011e+04
            Stop		  3.4229033592196211e+04
            Strand		 0 29
            Start		  3.2806407286625938e+04
            Stop		  3.3448570614592980e+04
            Strand		 0 30
            Start		  3.2013476806419589e+04
            Stop		  3.2696489589750148e+04
            Start		  3.6652113377090667e+04
            Stop		  3.6687616668392169e+04
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

                StaticColor		 #ff0000
                AnimationColor		 #ffffff
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

