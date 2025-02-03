stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 GS2Missile1
    BEGIN Definition
        BEGIN RoutingData
            StartInst		 Constellation/GroundStations
            EndInst		 Missile/Missile1
            MaxStrandDepth		 10
            BEGIN Connections
                BEGIN ConnectionsForInst
Constellation/GroundStations
SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites 0 1
                END ConnectionsForInst
                BEGIN ConnectionsForInst
SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites
SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors 0 2
                END ConnectionsForInst
                BEGIN ConnectionsForInst
SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors
Missile/Missile1 0 1
                END ConnectionsForInst
            END Connections
        END RoutingData
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 10 Nov 2024 18:00:00.000000000
                Stop		 11 Nov 2024 18:00:00.000000000
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
            STKInst		 Facility/ASFS
            STKInst		 Facility/WGS
            STKInst		 Facility/WSC
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P1_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P2_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P3_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P4_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P5_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P6_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P7_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P8_S1
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P8_S2
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P8_S3
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSat_Satellites MEO_P8_S4
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P1_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P2_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P3_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P4_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P5_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P6_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P7_S4.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P8_S1.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P8_S2.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P8_S3.Sensor.MEOSWIR
            CollectionSubsetEntry		 SatelliteCollection/HYPERION/Subset/AllMEOSWIR_Sensors MEO_P8_S4.Sensor.MEOSWIR
            STKInst		 Missile/Missile1
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 31 63 67
            Start		  0.0000000000000000e+00
            Stop		  2.9689751989023698e+01
        END StrandAccessesByIndex


    END Definition

    BEGIN Extensions

        BEGIN ExternData
        END ExternData

        BEGIN ADFFileData
        END ADFFileData

        BEGIN Desc
            BEGIN ShortText

            END ShortText
            BEGIN LongText

            END LongText
        END Desc

        BEGIN Crdn
        END Crdn

        BEGIN Graphics

            BEGIN Attributes

                StaticColor		 #ffff00
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

