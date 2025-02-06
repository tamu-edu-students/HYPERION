stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile76Chain
    BEGIN Definition
        Object		 Aircraft/Missile76
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 08:23:32.000000000
                Stop		 3 Feb 2025 11:03:39.081281616
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
            STKInst		 Aircraft/Missile76
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  1.4085345422677843e+04
            Stop		  1.5388614242999927e+04
            Strand		 0 2
            Start		  1.2644940166685226e+04
            Stop		  1.4092036366477845e+04
            Strand		 0 3
            Start		  1.1181146234074069e+04
            Stop		  1.2639050660686522e+04
            Strand		 0 4
            Start		  9.6378775134946954e+03
            Stop		  1.1087156683874819e+04
            Strand		 0 5
            Start		  8.6120000000000000e+03
            Stop		  9.5626976464482013e+03
            Strand		 0 6
            Start		  1.5679284833677924e+04
            Stop		  1.6449382950694173e+04
            Strand		 0 7
            Start		  1.2840069598224871e+04
            Stop		  1.4131840509173604e+04
            Strand		 0 8
            Start		  1.1645996447843325e+04
            Stop		  1.2862850787621794e+04
            Strand		 0 9
            Start		  1.0764140761665192e+04
            Stop		  1.1425777519034300e+04
            Strand		 0 10
            Start		  1.7868446184656641e+04
            Stop		  1.8219081281615585e+04
            Strand		 0 12
            Start		  1.4320052094873878e+04
            Stop		  1.5359769998451682e+04
            Strand		 0 13
            Start		  1.2433943729701605e+04
            Stop		  1.3193662684989573e+04
            Strand		 0 14
            Start		  1.1838230932429942e+04
            Stop		  1.2081657684045713e+04
            Strand		 0 16
            Start		  1.5315710104854952e+04
            Stop		  1.5659053145509275e+04
            Strand		 0 17
            Start		  1.4157152030121824e+04
            Stop		  1.5030486727342552e+04
            Strand		 0 18
            Start		  1.3231274756615823e+04
            Stop		  1.4160764201021457e+04
            Strand		 0 19
            Start		  1.2155550161634656e+04
            Stop		  1.2806601368621539e+04
            Start		  1.6931401160109443e+04
            Stop		  1.7765527858461446e+04
            Strand		 0 20
            Start		  1.1282586547731113e+04
            Stop		  1.2044333072493595e+04
            Start		  1.6132078557961328e+04
            Stop		  1.6925291562794457e+04
            Strand		 0 21
            Start		  1.0418165720565667e+04
            Stop		  1.1257089744639556e+04
            Start		  1.5360913581225712e+04
            Stop		  1.6065763526492621e+04
            Strand		 0 22
            Start		  9.5838212051467381e+03
            Stop		  1.0429418924580497e+04
            Start		  1.4602484153670577e+04
            Stop		  1.5204473006879467e+04
            Strand		 0 23
            Start		  8.8025663057284946e+03
            Stop		  9.5489982785618740e+03
            Start		  1.3829020320751908e+04
            Stop		  1.4365792455321167e+04
            Strand		 0 24
            Start		  1.3012990214522511e+04
            Stop		  1.3569827769918527e+04
            Start		  1.7764290021170782e+04
            Stop		  1.8219081281615585e+04
            Strand		 0 25
            Start		  1.1449665455723720e+04
            Stop		  1.2464388990954350e+04
            Strand		 0 26
            Start		  1.0681119124704219e+04
            Stop		  1.1252077429291539e+04
            Strand		 0 29
            Start		  1.3609153043268718e+04
            Stop		  1.4119455101477701e+04
            Strand		 0 30
            Start		  1.2446328934321524e+04
            Stop		  1.3412436830484898e+04
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

                StaticColor		 #ffff00
                AnimationColor		 #0000ff
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

