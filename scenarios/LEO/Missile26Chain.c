stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile26Chain
    BEGIN Definition
        Object		 Aircraft/Missile26
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 14:20:21.000000000
                Stop		 3 Feb 2025 15:42:06.455903197
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
            STKInst		 Aircraft/Missile26
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  3.2230263901194736e+04
            Stop		  3.2868468767070597e+04
            Strand		 0 5
            Start		  3.4172049618889592e+04
            Stop		  3.4926455903197384e+04
            Strand		 0 6
            Start		  3.3019289016754170e+04
            Stop		  3.4172118162941806e+04
            Strand		 0 10
            Start		  3.4732924639985577e+04
            Stop		  3.4926455903197384e+04
            Strand		 0 13
            Start		  3.2213877801312825e+04
            Stop		  3.2998145583697893e+04
            Strand		 0 14
            Start		  3.1320466051890009e+04
            Stop		  3.2209154375145212e+04
            Strand		 0 15
            Start		  3.0544569204021194e+04
            Stop		  3.1289499278737450e+04
            Strand		 0 18
            Start		  3.3232972307356482e+04
            Stop		  3.3625668919451149e+04
            Strand		 0 22
            Start		  3.4499789327977756e+04
            Stop		  3.4926455903197384e+04
            Strand		 0 23
            Start		  3.3405838185450957e+04
            Stop		  3.4501392596977283e+04
            Strand		 0 24
            Start		  3.2598411429403848e+04
            Stop		  3.3248314420821924e+04
            Strand		 0 27
            Start		  3.4774311370623691e+04
            Stop		  3.4926455903197384e+04
            Strand		 0 28
            Start		  3.3165547594754353e+04
            Stop		  3.4071732083874311e+04
            Strand		 0 29
            Start		  3.1242468690279955e+04
            Stop		  3.2510089166417227e+04
            Strand		 0 30
            Start		  3.0021000000000000e+04
            Stop		  3.1144944182586780e+04
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

