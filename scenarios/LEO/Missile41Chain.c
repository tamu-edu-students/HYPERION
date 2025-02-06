stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 Missile41Chain
    BEGIN Definition
        Object		 Aircraft/Missile41
        Object		 Constellation/LEOSensors_60
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 23:27:11.000000000
                Stop		 4 Feb 2025 01:27:57.155906164
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
            STKInst		 Aircraft/Missile41
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 4
            Start		  6.8249590377064378e+04
            Stop		  6.8604914030529035e+04
            Strand		 0 5
            Start		  6.6885134627075895e+04
            Stop		  6.7967482668015582e+04
            Strand		 0 6
            Start		  6.5844631101968858e+04
            Stop		  6.6901322678051816e+04
            Strand		 0 7
            Start		  6.2831000000000000e+04
            Stop		  6.3454259885387677e+04
            Strand		 0 8
            Start		  6.9881878390356171e+04
            Stop		  7.0077155906163680e+04
            Strand		 0 9
            Start		  6.8517745219874909e+04
            Stop		  6.9871983178396986e+04
            Strand		 0 10
            Start		  6.7090571439995969e+04
            Stop		  6.8049367627828979e+04
            Strand		 0 11
            Start		  6.5092611626663449e+04
            Stop		  6.6220418567072746e+04
            Strand		 0 12
            Start		  6.3443033357247732e+04
            Stop		  6.4851323695206534e+04
            Strand		 0 14
            Start		  6.7938697291314049e+04
            Stop		  6.8316466808510871e+04
            Strand		 0 15
            Start		  6.6501835822041423e+04
            Stop		  6.7618183678339497e+04
            Strand		 0 16
            Start		  6.5523748153295404e+04
            Stop		  6.6519137950316130e+04
            Strand		 0 19
            Start		  6.7990124584361183e+04
            Stop		  6.8826126350773120e+04
            Strand		 0 20
            Start		  6.7325349726051325e+04
            Stop		  6.7821409935979653e+04
            Strand		 0 23
            Start		  6.9812102558615050e+04
            Stop		  7.0077155906163680e+04
            Strand		 0 24
            Start		  6.8818573937766545e+04
            Stop		  6.9699644802243201e+04
            Strand		 0 25
            Start		  6.3225902560828050e+04
            Stop		  6.3557258206420680e+04
            Strand		 0 28
            Start		  6.5604751908264676e+04
            Stop		  6.6250889008448881e+04
            Strand		 0 29
            Start		  6.4645292915984028e+04
            Stop		  6.5529952054329049e+04
            Strand		 0 30
            Start		  6.3813585127853818e+04
            Stop		  6.4657469036716444e+04
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

