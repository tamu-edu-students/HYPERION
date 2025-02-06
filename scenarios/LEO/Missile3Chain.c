stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile3Chain
    BEGIN Definition
        Object		 Aircraft/Missile3
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 23:47:08.000000000
                Stop		 4 Feb 2025 01:13:40.705354705
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
            STKInst		 Aircraft/Missile3
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  6.4730996458536800e+04
            Stop		  6.5666433103232877e+04
            Strand		 0 2
            Start		  6.4028000000000000e+04
            Stop		  6.4746628380283852e+04
            Strand		 0 6
            Start		  6.5753119584032116e+04
            Stop		  6.6432045721953065e+04
            Strand		 0 10
            Start		  6.7291085975910974e+04
            Stop		  6.8333131606597526e+04
            Strand		 0 11
            Start		  6.6009891550406406e+04
            Stop		  6.7272159360437072e+04
            Strand		 0 12
            Start		  6.4829889523219681e+04
            Stop		  6.5954316633881695e+04
            Strand		 0 14
            Start		  6.9106414210179151e+04
            Stop		  6.9220705354705293e+04
            Strand		 0 15
            Start		  6.7592552289313404e+04
            Stop		  6.8722763977393188e+04
            Strand		 0 16
            Start		  6.5906398518448594e+04
            Stop		  6.7149924689889172e+04
            Strand		 0 17
            Start		  6.4409347614671708e+04
            Stop		  6.5780422798403626e+04
            Strand		 0 18
            Start		  6.4028000000000000e+04
            Stop		  6.4435217872321802e+04
            Strand		 0 20
            Start		  6.7127890610515344e+04
            Stop		  6.8018440015893138e+04
            Strand		 0 21
            Start		  6.6071213527285217e+04
            Stop		  6.7103282308530543e+04
            Strand		 0 22
            Start		  6.5223232378185501e+04
            Stop		  6.6032119258985782e+04
            Strand		 0 25
            Start		  6.7553578855505504e+04
            Stop		  6.8247863694976899e+04
            Strand		 0 26
            Start		  6.6867951662710359e+04
            Stop		  6.7286559763450277e+04
            Strand		 0 29
            Start		  6.9145990367903796e+04
            Stop		  6.9220705354705293e+04
            Strand		 0 30
            Start		  6.8314305019949679e+04
            Stop		  6.9159204654253714e+04
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

                StaticColor		 #00ffff
                AnimationColor		 #ff00ff
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

