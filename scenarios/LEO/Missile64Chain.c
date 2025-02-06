stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile64Chain
    BEGIN Definition
        Object		 Aircraft/Missile64
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 06:54:49.000000000
                Stop		 3 Feb 2025 07:50:00.530982650
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
            STKInst		 Aircraft/Missile64
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 3
            Start		  6.4855153415404657e+03
            Stop		  6.6005309826500397e+03
            Strand		 0 4
            Start		  3.2890000000000000e+03
            Stop		  5.9880515776417187e+03
            Strand		 0 9
            Start		  4.4948732560306298e+03
            Stop		  5.3726450108849667e+03
            Strand		 0 13
            Start		  5.5298467180869220e+03
            Stop		  6.1708920531043059e+03
            Strand		 0 14
            Start		  4.9581910374803956e+03
            Stop		  5.5091479631757102e+03
            Strand		 0 15
            Start		  4.4214334946634499e+03
            Stop		  4.8143810498977318e+03
            Strand		 0 16
            Start		  3.8372085388162341e+03
            Stop		  4.1711284086133810e+03
            Strand		 0 17
            Start		  3.2890000000000000e+03
            Stop		  3.6205630989824667e+03
            Strand		 0 18
            Start		  6.1753194224634453e+03
            Stop		  6.6005309826500397e+03
            Strand		 0 20
            Start		  4.7084854818202575e+03
            Stop		  5.1669723997255051e+03
            Strand		 0 21
            Start		  3.9341513069885136e+03
            Stop		  4.6606926496250735e+03
            Strand		 0 22
            Start		  3.5557517550857810e+03
            Stop		  3.7809743960938677e+03
            Strand		 0 26
            Start		  3.8246215705065374e+03
            Stop		  5.1910405367836429e+03
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

