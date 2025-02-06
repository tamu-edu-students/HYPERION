stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile21Chain
    BEGIN Definition
        Object		 Aircraft/Missile21
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 11:19:19.000000000
                Stop		 3 Feb 2025 12:07:16.550536564
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
            STKInst		 Aircraft/Missile21
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  1.9660432737888605e+04
            Stop		  2.0419597126738903e+04
            Strand		 0 5
            Start		  2.1454817796241761e+04
            Stop		  2.2036550536564086e+04
            Strand		 0 6
            Start		  2.0458705069684234e+04
            Stop		  2.1414416887272273e+04
            Strand		 0 7
            Start		  1.9159000000000000e+04
            Stop		  1.9401810700265534e+04
            Strand		 0 12
            Start		  2.0002826415821517e+04
            Stop		  2.0147353147221340e+04
            Strand		 0 17
            Start		  2.1623662339026552e+04
            Stop		  2.2036550536564086e+04
            Strand		 0 19
            Start		  1.9197852844444402e+04
            Stop		  1.9913440922602036e+04
            Strand		 0 22
            Start		  2.1920567476684806e+04
            Stop		  2.2036550536564086e+04
            Strand		 0 23
            Start		  2.0808747735183602e+04
            Stop		  2.1596817802057303e+04
            Strand		 0 24
            Start		  1.9943593072579304e+04
            Stop		  2.0804434368473871e+04
            Strand		 0 27
            Start		  2.1555995304205713e+04
            Stop		  2.2036550536564086e+04
            Strand		 0 28
            Start		  2.0887908255110862e+04
            Stop		  2.1205185818778191e+04
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

