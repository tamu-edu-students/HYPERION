stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile99Chain
    BEGIN Definition
        Object		 Aircraft/Missile99
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 18:54:46.000000000
                Stop		 3 Feb 2025 19:47:56.129633146
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
            STKInst		 Aircraft/Missile99
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 5
            Start		  4.8431431813155192e+04
            Stop		  4.9676129633145509e+04
            Strand		 0 6
            Start		  4.7441218123523337e+04
            Stop		  4.8316284430917345e+04
            Strand		 0 11
            Start		  4.6486000000000000e+04
            Stop		  4.6926442060832997e+04
            Strand		 0 14
            Start		  4.8244808274704104e+04
            Stop		  4.8923398054507677e+04
            Strand		 0 15
            Start		  4.7375686623097528e+04
            Stop		  4.8227339784288823e+04
            Strand		 0 16
            Start		  4.6928453143616185e+04
            Stop		  4.7135124547699728e+04
            Strand		 0 24
            Start		  4.9500794237732836e+04
            Stop		  4.9676129633145509e+04
            Strand		 0 28
            Start		  4.6731880097664369e+04
            Stop		  4.7584050908183483e+04
            Strand		 0 29
            Start		  4.6486000000000000e+04
            Stop		  4.6747532822058281e+04
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

