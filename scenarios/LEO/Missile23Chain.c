stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile23Chain
    BEGIN Definition
        Object		 Aircraft/Missile23
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 18:40:47.000000000
                Stop		 3 Feb 2025 19:49:34.249379797
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
            STKInst		 Aircraft/Missile23
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  4.5647000000000000e+04
            Stop		  4.5898312915785362e+04
            Strand		 0 2
            Start		  4.9590829982071795e+04
            Stop		  4.9774249379797417e+04
            Strand		 0 3
            Start		  4.8652100250134070e+04
            Stop		  4.9251751877622381e+04
            Strand		 0 4
            Start		  4.7762354172620915e+04
            Stop		  4.8541193280389452e+04
            Strand		 0 5
            Start		  4.6910334617135282e+04
            Stop		  4.7761588274300477e+04
            Strand		 0 6
            Start		  4.6131249568553510e+04
            Stop		  4.6906254398968886e+04
            Strand		 0 11
            Start		  4.6223562368416540e+04
            Stop		  4.7035747782046055e+04
            Strand		 0 12
            Start		  4.5647000000000000e+04
            Stop		  4.6126918878494143e+04
            Strand		 0 15
            Start		  4.9375261876007535e+04
            Stop		  4.9774249379797417e+04
            Strand		 0 16
            Start		  4.8059813468533495e+04
            Stop		  4.9189074790844323e+04
            Strand		 0 21
            Start		  4.8312127541758127e+04
            Stop		  4.8648456420081944e+04
            Strand		 0 22
            Start		  4.7024719861446931e+04
            Stop		  4.8024168654688277e+04
            Strand		 0 23
            Start		  4.6113172699918119e+04
            Stop		  4.7046569545219900e+04
            Strand		 0 24
            Start		  4.5647000000000000e+04
            Stop		  4.5752141519179429e+04
            Strand		 0 26
            Start		  4.8065650840410002e+04
            Stop		  4.8206712444023091e+04
            Strand		 0 27
            Start		  4.7128728420645275e+04
            Stop		  4.7612539679839181e+04
            Strand		 0 28
            Start		  4.6282313837468857e+04
            Stop		  4.6920853293536864e+04
            Strand		 0 29
            Start		  4.5647000000000000e+04
            Stop		  4.6186782731332387e+04
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

                StaticColor		 #ff0000
                AnimationColor		 #ffffff
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

