stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile50Chain
    BEGIN Definition
        Object		 Aircraft/Missile50
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 08:07:53.000000000
                Stop		 3 Feb 2025 08:52:14.218062665
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
            STKInst		 Aircraft/Missile50
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 6
            Start		  7.7233405225999659e+03
            Stop		  8.4890538190424577e+03
            Strand		 0 11
            Start		  9.8426350582229024e+03
            Stop		  1.0298113684467638e+04
            Strand		 0 13
            Start		  7.6730000000000000e+03
            Stop		  7.9221050658411759e+03
            Strand		 0 16
            Start		  9.8313400009891629e+03
            Stop		  1.0334218062664791e+04
            Strand		 0 17
            Start		  8.8723403716349985e+03
            Stop		  9.8006092225333359e+03
            Strand		 0 18
            Start		  7.9959166705520147e+03
            Stop		  8.8818871976135633e+03
            Strand		 0 21
            Start		  9.8305096620061267e+03
            Stop		  1.0235682277241294e+04
            Strand		 0 22
            Start		  9.0805412726098366e+03
            Stop		  9.3548717167463328e+03
            Strand		 0 26
            Start		  9.4837351711272477e+03
            Stop		  1.0334218062664791e+04
            Strand		 0 27
            Start		  8.5403438401695676e+03
            Stop		  9.4976112275298801e+03
            Strand		 0 28
            Start		  7.7365411115178158e+03
            Stop		  8.3813513051636910e+03
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

