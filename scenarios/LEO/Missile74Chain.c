stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile74Chain
    BEGIN Definition
        Object		 Aircraft/Missile74
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 18:12:18.000000000
                Stop		 3 Feb 2025 19:55:32.177284461
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
            STKInst		 Aircraft/Missile74
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
            Start		  4.5608784024831126e+04
            Stop		  4.6299869106552556e+04
            Start		  4.9948041263654704e+04
            Stop		  5.0132177284461301e+04
            Strand		 0 2
            Start		  4.4833164146024108e+04
            Stop		  4.5594829173952130e+04
            Start		  4.9237382221872453e+04
            Stop		  4.9946799652712609e+04
            Strand		 0 3
            Start		  4.4105425675992330e+04
            Stop		  4.4839812673359411e+04
            Start		  4.8552115335214912e+04
            Stop		  4.9176235255203530e+04
            Strand		 0 4
            Start		  4.3938000000000000e+04
            Stop		  4.4012569967466719e+04
            Start		  4.7872606011522686e+04
            Stop		  4.8406769716480288e+04
            Strand		 0 5
            Start		  4.7161002628447248e+04
            Stop		  4.7669879894962090e+04
            Strand		 0 6
            Start		  4.6397082167459259e+04
            Stop		  4.6977937643393896e+04
            Strand		 0 7
            Start		  4.4944496737225527e+04
            Stop		  4.5806218383797583e+04
            Strand		 0 12
            Start		  4.5804394072490875e+04
            Stop		  4.6780522364266166e+04
            Strand		 0 13
            Start		  4.3938000000000000e+04
            Stop		  4.4069076969947622e+04
            Strand		 0 16
            Start		  4.7924857030222964e+04
            Stop		  4.9290657421582677e+04
            Strand		 0 17
            Start		  4.5984079803237444e+04
            Stop		  4.7779333923427475e+04
            Strand		 0 18
            Start		  4.4078978507201478e+04
            Stop		  4.6012754333307494e+04
            Strand		 0 22
            Start		  4.6398708650350680e+04
            Stop		  4.7673618314421896e+04
            Strand		 0 23
            Start		  4.5304844935585577e+04
            Stop		  4.6423125360492100e+04
            Strand		 0 26
            Start		  4.7612084120908366e+04
            Stop		  4.8169042899362132e+04
            Strand		 0 27
            Start		  4.6705273672008741e+04
            Stop		  4.7530073994364844e+04
            Strand		 0 28
            Start		  4.5973776549708804e+04
            Stop		  4.6708103137871316e+04
            Strand		 0 29
            Start		  4.5424162698691529e+04
            Stop		  4.5741150425580330e+04
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

                StaticColor		 #00ff00
                AnimationColor		 #00ffff
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

