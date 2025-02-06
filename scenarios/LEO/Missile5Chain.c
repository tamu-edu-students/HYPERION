stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile5Chain
    BEGIN Definition
        Object		 Aircraft/Missile5
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 12:41:29.000000000
                Stop		 3 Feb 2025 13:40:38.974279317
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
            STKInst		 Aircraft/Missile5
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  2.5955093982596340e+04
            Stop		  2.6827113082502954e+04
            Strand		 0 2
            Start		  2.5213342801313967e+04
            Stop		  2.5847794483983194e+04
            Strand		 0 6
            Start		  2.6812019481503139e+04
            Stop		  2.7638974279317328e+04
            Strand		 0 7
            Start		  2.4950631575681524e+04
            Stop		  2.6053212427194638e+04
            Strand		 0 8
            Start		  2.4089000000000000e+04
            Stop		  2.4934168161042624e+04
            Strand		 0 18
            Start		  2.7007753358630805e+04
            Stop		  2.7586537863827474e+04
            Strand		 0 19
            Start		  2.5233309914753940e+04
            Stop		  2.6013456263102675e+04
            Strand		 0 23
            Start		  2.7045326563050839e+04
            Stop		  2.7638974279317328e+04
            Strand		 0 24
            Start		  2.6049624332607586e+04
            Stop		  2.7032437302493869e+04
            Strand		 0 25
            Start		  2.4560638010585018e+04
            Stop		  2.5235385494244671e+04
            Strand		 0 26
            Start		  2.4089000000000000e+04
            Stop		  2.4460925350302823e+04
            Strand		 0 28
            Start		  2.7045939498446267e+04
            Stop		  2.7486864869207864e+04
            Strand		 0 29
            Start		  2.6208138969581389e+04
            Stop		  2.6753233458526389e+04
            Strand		 0 30
            Start		  2.5379837322687639e+04
            Stop		  2.6000265122750214e+04
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

