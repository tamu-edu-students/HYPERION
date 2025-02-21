stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 NWSFChain
    BEGIN Definition
        Object		 Facility/NWSF
        Object		 Constellation/LEOSats
        Recompute		 Yes
        LastRequestedToBeComputedInParallel		 No
        IntervalType		 0
        ComputeIntervalStart		 0
        ComputeIntervalStop		 86400
        ComputeIntervalPtr		
        BEGIN EVENTINTERVAL
            BEGIN Interval
                Start		 3 Feb 2025 06:00:00.000000000
                Stop		 4 Feb 2025 06:00:00.000000000
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
            STKInst		 Facility/NWSF
            STKInst		 Satellite/LEOSat_P1_S1
            STKInst		 Satellite/LEOSat_P1_S2
            STKInst		 Satellite/LEOSat_P1_S3
            STKInst		 Satellite/LEOSat_P1_S4
            STKInst		 Satellite/LEOSat_P1_S5
            STKInst		 Satellite/LEOSat_P1_S6
            STKInst		 Satellite/LEOSat_P2_S1
            STKInst		 Satellite/LEOSat_P2_S2
            STKInst		 Satellite/LEOSat_P2_S3
            STKInst		 Satellite/LEOSat_P2_S4
            STKInst		 Satellite/LEOSat_P2_S5
            STKInst		 Satellite/LEOSat_P2_S6
            STKInst		 Satellite/LEOSat_P3_S1
            STKInst		 Satellite/LEOSat_P3_S2
            STKInst		 Satellite/LEOSat_P3_S3
            STKInst		 Satellite/LEOSat_P3_S4
            STKInst		 Satellite/LEOSat_P3_S5
            STKInst		 Satellite/LEOSat_P3_S6
            STKInst		 Satellite/LEOSat_P4_S1
            STKInst		 Satellite/LEOSat_P4_S2
            STKInst		 Satellite/LEOSat_P4_S3
            STKInst		 Satellite/LEOSat_P4_S4
            STKInst		 Satellite/LEOSat_P4_S5
            STKInst		 Satellite/LEOSat_P4_S6
            STKInst		 Satellite/LEOSat_P5_S1
            STKInst		 Satellite/LEOSat_P5_S2
            STKInst		 Satellite/LEOSat_P5_S3
            STKInst		 Satellite/LEOSat_P5_S4
            STKInst		 Satellite/LEOSat_P5_S5
            STKInst		 Satellite/LEOSat_P5_S6
        END StrandObjIndexes

        SaveMode		 1
        BEGIN StrandAccessesByIndex
            Strand		 0 1
            Start		  8.4796169163298255e+03
            Stop		  9.1717031952946636e+03
            Start		  1.4768849781370584e+04
            Stop		  1.5658173339724744e+04
            Start		  5.6956682782870746e+04
            Stop		  5.7829388746822849e+04
            Start		  6.3397871076720956e+04
            Stop		  6.4144143056078923e+04
            Strand		 0 2
            Start		  7.4713192016631019e+03
            Stop		  8.0276007672971109e+03
            Start		  1.3703509847943646e+04
            Stop		  1.4608775970106664e+04
            Start		  2.0263625354998458e+04
            Stop		  2.0651665776415382e+04
            Start		  5.5926677310692125e+04
            Stop		  5.6753171519918011e+04
            Start		  6.2290420356850576e+04
            Stop		  6.3110500018883977e+04
            Strand		 0 3
            Start		  6.5083207120474708e+03
            Stop		  6.8298441542755018e+03
            Start		  1.2644274355192425e+04
            Stop		  1.3547758013071423e+04
            Start		  1.9119820174878038e+04
            Stop		  1.9710022931958956e+04
            Start		  5.4911656500952100e+04
            Stop		  5.5667618851210653e+04
            Start		  6.1198786514755688e+04
            Stop		  6.2067541433761369e+04
            Strand		 0 4
            Start		  1.1591151946768397e+04
            Stop		  1.2474982396753812e+04
            Start		  1.8011911144370941e+04
            Stop		  1.8726017862975525e+04
            Start		  5.3916066596746154e+04
            Stop		  5.4568525072578486e+04
            Start		  6.0120461081582391e+04
            Stop		  6.1017332992126889e+04
            Strand		 0 5
            Start		  1.0544743531592419e+04
            Stop		  1.1389578675868222e+04
            Start		  1.6920977544159672e+04
            Stop		  1.7719003015363589e+04
            Start		  5.2950870224951024e+04
            Stop		  5.3445300162278181e+04
            Start		  5.9054193312769334e+04
            Stop		  5.9960825937028290e+04
            Start		  6.5688091744790960e+04
            Stop		  6.6158158293600762e+04
            Strand		 0 6
            Start		  9.5065293080718438e+03
            Stop		  1.0289694372097281e+04
            Start		  1.5840884091142976e+04
            Stop		  1.6695397100539856e+04
            Start		  5.2076317960433051e+04
            Stop		  5.2238171749789573e+04
            Start		  5.7999523777207716e+04
            Stop		  5.8898279456558987e+04
            Start		  6.4526186333603036e+04
            Stop		  6.5164018782543120e+04
            Strand		 0 7
            Start		  2.6764396081852057e+04
            Stop		  2.7553802289767591e+04
            Start		  3.3103360740105534e+04
            Stop		  3.3954337110817272e+04
            Start		  6.9321441003867571e+04
            Stop		  6.9510640646549393e+04
            Start		  7.5259794147684908e+04
            Stop		  7.6159385051704870e+04
            Start		  8.1791244491363948e+04
            Stop		  8.2424213976505067e+04
            Strand		 0 8
            Start		  2.5736107733859259e+04
            Stop		  2.6437351079756063e+04
            Start		  3.2030557518432986e+04
            Stop		  3.2917955691042138e+04
            Start		  7.4216263944424267e+04
            Stop		  7.5090588499483099e+04
            Start		  8.0661800653948711e+04
            Stop		  8.1404749285897982e+04
            Strand		 0 9
            Start		  2.4725438044949195e+04
            Stop		  2.5295839879027131e+04
            Start		  3.0964525505444115e+04
            Stop		  3.1869325511961444e+04
            Start		  3.7535838046446188e+04
            Stop		  3.7900414783207845e+04
            Start		  7.3185509375122725e+04
            Stop		  7.4014520170870674e+04
            Start		  7.9553472259991831e+04
            Stop		  8.0371302303042467e+04
            Strand		 0 10
            Start		  2.3755280334758452e+04
            Stop		  2.4105515025415698e+04
            Start		  2.9904618156498633e+04
            Stop		  3.0809059250095808e+04
            Start		  3.6386583960857257e+04
            Stop		  3.6964371173524669e+04
            Start		  7.2169620434492506e+04
            Stop		  7.2929223273954136e+04
            Start		  7.8461081598051620e+04
            Stop		  7.9328451665930421e+04
            Strand		 0 11
            Start		  2.8850793737150751e+04
            Stop		  2.9737074227596702e+04
            Start		  3.5276590053834225e+04
            Stop		  3.5982573449555421e+04
            Start		  7.1172905646014537e+04
            Stop		  7.1830623069250723e+04
            Start		  7.7382061837175424e+04
            Stop		  7.8278314646533749e+04
            Strand		 0 12
            Start		  2.7803592140466353e+04
            Stop		  2.8652570913230604e+04
            Start		  3.4184384139177389e+04
            Stop		  3.4976923887296987e+04
            Start		  7.0205875557973253e+04
            Stop		  7.0708576282325332e+04
            Start		  7.6315127967043823e+04
            Stop		  7.7221865672959480e+04
            Start		  8.2955056555412157e+04
            Stop		  8.3417227211028352e+04
            Strand		 0 13
            Start		  5.1881560525072036e+03
            Stop		  6.0532713703659838e+03
            Start		  1.1613845812492680e+04
            Stop		  1.2377782312237561e+04
            Start		  4.5064969906368846e+04
            Stop		  4.5916376927654943e+04
            Start		  5.1447619523104906e+04
            Stop		  5.2236284861672699e+04
            Strand		 0 14
            Start		  4.1608571803818049e+03
            Stop		  4.9752449357784499e+03
            Start		  1.0509819204086949e+04
            Stop		  1.1341823244012417e+04
            Start		  4.4025376874207330e+04
            Stop		  4.4818486408639757e+04
            Start		  5.0366159945054198e+04
            Stop		  5.1214563880147922e+04
            Strand		 0 15
            Start		  3.1492073755888741e+03
            Stop		  3.8872510996929809e+03
            Start		  9.4209439717195928e+03
            Stop		  1.0297126641158256e+04
            Start		  4.2996490174671861e+04
            Stop		  4.3703152056322491e+04
            Start		  4.9293029209257453e+04
            Stop		  5.0178931353337022e+04
            Strand		 0 16
            Start		  2.1584272406700356e+03
            Stop		  2.7843445198063105e+03
            Start		  8.3450336345378018e+03
            Stop		  9.2454517428586623e+03
            Start		  1.5119347080314201e+04
            Stop		  1.5337156266941014e+04
            Start		  4.1984710425819074e+04
            Stop		  4.2563317266776146e+04
            Start		  4.8226723382161617e+04
            Stop		  4.9130995199845245e+04
            Start		  5.4804641027964099e+04
            Stop		  5.5152796892573839e+04
            Strand		 0 17
            Start		  1.2024273497207755e+03
            Stop		  1.6529983068352842e+03
            Start		  7.2810267908492851e+03
            Stop		  8.1875862732028927e+03
            Start		  1.3890441191568003e+04
            Stop		  1.4402791217641276e+04
            Start		  4.1011103759446851e+04
            Stop		  4.1377061914581296e+04
            Start		  4.7166562131798804e+04
            Stop		  4.8071408677503132e+04
            Start		  5.3651691182354494e+04
            Stop		  5.4220946279505028e+04
            Strand		 0 18
            Start		  6.2286077770612546e+03
            Stop		  7.1236724430075101e+03
            Start		  1.2737337136345726e+04
            Stop		  1.3401240995136381e+04
            Start		  4.6112475334196773e+04
            Stop		  4.7000119655183393e+04
            Start		  5.2540484575606926e+04
            Stop		  5.3240830536582114e+04
            Strand		 0 19
            Start		  2.3487014268986910e+04
            Stop		  2.4383585561118325e+04
            Start		  3.0002341848947595e+04
            Stop		  3.0654954713552834e+04
            Start		  6.3371985976385986e+04
            Stop		  6.4260418976948931e+04
            Start		  6.9800523377740872e+04
            Stop		  7.0496585697666800e+04
            Strand		 0 20
            Start		  2.2445722177062438e+04
            Stop		  2.3313999660984038e+04
            Start		  2.8876956924212547e+04
            Stop		  2.9633253901425927e+04
            Start		  6.2324463647419689e+04
            Stop		  6.3177389285149155e+04
            Start		  6.8707363048960469e+04
            Stop		  6.9493022018534160e+04
            Strand		 0 21
            Start		  2.1417437827079069e+04
            Stop		  2.2236927691870267e+04
            Start		  2.7771641058836271e+04
            Stop		  2.8598488601574638e+04
            Start		  6.1284811298227054e+04
            Stop		  6.2080284489120160e+04
            Start		  6.7625764078436594e+04
            Stop		  6.8472109659310285e+04
            Strand		 0 22
            Start		  2.0404507646617116e+04
            Stop		  2.1150169740793128e+04
            Start		  2.6681765899954153e+04
            Stop		  2.7554726035990021e+04
            Start		  6.0255764549075007e+04
            Stop		  6.0965873726995662e+04
            Start		  6.6552570051508708e+04
            Stop		  6.7437201341911044e+04
            Strand		 0 23
            Start		  1.9411793696609911e+04
            Stop		  2.0049130173330788e+04
            Start		  2.5605004884209167e+04
            Stop		  2.6503859452639896e+04
            Start		  3.2408305013194258e+04
            Stop		  3.2567348470373607e+04
            Start		  5.9243550766518092e+04
            Stop		  5.9827274659949959e+04
            Start		  6.5486240635248410e+04
            Stop		  6.6389947470971092e+04
            Start		  7.2067978552352652e+04
            Stop		  7.2403801741009884e+04
            Strand		 0 24
            Start		  1.8451813612642727e+04
            Stop		  1.8921673024210009e+04
            Start		  2.4540213849580003e+04
            Stop		  2.5446745369628472e+04
            Start		  3.1159015922109713e+04
            Stop		  3.1653120139320810e+04
            Start		  5.8268270540499441e+04
            Stop		  5.8643560252072457e+04
            Start		  6.4426074698432349e+04
            Stop		  6.5331030063774684e+04
            Start		  7.0912421963457324e+04
            Stop		  7.1475298639916276e+04
            Strand		 0 25
            Start		  0.0000000000000000e+00
            Stop		  4.6450625566412134e+02
            Start		  3.5699761182681163e+04
            Stop		  3.6184998217922897e+04
            Start		  4.1796684858092041e+04
            Stop		  4.2703189210273646e+04
            Start		  4.8424185472153469e+04
            Stop		  4.8902812248582195e+04
            Start		  7.5518833739826718e+04
            Stop		  7.5909596194767408e+04
            Start		  8.1682542834481457e+04
            Stop		  8.2587832373923651e+04
            Strand		 0 26
            Start		  3.4839244841783751e+04
            Stop		  3.4964541524237029e+04
            Start		  4.0742715373558261e+04
            Stop		  4.1640547138662565e+04
            Start		  4.7264302450165000e+04
            Stop		  4.7907437380215262e+04
            Start		  8.0628181457487386e+04
            Stop		  8.1517973545812871e+04
            Strand		 0 27
            Start		  3.9700602492717386e+04
            Stop		  4.0571529232479137e+04
            Start		  4.6137197518908615e+04
            Stop		  4.6887084725093497e+04
            Start		  7.9580345489462110e+04
            Stop		  8.0435749455954283e+04
            Start		  8.5965212100395729e+04
            Stop		  8.6400000000000000e+04
            Strand		 0 28
            Start		  2.9954146692194013e+03
            Stop		  3.4058539311249779e+03
            Start		  3.8671392039798753e+04
            Stop		  3.9495124728873496e+04
            Start		  4.5030678420129771e+04
            Stop		  4.5853194513811715e+04
            Start		  7.8540286042341060e+04
            Stop		  7.9339574197580077e+04
            Start		  8.4883137973010293e+04
            Stop		  8.5726617981417920e+04
            Strand		 0 29
            Start		  1.8565693862411451e+03
            Stop		  2.4590721304586127e+03
            Start		  3.7657299490808931e+04
            Stop		  3.8409264213558781e+04
            Start		  4.3939844582393460e+04
            Stop		  4.4810093341962711e+04
            Start		  7.7510631458550444e+04
            Stop		  7.8226331730176302e+04
            Start		  8.3809593695310599e+04
            Stop		  8.4692522509690069e+04
            Strand		 0 30
            Start		  7.5068490352256447e+02
            Stop		  1.4729010438645876e+03
            Start		  3.6662918438588218e+04
            Stop		  3.7309601935225408e+04
            Start		  4.2862251127324831e+04
            Stop		  4.3759787796927092e+04
            Start		  4.9702762065482268e+04
            Stop		  4.9788255408931764e+04
            Start		  7.6497308635728943e+04
            Stop		  7.7089448865402694e+04
            Start		  8.2742974718035024e+04
            Stop		  8.3646018557963922e+04
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

