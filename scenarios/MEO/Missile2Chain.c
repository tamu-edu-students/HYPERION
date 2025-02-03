stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile2Chain
    BEGIN Definition
        BEGIN RoutingData
            StartInst		 SatelliteCollection/MEOSats/Subset/AllSensors
            EndInst		 Aircraft/Missile2
            MaxStrandDepth		 10
            BEGIN Connections
                BEGIN ConnectionsForInst
SatelliteCollection/MEOSats/Subset/AllSensors
Aircraft/Missile2 0 1
                END ConnectionsForInst
            END Connections
        END RoutingData
        Recompute		 No
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 43200
        ComputeIntervalStop		 46703.41499377006
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 11 Nov 2024 06:00:00.000000000
                Stop		 11 Nov 2024 06:58:23.414993770
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
            STKInst		 Aircraft/Missile2
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 2 27
            Start		  4.3204281675639104e+04
            Stop		  4.6703454450999998e+04
            Strand		 4 27
            Start		  4.5140650226908736e+04
            Stop		  4.6703454165999996e+04
            Strand		 5 27
            Start		  4.4242690297536195e+04
            Stop		  4.5684777720055448e+04
            Strand		 6 27
            Start		  4.6594892423148718e+04
            Stop		  4.6703464464999997e+04
            Strand		 7 27
            Start		  4.4747541365203127e+04
            Stop		  4.6703465290000000e+04
            Strand		 8 27
            Start		  4.3200041248999994e+04
            Stop		  4.4427332364369620e+04
            Strand		 9 27
            Start		  4.5391618660733395e+04
            Stop		  4.6703460134000001e+04
            Strand		 10 27
            Start		  4.3200036230999998e+04
            Stop		  4.5518717421672161e+04
            Strand		 12 27
            Start		  4.3200044821999996e+04
            Stop		  4.6426543921092452e+04
            Strand		 14 27
            Start		  4.6084934193483023e+04
            Stop		  4.6703461425999994e+04
            Strand		 17 27
            Start		  4.3532542966011912e+04
            Stop		  4.6703458792999998e+04
            Strand		 18 27
            Start		  4.3200047928000000e+04
            Stop		  4.3835732143498732e+04
            Strand		 19 27
            Start		  4.4751805521002243e+04
            Stop		  4.6703456408999999e+04
            Strand		 21 27
            Start		  4.6227154771823189e+04
            Stop		  4.6703463317999995e+04
            Strand		 23 27
            Start		  4.3200036841000001e+04
            Stop		  4.5762157503605456e+04
            Strand		 25 27
            Start		  4.3200039340999996e+04
            Stop		  4.6703462604000000e+04
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

