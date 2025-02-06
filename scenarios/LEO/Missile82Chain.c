stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile82Chain
    BEGIN Definition
        Object		 Aircraft/Missile82
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 09:07:13.000000000
                Stop		 3 Feb 2025 10:07:59.132147202
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
            STKInst		 Aircraft/Missile82
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  1.1818705538676249e+04
            Stop		  1.2298581465903719e+04
            Strand		 0 3
            Start		  1.1233000000000000e+04
            Stop		  1.1763831303618079e+04
            Strand		 0 8
            Start		  1.3480988388705338e+04
            Stop		  1.4875890147205877e+04
            Strand		 0 14
            Start		  1.2214262984503093e+04
            Stop		  1.3113105169255807e+04
            Strand		 0 15
            Start		  1.1705835734168031e+04
            Stop		  1.2149880957529107e+04
            Strand		 0 20
            Start		  1.1580892058054169e+04
            Stop		  1.1979698955197387e+04
            Strand		 0 21
            Start		  1.1233000000000000e+04
            Stop		  1.1478319575910386e+04
            Start		  1.4643397716158386e+04
            Stop		  1.4879132147202294e+04
            Strand		 0 28
            Start		  1.3209485912013446e+04
            Stop		  1.3802928788072953e+04
            Strand		 0 29
            Start		  1.2526657011043430e+04
            Stop		  1.3207655690950836e+04
            Strand		 0 30
            Start		  1.2019533988247200e+04
            Stop		  1.2451525838765714e+04
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

