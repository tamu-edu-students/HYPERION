stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile33Chain
    BEGIN Definition
        Object		 Aircraft/Missile33
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 13:51:41.000000000
                Stop		 3 Feb 2025 15:00:01.452186997
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
            STKInst		 Aircraft/Missile33
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  3.1993771350934931e+04
            Stop		  3.2401452186996648e+04
            Strand		 0 2
            Start		  3.1087852977562696e+04
            Stop		  3.2009269123579994e+04
            Strand		 0 3
            Start		  3.0277124646377026e+04
            Stop		  3.1039863244264117e+04
            Strand		 0 8
            Start		  3.0367636311126578e+04
            Stop		  3.1148475974683704e+04
            Strand		 0 9
            Start		  2.8911848993026339e+04
            Stop		  3.0157702202101751e+04
            Strand		 0 10
            Start		  2.8301000000000000e+04
            Stop		  2.8923327556859367e+04
            Strand		 0 13
            Start		  3.2240982021341086e+04
            Stop		  3.2401452186996648e+04
            Strand		 0 19
            Start		  3.1309549886911671e+04
            Stop		  3.2270060624402398e+04
            Strand		 0 20
            Start		  3.0411798799834378e+04
            Stop		  3.1326284475143177e+04
            Strand		 0 21
            Start		  2.9661718974278327e+04
            Stop		  3.0282405709854625e+04
            Strand		 0 24
            Start		  3.2369955397853708e+04
            Stop		  3.2401452186996648e+04
            Strand		 0 25
            Start		  3.0610280549081817e+04
            Stop		  3.1095827131602069e+04
            Strand		 0 26
            Start		  2.9783470781289048e+04
            Stop		  3.0320664495029148e+04
            Strand		 0 27
            Start		  2.8958509082147099e+04
            Stop		  2.9542873268907933e+04
            Strand		 0 28
            Start		  2.8301000000000000e+04
            Stop		  2.8761877578217023e+04
            Strand		 0 29
            Start		  3.2267734491034018e+04
            Stop		  3.2401452186996648e+04
            Strand		 0 30
            Start		  3.1436704237226175e+04
            Stop		  3.1863643320189036e+04
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

