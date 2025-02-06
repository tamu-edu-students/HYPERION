stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile15Chain
    BEGIN Definition
        Object		 Aircraft/Missile15
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 13:04:45.000000000
                Stop		 3 Feb 2025 14:20:55.475095440
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
            STKInst		 Aircraft/Missile15
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  2.6732753106743567e+04
            Stop		  2.7658666834365598e+04
            Strand		 0 6
            Start		  2.7639221947883365e+04
            Stop		  2.8503305412524769e+04
            Strand		 0 7
            Start		  2.5485000000000000e+04
            Stop		  2.5625944872689568e+04
            Strand		 0 10
            Start		  3.0021088222921633e+04
            Stop		  3.0055475095439921e+04
            Strand		 0 11
            Start		  2.7878521935442099e+04
            Stop		  2.9780490514441601e+04
            Strand		 0 12
            Start		  2.5703883022266938e+04
            Stop		  2.7837010102626391e+04
            Strand		 0 16
            Start		  2.7990083352452089e+04
            Stop		  2.9097949001838228e+04
            Strand		 0 17
            Start		  2.6822951394543943e+04
            Stop		  2.7997841212684791e+04
            Strand		 0 20
            Start		  2.9156049697951232e+04
            Stop		  2.9681013795528645e+04
            Strand		 0 21
            Start		  2.8272184459785669e+04
            Stop		  2.9080840843969065e+04
            Strand		 0 22
            Start		  2.7605177986479721e+04
            Stop		  2.8254870589012036e+04
            Strand		 0 25
            Start		  2.5485000000000000e+04
            Stop		  2.5787975386559876e+04
            Start		  2.9535513802268466e+04
            Stop		  2.9913388270450625e+04
            Strand		 0 26
            Start		  2.8950434270407321e+04
            Stop		  2.9111631784927711e+04
            Strand		 0 27
            Start		  2.8196175070789031e+04
            Stop		  2.8476042703490395e+04
            Strand		 0 28
            Start		  2.7370085153584714e+04
            Stop		  2.7897539170587395e+04
            Strand		 0 29
            Start		  2.6571668416881355e+04
            Stop		  2.7275417934588881e+04
            Strand		 0 30
            Start		  2.5837635608440341e+04
            Stop		  2.6579797816697774e+04
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

