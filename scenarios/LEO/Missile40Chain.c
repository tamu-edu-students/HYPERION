stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile40Chain
    BEGIN Definition
        Object		 Aircraft/Missile40
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 19:57:01.000000000
                Stop		 3 Feb 2025 21:12:19.468296062
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
            STKInst		 Aircraft/Missile40
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  5.1905384578811805e+04
            Stop		  5.2729069656809319e+04
            Strand		 0 3
            Start		  5.0577719850425419e+04
            Stop		  5.1777103510145273e+04
            Strand		 0 4
            Start		  5.0221000000000000e+04
            Stop		  5.0549309824292395e+04
            Strand		 0 13
            Start		  5.4603046257531998e+04
            Stop		  5.4739468296061837e+04
            Strand		 0 14
            Start		  5.3731990633664966e+04
            Stop		  5.4516738791660056e+04
            Strand		 0 15
            Start		  5.2906644493561682e+04
            Stop		  5.3728428164631994e+04
            Strand		 0 16
            Start		  5.2124857422700283e+04
            Stop		  5.2900377475650370e+04
            Strand		 0 17
            Start		  5.1394093101060505e+04
            Stop		  5.2034729661517784e+04
            Strand		 0 18
            Start		  5.0746008147015957e+04
            Stop		  5.1108451026317060e+04
            Strand		 0 24
            Start		  5.0221000000000000e+04
            Stop		  5.0385695459739480e+04
            Strand		 0 28
            Start		  5.4275541304051832e+04
            Stop		  5.4739468296061837e+04
            Strand		 0 29
            Start		  5.3490524681605988e+04
            Stop		  5.4043653573183830e+04
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

