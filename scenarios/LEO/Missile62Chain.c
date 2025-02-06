stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile62Chain
    BEGIN Definition
        Object		 Aircraft/Missile62
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 12:08:10.000000000
                Stop		 3 Feb 2025 13:03:43.769713701
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
            STKInst		 Aircraft/Missile62
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 4
            Start		  2.2090000000000000e+04
            Stop		  2.2466022703064096e+04
            Strand		 0 9
            Start		  2.4624855760487168e+04
            Stop		  2.5423769713701080e+04
            Strand		 0 15
            Start		  2.3938049157271642e+04
            Stop		  2.4490244536065260e+04
            Strand		 0 16
            Start		  2.3180837183014613e+04
            Stop		  2.3888639489341120e+04
            Strand		 0 17
            Start		  2.2515580523645629e+04
            Stop		  2.3186842562247617e+04
            Strand		 0 18
            Start		  2.2090000000000000e+04
            Stop		  2.2405312702086125e+04
            Strand		 0 24
            Start		  2.5032067250352393e+04
            Stop		  2.5423769713701080e+04
            Strand		 0 25
            Start		  2.3230554596166632e+04
            Stop		  2.3787514191421516e+04
            Strand		 0 30
            Start		  2.3863427209209938e+04
            Stop		  2.4897024262927756e+04
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

