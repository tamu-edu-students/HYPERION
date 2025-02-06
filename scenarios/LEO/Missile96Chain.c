stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile96Chain
    BEGIN Definition
        Object		 Aircraft/Missile96
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 10:38:55.000000000
                Stop		 3 Feb 2025 12:26:28.831112094
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
            STKInst		 Aircraft/Missile96
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 3
            Start		  2.0537020708029271e+04
            Stop		  2.1413641346644858e+04
            Strand		 0 4
            Start		  1.9449131255846638e+04
            Stop		  2.0523500569223284e+04
            Strand		 0 5
            Start		  1.8586666080988045e+04
            Stop		  1.9346142600646555e+04
            Strand		 0 10
            Start		  1.8796631028995325e+04
            Stop		  1.9326807543259220e+04
            Strand		 0 11
            Start		  1.6877616012638333e+04
            Stop		  1.8139235479663246e+04
            Strand		 0 12
            Start		  1.6735000000000000e+04
            Stop		  1.6755852940764220e+04
            Strand		 0 13
            Start		  2.2692624730817362e+04
            Stop		  2.3188831112093569e+04
            Strand		 0 14
            Start		  2.1405745454199634e+04
            Stop		  2.2598052978650056e+04
            Strand		 0 15
            Start		  2.0444334147087535e+04
            Stop		  2.1378693932969327e+04
            Strand		 0 19
            Start		  1.6735000000000000e+04
            Stop		  1.7211997372843362e+04
            Start		  2.1602863367457030e+04
            Stop		  2.1979025273793963e+04
            Strand		 0 20
            Start		  2.0619011975125199e+04
            Stop		  2.1347309881361507e+04
            Strand		 0 21
            Start		  1.9751776121720406e+04
            Stop		  2.0582618921164223e+04
            Strand		 0 22
            Start		  1.8941525445898169e+04
            Stop		  1.9762880265061169e+04
            Strand		 0 23
            Start		  1.8173452356387737e+04
            Stop		  1.8917668374178909e+04
            Strand		 0 24
            Start		  1.7437509525930000e+04
            Stop		  1.8063835727610534e+04
            Strand		 0 25
            Start		  2.0557991858586287e+04
            Stop		  2.1252343415415900e+04
            Strand		 0 26
            Start		  1.9857662657803321e+04
            Stop		  2.0373567203127743e+04
            Strand		 0 28
            Start		  2.2888878619370211e+04
            Stop		  2.3188831112093569e+04
            Strand		 0 29
            Start		  2.2093747322615905e+04
            Stop		  2.2899010310254998e+04
            Strand		 0 30
            Start		  2.1311693634746593e+04
            Stop		  2.2088177702724512e+04
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

