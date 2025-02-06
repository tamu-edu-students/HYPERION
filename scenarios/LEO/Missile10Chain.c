stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile10Chain
    BEGIN Definition
        Object		 Aircraft/Missile10
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 09:51:44.000000000
                Stop		 3 Feb 2025 10:38:21.517202734
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
            STKInst		 Aircraft/Missile10
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 6
            Start		  1.3904000000000000e+04
            Stop		  1.5952874146891672e+04
            Strand		 0 11
            Start		  1.4962453837524219e+04
            Stop		  1.6701517202734114e+04
            Strand		 0 16
            Start		  1.5559499271752113e+04
            Stop		  1.6307532627148757e+04
            Strand		 0 17
            Start		  1.4968722402008247e+04
            Stop		  1.5563962682773592e+04
            Strand		 0 19
            Start		  1.3904000000000000e+04
            Stop		  1.3935384357226994e+04
            Strand		 0 20
            Start		  1.6407915097452144e+04
            Stop		  1.6701517202734114e+04
            Strand		 0 21
            Start		  1.5793576780099940e+04
            Stop		  1.6410756574205294e+04
            Strand		 0 22
            Start		  1.5178914253364854e+04
            Stop		  1.5787985503476246e+04
            Strand		 0 23
            Start		  1.4555006323246827e+04
            Stop		  1.5171233432113177e+04
            Strand		 0 24
            Start		  1.3931497810330980e+04
            Stop		  1.4557950159868504e+04
            Strand		 0 27
            Start		  1.5382942019338583e+04
            Stop		  1.6010694934656416e+04
            Strand		 0 28
            Start		  1.4665415112784916e+04
            Stop		  1.5394738557180564e+04
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

                StaticColor		 #00ffff
                AnimationColor		 #ff00ff
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

