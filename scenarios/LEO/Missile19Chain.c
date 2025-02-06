stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile19Chain
    BEGIN Definition
        Object		 Aircraft/Missile19
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 20:50:09.000000000
                Stop		 3 Feb 2025 21:32:32.097454432
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
            STKInst		 Aircraft/Missile19
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  5.3409000000000000e+04
            Stop		  5.3414217030512889e+04
            Strand		 0 5
            Start		  5.4341911087406654e+04
            Stop		  5.5044080850345112e+04
            Strand		 0 6
            Start		  5.3680382486525559e+04
            Stop		  5.4350991863622665e+04
            Strand		 0 8
            Start		  5.5581223344793492e+04
            Stop		  5.5952097454432434e+04
            Strand		 0 9
            Start		  5.5004362428766479e+04
            Stop		  5.5492197928992435e+04
            Strand		 0 10
            Start		  5.4488232336298068e+04
            Stop		  5.4738323357210211e+04
            Strand		 0 14
            Start		  5.4950445785847529e+04
            Stop		  5.5491113759918677e+04
            Strand		 0 15
            Start		  5.4053336871304200e+04
            Stop		  5.4912845454541675e+04
            Strand		 0 21
            Start		  5.3409000000000000e+04
            Stop		  5.3933331999172355e+04
            Strand		 0 26
            Start		  5.5043608670762231e+04
            Stop		  5.5952097454432434e+04
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

