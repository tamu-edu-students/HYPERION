stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile86Chain
    BEGIN Definition
        Object		 Aircraft/Missile86
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 06:23:06.000000000
                Stop		 3 Feb 2025 07:33:58.063117693
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
            STKInst		 Aircraft/Missile86
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  4.6823276828684229e+03
            Stop		  4.9336774523789491e+03
            Strand		 0 3
            Start		  3.6648093214219875e+03
            Stop		  4.3120753941291077e+03
            Strand		 0 4
            Start		  2.7480420803317738e+03
            Stop		  3.5655178641770508e+03
            Strand		 0 5
            Start		  1.8866155039337305e+03
            Stop		  2.7507837457813698e+03
            Strand		 0 6
            Start		  1.3860000000000000e+03
            Stop		  1.8835520118886216e+03
            Strand		 0 12
            Start		  5.6291765252201985e+03
            Stop		  5.6380631176933875e+03
            Strand		 0 13
            Start		  1.3860000000000000e+03
            Stop		  1.6082625685181388e+03
            Strand		 0 21
            Start		  5.5042170854022334e+03
            Stop		  5.6380631176933875e+03
            Strand		 0 22
            Start		  4.1818271301761688e+03
            Stop		  5.5149946525794494e+03
            Strand		 0 23
            Start		  2.9850131445957127e+03
            Stop		  3.9538988016682624e+03
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

                StaticColor		 #ff0000
                AnimationColor		 #ffffff
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

