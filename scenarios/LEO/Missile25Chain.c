stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile25Chain
    BEGIN Definition
        Object		 Aircraft/Missile25
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 22:20:25.000000000
                Stop		 3 Feb 2025 22:55:43.093452431
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
            STKInst		 Aircraft/Missile25
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 5
            Start		  6.0514987293439823e+04
            Stop		  6.0851073242406441e+04
            Strand		 0 6
            Start		  5.9483257108082296e+04
            Stop		  6.0387947675083793e+04
            Strand		 0 7
            Start		  5.8825000000000000e+04
            Stop		  5.8950786131802073e+04
            Strand		 0 10
            Start		  6.0349625683005244e+04
            Stop		  6.0755628982657254e+04
            Strand		 0 11
            Start		  5.9637188343190151e+04
            Stop		  6.0190690975601356e+04
            Strand		 0 12
            Start		  5.8950279611660735e+04
            Stop		  5.9585925167230584e+04
            Strand		 0 15
            Start		  6.0286676622292995e+04
            Stop		  6.0908838625553908e+04
            Strand		 0 16
            Start		  5.9562625871427095e+04
            Stop		  6.0285587534817452e+04
            Strand		 0 17
            Start		  5.9032983786504636e+04
            Stop		  5.9481208294686759e+04
            Strand		 0 22
            Start		  5.8825000000000000e+04
            Stop		  5.9690494727008256e+04
            Strand		 0 27
            Start		  6.0227379235052802e+04
            Stop		  6.0943093452431138e+04
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

