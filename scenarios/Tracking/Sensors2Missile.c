stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Sensors2Missile
    BEGIN Definition
        Object		 Constellation/LEOSatsSensors
        Object		 Aircraft/Missile
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 19 Mar 2025 02:26:28.000000000
                Stop		 20 Mar 2025 02:26:28.000000000
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
            STKInst		 Satellite/LEOSats_P1_S1/Sensor/Sensor_P1_S1
            STKInst		 Satellite/LEOSats_P1_S2/Sensor/Sensor_P1_S2
            STKInst		 Satellite/LEOSats_P1_S3/Sensor/Sensor_P1_S3
            STKInst		 Satellite/LEOSats_P1_S4/Sensor/Sensor_P1_S4
            STKInst		 Satellite/LEOSats_P1_S5/Sensor/Sensor_P1_S5
            STKInst		 Satellite/LEOSats_P1_S6/Sensor/Sensor_P1_S6
            STKInst		 Satellite/LEOSats_P2_S1/Sensor/Sensor_P2_S1
            STKInst		 Satellite/LEOSats_P2_S2/Sensor/Sensor_P2_S2
            STKInst		 Satellite/LEOSats_P2_S3/Sensor/Sensor_P2_S3
            STKInst		 Satellite/LEOSats_P2_S4/Sensor/Sensor_P2_S4
            STKInst		 Satellite/LEOSats_P2_S5/Sensor/Sensor_P2_S5
            STKInst		 Satellite/LEOSats_P2_S6/Sensor/Sensor_P2_S6
            STKInst		 Satellite/LEOSats_P3_S1/Sensor/Sensor_P3_S1
            STKInst		 Satellite/LEOSats_P3_S2/Sensor/Sensor_P3_S2
            STKInst		 Satellite/LEOSats_P3_S3/Sensor/Sensor_P3_S3
            STKInst		 Satellite/LEOSats_P3_S4/Sensor/Sensor_P3_S4
            STKInst		 Satellite/LEOSats_P3_S5/Sensor/Sensor_P3_S5
            STKInst		 Satellite/LEOSats_P3_S6/Sensor/Sensor_P3_S6
            STKInst		 Satellite/LEOSats_P4_S1/Sensor/Sensor_P4_S1
            STKInst		 Satellite/LEOSats_P4_S2/Sensor/Sensor_P4_S2
            STKInst		 Satellite/LEOSats_P4_S3/Sensor/Sensor_P4_S3
            STKInst		 Satellite/LEOSats_P4_S4/Sensor/Sensor_P4_S4
            STKInst		 Satellite/LEOSats_P4_S5/Sensor/Sensor_P4_S5
            STKInst		 Satellite/LEOSats_P4_S6/Sensor/Sensor_P4_S6
            STKInst		 Satellite/LEOSats_P5_S1/Sensor/Sensor_P5_S1
            STKInst		 Satellite/LEOSats_P5_S2/Sensor/Sensor_P5_S2
            STKInst		 Satellite/LEOSats_P5_S3/Sensor/Sensor_P5_S3
            STKInst		 Satellite/LEOSats_P5_S4/Sensor/Sensor_P5_S4
            STKInst		 Satellite/LEOSats_P5_S5/Sensor/Sensor_P5_S5
            STKInst		 Satellite/LEOSats_P5_S6/Sensor/Sensor_P5_S6
            STKInst		 Aircraft/Missile
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 3 30
            Start		  7.3924828123424188e+04
            Stop		  7.4165863423573450e+04
            Strand		 4 30
            Start		  7.2906388900820806e+04
            Stop		  7.3323709510080094e+04
            Strand		 5 30
            Start		  7.2003692391529301e+04
            Stop		  7.2406692079589237e+04
            Strand		 6 30
            Start		  7.5463815170406873e+04
            Stop		  7.5764035587739083e+04
            Strand		 7 30
            Start		  7.4632803189130849e+04
            Stop		  7.4944520890198168e+04
            Strand		 8 30
            Start		  7.3800926616320314e+04
            Stop		  7.4118123673088325e+04
            Strand		 9 30
            Start		  7.2975770363020492e+04
            Stop		  7.3283337876514925e+04
            Strand		 10 30
            Start		  7.2157985496819441e+04
            Stop		  7.2439440439805709e+04
            Strand		 13 30
            Start		  7.4222664228518974e+04
            Stop		  7.4289711740087878e+04
            Strand		 14 30
            Start		  7.3100378029441592e+04
            Stop		  7.3459756070988864e+04
            Strand		 15 30
            Start		  7.2095006774053822e+04
            Stop		  7.2594529860969589e+04
            Strand		 20 30
            Start		  7.2857498555730985e+04
            Stop		  7.2898323875970207e+04
            Strand		 24 30
            Start		  7.4975158409331299e+04
            Stop		  7.5601286823698145e+04
            Strand		 25 30
            Start		  7.3698594791631447e+04
            Stop		  7.4224423386023540e+04
            Strand		 26 30
            Start		  7.2597827625195176e+04
            Stop		  7.2685957848940510e+04
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

