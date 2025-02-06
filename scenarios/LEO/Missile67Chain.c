stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile67Chain
    BEGIN Definition
        Object		 Aircraft/Missile67
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 22:10:39.000000000
                Stop		 3 Feb 2025 23:03:12.531855639
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
            STKInst		 Aircraft/Missile67
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  5.9010627493125940e+04
            Stop		  5.9694074993684670e+04
            Strand		 0 5
            Start		  6.0737384769795019e+04
            Stop		  6.1392531855638750e+04
            Strand		 0 6
            Start		  5.9806818969238382e+04
            Stop		  6.0748487967717294e+04
            Strand		 0 7
            Start		  5.8332782996451686e+04
            Stop		  5.8767061749253771e+04
            Strand		 0 12
            Start		  5.9281286667981818e+04
            Stop		  5.9455757279385041e+04
            Strand		 0 14
            Start		  6.1165876436270322e+04
            Stop		  6.1392531855638750e+04
            Strand		 0 15
            Start		  6.0310688090048650e+04
            Stop		  6.1147911479320363e+04
            Strand		 0 16
            Start		  5.9594035095828520e+04
            Stop		  6.0073931501117062e+04
            Strand		 0 21
            Start		  5.9421193726880025e+04
            Stop		  6.0208690607036275e+04
            Strand		 0 22
            Start		  5.8239000000000000e+04
            Stop		  5.9245395404481736e+04
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

