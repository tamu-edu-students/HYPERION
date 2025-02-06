stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile42Chain
    BEGIN Definition
        Object		 Aircraft/Missile42
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 21:03:22.000000000
                Stop		 3 Feb 2025 22:42:52.019256362
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
            STKInst		 Aircraft/Missile42
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
            Start		  5.8356837643219122e+04
            Stop		  5.9149832781730962e+04
            Strand		 0 2
            Start		  5.7382960052215603e+04
            Stop		  5.8306967479286919e+04
            Strand		 0 3
            Start		  5.6490616084871639e+04
            Stop		  5.7395671146838766e+04
            Strand		 0 4
            Start		  5.5666376920019975e+04
            Stop		  5.6447583687814971e+04
            Strand		 0 5
            Start		  5.4914508098413040e+04
            Stop		  5.5463958260788204e+04
            Strand		 0 6
            Start		  5.9557129884185400e+04
            Stop		  5.9758357472054857e+04
            Strand		 0 7
            Start		  5.7481841814975895e+04
            Stop		  5.8024131820090668e+04
            Strand		 0 8
            Start		  5.6700833775850901e+04
            Stop		  5.7150270387682918e+04
            Strand		 0 9
            Start		  5.5945303326512265e+04
            Stop		  5.6259037361056624e+04
            Strand		 0 10
            Start		  5.9900227880141392e+04
            Stop		  6.0172019256362488e+04
            Strand		 0 11
            Start		  5.9084542175551389e+04
            Stop		  5.9736501123464899e+04
            Strand		 0 12
            Start		  5.8276881829905375e+04
            Stop		  5.8884808674126267e+04
            Strand		 0 13
            Start		  5.6253056550394300e+04
            Stop		  5.7134688866997400e+04
            Strand		 0 16
            Start		  5.9237625297456092e+04
            Stop		  5.9836181065755693e+04
            Strand		 0 17
            Start		  5.8159776543159489e+04
            Stop		  5.9069164410693833e+04
            Strand		 0 18
            Start		  5.7163821470032039e+04
            Stop		  5.8164247008847909e+04
            Strand		 0 19
            Start		  5.5054667787660685e+04
            Stop		  5.6166089766424615e+04
            Strand		 0 20
            Start		  5.4202000000000000e+04
            Stop		  5.4940373625714776e+04
            Strand		 0 24
            Start		  5.6652477996197173e+04
            Stop		  5.7196331802432855e+04
            Strand		 0 28
            Start		  5.9219362934068682e+04
            Stop		  6.0172019256362488e+04
            Strand		 0 29
            Start		  5.8186243942573492e+04
            Stop		  5.9072832462876708e+04
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

