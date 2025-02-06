stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile46Chain
    BEGIN Definition
        Object		 Aircraft/Missile46
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 21:01:31.000000000
                Stop		 3 Feb 2025 21:38:45.920219321
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
            STKInst		 Aircraft/Missile46
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 4
            Start		  5.5289442135035126e+04
            Stop		  5.5917857934421176e+04
            Strand		 0 5
            Start		  5.4509731803924595e+04
            Stop		  5.5273611671841514e+04
            Strand		 0 6
            Start		  5.4091000000000000e+04
            Stop		  5.4443079134075153e+04
            Strand		 0 8
            Start		  5.5884362685386288e+04
            Stop		  5.6325920219321357e+04
            Strand		 0 9
            Start		  5.5306177779119593e+04
            Stop		  5.5684578829977116e+04
            Strand		 0 10
            Start		  5.4796033201908525e+04
            Stop		  5.4879939300152728e+04
            Strand		 0 14
            Start		  5.4985030774826235e+04
            Stop		  5.5852336144581066e+04
            Strand		 0 15
            Start		  5.4337666130926678e+04
            Stop		  5.4955096695731787e+04
            Strand		 0 20
            Start		  5.4091000000000000e+04
            Stop		  5.4832368439233498e+04
            Strand		 0 25
            Start		  5.6119901940449512e+04
            Stop		  5.6325920219321357e+04
            Strand		 0 26
            Start		  5.5331483049745235e+04
            Stop		  5.6086782984188096e+04
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

