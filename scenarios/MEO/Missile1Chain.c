stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile1Chain
    BEGIN Definition
        BEGIN RoutingData
            StartInst		 SatelliteCollection/MEOSats/Subset/AllSensors
            EndInst		 Aircraft/Missile1
            MaxStrandDepth		 10
            BEGIN Connections
                BEGIN ConnectionsForInst
SatelliteCollection/MEOSats/Subset/AllSensors
Aircraft/Missile1 0 1
                END ConnectionsForInst
            END Connections
        END RoutingData
        Recompute		 No
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 60
        ComputeIntervalStop		 4394.458334426132
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 10 Nov 2024 18:01:00.000000000
                Stop		 10 Nov 2024 19:13:14.458334426
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
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P1_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P1_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P1_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P2_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P2_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P2_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P3_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P3_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P3_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P4_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P4_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P4_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P5_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P5_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P5_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P6_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P6_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P6_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P7_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P7_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P7_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P8_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P8_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P8_S3.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P9_S1.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P9_S2.Sensor.SWIR
            CollectionSubsetEntry		 SatelliteCollection/MEOSats/Subset/AllSensors MEO_P9_S3.Sensor.SWIR
            STKInst		 Aircraft/Missile1
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 27
            Start		  6.0034031999999996e+01
            Stop		  4.3945042699999995e+03
            Strand		 5 27
            Start		  6.0038807999999996e+01
            Stop		  4.3944979079999994e+03
            Strand		 7 27
            Start		  6.0048749000000001e+01
            Stop		  4.3944994859999997e+03
            Strand		 8 27
            Start		  6.0049233999999998e+01
            Stop		  2.1076580206708318e+03
            Strand		 9 27
            Start		  1.7070571981857761e+03
            Stop		  4.3945038379999996e+03
            Strand		 10 27
            Start		  6.0039438999999994e+01
            Stop		  3.5947940443176421e+03
            Strand		 12 27
            Start		  6.0033920999999999e+01
            Stop		  3.0607372766129374e+03
            Strand		 14 27
            Start		  2.2689740160687256e+03
            Stop		  4.3945046940000002e+03
            Strand		 16 27
            Start		  2.1640486153740767e+03
            Stop		  4.3945001199999997e+03
            Strand		 17 27
            Start		  6.0034409999999994e+01
            Stop		  2.6891681944282609e+03
            Strand		 18 27
            Start		  2.0515011534599053e+03
            Stop		  4.3944933039999996e+03
            Strand		 19 27
            Start		  6.0036866999999994e+01
            Stop		  2.6309276269887482e+03
            Strand		 21 27
            Start		  6.0037197999999997e+01
            Stop		  2.9303785520872002e+03
            Strand		 23 27
            Start		  2.2057896956953332e+03
            Stop		  4.3944930249999998e+03
            Strand		 25 27
            Start		  3.1428745652891234e+03
            Stop		  4.3945036300000002e+03
            Strand		 26 27
            Start		  6.0035049000000001e+01
            Stop		  3.6805525782277559e+03
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

                StaticColor		 #ffffff
                AnimationColor		 #00ff00
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

