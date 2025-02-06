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
                Start		 3 Feb 2025 12:10:30.000000000
                Stop		 3 Feb 2025 14:02:00.891262933
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
            STKInst		 Satellite/Sat_P1_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P1_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P2_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P3_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P4_S6/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S1/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S2/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S3/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S4/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S5/Sensor/LEOSensor
            STKInst		 Satellite/Sat_P5_S6/Sensor/LEOSensor
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  2.5603736602155317e+04
            Stop		  2.6479612830742659e+04
            Strand		 0 2
            Start		  2.4739132612729180e+04
            Stop		  2.5617490547335474e+04
            Strand		 0 3
            Start		  2.3930358282380785e+04
            Stop		  2.4690692894799162e+04
            Strand		 0 4
            Start		  2.3273906920088804e+04
            Stop		  2.3624986290165562e+04
            Start		  2.8347119864835418e+04
            Stop		  2.8777229476628025e+04
            Strand		 0 5
            Start		  2.7414559418715926e+04
            Stop		  2.8055519056487468e+04
            Strand		 0 6
            Start		  2.6498799604480606e+04
            Stop		  2.7289472954737364e+04
            Strand		 0 8
            Start		  2.4141380570316891e+04
            Stop		  2.4734878739023479e+04
            Strand		 0 9
            Start		  2.2761548621282047e+04
            Stop		  2.3889181894833480e+04
            Strand		 0 10
            Start		  2.2230000000000000e+04
            Stop		  2.2771694819047945e+04
            Strand		 0 13
            Start		  2.6270107518860088e+04
            Stop		  2.6743656795417108e+04
            Strand		 0 17
            Start		  2.8555821139494001e+04
            Stop		  2.8920891262933041e+04
            Strand		 0 18
            Start		  2.7306114764522241e+04
            Stop		  2.8452473980793962e+04
            Strand		 0 19
            Start		  2.5043014940920260e+04
            Stop		  2.6051991093490495e+04
            Strand		 0 20
            Start		  2.4059739745985637e+04
            Stop		  2.5055952734325139e+04
            Strand		 0 21
            Start		  2.3254443805733452e+04
            Stop		  2.3947743355355251e+04
            Strand		 0 24
            Start		  2.6240326060966469e+04
            Stop		  2.6858831067265492e+04
            Strand		 0 25
            Start		  2.4269944285114343e+04
            Stop		  2.4718915140485835e+04
            Strand		 0 26
            Start		  2.3371414538764762e+04
            Stop		  2.3983078627071322e+04
            Strand		 0 27
            Start		  2.2500192392695320e+04
            Stop		  2.3209999778661499e+04
            Strand		 0 28
            Start		  2.2230000000000000e+04
            Stop		  2.2417763498363187e+04
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

