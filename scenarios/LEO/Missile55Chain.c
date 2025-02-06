stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile55Chain
    BEGIN Definition
        Object		 Aircraft/Missile55
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 4 Feb 2025 02:17:58.000000000
                Stop		 4 Feb 2025 03:47:34.229606482
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
            STKInst		 Aircraft/Missile55
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  7.6356591425600855e+04
            Stop		  7.7009413848403230e+04
            Strand		 0 3
            Start		  7.5277546711129762e+04
            Stop		  7.6220011625897692e+04
            Strand		 0 4
            Start		  7.4344089955448260e+04
            Stop		  7.5296311634107857e+04
            Strand		 0 5
            Start		  7.3519134213615616e+04
            Stop		  7.4301480328735735e+04
            Strand		 0 6
            Start		  7.3078000000000000e+04
            Stop		  7.3193902969082468e+04
            Strand		 0 7
            Start		  7.6195971902914142e+04
            Stop		  7.6611575791928975e+04
            Strand		 0 8
            Start		  7.5365633269422717e+04
            Stop		  7.5815704323066733e+04
            Strand		 0 9
            Start		  7.4539270597104667e+04
            Stop		  7.5013261385548292e+04
            Strand		 0 10
            Start		  7.3713832822083699e+04
            Stop		  7.4207046917783475e+04
            Strand		 0 11
            Start		  7.3078000000000000e+04
            Stop		  7.3399754345327790e+04
            Start		  7.7851827714440165e+04
            Stop		  7.8209826528878839e+04
            Strand		 0 12
            Start		  7.7030750323792352e+04
            Stop		  7.7405478103822839e+04
            Strand		 0 13
            Start		  7.5030151351631197e+04
            Stop		  7.5982959355076207e+04
            Strand		 0 14
            Start		  7.4156899393221363e+04
            Stop		  7.5021910878640934e+04
            Strand		 0 15
            Start		  7.3473724812086759e+04
            Stop		  7.3871223925035447e+04
            Strand		 0 17
            Start		  7.6984866433214571e+04
            Stop		  7.7605023472389628e+04
            Strand		 0 18
            Start		  7.5976102297072881e+04
            Stop		  7.6842369747504970e+04
            Strand		 0 19
            Start		  7.4592703566043259e+04
            Stop		  7.5014079772523968e+04
            Strand		 0 20
            Start		  7.3078000000000000e+04
            Stop		  7.4141416725698509e+04
            Strand		 0 29
            Start		  7.7302291853943985e+04
            Stop		  7.8454229606481851e+04
            Strand		 0 30
            Start		  7.6181540564749099e+04
            Stop		  7.7127080429610753e+04
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

                StaticColor		 #ffff00
                AnimationColor		 #0000ff
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

