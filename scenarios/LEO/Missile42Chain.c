stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile42Chain
    BEGIN Definition
        Object		 Aircraft/Missile42
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 14:40:16.000000000
                Stop		 3 Feb 2025 15:10:36.956320204
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
            STKInst		 Aircraft/Missile42
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  3.2356070946716223e+04
            Stop		  3.3015880760057451e+04
            Strand		 0 2
            Start		  3.1746023340479933e+04
            Stop		  3.2362825460343138e+04
            Strand		 0 3
            Start		  3.1252638228290794e+04
            Stop		  3.1608064060100860e+04
            Strand		 0 6
            Start		  3.3030466002246831e+04
            Stop		  3.3036956320203819e+04
            Strand		 0 7
            Start		  3.1578399347007798e+04
            Stop		  3.2555608511400034e+04
            Strand		 0 8
            Start		  3.1216000000000000e+04
            Stop		  3.1463379746290851e+04
            Strand		 0 13
            Start		  3.1216000000000000e+04
            Stop		  3.1979762198142031e+04
            Strand		 0 24
            Start		  3.2152190610941077e+04
            Stop		  3.3036956320203819e+04
            Strand		 0 25
            Start		  3.1216000000000000e+04
            Stop		  3.1659494803158977e+04
            Strand		 0 29
            Start		  3.2345808907667164e+04
            Stop		  3.2903265632983050e+04
            Strand		 0 30
            Start		  3.1660947045670193e+04
            Stop		  3.2326774315313167e+04
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

