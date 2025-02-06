stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile77Chain
    BEGIN Definition
        Object		 Aircraft/Missile77
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 20:51:52.000000000
                Stop		 3 Feb 2025 21:26:53.785983999
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
            STKInst		 Aircraft/Missile77
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  5.3512000000000000e+04
            Stop		  5.3565231647515793e+04
            Strand		 0 4
            Start		  5.5235207223250574e+04
            Stop		  5.5613785983999398e+04
            Strand		 0 5
            Start		  5.4395286862513283e+04
            Stop		  5.5137685433648658e+04
            Strand		 0 6
            Start		  5.3699210734721673e+04
            Stop		  5.4402910158252809e+04
            Strand		 0 9
            Start		  5.5110775888902463e+04
            Stop		  5.5613785983999398e+04
            Strand		 0 10
            Start		  5.4628825050913219e+04
            Stop		  5.4749182091535105e+04
            Strand		 0 14
            Start		  5.4938753671678031e+04
            Stop		  5.5613785983999398e+04
            Strand		 0 15
            Start		  5.4044102815215934e+04
            Stop		  5.4946806949902108e+04
            Strand		 0 21
            Start		  5.3512000000000000e+04
            Stop		  5.3804941060878322e+04
            Strand		 0 26
            Start		  5.5087042509058294e+04
            Stop		  5.5613785983999398e+04
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

