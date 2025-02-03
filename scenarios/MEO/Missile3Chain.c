stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile3Chain
    BEGIN Definition
        BEGIN RoutingData
            StartInst		 SatelliteCollection/MEOSats/Subset/AllSensors
            EndInst		 Aircraft/Missile3
            MaxStrandDepth		 10
            BEGIN Connections
                BEGIN ConnectionsForInst
SatelliteCollection/MEOSats/Subset/AllSensors
Aircraft/Missile3 0 1
                END ConnectionsForInst
            END Connections
        END RoutingData
        Recompute		 No
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 75600
        ComputeIntervalStop		 80340.16512952105
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 11 Nov 2024 15:00:00.000000000
                Stop		 11 Nov 2024 16:19:00.165129521
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
            STKInst		 Aircraft/Missile3
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 1 27
            Start		  7.5600037236999997e+04
            Stop		  8.0340202712999991e+04
            Strand		 3 27
            Start		  7.5600034195999993e+04
            Stop		  8.0340208111000000e+04
            Strand		 8 27
            Start		  7.5600045045999999e+04
            Stop		  8.0340211455999990e+04
            Strand		 10 27
            Start		  7.6325445514745981e+04
            Stop		  8.0340209260000003e+04
            Strand		 11 27
            Start		  7.5611114517381327e+04
            Stop		  7.6624718151536508e+04
            Strand		 12 27
            Start		  7.7519928311793657e+04
            Stop		  8.0340203391000003e+04
            Strand		 13 27
            Start		  7.5600048570999992e+04
            Stop		  7.7936086603482618e+04
            Strand		 15 27
            Start		  7.5614362127133369e+04
            Stop		  7.8798564041098900e+04
            Strand		 16 27
            Start		  7.5600043636000002e+04
            Stop		  7.6307213591045729e+04
            Strand		 17 27
            Start		  7.8475833492303558e+04
            Stop		  8.0340201230999999e+04
            Strand		 18 27
            Start		  7.5600043355999995e+04
            Stop		  7.6786900839522626e+04
            Strand		 19 27
            Start		  7.9526944957056083e+04
            Stop		  8.0340209229999993e+04
            Strand		 20 27
            Start		  7.5806714036684280e+04
            Stop		  7.9612219934040026e+04
            Strand		 22 27
            Start		  7.5837444064040319e+04
            Stop		  8.0340213498999990e+04
            Strand		 23 27
            Start		  7.5657934172947585e+04
            Stop		  7.6794901010416288e+04
            Strand		 24 27
            Start		  7.5600047685999991e+04
            Stop		  8.0340203395999997e+04
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

                StaticColor		 #0000ff
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

