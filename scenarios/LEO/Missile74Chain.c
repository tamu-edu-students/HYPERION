stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile74Chain
    BEGIN Definition
        Object		 Aircraft/Missile74
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 23:14:50.000000000
                Stop		 4 Feb 2025 00:37:49.687909998
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
            STKInst		 Aircraft/Missile74
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  6.5851727100243486e+04
            Stop		  6.6988846883282298e+04
            Strand		 0 2
            Start		  6.4836281150634430e+04
            Stop		  6.5788774158777233e+04
            Strand		 0 6
            Start		  6.6991137401912885e+04
            Stop		  6.7069687909997840e+04
            Strand		 0 9
            Start		  6.2718566441973489e+04
            Stop		  6.3383895563599101e+04
            Strand		 0 10
            Start		  6.2090000000000000e+04
            Stop		  6.2540537224314889e+04
            Strand		 0 19
            Start		  6.2090000000000000e+04
            Stop		  6.2158635928156116e+04
            Strand		 0 20
            Start		  6.6146347348721290e+04
            Stop		  6.6369819170424817e+04
            Strand		 0 21
            Start		  6.5048684609324824e+04
            Stop		  6.5724557581866873e+04
            Strand		 0 22
            Start		  6.4073936456248230e+04
            Stop		  6.4927551262370805e+04
            Strand		 0 23
            Start		  6.3146836838290881e+04
            Stop		  6.4063596516871170e+04
            Strand		 0 24
            Start		  6.2266895079996553e+04
            Stop		  6.3144164307499828e+04
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

