stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile60Chain
    BEGIN Definition
        Object		 Aircraft/Missile60
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 10:24:57.000000000
                Stop		 3 Feb 2025 11:01:17.117267017
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
            STKInst		 Aircraft/Missile60
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 10
            Start		  1.6874364449203407e+04
            Stop		  1.7992671057595689e+04
            Strand		 0 11
            Start		  1.6271735334139839e+04
            Stop		  1.6678460028333764e+04
            Strand		 0 15
            Start		  1.7092468933133521e+04
            Stop		  1.7414365437530305e+04
            Strand		 0 16
            Start		  1.6177003703091155e+04
            Stop		  1.6861903054172326e+04
            Strand		 0 17
            Start		  1.5897000000000000e+04
            Stop		  1.6160545458819142e+04
            Strand		 0 19
            Start		  1.7498755834456246e+04
            Stop		  1.8077117267016834e+04
            Strand		 0 20
            Start		  1.6805098748166769e+04
            Stop		  1.7466642153646655e+04
            Strand		 0 21
            Start		  1.6212010180276327e+04
            Stop		  1.6604374660101046e+04
            Strand		 0 25
            Start		  1.7001704074171292e+04
            Stop		  1.7366892443844838e+04
            Strand		 0 26
            Start		  1.5897000000000000e+04
            Stop		  1.6800143919620001e+04
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

