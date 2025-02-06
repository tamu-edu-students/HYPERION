stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile35Chain
    BEGIN Definition
        Object		 Aircraft/Missile35
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 12:33:24.000000000
                Stop		 3 Feb 2025 14:02:53.028053526
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
            STKInst		 Aircraft/Missile35
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  2.5703761350422676e+04
            Stop		  2.6477872550768665e+04
            Strand		 0 2
            Start		  2.4794279493939288e+04
            Stop		  2.5705096550672788e+04
            Strand		 0 3
            Start		  2.4190936669837545e+04
            Stop		  2.4627765690481567e+04
            Strand		 0 8
            Start		  2.3619529225868027e+04
            Stop		  2.4806386396065627e+04
            Strand		 0 13
            Start		  2.5811900986232336e+04
            Stop		  2.6986091191393069e+04
            Strand		 0 18
            Start		  2.6966064957016690e+04
            Stop		  2.8312223141687304e+04
            Strand		 0 19
            Start		  2.5033600035443567e+04
            Stop		  2.5875748222706825e+04
            Strand		 0 20
            Start		  2.4262622670459510e+04
            Stop		  2.5041763038061206e+04
            Strand		 0 21
            Start		  2.3683822645718312e+04
            Stop		  2.4058532036646186e+04
            Strand		 0 24
            Start		  2.5997657949085122e+04
            Stop		  2.6504000870270604e+04
            Strand		 0 25
            Start		  2.4489008243738816e+04
            Stop		  2.4793815178975186e+04
            Start		  2.8648918900604189e+04
            Stop		  2.8973028053525519e+04
            Strand		 0 26
            Start		  2.3785978947960553e+04
            Stop		  2.4059239997357701e+04
            Start		  2.7928471776272094e+04
            Stop		  2.8625574774202360e+04
            Strand		 0 27
            Start		  2.7219142380784229e+04
            Stop		  2.7863793964903503e+04
            Strand		 0 28
            Start		  2.6522870310673406e+04
            Stop		  2.7099339158673905e+04
            Strand		 0 29
            Start		  2.5839072019978819e+04
            Stop		  2.6330544116502082e+04
            Strand		 0 30
            Start		  2.5166188826786842e+04
            Stop		  2.5559483060260114e+04
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

