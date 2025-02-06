stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile13Chain
    BEGIN Definition
        Object		 Aircraft/Missile13
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 13:38:10.000000000
                Stop		 3 Feb 2025 14:43:42.785320609
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
            STKInst		 Aircraft/Missile13
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  3.0274542403035681e+04
            Stop		  3.0810037259864210e+04
            Strand		 0 3
            Start		  2.9464174894422300e+04
            Stop		  3.0210294680688290e+04
            Strand		 0 4
            Start		  2.8789479313313081e+04
            Stop		  2.9465096492720197e+04
            Strand		 0 10
            Start		  2.7866224626711923e+04
            Stop		  2.8590096132916718e+04
            Strand		 0 11
            Start		  2.7490000000000000e+04
            Stop		  2.7851048998857765e+04
            Strand		 0 15
            Start		  3.0819243187750941e+04
            Stop		  3.1422785320608775e+04
            Strand		 0 16
            Start		  3.0042263664825445e+04
            Stop		  3.0723151295018641e+04
            Strand		 0 22
            Start		  2.8542561372577824e+04
            Stop		  2.9505293289185658e+04
            Strand		 0 23
            Start		  2.7915652243713968e+04
            Stop		  2.8478387833387536e+04
            Strand		 0 28
            Start		  2.8010694724042231e+04
            Stop		  2.8065668024697516e+04
            Strand		 0 29
            Start		  2.7490000000000000e+04
            Stop		  2.7673389321759241e+04
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

