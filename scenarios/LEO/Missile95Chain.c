stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile95Chain
    BEGIN Definition
        Object		 Aircraft/Missile95
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 17:30:48.000000000
                Stop		 3 Feb 2025 18:03:46.311124612
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
            STKInst		 Aircraft/Missile95
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 3
            Start		  4.3050884269285787e+04
            Stop		  4.3426311124612446e+04
            Strand		 0 4
            Start		  4.2489195825245573e+04
            Stop		  4.2949939849899638e+04
            Strand		 0 5
            Start		  4.1923324529197111e+04
            Stop		  4.2318418000780570e+04
            Strand		 0 6
            Start		  4.1448000000000000e+04
            Stop		  4.1719645109311765e+04
            Strand		 0 8
            Start		  4.3088413193874600e+04
            Stop		  4.3426311124612446e+04
            Strand		 0 9
            Start		  4.2279522150053941e+04
            Stop		  4.3062760289996353e+04
            Strand		 0 15
            Start		  4.1448000000000000e+04
            Stop		  4.2125336684956899e+04
            Strand		 0 20
            Start		  4.2919942609518504e+04
            Stop		  4.3426311124612446e+04
            Strand		 0 25
            Start		  4.3109252837814864e+04
            Stop		  4.3426311124612446e+04
            Strand		 0 26
            Start		  4.2363962673049886e+04
            Stop		  4.3073832077665793e+04
            Strand		 0 27
            Start		  4.1907456062753481e+04
            Stop		  4.2259999268382955e+04
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

                StaticColor		 #0000ff
                AnimationColor		 #ff0000
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

