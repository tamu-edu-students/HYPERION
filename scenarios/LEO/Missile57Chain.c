stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile57Chain
    BEGIN Definition
        Object		 Aircraft/Missile57
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 12:44:06.000000000
                Stop		 3 Feb 2025 13:14:49.259860806
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
            STKInst		 Aircraft/Missile57
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  2.5655473472862752e+04
            Stop		  2.6089259860805563e+04
            Strand		 0 2
            Start		  2.4950967776498481e+04
            Stop		  2.5662353074053739e+04
            Strand		 0 8
            Start		  2.4246000000000000e+04
            Stop		  2.4932307508780825e+04
            Strand		 0 13
            Start		  2.5920596421742954e+04
            Stop		  2.6089259860805563e+04
            Strand		 0 19
            Start		  2.5068761286123728e+04
            Stop		  2.5875928447360038e+04
            Strand		 0 20
            Start		  2.4544084466325694e+04
            Stop		  2.5019669267068755e+04
            Strand		 0 25
            Start		  2.4536079274991895e+04
            Stop		  2.4988060965974495e+04
            Strand		 0 26
            Start		  2.4246000000000000e+04
            Stop		  2.4424097394775450e+04
            Strand		 0 29
            Start		  2.5871927646046595e+04
            Stop		  2.6089259860805563e+04
            Strand		 0 30
            Start		  2.5219638339334306e+04
            Stop		  2.5534885249102896e+04
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

