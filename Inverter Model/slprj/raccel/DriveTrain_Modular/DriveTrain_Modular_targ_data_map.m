  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 110;
      section.data(110)  = dumData; %prealloc
      
	  ;% rtP.PM
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Pmax
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.PolePairs
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Tmax
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Vnom
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.PMSMCurrentControllerwithPreControl_ActFF
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.dqVoltageLimiter_AxisPrio
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.PMSMFieldOrientedControl_CtrlMode
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.VelocityController_CtrlType
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Iq_max
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous1_K
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Kaw_id
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Kaw_iq
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.VelocityController_Kaw_w
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Ki_id
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Ki_iq
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.VelocityController_Ki_w
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Kp_id
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Kp_iq
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.VelocityController_Kp_w
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.PMSMCurrentControllerwithPreControl_LdMatrix
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.PMSMCurrentControllerwithPreControl_LqMatrix
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 24;
	
	  ;% rtP.LowPassFilterDiscreteorContinuous1_T
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 28;
	
	  ;% rtP.BamocarD3CurrentControlSimpleIGBTs_Vdc_on
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 29;
	
	  ;% rtP.CompareToConstant_const
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 30;
	
	  ;% rtP.CompareToConstant_const_kknxiqu21y
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 31;
	
	  ;% rtP.CompareToConstant_const_g00dogawkd
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 32;
	
	  ;% rtP.PMSMCurrentControllerwithPreControl_idVect
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 33;
	
	  ;% rtP.PMSMCurrentControllerwithPreControl_iqVect
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 35;
	
	  ;% rtP.PMSMCurrentControllerwithPreControl_psimMatrix
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 37;
	
	  ;% rtP.DiscretePIController_x0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 41;
	
	  ;% rtP.PIid_x0
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 42;
	
	  ;% rtP.PIiq_x0
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 43;
	
	  ;% rtP.Gain_Gain
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 44;
	
	  ;% rtP.Gain1_Gain
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 45;
	
	  ;% rtP.SignChange_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 46;
	
	  ;% rtP.SignChange_Gain_c1c2mpblgd
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 47;
	
	  ;% rtP.radsrpm_Gain
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 48;
	
	  ;% rtP.LookupTableidreference_tableData
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 49;
	
	  ;% rtP.LookupTableidreference_bp01Data
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 61;
	
	  ;% rtP.LookupTableidreference_bp02Data
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 63;
	
	  ;% rtP.LookupTableidreference_bp03Data
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 66;
	
	  ;% rtP.LookupTableiqreference_tableData
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 68;
	
	  ;% rtP.LookupTableiqreference_bp01Data
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 80;
	
	  ;% rtP.LookupTableiqreference_bp02Data
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 82;
	
	  ;% rtP.LookupTableiqreference_bp03Data
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 85;
	
	  ;% rtP.SignChange_Gain_lyv0aexmoj
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 87;
	
	  ;% rtP.Gain_Gain_mowaew3v3s
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 88;
	
	  ;% rtP.SwitchingTimeCalculation_PWM
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 89;
	
	  ;% rtP.SwitchingTimeCalculation_fsw
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 90;
	
	  ;% rtP.Delay_InitialCondition
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 91;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 92;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 93;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 10905;
	
	  ;% rtP.Zerocancellationomega_NumCoef
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 21717;
	
	  ;% rtP.Zerocancellationomega_DenCoef
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 21718;
	
	  ;% rtP.Zerocancellationomega_InitialStates
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 21719;
	
	  ;% rtP.UnitDelay_InitialCondition
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 21720;
	
	  ;% rtP.Constant_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 21721;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 21722;
	
	  ;% rtP.Switch_Threshold
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 21723;
	
	  ;% rtP.Constant_Value_hdjajt1smx
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 21724;
	
	  ;% rtP.Integrator_gainval
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 21725;
	
	  ;% rtP.Integrator_UpperSat
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 21726;
	
	  ;% rtP.Integrator_LowerSat
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 21727;
	
	  ;% rtP.Saturation_UpperSat_dqapmc31wv
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 21728;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 21729;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 21730;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 32542;
	
	  ;% rtP.rads2rpm_Gain
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 43354;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 43355;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 54167;
	
	  ;% rtP.rads2rpm_Gain_fcqolhm04o
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 64979;
	
	  ;% rtP.idRef_Value
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 64980;
	
	  ;% rtP.Constant_Value_ds3lzjlnhg
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 64981;
	
	  ;% rtP.Switch_Threshold_pvvjocw1io
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 64982;
	
	  ;% rtP.upi_Value
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 64983;
	
	  ;% rtP.Gain1_Gain_pbhnfhtcjb
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 64984;
	
	  ;% rtP.Constant_Value_ptiyqv32aa
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 64985;
	
	  ;% rtP.Gain_Gain_mm5o1ytrdh
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 64986;
	
	  ;% rtP.Zerovector_Value
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 64987;
	
	  ;% rtP.Switch_Threshold_cfzg3c43m1
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 64989;
	
	  ;% rtP.Zerocancellationid_NumCoef
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 64990;
	
	  ;% rtP.Zerocancellationid_DenCoef
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 64991;
	
	  ;% rtP.Zerocancellationid_InitialStates
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 64993;
	
	  ;% rtP.UnitDelay_InitialCondition_ehqag1nm24
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 64994;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval_b24mq5fxf3
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 64995;
	
	  ;% rtP.Zerocancellationiq_NumCoef
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 64996;
	
	  ;% rtP.Zerocancellationiq_DenCoef
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 64997;
	
	  ;% rtP.Zerocancellationiq_InitialStates
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 64999;
	
	  ;% rtP.UnitDelay_InitialCondition_blqzla0lar
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 65000;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval_cbgt3mkwpb
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 65001;
	
	  ;% rtP.Constant1_Value
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 65002;
	
	  ;% rtP.Switch_Threshold_lembmp0brf
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 65003;
	
	  ;% rtP.Relay_YOn
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 65004;
	
	  ;% rtP.Relay_YOff
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 65005;
	
	  ;% rtP.Constant_Value_da4qccz0gh
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 65006;
	
	  ;% rtP.Gain1_Gain_iw4zxuxmnh
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 65007;
	
	  ;% rtP.Constant3_Value
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 65008;
	
	  ;% rtP.Bias_Bias
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 65009;
	
	  ;% rtP.Initial_Value
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 65010;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 65011;
	
	  ;% rtP.RateTransition_InitialCondition
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 65012;
	
	  ;% rtP.RateTransition1_InitialCondition
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 65013;
	
	  ;% rtP.Constant2_Value
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 65014;
	
	  ;% rtP.avoiddivisionby0_UpperSat
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 65015;
	
	  ;% rtP.avoiddivisionby0_LowerSat
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 65016;
	
	  ;% rtP.UnitDelay2_InitialCondition
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 65017;
	
	  ;% rtP.Zerovector_Value_n3blgurhl0
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 65018;
	
	  ;% rtP.Switch1_Threshold
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 65024;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtP.uDLookupTableLq_maxIndex
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.uDLookupTablePsim_maxIndex
	  section.data(2).logicalSrcIdx = 111;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.uDLookupTableLd_maxIndex
	  section.data(3).logicalSrcIdx = 112;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.LookupTableidreference_maxIndex
	  section.data(4).logicalSrcIdx = 113;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtP.LookupTableidreference_dimSizes
	  section.data(5).logicalSrcIdx = 114;
	  section.data(5).dtTransOffset = 9;
	
	  ;% rtP.LookupTableiqreference_maxIndex
	  section.data(6).logicalSrcIdx = 115;
	  section.data(6).dtTransOffset = 12;
	
	  ;% rtP.LookupTableiqreference_dimSizes
	  section.data(7).logicalSrcIdx = 116;
	  section.data(7).dtTransOffset = 15;
	
	  ;% rtP.Delay_DelayLength
	  section.data(8).logicalSrcIdx = 117;
	  section.data(8).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 41;
      section.data(41)  = dumData; %prealloc
      
	  ;% rtB.av2xxttqir
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nyv1k2xnif
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.ntbdtueknr
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 10;
	
	  ;% rtB.pwkalunkv1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 14;
	
	  ;% rtB.f1ht3jmk15
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 18;
	
	  ;% rtB.amrd3bzce3
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 22;
	
	  ;% rtB.p2q53n3lx3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 26;
	
	  ;% rtB.htfbbofj5g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 30;
	
	  ;% rtB.jgffd0qbyu
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 70;
	
	  ;% rtB.fd53xux2au
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 81;
	
	  ;% rtB.awgofo1wie
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 83;
	
	  ;% rtB.peigtllerh
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 84;
	
	  ;% rtB.jliptc4o1p
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 85;
	
	  ;% rtB.nxygfdvmsu
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 86;
	
	  ;% rtB.gowqix4nxi
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 88;
	
	  ;% rtB.bzxj0do0da
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 89;
	
	  ;% rtB.lryiwzldvm
	  section.data(17).logicalSrcIdx = 17;
	  section.data(17).dtTransOffset = 90;
	
	  ;% rtB.brwfgw30z4
	  section.data(18).logicalSrcIdx = 18;
	  section.data(18).dtTransOffset = 91;
	
	  ;% rtB.bivredyivg
	  section.data(19).logicalSrcIdx = 19;
	  section.data(19).dtTransOffset = 92;
	
	  ;% rtB.curiaxnp04
	  section.data(20).logicalSrcIdx = 20;
	  section.data(20).dtTransOffset = 93;
	
	  ;% rtB.agyku0cq3i
	  section.data(21).logicalSrcIdx = 21;
	  section.data(21).dtTransOffset = 94;
	
	  ;% rtB.nfslrcdtc1
	  section.data(22).logicalSrcIdx = 22;
	  section.data(22).dtTransOffset = 95;
	
	  ;% rtB.dady3mgvo3
	  section.data(23).logicalSrcIdx = 23;
	  section.data(23).dtTransOffset = 97;
	
	  ;% rtB.ir0w0w2ryn
	  section.data(24).logicalSrcIdx = 24;
	  section.data(24).dtTransOffset = 100;
	
	  ;% rtB.g4hhoqvsau
	  section.data(25).logicalSrcIdx = 26;
	  section.data(25).dtTransOffset = 102;
	
	  ;% rtB.nx0dswm5xd
	  section.data(26).logicalSrcIdx = 28;
	  section.data(26).dtTransOffset = 103;
	
	  ;% rtB.ddsvixvqjq
	  section.data(27).logicalSrcIdx = 29;
	  section.data(27).dtTransOffset = 104;
	
	  ;% rtB.a05qg3helq
	  section.data(28).logicalSrcIdx = 30;
	  section.data(28).dtTransOffset = 105;
	
	  ;% rtB.ki1flhf3vw
	  section.data(29).logicalSrcIdx = 31;
	  section.data(29).dtTransOffset = 106;
	
	  ;% rtB.kxinowgu3f
	  section.data(30).logicalSrcIdx = 32;
	  section.data(30).dtTransOffset = 107;
	
	  ;% rtB.of0ejkckjg
	  section.data(31).logicalSrcIdx = 33;
	  section.data(31).dtTransOffset = 108;
	
	  ;% rtB.pv1wroaxz3
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 109;
	
	  ;% rtB.ixbetos54z
	  section.data(33).logicalSrcIdx = 35;
	  section.data(33).dtTransOffset = 110;
	
	  ;% rtB.bdl5rojgaf
	  section.data(34).logicalSrcIdx = 36;
	  section.data(34).dtTransOffset = 113;
	
	  ;% rtB.chsbdd2oex
	  section.data(35).logicalSrcIdx = 37;
	  section.data(35).dtTransOffset = 116;
	
	  ;% rtB.psnme1bdvi
	  section.data(36).logicalSrcIdx = 38;
	  section.data(36).dtTransOffset = 117;
	
	  ;% rtB.hijwpfoqc4
	  section.data(37).logicalSrcIdx = 39;
	  section.data(37).dtTransOffset = 118;
	
	  ;% rtB.h5mzuz5mua
	  section.data(38).logicalSrcIdx = 40;
	  section.data(38).dtTransOffset = 124;
	
	  ;% rtB.cbz2xft2xa
	  section.data(39).logicalSrcIdx = 41;
	  section.data(39).dtTransOffset = 125;
	
	  ;% rtB.pgob4ywz5j
	  section.data(40).logicalSrcIdx = 42;
	  section.data(40).dtTransOffset = 126;
	
	  ;% rtB.cgxj4ejtx2
	  section.data(41).logicalSrcIdx = 43;
	  section.data(41).dtTransOffset = 129;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.osxfukpdla
	  section.data(1).logicalSrcIdx = 44;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.kvpgre2043
	  section.data(2).logicalSrcIdx = 45;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 24;
      section.data(24)  = dumData; %prealloc
      
	  ;% rtDW.ijtyhzdpgc
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ps50i03rnb
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtDW.etbdnpjxjn
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 8;
	
	  ;% rtDW.as34rxo2cg
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 10;
	
	  ;% rtDW.mztddvmoie
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12;
	
	  ;% rtDW.nzw3jrreau
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 14;
	
	  ;% rtDW.kmrr2ucbfz
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 16;
	
	  ;% rtDW.pkiscc24z2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 18;
	
	  ;% rtDW.a0fhdil5ww
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 19;
	
	  ;% rtDW.j3rwl0mrcw
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 20;
	
	  ;% rtDW.pu4oqz11fc
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 21;
	
	  ;% rtDW.ivskkakmbt
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 22;
	
	  ;% rtDW.f0e1nwzdr2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 23;
	
	  ;% rtDW.jxppjelsgv
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 24;
	
	  ;% rtDW.nbn0lw4fde
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 25;
	
	  ;% rtDW.kknanrlagz
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 26;
	
	  ;% rtDW.dvwxmmrgju
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 27;
	
	  ;% rtDW.iqotqnp13e
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 28;
	
	  ;% rtDW.gjqhhyie2z
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 29;
	
	  ;% rtDW.eywxcqgbjh
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 30;
	
	  ;% rtDW.mnsbhrjb31
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 31;
	
	  ;% rtDW.f3pxwtzu1c
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 34;
	
	  ;% rtDW.kdbjrt01qs
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 37;
	
	  ;% rtDW.gvphogcrbr
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 40;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtDW.gla2ikd2o3
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.fdk2esvn1i
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fyolw0a32b
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ctcuntguvz
	  section.data(4).logicalSrcIdx = 27;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ncgvk1bc4h
	  section.data(5).logicalSrcIdx = 28;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.add2lmxd0k
	  section.data(6).logicalSrcIdx = 29;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.pzowi24cum
	  section.data(7).logicalSrcIdx = 30;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.owtnu2yjca
	  section.data(8).logicalSrcIdx = 31;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.ijmtinmhgw
	  section.data(9).logicalSrcIdx = 32;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.bbrl1posjr
	  section.data(10).logicalSrcIdx = 33;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.bmcmlahdxq.TimePtr
	  section.data(11).logicalSrcIdx = 34;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.lb1loe5xrv.TimePtr
	  section.data(12).logicalSrcIdx = 35;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.a5wupdvues.TimePtr
	  section.data(13).logicalSrcIdx = 36;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.i3fnkmeand.LoggedData
	  section.data(14).logicalSrcIdx = 37;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.ia0bzbj3hs.LoggedData
	  section.data(15).logicalSrcIdx = 38;
	  section.data(15).dtTransOffset = 17;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.mdwa3ns5ul
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.pqge1csdhq
	  section.data(2).logicalSrcIdx = 40;
	  section.data(2).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtDW.h5of2gf1by
	  section.data(1).logicalSrcIdx = 41;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.m3kipnj1xy
	  section.data(2).logicalSrcIdx = 42;
	  section.data(2).dtTransOffset = 12;
	
	  ;% rtDW.jdqsqgygnx.PrevIndex
	  section.data(3).logicalSrcIdx = 43;
	  section.data(3).dtTransOffset = 13;
	
	  ;% rtDW.ihuh0z1f3c.PrevIndex
	  section.data(4).logicalSrcIdx = 44;
	  section.data(4).dtTransOffset = 14;
	
	  ;% rtDW.nyjzi2qth2.PrevIndex
	  section.data(5).logicalSrcIdx = 45;
	  section.data(5).dtTransOffset = 15;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hex3zemleh
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtDW.mp4psbhe4a
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nzmsum4nlo
	  section.data(2).logicalSrcIdx = 48;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.c3m5srkyxf
	  section.data(3).logicalSrcIdx = 49;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nmn04rxwtx
	  section.data(4).logicalSrcIdx = 50;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.psod05d2dh
	  section.data(5).logicalSrcIdx = 51;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.dex1dzjvg2
	  section.data(6).logicalSrcIdx = 52;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.gzayw0kzg2
	  section.data(7).logicalSrcIdx = 53;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.ion1jktvgf
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.cy30ynmnz3
	  section.data(1).logicalSrcIdx = 55;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.a5ldsrx00z
	  section.data(2).logicalSrcIdx = 56;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.j5wztzvpay
	  section.data(3).logicalSrcIdx = 57;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.d5gnfdhmzj
	  section.data(4).logicalSrcIdx = 58;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1474043602;
  targMap.checksum1 = 2150365644;
  targMap.checksum2 = 1007489042;
  targMap.checksum3 = 2638531000;

