stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 MEO2Missiles
    BEGIN Definition
        BEGIN RoutingData
            StartInst		 SatelliteCollection/MEOSats/Subset/AllSensors
            EndInst		 Constellation/Missiles
            MaxStrandDepth		 10
            BEGIN Connections
                BEGIN ConnectionsForInst
SatelliteCollection/MEOSats/Subset/AllSensors
Constellation/Missiles 0 1
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
            STKInst		 Aircraft/Missile2
            STKInst		 Aircraft/Missile3
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 27
            Start		  6.0034031999999996e+01
            Stop		  4.3945042699999995e+03
            Strand		 1 29
            Start		  7.5600037236999997e+04
            Stop		  8.0340202712999991e+04
            Strand		 2 28
            Start		  4.3204281675639104e+04
            Stop		  4.6703454450999998e+04
            Strand		 3 29
            Start		  7.5600034195999993e+04
            Stop		  8.0340208111000000e+04
            Strand		 4 28
            Start		  4.5140650226908736e+04
            Stop		  4.6703454165999996e+04
            Strand		 5 27
            Start		  6.0038807999999996e+01
            Stop		  4.3944979079999994e+03
            Strand		 5 28
            Start		  4.4242690297536195e+04
            Stop		  4.5684777720055448e+04
            Strand		 6 28
            Start		  4.6594892423148718e+04
            Stop		  4.6703464464999997e+04
            Strand		 7 27
            Start		  6.0048749000000001e+01
            Stop		  4.3944994859999997e+03
            Strand		 7 28
            Start		  4.4747541365203127e+04
            Stop		  4.6703465290000000e+04
            Strand		 8 27
            Start		  6.0049233999999998e+01
            Stop		  2.1076580206708318e+03
            Strand		 8 28
            Start		  4.3200041248999994e+04
            Stop		  4.4427332364369620e+04
            Strand		 8 29
            Start		  7.5600045045999999e+04
            Stop		  8.0340211455999990e+04
            Strand		 9 27
            Start		  1.7070571981857761e+03
            Stop		  4.3945038379999996e+03
            Strand		 9 28
            Start		  4.5391618660733395e+04
            Stop		  4.6703460134000001e+04
            Strand		 10 27
            Start		  6.0039438999999994e+01
            Stop		  3.5947940443176421e+03
            Strand		 10 28
            Start		  4.3200036230999998e+04
            Stop		  4.5518717421672161e+04
            Strand		 10 29
            Start		  7.6325445514745981e+04
            Stop		  8.0340209260000003e+04
            Strand		 11 29
            Start		  7.5611114517381327e+04
            Stop		  7.6624718151536508e+04
            Strand		 12 27
            Start		  6.0033920999999999e+01
            Stop		  3.0607372766129374e+03
            Strand		 12 28
            Start		  4.3200044821999996e+04
            Stop		  4.6426543921092452e+04
            Strand		 12 29
            Start		  7.7519928311793657e+04
            Stop		  8.0340203391000003e+04
            Strand		 13 29
            Start		  7.5600048570999992e+04
            Stop		  7.7936086603482618e+04
            Strand		 14 27
            Start		  2.2689740160687256e+03
            Stop		  4.3945046940000002e+03
            Strand		 14 28
            Start		  4.6084934193483023e+04
            Stop		  4.6703461425999994e+04
            Strand		 15 29
            Start		  7.5614362127133369e+04
            Stop		  7.8798564041098900e+04
            Strand		 16 27
            Start		  2.1640486153740767e+03
            Stop		  4.3945001199999997e+03
            Strand		 16 29
            Start		  7.5600043636000002e+04
            Stop		  7.6307213591045729e+04
            Strand		 17 27
            Start		  6.0034409999999994e+01
            Stop		  2.6891681944282609e+03
            Strand		 17 28
            Start		  4.3532542966011912e+04
            Stop		  4.6703458792999998e+04
            Strand		 17 29
            Start		  7.8475833492303558e+04
            Stop		  8.0340201230999999e+04
            Strand		 18 27
            Start		  2.0515011534599053e+03
            Stop		  4.3944933039999996e+03
            Strand		 18 28
            Start		  4.3200047928000000e+04
            Stop		  4.3835732143498732e+04
            Strand		 18 29
            Start		  7.5600043355999995e+04
            Stop		  7.6786900839522626e+04
            Strand		 19 27
            Start		  6.0036866999999994e+01
            Stop		  2.6309276269887482e+03
            Strand		 19 28
            Start		  4.4751805521002243e+04
            Stop		  4.6703456408999999e+04
            Strand		 19 29
            Start		  7.9526944957056083e+04
            Stop		  8.0340209229999993e+04
            Strand		 20 29
            Start		  7.5806714036684280e+04
            Stop		  7.9612219934040026e+04
            Strand		 21 27
            Start		  6.0037197999999997e+01
            Stop		  2.9303785520872002e+03
            Strand		 21 28
            Start		  4.6227154771823189e+04
            Stop		  4.6703463317999995e+04
            Strand		 22 29
            Start		  7.5837444064040319e+04
            Stop		  8.0340213498999990e+04
            Strand		 23 27
            Start		  2.2057896956953332e+03
            Stop		  4.3944930249999998e+03
            Strand		 23 28
            Start		  4.3200036841000001e+04
            Stop		  4.5762157503605456e+04
            Strand		 23 29
            Start		  7.5657934172947585e+04
            Stop		  7.6794901010416288e+04
            Strand		 24 29
            Start		  7.5600047685999991e+04
            Stop		  8.0340203395999997e+04
            Strand		 25 27
            Start		  3.1428745652891234e+03
            Stop		  4.3945036300000002e+03
            Strand		 25 28
            Start		  4.3200039340999996e+04
            Stop		  4.6703462604000000e+04
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

                StaticColor		 #00ff00
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

