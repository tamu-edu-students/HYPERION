stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile36Chain
    BEGIN Definition
        Object		 Aircraft/Missile36
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 10:09:35.000000000
                Stop		 3 Feb 2025 11:06:02.696557817
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
            STKInst		 Aircraft/Missile36
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 5
            Start		  1.5401592443181347e+04
            Stop		  1.6422261812978457e+04
            Strand		 0 10
            Start		  1.7080154808842151e+04
            Stop		  1.8362696557816718e+04
            Strand		 0 11
            Start		  1.4975000000000000e+04
            Stop		  1.5437544749015167e+04
            Strand		 0 16
            Start		  1.5976804717957073e+04
            Stop		  1.7021889554677036e+04
            Strand		 0 20
            Start		  1.6979226297888126e+04
            Stop		  1.7171041937819591e+04
            Strand		 0 21
            Start		  1.6182890833786796e+04
            Stop		  1.6762562581753285e+04
            Strand		 0 22
            Start		  1.5534764113054132e+04
            Stop		  1.6181177277407993e+04
            Strand		 0 23
            Start		  1.4975000000000000e+04
            Stop		  1.5517219617745146e+04
            Strand		 0 25
            Start		  1.6873550516501837e+04
            Stop		  1.7433902321981150e+04
            Strand		 0 26
            Start		  1.6215892996783023e+04
            Stop		  1.6862236498093425e+04
            Strand		 0 27
            Start		  1.5633311346321585e+04
            Stop		  1.6217101093334128e+04
            Strand		 0 28
            Start		  1.5193427071861546e+04
            Stop		  1.5446196962649077e+04
            Strand		 0 29
            Start		  1.8220596558267182e+04
            Stop		  1.8362696557816718e+04
            Strand		 0 30
            Start		  1.7562341522233368e+04
            Stop		  1.7964636561801824e+04
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

