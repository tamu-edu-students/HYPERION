stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile29Chain
    BEGIN Definition
        Object		 Aircraft/Missile29
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 21:00:33.000000000
                Stop		 3 Feb 2025 22:19:38.849345520
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
            STKInst		 Aircraft/Missile29
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  5.8245856624663393e+04
            Stop		  5.8778849345520262e+04
            Strand		 0 2
            Start		  5.7237247404550326e+04
            Stop		  5.8044852937024036e+04
            Strand		 0 3
            Start		  5.6316169042373142e+04
            Stop		  5.7206455249058607e+04
            Strand		 0 4
            Start		  5.5443140877498678e+04
            Stop		  5.6327999699343847e+04
            Strand		 0 5
            Start		  5.4606824744198952e+04
            Stop		  5.5432487151388748e+04
            Strand		 0 6
            Start		  5.4033000000000000e+04
            Stop		  5.4530859020576318e+04
            Strand		 0 7
            Start		  5.7178354335225013e+04
            Stop		  5.7904008633429185e+04
            Strand		 0 8
            Start		  5.6396494513282312e+04
            Stop		  5.7004050625738550e+04
            Strand		 0 9
            Start		  5.5669815428085742e+04
            Stop		  5.6054910929115395e+04
            Strand		 0 12
            Start		  5.7988963565340062e+04
            Stop		  5.8778849345520262e+04
            Strand		 0 13
            Start		  5.6089792546546319e+04
            Stop		  5.7155088695429367e+04
            Strand		 0 14
            Start		  5.5103574739001066e+04
            Stop		  5.6072238882523903e+04
            Strand		 0 15
            Start		  5.4414560478989370e+04
            Stop		  5.4651368961619963e+04
            Strand		 0 17
            Start		  5.8387638305462038e+04
            Stop		  5.8778849345520262e+04
            Strand		 0 18
            Start		  5.7165347734692295e+04
            Stop		  5.8086683960300026e+04
            Strand		 0 20
            Start		  5.4076320737488721e+04
            Stop		  5.4964879018799424e+04
            Strand		 0 29
            Start		  5.8034908781672522e+04
            Stop		  5.8778849345520262e+04
            Strand		 0 30
            Start		  5.7044624496704331e+04
            Stop		  5.7955345164194900e+04
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

