stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile83Chain
    BEGIN Definition
        Object		 Aircraft/Missile83
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 17:44:02.000000000
                Stop		 3 Feb 2025 18:55:55.957502622
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
            STKInst		 Aircraft/Missile83
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  4.5640353025633231e+04
            Stop		  4.5812058144872935e+04
            Strand		 0 2
            Start		  4.4803603623367650e+04
            Stop		  4.5046372937104163e+04
            Strand		 0 3
            Start		  4.3959636275891738e+04
            Stop		  4.4286005763633322e+04
            Strand		 0 4
            Start		  4.3115247782840335e+04
            Stop		  4.3522252157222603e+04
            Strand		 0 5
            Start		  4.2268030543159111e+04
            Stop		  4.2756189333763650e+04
            Strand		 0 6
            Start		  4.6472865524378969e+04
            Stop		  4.6555957502621750e+04
            Strand		 0 7
            Start		  4.4293198176616686e+04
            Stop		  4.5062804957976099e+04
            Strand		 0 11
            Start		  4.6037935317054944e+04
            Stop		  4.6555957502621750e+04
            Strand		 0 12
            Start		  4.5119188172276154e+04
            Stop		  4.6053193110608896e+04
            Strand		 0 13
            Start		  4.3002058598393523e+04
            Stop		  4.4162239705673157e+04
            Strand		 0 14
            Start		  4.2242000000000000e+04
            Stop		  4.2986004084238637e+04
            Strand		 0 18
            Start		  4.4564899536317367e+04
            Stop		  4.5028613940551397e+04
            Strand		 0 23
            Start		  4.6421614414959040e+04
            Stop		  4.6555957502621750e+04
            Strand		 0 25
            Start		  4.3720973457686487e+04
            Stop		  4.4477937784544134e+04
            Strand		 0 26
            Start		  4.3137429999896623e+04
            Stop		  4.3314048942704285e+04
            Strand		 0 28
            Start		  4.6551859747258561e+04
            Stop		  4.6555957502621750e+04
            Strand		 0 29
            Start		  4.5460633259302667e+04
            Stop		  4.6386591004675887e+04
            Strand		 0 30
            Start		  4.4531829073567111e+04
            Stop		  4.5472889668732707e+04
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

                StaticColor		 #ffff00
                AnimationColor		 #0000ff
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

