stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile78Chain
    BEGIN Definition
        Object		 Aircraft/Missile78
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 14:21:48.000000000
                Stop		 3 Feb 2025 15:12:52.291713065
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
            STKInst		 Aircraft/Missile78
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  3.2144973042328042e+04
            Stop		  3.2901134000106853e+04
            Strand		 0 2
            Start		  3.1642909786882814e+04
            Stop		  3.1886790346995105e+04
            Strand		 0 6
            Start		  3.2891579563508276e+04
            Stop		  3.3172291713064929e+04
            Strand		 0 7
            Start		  3.1069096129285474e+04
            Stop		  3.2085068397091771e+04
            Strand		 0 8
            Start		  3.0108000000000000e+04
            Stop		  3.1079155194283081e+04
            Strand		 0 19
            Start		  3.1657255899296288e+04
            Stop		  3.2537699578768061e+04
            Strand		 0 24
            Start		  3.2519719182088123e+04
            Stop		  3.3172291713064929e+04
            Strand		 0 25
            Start		  3.1018384632360903e+04
            Stop		  3.1529729735269990e+04
            Strand		 0 26
            Start		  3.0209521361922863e+04
            Stop		  3.0884243052574097e+04
            Strand		 0 27
            Start		  3.0108000000000000e+04
            Stop		  3.0184234262808361e+04
            Strand		 0 30
            Start		  3.1954788645572629e+04
            Stop		  3.2026059076757301e+04
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

