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
            Strand		 4 30
            Start		  1.0155028482469410e+04
            Stop		  1.0710507083709908e+04
            Strand		 5 30
            Start		  8.8446417687591966e+03
            Stop		  9.0456613802273005e+03
            Strand		 10 30
            Start		  9.1616075282385536e+03
            Stop		  9.5472307155826384e+03
            Strand		 11 30
            Start		  8.1693734539354828e+03
            Stop		  8.6304563323765997e+03
            Strand		 13 30
            Start		  1.0854260715479077e+04
            Stop		  1.0951911240400223e+04
            Strand		 14 30
            Start		  1.0002917284370220e+04
            Stop		  1.0185197438390249e+04
            Strand		 15 30
            Start		  9.1622594428099947e+03
            Stop		  9.4109685497198952e+03
            Strand		 16 30
            Start		  8.3376784981017063e+03
            Stop		  8.6295426391396359e+03
            Strand		 17 30
            Start		  7.5237852390120643e+03
            Stop		  7.8413314826215019e+03
            Strand		 19 30
            Start		  1.0247854666382877e+04
            Stop		  1.0340686894111606e+04
            Strand		 20 30
            Start		  9.2613396024026570e+03
            Stop		  9.5711331038135231e+03
            Strand		 21 30
            Start		  8.3379779004648863e+03
            Stop		  8.7772474074780857e+03
            Strand		 22 30
            Start		  7.4831513648559921e+03
            Stop		  7.7633614034706952e+03
            Strand		 27 30
            Start		  7.5462593520622568e+03
            Stop		  7.9971262016458986e+03
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

