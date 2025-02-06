stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile2Chain
    BEGIN Definition
        Object		 Aircraft/Missile2
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 23:24:39.000000000
                Stop		 4 Feb 2025 00:24:22.260239302
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
            STKInst		 Aircraft/Missile2
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 3
            Start		  6.6261761361571684e+04
            Stop		  6.6262260239302312e+04
            Strand		 0 9
            Start		  6.2679000000000000e+04
            Stop		  6.3662739898513035e+04
            Strand		 0 13
            Start		  6.5186219683096024e+04
            Stop		  6.6070226243948709e+04
            Strand		 0 18
            Start		  6.6215157608574213e+04
            Stop		  6.6262260239302312e+04
            Strand		 0 24
            Start		  6.2712805827889060e+04
            Stop		  6.3134760731303992e+04
            Strand		 0 25
            Start		  6.6018200273045775e+04
            Stop		  6.6262260239302312e+04
            Strand		 0 26
            Start		  6.5146466523260584e+04
            Stop		  6.5824062390227657e+04
            Strand		 0 27
            Start		  6.4367945842218818e+04
            Stop		  6.5136629117374250e+04
            Strand		 0 28
            Start		  6.3681209306063814e+04
            Stop		  6.4357116416455101e+04
            Strand		 0 29
            Start		  6.3115824355250821e+04
            Stop		  6.3474814149111087e+04
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

