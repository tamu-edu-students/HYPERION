stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile7Chain
    BEGIN Definition
        Object		 Aircraft/Missile7
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 11:17:02.000000000
                Stop		 3 Feb 2025 12:44:07.536473075
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
            STKInst		 Aircraft/Missile7
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  1.9022000000000000e+04
            Stop		  1.9790966093959396e+04
            Strand		 0 10
            Start		  2.3308759013578256e+04
            Stop		  2.4247536473074993e+04
            Strand		 0 11
            Start		  2.2220484913111133e+04
            Stop		  2.3322819072166978e+04
            Strand		 0 13
            Start		  1.9844063398409671e+04
            Stop		  2.0625988256881781e+04
            Strand		 0 14
            Start		  1.9133638969319756e+04
            Stop		  1.9754653064285536e+04
            Strand		 0 16
            Start		  2.2443838092293307e+04
            Stop		  2.2833571031854462e+04
            Strand		 0 17
            Start		  2.1465588624181848e+04
            Stop		  2.2221252297361054e+04
            Strand		 0 18
            Start		  2.0618352530293574e+04
            Stop		  2.1456463962374572e+04
            Strand		 0 19
            Start		  2.3622527378532017e+04
            Stop		  2.4247536473074993e+04
            Strand		 0 20
            Start		  2.2877995626215361e+04
            Stop		  2.3581328166141127e+04
            Strand		 0 21
            Start		  2.2171078570854010e+04
            Stop		  2.2737899734948947e+04
            Strand		 0 22
            Start		  2.1555160685357660e+04
            Stop		  2.1829238497283870e+04
            Strand		 0 26
            Start		  2.2101228776171465e+04
            Stop		  2.2846610739477939e+04
            Strand		 0 27
            Start		  2.1020501318899642e+04
            Stop		  2.2056868987789087e+04
            Strand		 0 28
            Start		  2.0182673443829626e+04
            Stop		  2.0971463680452147e+04
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

