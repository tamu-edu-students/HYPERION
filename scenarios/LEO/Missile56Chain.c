stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile56Chain
    BEGIN Definition
        Object		 Aircraft/Missile56
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 13:32:24.000000000
                Stop		 3 Feb 2025 14:43:56.734292512
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
            STKInst		 Aircraft/Missile56
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 2
            Start		  3.1004489332612913e+04
            Stop		  3.1436734292512127e+04
            Strand		 0 3
            Start		  3.0135235962298357e+04
            Stop		  3.1011878122424252e+04
            Strand		 0 4
            Start		  2.9342810709635305e+04
            Stop		  3.0119828617465744e+04
            Strand		 0 5
            Start		  2.8768224057935000e+04
            Stop		  2.9026213118684744e+04
            Strand		 0 9
            Start		  2.9342993266764341e+04
            Stop		  3.0315499398731423e+04
            Strand		 0 10
            Start		  2.7994560900669083e+04
            Stop		  2.9286121461592014e+04
            Strand		 0 11
            Start		  2.7144000000000000e+04
            Stop		  2.7953187103409742e+04
            Strand		 0 14
            Start		  3.1048603159279402e+04
            Stop		  3.1436734292512127e+04
            Strand		 0 19
            Start		  3.1246916766933053e+04
            Stop		  3.1436734292512127e+04
            Strand		 0 20
            Start		  3.0163704402685711e+04
            Stop		  3.1171343023177320e+04
            Strand		 0 21
            Start		  2.9308544941752858e+04
            Stop		  3.0161164035949998e+04
            Strand		 0 25
            Start		  3.0292917335567246e+04
            Stop		  3.0894126177422309e+04
            Strand		 0 26
            Start		  2.9468659232961571e+04
            Stop		  3.0150301032029496e+04
            Strand		 0 27
            Start		  2.8656352853813976e+04
            Stop		  2.9387326351120882e+04
            Strand		 0 28
            Start		  2.7853808235957702e+04
            Stop		  2.8613698832755494e+04
            Strand		 0 29
            Start		  2.7144000000000000e+04
            Stop		  2.7833258676814996e+04
            Strand		 0 30
            Start		  3.1136765559910229e+04
            Stop		  3.1436734292512127e+04
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

