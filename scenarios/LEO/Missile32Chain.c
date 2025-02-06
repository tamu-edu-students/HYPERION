stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile32Chain
    BEGIN Definition
        Object		 Aircraft/Missile32
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 4 Feb 2025 03:54:49.000000000
                Stop		 4 Feb 2025 04:49:54.175994956
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
            STKInst		 Aircraft/Missile32
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 3
            Start		  8.0964223785440816e+04
            Stop		  8.1962734503855740e+04
            Strand		 0 4
            Start		  7.9537416278238234e+04
            Stop		  8.0881103317904868e+04
            Strand		 0 7
            Start		  8.2163388273851218e+04
            Stop		  8.2194175994956415e+04
            Strand		 0 8
            Start		  8.1060287895541973e+04
            Stop		  8.1872185891982605e+04
            Strand		 0 9
            Start		  8.0345059936919541e+04
            Stop		  8.1066601391274744e+04
            Strand		 0 13
            Start		  8.1627494750026133e+04
            Stop		  8.1985047990987616e+04
            Strand		 0 14
            Start		  8.0966316894889707e+04
            Stop		  8.1256815785547093e+04
            Strand		 0 15
            Start		  8.0189271649878647e+04
            Stop		  8.0637151120237293e+04
            Strand		 0 16
            Start		  7.9391218714354924e+04
            Stop		  8.0027130813573531e+04
            Strand		 0 17
            Start		  7.8889000000000000e+04
            Stop		  7.9367697580819760e+04
            Strand		 0 20
            Start		  8.0510864819030423e+04
            Stop		  8.1225239819058668e+04
            Strand		 0 21
            Start		  7.9553734424137758e+04
            Stop		  8.0501806379194939e+04
            Strand		 0 25
            Start		  8.0867471824099965e+04
            Stop		  8.2194175994956415e+04
            Strand		 0 26
            Start		  7.8889000000000000e+04
            Stop		  8.0873911827497723e+04
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

