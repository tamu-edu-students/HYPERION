stk.v.12.0
WrittenBy    STK_v12.9.0

BEGIN Chain

    Name		 NWGSChain
    BEGIN Definition
        Object		 Facility/NWGS
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
            STKInst		 Facility/NWGS
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
            Start		  2.0266120594858262e+03
            Stop		  2.8460732448257759e+03
            Start		  8.3795009557980084e+03
            Stop		  9.2320449978165816e+03
            Start		  4.4722030539567888e+04
            Stop		  4.5056161164192847e+04
            Start		  5.0728197997814779e+04
            Stop		  5.1627968645616871e+04
            Start		  5.7228030642924816e+04
            Stop		  5.7927193529317759e+04
            Start		  8.4241002424699720e+04
            Stop		  8.4609844596734896e+04
            Strand		 0 2
            Start		  9.8780463568110213e+02
            Stop		  1.7391892248661341e+03
            Start		  7.3080429226132637e+03
            Stop		  8.1953188024922238e+03
            Start		  4.9684784263229165e+04
            Stop		  5.0559779602263858e+04
            Start		  5.6111322419673001e+04
            Stop		  5.6893860097983925e+04
            Strand		 0 3
            Start		  0.0000000000000000e+00
            Stop		  6.1444581503351890e+02
            Start		  6.2419955980741670e+03
            Stop		  7.1473357066989956e+03
            Start		  1.2770915781996400e+04
            Stop		  1.3212014072685193e+04
            Start		  4.8653050588646423e+04
            Stop		  4.9485779636061197e+04
            Start		  5.5010640400810458e+04
            Stop		  5.5851823338923394e+04
            Strand		 0 4
            Start		  5.1807738712251121e+03
            Stop		  6.0886480536595100e+03
            Start		  1.1644734003141910e+04
            Stop		  1.2255073367716121e+04
            Start		  4.7634633709178277e+04
            Stop		  4.8404441207344782e+04
            Start		  5.3923173850822059e+04
            Stop		  5.4803371013102071e+04
            Strand		 0 5
            Start		  4.1242289754479398e+03
            Stop		  5.0192851275381254e+03
            Start		  1.0544406856285324e+04
            Stop		  1.1265570368002434e+04
            Start		  4.6632712199695379e+04
            Stop		  4.7312782885228618e+04
            Start		  5.2847381513009983e+04
            Stop		  5.3749641940103596e+04
            Start		  5.9542358104795931e+04
            Stop		  5.9937630931184729e+04
            Start		  8.6244298355105537e+04
            Stop		  8.6400000000000000e+04
            Strand		 0 6
            Start		  3.0725941417667404e+03
            Stop		  3.9387827972260393e+03
            Start		  9.4575415916044476e+03
            Stop		  1.0256263716635473e+04
            Start		  4.5654242965211066e+04
            Stop		  4.6204163602761473e+04
            Start		  5.1782476697103812e+04
            Stop		  5.2691149661161020e+04
            Start		  5.8366448163900735e+04
            Stop		  5.8946779858537273e+04
            Start		  8.5226655327565852e+04
            Stop		  8.5791903805253081e+04
            Strand		 0 7
            Start		  2.0331939150337370e+04
            Stop		  2.1201450531414157e+04
            Start		  2.6720836960456632e+04
            Stop		  2.7514134123956264e+04
            Start		  6.2910500585196474e+04
            Stop		  6.3466292630588425e+04
            Start		  6.9043372780389618e+04
            Stop		  6.9952238947600214e+04
            Start		  7.5631557302485468e+04
            Stop		  7.6207548758152072e+04
            Strand		 0 8
            Start		  1.9285203204643047e+04
            Stop		  2.0109685636476272e+04
            Start		  2.5641968380333165e+04
            Stop		  2.6490887733061259e+04
            Start		  6.1975433897708659e+04
            Stop		  6.2320498009305062e+04
            Start		  6.7988515393450216e+04
            Stop		  6.8889048852790642e+04
            Start		  7.4492149854821648e+04
            Stop		  7.5188229346933600e+04
            Strand		 0 9
            Start		  1.8245432166367144e+04
            Stop		  1.9003987023814891e+04
            Start		  2.4569824321383720e+04
            Stop		  2.5454979244935985e+04
            Start		  6.6944503509796195e+04
            Stop		  6.7820873711454420e+04
            Start		  7.3374670735999913e+04
            Stop		  7.4154986389960904e+04
            Strand		 0 10
            Start		  1.7215517276810344e+04
            Stop		  1.7880905411194144e+04
            Start		  2.3503164586467283e+04
            Stop		  2.4407738721505222e+04
            Start		  3.0040889579285918e+04
            Stop		  3.0462672684600420e+04
            Start		  6.5912130276528420e+04
            Stop		  6.6746925885035002e+04
            Start		  7.2273317494312607e+04
            Stop		  7.3112963716705766e+04
            Strand		 0 11
            Start		  1.6202248235549341e+04
            Stop		  1.6732959093920337e+04
            Start		  2.2441358546507094e+04
            Stop		  2.3349770463734087e+04
            Start		  2.8910886925865234e+04
            Stop		  2.9509761086897044e+04
            Start		  6.4892996592770403e+04
            Stop		  6.5665707902118884e+04
            Start		  7.1185233589417388e+04
            Stop		  7.2064500661043916e+04
            Strand		 0 12
            Start		  1.5230550851794536e+04
            Stop		  1.5534377876147850e+04
            Start		  2.1384214827652453e+04
            Stop		  2.2281146012393412e+04
            Start		  2.7808817135423542e+04
            Stop		  2.8522171964925255e+04
            Start		  6.3890211350813232e+04
            Stop		  6.4574307921319909e+04
            Start		  7.0108853336076849e+04
            Stop		  7.1010751204205560e+04
            Start		  7.6809242227526731e+04
            Stop		  7.7197387624709445e+04
            Strand		 0 13
            Start		  5.4419729095040093e+03
            Stop		  6.1611290016434159e+03
            Start		  3.2486644838347365e+04
            Stop		  3.2806221072113665e+04
            Start		  3.8646108841705427e+04
            Stop		  3.9543950995694322e+04
            Start		  4.5072339730699590e+04
            Stop		  4.5780713854867092e+04
            Start		  8.1147991895943283e+04
            Stop		  8.1839146204198914e+04
            Strand		 0 14
            Start		  4.3288356179877710e+03
            Stop		  5.1255248716617389e+03
            Start		  3.7593643563610371e+04
            Stop		  3.8464906838992654e+04
            Start		  4.3983858761471682e+04
            Stop		  4.4773630194560981e+04
            Start		  8.0166386083360674e+04
            Stop		  8.0732710745179735e+04
            Start		  8.6305409174116547e+04
            Stop		  8.6400000000000000e+04
            Strand		 0 15
            Start		  3.2309665039416868e+03
            Stop		  4.0818619513397989e+03
            Start		  3.6546675792125781e+04
            Stop		  3.7373851497819545e+04
            Start		  4.2904657657000396e+04
            Stop		  4.3751152778673575e+04
            Start		  7.9226534749454717e+04
            Stop		  7.9591345543602176e+04
            Start		  8.5249889291675034e+04
            Stop		  8.6151429715677979e+04
            Strand		 0 16
            Start		  2.1459041371648846e+03
            Stop		  3.0321141708080286e+03
            Start		  3.5506585411126871e+04
            Stop		  3.6268986286252351e+04
            Start		  4.1832272871376132e+04
            Stop		  4.2715927066550692e+04
            Start		  8.4205182643299369e+04
            Stop		  8.5083672615524672e+04
            Strand		 0 17
            Start		  1.0722931219610341e+03
            Stop		  1.9772443216990578e+03
            Start		  7.7405621882759506e+03
            Stop		  8.1842507957689941e+03
            Start		  3.4476163750689091e+04
            Stop		  3.5146958918277254e+04
            Start		  4.0765409165541576e+04
            Stop		  4.1669313259811963e+04
            Start		  4.7307536157398135e+04
            Stop		  4.7717128257052631e+04
            Start		  8.3172038620575448e+04
            Stop		  8.4010224830769163e+04
            Strand		 0 18
            Start		  9.4712661251927717e+00
            Stop		  9.1766562232283445e+02
            Start		  6.5751817340117568e+03
            Stop		  7.1844773621360309e+03
            Start		  3.3461891639513349e+04
            Stop		  3.4000602772532133e+04
            Start		  3.9703426260752924e+04
            Stop		  4.0611954517415361e+04
            Start		  4.6175291334221249e+04
            Stop		  4.6766945778576788e+04
            Start		  8.2151986862048972e+04
            Stop		  8.2929633927540548e+04
            Strand		 0 19
            Start		  1.1152351264256360e+04
            Stop		  1.1683442530637058e+04
            Start		  1.7268588473839733e+04
            Stop		  1.8176929860139724e+04
            Start		  2.3841538175594858e+04
            Stop		  2.4437465537185923e+04
            Start		  5.0721570892238757e+04
            Stop		  5.1264230631204075e+04
            Start		  5.6962994992548694e+04
            Stop		  5.7871421532990295e+04
            Start		  6.3435234566256921e+04
            Stop		  6.4022116328722725e+04
            Strand		 0 20
            Start		  1.0230122164138826e+04
            Stop		  1.0526503487459777e+04
            Start		  1.6215642737022663e+04
            Stop		  1.7113302757651971e+04
            Start		  2.2706107364247371e+04
            Stop		  2.3416081225499660e+04
            Start		  4.9745162660030182e+04
            Stop		  5.0071832936288185e+04
            Start		  5.5905757036055460e+04
            Stop		  5.6803992811897318e+04
            Start		  6.2331923129704985e+04
            Stop		  6.3036925832364715e+04
            Strand		 0 21
            Start		  1.5173628270161820e+04
            Stop		  1.6044597714865418e+04
            Start		  2.1591511946081722e+04
            Stop		  2.2381734687926211e+04
            Start		  5.4853374243730250e+04
            Stop		  5.5725534446842074e+04
            Start		  6.1243313717690413e+04
            Stop		  6.2030630055337875e+04
            Strand		 0 22
            Start		  1.4143422848406586e+04
            Stop		  1.4969955405147064e+04
            Start		  2.0492543632194633e+04
            Stop		  2.1339009821102591e+04
            Start		  5.3806482962036447e+04
            Stop		  5.4635095588455304e+04
            Start		  6.0164083081168181e+04
            Stop		  6.1008835250894750e+04
            Strand		 0 23
            Start		  1.3126802097933665e+04
            Stop		  1.3887732581053118e+04
            Start		  1.9406575477052196e+04
            Stop		  2.0290030438890422e+04
            Start		  5.2766447493698477e+04
            Stop		  5.3530892992583940e+04
            Start		  5.9091720258764777e+04
            Stop		  5.9974228094414895e+04
            Strand		 0 24
            Start		  1.2127202172534431e+04
            Stop		  1.2794696160423318e+04
            Start		  1.8332163964763549e+04
            Stop		  1.9235849310240243e+04
            Start		  2.5011528173584196e+04
            Stop		  2.5432946888816805e+04
            Start		  5.1736022357677553e+04
            Stop		  5.2409618878375608e+04
            Start		  5.8024908314449473e+04
            Stop		  5.8928203916460450e+04
            Start		  6.4568693275907055e+04
            Stop		  6.4970379053236546e+04
            Strand		 0 25
            Start		  2.9378878029814143e+04
            Stop		  3.0054472964526052e+04
            Start		  3.5589298898645699e+04
            Stop		  3.6491958761170485e+04
            Start		  4.2278403920863828e+04
            Stop		  4.2681680983049431e+04
            Start		  6.8991156814606831e+04
            Stop		  6.9670362842522663e+04
            Start		  7.5281682027428353e+04
            Stop		  7.6184184528902057e+04
            Start		  8.1830476720397841e+04
            Stop		  8.2218369920614758e+04
            Strand		 0 26
            Start		  2.8401765462055850e+04
            Stop		  2.8945134425145799e+04
            Start		  3.4525003548019733e+04
            Stop		  3.5433461498446661e+04
            Start		  4.1104453616700979e+04
            Stop		  4.1689659641099206e+04
            Start		  6.7975702635272086e+04
            Stop		  6.8526612943397573e+04
            Start		  7.4219584333675084e+04
            Stop		  7.5128061687399924e+04
            Start		  8.0694376238801313e+04
            Stop		  8.1273294411386552e+04
            Strand		 0 27
            Start		  2.7472872775211359e+04
            Stop		  2.7794475737777382e+04
            Start		  3.3471337432279914e+04
            Stop		  3.4370264435107078e+04
            Start		  3.9967111349353603e+04
            Stop		  4.0669725294523065e+04
            Start		  6.6996006983485713e+04
            Stop		  6.7338189272373362e+04
            Start		  7.3162166550454451e+04
            Stop		  7.4061295869745343e+04
            Start		  7.9590071601855278e+04
            Stop		  8.0289608586711256e+04
            Strand		 0 28
            Start		  3.2428558043801397e+04
            Stop		  3.3302033922993156e+04
            Start		  3.8851239874932115e+04
            Stop		  3.9636259594898009e+04
            Start		  7.2109588427523064e+04
            Stop		  7.2983534584243331e+04
            Start		  7.8500917879054119e+04
            Stop		  7.9284356949388151e+04
            Strand		 0 29
            Start		  3.1397505268758425e+04
            Stop		  3.2227950232019546e+04
            Start		  3.7751277000149479e+04
            Stop		  3.8594165450219240e+04
            Start		  7.1062459126612623e+04
            Stop		  7.1893855897951362e+04
            Start		  7.7421327158612432e+04
            Stop		  7.8263398053825556e+04
            Strand		 0 30
            Start		  3.0379856513743543e+04
            Stop		  3.1146450155200713e+04
            Start		  3.6664467729364012e+04
            Stop		  3.7545694006836660e+04
            Start		  7.0022097145570791e+04
            Stop		  7.0790532490894111e+04
            Start		  7.6348703237861060e+04
            Stop		  7.7229528549270923e+04
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

                StaticColor		 #ff00ff
                AnimationColor		 #ffff00
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

