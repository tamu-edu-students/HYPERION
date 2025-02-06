stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile91Chain
    BEGIN Definition
        Object		 Aircraft/Missile91
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 07:00:33.000000000
                Stop		 3 Feb 2025 08:13:58.188921309
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
            STKInst		 Aircraft/Missile91
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  7.0534213106740826e+03
            Stop		  8.0381889213092481e+03
            Strand		 0 3
            Start		  5.0899646824853526e+03
            Stop		  7.0762922542527776e+03
            Strand		 0 4
            Start		  3.6330000000000000e+03
            Stop		  5.1200647482014911e+03
            Strand		 0 8
            Start		  5.5661636471744005e+03
            Stop		  6.5867937202341272e+03
            Strand		 0 9
            Start		  4.6894210106089140e+03
            Stop		  5.5840088124287804e+03
            Strand		 0 13
            Start		  5.8673098107230926e+03
            Stop		  6.6305772523527230e+03
            Strand		 0 14
            Start		  5.1701250534902283e+03
            Stop		  5.8546593359869485e+03
            Strand		 0 15
            Start		  4.5106796187093651e+03
            Stop		  5.0577405165672853e+03
            Strand		 0 16
            Start		  3.8440778019729905e+03
            Stop		  4.2820541760992937e+03
            Strand		 0 17
            Start		  7.4824019444443038e+03
            Stop		  7.9485968557449251e+03
            Strand		 0 18
            Start		  6.6268482718491878e+03
            Stop		  7.3461057849688350e+03
            Strand		 0 19
            Start		  5.5691648206810878e+03
            Stop		  6.1262845899264039e+03
            Strand		 0 20
            Start		  4.7122715191780671e+03
            Stop		  5.4863184035246786e+03
            Strand		 0 21
            Start		  3.9565978792145083e+03
            Stop		  4.7248716054895194e+03
            Strand		 0 22
            Start		  3.6330000000000000e+03
            Stop		  3.7853323250514040e+03
            Strand		 0 25
            Start		  4.8281894408820835e+03
            Stop		  6.0230670561920715e+03
            Strand		 0 26
            Start		  3.8303398212669254e+03
            Stop		  4.7942294756111214e+03
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

