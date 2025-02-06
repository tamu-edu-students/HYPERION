stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile12Chain
    BEGIN Definition
        Object		 Aircraft/Missile12
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 4 Feb 2025 02:24:23.000000000
                Stop		 4 Feb 2025 03:21:17.900582310
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
            STKInst		 Aircraft/Missile12
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  7.5118068296353333e+04
            Stop		  7.6120234299550211e+04
            Strand		 0 3
            Start		  7.4656570455620866e+04
            Stop		  7.4944345411956398e+04
            Strand		 0 7
            Start		  7.6032201295626292e+04
            Stop		  7.6269039221133004e+04
            Strand		 0 12
            Start		  7.6485108124261489e+04
            Stop		  7.6877900582310234e+04
            Strand		 0 15
            Start		  7.4305248594785677e+04
            Stop		  7.5083298602140523e+04
            Strand		 0 16
            Start		  7.3627480464831300e+04
            Stop		  7.4311602431314444e+04
            Strand		 0 19
            Start		  7.5556347276123968e+04
            Stop		  7.6681562022103768e+04
            Strand		 0 20
            Start		  7.4786951457773466e+04
            Stop		  7.5500624501394908e+04
            Strand		 0 25
            Start		  7.3463000000000000e+04
            Stop		  7.4606056308110972e+04
            Strand		 0 30
            Start		  7.6595840954367057e+04
            Stop		  7.6877900582310234e+04
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

