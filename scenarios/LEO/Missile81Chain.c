stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile81Chain
    BEGIN Definition
        Object		 Aircraft/Missile81
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 4 Feb 2025 00:52:28.000000000
                Stop		 4 Feb 2025 01:50:35.393444974
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
            STKInst		 Aircraft/Missile81
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  7.0448769605204187e+04
            Stop		  7.0918655247688424e+04
            Strand		 0 2
            Start		  6.9450135832729051e+04
            Stop		  7.0348186785264465e+04
            Strand		 0 3
            Start		  6.8891521701115751e+04
            Stop		  6.9346077460003391e+04
            Strand		 0 7
            Start		  6.9798003522565647e+04
            Stop		  7.0471675837083807e+04
            Strand		 0 8
            Start		  6.9123386811948832e+04
            Stop		  6.9767236405560659e+04
            Strand		 0 9
            Start		  6.8432664259002471e+04
            Stop		  6.9077323872349807e+04
            Strand		 0 10
            Start		  6.7948000000000000e+04
            Stop		  6.8402909203215764e+04
            Strand		 0 11
            Start		  7.1171188845647208e+04
            Stop		  7.1435393444974063e+04
            Strand		 0 12
            Start		  7.0475464500266942e+04
            Stop		  7.1178489812188360e+04
            Strand		 0 13
            Start		  6.9355615711753941e+04
            Stop		  7.0092238179207940e+04
            Strand		 0 14
            Start		  6.8569988807022048e+04
            Stop		  6.9369101109028677e+04
            Strand		 0 19
            Start		  6.8120565556197034e+04
            Stop		  6.9761801152423868e+04
            Strand		 0 24
            Start		  6.9785504243056406e+04
            Stop		  7.0807629364647655e+04
            Strand		 0 29
            Start		  7.0455120895067390e+04
            Stop		  7.1435393444974063e+04
            Strand		 0 30
            Start		  6.8662521383921674e+04
            Stop		  7.0443318255552411e+04
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

                StaticColor		 #0000ff
                AnimationColor		 #ff0000
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

