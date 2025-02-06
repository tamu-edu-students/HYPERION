stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile34Chain
    BEGIN Definition
        Object		 Aircraft/Missile34
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 14:40:42.000000000
                Stop		 3 Feb 2025 16:28:13.142553673
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
            STKInst		 Aircraft/Missile34
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  3.7043556914159009e+04
            Stop		  3.7693142553672777e+04
            Strand		 0 2
            Start		  3.6184204278109792e+04
            Stop		  3.7036884017260469e+04
            Strand		 0 3
            Start		  3.5411441467239820e+04
            Stop		  3.6165179648628473e+04
            Strand		 0 4
            Start		  3.4764747643938987e+04
            Stop		  3.5197293410937280e+04
            Strand		 0 7
            Start		  3.1242000000000000e+04
            Stop		  3.1976188437812514e+04
            Strand		 0 11
            Start		  3.2945200234622593e+04
            Stop		  3.3664046076400424e+04
            Strand		 0 12
            Start		  3.1988737586628842e+04
            Stop		  3.2897448338513088e+04
            Strand		 0 15
            Start		  3.7619737167110739e+04
            Stop		  3.7693142553672777e+04
            Strand		 0 16
            Start		  3.6804504218623057e+04
            Stop		  3.7522369007397625e+04
            Strand		 0 22
            Start		  3.5546477109089996e+04
            Stop		  3.6179842948350197e+04
            Strand		 0 23
            Start		  3.4199489054764061e+04
            Stop		  3.5353638975842514e+04
            Strand		 0 24
            Start		  3.3188659520370275e+04
            Stop		  3.4188418573185329e+04
            Strand		 0 25
            Start		  3.1242000000000000e+04
            Stop		  3.2054202882799793e+04
            Strand		 0 30
            Start		  3.2311670677086171e+04
            Stop		  3.2665318386424267e+04
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

