stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile43Chain
    BEGIN Definition
        Object		 Aircraft/Missile43
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 13:11:52.000000000
                Stop		 3 Feb 2025 14:05:19.201168761
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
            STKInst		 Aircraft/Missile43
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
            Start		  2.6658888756361484e+04
            Stop		  2.7570654381146556e+04
            Strand		 0 6
            Start		  2.7594259412755888e+04
            Stop		  2.8219591629493825e+04
            Strand		 0 11
            Start		  2.8152670067372106e+04
            Stop		  2.9119201168761243e+04
            Strand		 0 12
            Start		  2.5981601755876040e+04
            Stop		  2.8161642175030527e+04
            Strand		 0 17
            Start		  2.6793916177033392e+04
            Stop		  2.8259756834683707e+04
            Strand		 0 21
            Start		  2.8271732654521416e+04
            Stop		  2.8939066733717813e+04
            Strand		 0 22
            Start		  2.7483235319061016e+04
            Stop		  2.8269596992170213e+04
            Strand		 0 23
            Start		  2.6990765004552526e+04
            Stop		  2.7319167710719332e+04
            Strand		 0 26
            Start		  2.8612066687292318e+04
            Stop		  2.9119201168761243e+04
            Strand		 0 27
            Start		  2.7963385188513621e+04
            Stop		  2.8435260663013716e+04
            Strand		 0 28
            Start		  2.7256709369664510e+04
            Stop		  2.7789060785565089e+04
            Strand		 0 29
            Start		  2.6521318721213545e+04
            Stop		  2.7164722025348754e+04
            Strand		 0 30
            Start		  2.5912000000000000e+04
            Stop		  2.6514357763492735e+04
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

