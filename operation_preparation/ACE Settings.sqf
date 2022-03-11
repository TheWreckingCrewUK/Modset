// ACE Advanced Ballistics
force force ace_advanced_ballistics_ammoTemperatureEnabled = true;
force force ace_advanced_ballistics_barrelLengthInfluenceEnabled = true;
force force ace_advanced_ballistics_bulletTraceEnabled = true;
force force ace_advanced_ballistics_enabled = true;
force force ace_advanced_ballistics_muzzleVelocityVariationEnabled = true;
force force ace_advanced_ballistics_simulationInterval = 0.05;

// ACE Advanced Fatigue
force force ace_advanced_fatigue_enabled = true;
force force ace_advanced_fatigue_enableStaminaBar = false;
ace_advanced_fatigue_fadeStaminaBar = true;
force force ace_advanced_fatigue_loadFactor = 0.8;
force force ace_advanced_fatigue_performanceFactor = 1.1;
force force ace_advanced_fatigue_recoveryFactor = 2;
force ace_advanced_fatigue_swayFactor = 1;
force force ace_advanced_fatigue_terrainGradientFactor = 3.5;

// ACE Advanced Throwing
force force ace_advanced_throwing_enabled = true;
force force ace_advanced_throwing_enablePickUp = true;
force force ace_advanced_throwing_enablePickUpAttached = true;
ace_advanced_throwing_showMouseControls = true;
force force ace_advanced_throwing_showThrowArc = true;

// ACE Arsenal
force ace_arsenal_allowDefaultLoadouts = true;
force ace_arsenal_allowSharedLoadouts = true;
ace_arsenal_camInverted = false;
force ace_arsenal_enableIdentityTabs = true;
ace_arsenal_enableModIcons = true;
ace_arsenal_EnableRPTLog = false;
ace_arsenal_fontHeight = 4.5;

// ACE Artillery
force ace_artillerytables_advancedCorrections = false;
force ace_artillerytables_disableArtilleryComputer = true;
force force ace_mk6mortar_airResistanceEnabled = false;
force force ace_mk6mortar_allowCompass = true;
force force ace_mk6mortar_allowComputerRangefinder = false;
force force ace_mk6mortar_useAmmoHandling = false;

// ACE Captives
force force ace_captives_allowHandcuffOwnSide = true;
force force ace_captives_allowSurrender = false;
force force ace_captives_requireSurrender = 1;
force ace_captives_requireSurrenderAi = false;

// ACE Common
force ace_common_allowFadeMusic = true;
force ace_common_checkPBOsAction = 0;
force ace_common_checkPBOsCheckAll = false;
force ace_common_checkPBOsWhitelist = "[]";
ace_common_displayTextColor = [0,0,0,0.1];
ace_common_displayTextFontColor = [1,1,1,1];
ace_common_settingFeedbackIcons = 1;
ace_common_settingProgressBarLocation = 0;
force ace_noradio_enabled = true;
force force ace_parachute_hideAltimeter = true;

// ACE Cook off
force force ace_cookoff_ammoCookoffDuration = 1;
force force ace_cookoff_enable = 0;
force force ace_cookoff_enableAmmobox = false;
force force ace_cookoff_enableAmmoCookoff = false;
force force ace_cookoff_probabilityCoef = 1;

// ACE Crew Served Weapons
force ace_csw_ammoHandling = 2;
force ace_csw_defaultAssemblyMode = false;
ace_csw_dragAfterDeploy = false;
force ace_csw_handleExtraMagazines = true;
force ace_csw_progressBarTimeCoefficent = 1;

// ACE Explosives
force force ace_explosives_explodeOnDefuse = true;
force force ace_explosives_punishNonSpecialists = true;
force force ace_explosives_requireSpecialist = false;

// ACE Fragmentation Simulation
force force ace_frag_enabled = true;
force force ace_frag_maxTrack = 10;
force force ace_frag_maxTrackPerFrame = 10;
force force ace_frag_reflectionsEnabled = false;
force force ace_frag_spallEnabled = false;

// ACE G-Forces
force ace_gforces_coef = 1;
force force ace_gforces_enabledFor = 1;

// ACE Goggles
force force ace_goggles_effects = 2;
ace_goggles_showClearGlasses = false;
force force ace_goggles_showInThirdPerson = true;

// ACE Grenades
force ace_grenades_convertExplosives = true;

// ACE Hearing
force force ace_hearing_autoAddEarplugsToUnits = true;
force force ace_hearing_disableEarRinging = true;
force force ace_hearing_earplugsVolume = 0.5;
force force ace_hearing_enableCombatDeafness = true;
force force ace_hearing_enabledForZeusUnits = false;
force force ace_hearing_unconsciousnessVolume = 0.0505054;

// ACE Interaction
force force ace_interaction_disableNegativeRating = true;
force force ace_interaction_enableMagazinePassing = true;
force force ace_interaction_enableTeamManagement = false;

// ACE Interaction Menu
ace_gestures_showOnInteractionMenu = 2;
ace_interact_menu_actionOnKeyRelease = true;
ace_interact_menu_addBuildingActions = false;
ace_interact_menu_alwaysUseCursorInteraction = false;
ace_interact_menu_alwaysUseCursorSelfInteraction = true;
ace_interact_menu_colorShadowMax = [0,0,0,1];
ace_interact_menu_colorShadowMin = [0,0,0,0.25];
ace_interact_menu_colorTextMax = [1,1,1,1];
ace_interact_menu_colorTextMin = [1,1,1,0.25];
ace_interact_menu_cursorKeepCentered = false;
ace_interact_menu_cursorKeepCenteredSelfInteraction = false;
ace_interact_menu_menuAnimationSpeed = 0;
ace_interact_menu_menuBackground = 0;
ace_interact_menu_menuBackgroundSelf = 0;
ace_interact_menu_selectorColor = [1,0,0];
ace_interact_menu_shadowSetting = 2;
ace_interact_menu_textSize = 2;
ace_interact_menu_useListMenu = false;
ace_interact_menu_useListMenuSelf = false;

// ACE Logistics
force ace_cargo_enable = true;
force ace_cargo_loadTimeCoefficient = 5;
force ace_cargo_paradropTimeCoefficent = 0;
force ace_rearm_distance = 20;
force ace_rearm_level = 2;
force ace_rearm_supply = 1;
force ace_refuel_hoseLength = 12;
force ace_refuel_rate = 1;
force ace_repair_addSpareParts = true;
force ace_repair_autoShutOffEngineWhenStartingRepair = false;
force ace_repair_consumeItem_toolKit = 0;
ace_repair_displayTextOnRepair = true;
force force ace_repair_engineerSetting_fullRepair = 1;
force ace_repair_engineerSetting_repair = 1;
force ace_repair_engineerSetting_wheel = 0;
force force ace_repair_fullRepairLocation = 3;
force ace_repair_fullRepairRequiredItems = ["ToolKit"];
force ace_repair_miscRepairRequiredItems = ["ToolKit"];
force ace_repair_repairDamageThreshold = 0.8;
force ace_repair_repairDamageThreshold_engineer = 0.8;
force ace_repair_wheelRepairRequiredItems = [];

// ACE Magazine Repack
force force ace_magazinerepack_timePerAmmo = 1.5;
force force ace_magazinerepack_timePerBeltLink = 8;
force force ace_magazinerepack_timePerMagazine = 2;

// ACE Map
force ace_map_BFT_Enabled = false;
force force ace_map_BFT_HideAiGroups = true;
force ace_map_BFT_Interval = 1;
force ace_map_BFT_ShowPlayerNames = false;
force force ace_map_DefaultChannel = -1;
force force ace_map_mapGlow = true;
force force ace_map_mapIllumination = true;
force force ace_map_mapLimitZoom = false;
force force ace_map_mapShake = true;
force force ace_map_mapShowCursorCoordinates = false;
force force ace_markers_moveRestriction = 0;

// ACE Map Gestures
ace_map_gestures_allowCurator = true;
ace_map_gestures_allowSpectator = true;
ace_map_gestures_briefingMode = 0;
ace_map_gestures_defaultColor = [1,0.88,0,0.7];
ace_map_gestures_defaultLeadColor = [1,0.88,0,0.95];
force ace_map_gestures_enabled = true;
force ace_map_gestures_interval = 0.03;
force ace_map_gestures_maxRange = 7;
force ace_map_gestures_maxRangeCamera = 14;
ace_map_gestures_nameTextColor = [0.2,0.2,0.2,0.3];
force ace_map_gestures_onlyShowFriendlys = false;

// ACE Map Tools
ace_maptools_drawStraightLines = true;
ace_maptools_rotateModifierKey = 1;

// ACE Medical
force force ace_medical_ai_enabledFor = 2;
force force ace_medical_AIDamageThreshold = 0.519893;
force force ace_medical_allowLitterCreation = true;
force ace_medical_allowUnconsciousAnimationOnTreatment = false;
force force ace_medical_amountOfReviveLives = -1;
force force ace_medical_bleedingCoefficient = 0.7;
force force ace_medical_blood_enabledFor = 2;
force force ace_medical_consumeItem_PAK = 0;
force force ace_medical_consumeItem_SurgicalKit = 0;
force ace_medical_convertItems = 0;
force force ace_medical_delayUnconCaptive = 2;
force force ace_medical_enableAdvancedWounds = true;
force force ace_medical_enableFor = 1;
force force ace_medical_enableOverdosing = true;
force force ace_medical_enableRevive = 2;
force force ace_medical_enableScreams = true;
force force ace_medical_enableUnconsciousnessAI = 1;
force force ace_medical_enableVehicleCrashes = true;
force force ace_medical_healHitPointAfterAdvBandage = true;
force force ace_medical_increaseTrainingInLocations = true;
force force ace_medical_keepLocalSettingsSynced = true;
force force ace_medical_level = 2;
force force ace_medical_litterCleanUpDelay = 120;
force force ace_medical_litterSimulationDetail = 3;
force force ace_medical_maxReviveTime = 180;
force force ace_medical_medicSetting = 2;
force force ace_medical_medicSetting_basicEpi = 1;
force force ace_medical_medicSetting_PAK = 1;
force force ace_medical_medicSetting_SurgicalKit = 1;
force force ace_medical_menu_allow = 1;
force force ace_medical_menu_maxRange = 3;
ace_medical_menu_openAfterTreatment = true;
ace_medical_menu_useMenu = 1;
ace_medical_menuTypeStyle = 0;
ace_medical_menuTypeStyleSelf = true;
force ace_medical_moveUnitsFromGroupOnUnconscious = false;
force force ace_medical_painCoefficient = 1;
ace_medical_painEffectType = 1;
force force ace_medical_painIsOnlySuppressed = true;
force force ace_medical_playerDamageThreshold = 1;
force force ace_medical_preventInstaDeath = true;
force force ace_medical_remoteControlledAI = true;
force force ace_medical_useCondition_PAK = 1;
force force ace_medical_useCondition_SurgicalKit = 1;
force force ace_medical_useLocation_basicEpi = 0;
force force ace_medical_useLocation_PAK = 2;
force force ace_medical_useLocation_SurgicalKit = 0;

// ACE Name Tags
ace_nametags_defaultNametagColor = [0.77,0.51,0.08,1];
ace_nametags_nametagColorBlue = [0.67,0.67,1,1];
ace_nametags_nametagColorGreen = [0.67,1,0.67,1];
ace_nametags_nametagColorMain = [1,1,1,1];
ace_nametags_nametagColorRed = [1,0.67,0.67,1];
ace_nametags_nametagColorYellow = [1,1,0.67,1];
force ace_nametags_playerNamesMaxAlpha = 0.8;
force ace_nametags_playerNamesViewDistance = 5;
force ace_nametags_showCursorTagForVehicles = false;
ace_nametags_showNamesForAI = false;
ace_nametags_showPlayerNames = 1;
ace_nametags_showPlayerRanks = true;
ace_nametags_showSoundWaves = 1;
ace_nametags_showVehicleCrewInfo = true;
ace_nametags_tagSize = 2;

// ACE Nightvision
force force ace_nightvision_aimDownSightsBlur = 0.5;
force force ace_nightvision_disableNVGsWithSights = false;
force force ace_nightvision_effectScaling = 0.1;
force force ace_nightvision_fogScaling = 0;
force ace_nightvision_noiseScaling = 0.7;
ace_nightvision_shutterEffects = true;

// ACE Overheating
force force ace_overheating_displayTextOnJam = true;
force force ace_overheating_enabled = true;
force force ace_overheating_overheatingDispersion = true;
force force ace_overheating_showParticleEffects = true;
force force ace_overheating_showParticleEffectsForEveryone = true;
force force ace_overheating_unJamFailChance = 0.2;
force force ace_overheating_unJamOnreload = false;

// ACE Pointing
force force ace_finger_enabled = true;
force force ace_finger_indicatorColor = [0.83,0.68,0.21,0.75];
force force ace_finger_indicatorForSelf = true;
force force ace_finger_maxRange = 4;

// ACE Pylons
force ace_pylons_enabledForZeus = true;
force ace_pylons_enabledFromAmmoTrucks = true;
force force ace_pylons_rearmNewPylons = false;
force force ace_pylons_requireEngineer = false;
force force ace_pylons_requireToolkit = true;
force force ace_pylons_searchDistance = 15;
force force ace_pylons_timePerPylon = 5;

// ACE Quick Mount
force ace_quickmount_distance = 3;
force ace_quickmount_enabled = true;
ace_quickmount_enableMenu = 3;
ace_quickmount_priority = 0;
force ace_quickmount_speed = 18;

// ACE Respawn
force force ace_respawn_removeDeadBodiesDisconnected = false;
force force ace_respawn_savePreDeathGear = true;

// ACE Scopes
force ace_scopes_correctZeroing = true;
force ace_scopes_deduceBarometricPressureFromTerrainAltitude = false;
force ace_scopes_defaultZeroRange = 100;
force ace_scopes_enabled = true;
force ace_scopes_forceUseOfAdjustmentTurrets = false;
force ace_scopes_overwriteZeroRange = false;
force ace_scopes_simplifiedZeroing = false;
ace_scopes_useLegacyUI = false;
force ace_scopes_zeroReferenceBarometricPressure = 1013.25;
force ace_scopes_zeroReferenceHumidity = 0;
force ace_scopes_zeroReferenceTemperature = 15;

// ACE Spectator
force ace_spectator_enableAI = false;
ace_spectator_maxFollowDistance = 5;
force ace_spectator_restrictModes = 0;
force ace_spectator_restrictVisions = 0;

// ACE Switch Units
force ace_switchunits_enableSafeZone = true;
force ace_switchunits_enableSwitchUnits = false;
force ace_switchunits_safeZoneRadius = 100;
force ace_switchunits_switchToCivilian = false;
force ace_switchunits_switchToEast = false;
force ace_switchunits_switchToIndependent = false;
force ace_switchunits_switchToWest = false;

// ACE Trenches
force ace_trenches_bigEnvelopeDigDuration = 25;
force ace_trenches_bigEnvelopeRemoveDuration = 15;
force ace_trenches_smallEnvelopeDigDuration = 20;
force ace_trenches_smallEnvelopeRemoveDuration = 12;

// ACE Uncategorized
force ace_fastroping_requireRopeItems = false;
force ace_gunbag_swapGunbagEnabled = true;
force force ace_hitreactions_minDamageToTrigger = 0.1;
ace_inventory_inventoryDisplaySize = 0;
force force ace_laser_dispersionCount = 2;
force force ace_microdagr_mapDataAvailable = 2;
force ace_microdagr_waypointPrecision = 3;
ace_optionsmenu_showNewsOnMainMenu = true;
force force ace_overpressure_distanceCoefficient = 1;
ace_tagging_quickTag = 1;

// ACE User Interface
force force ace_ui_allowSelectiveUI = false;
force force ace_ui_ammoCount = false;
force force ace_ui_ammoType = true;
force force ace_ui_commandMenu = false;
force force ace_ui_firingMode = true;
force force ace_ui_groupBar = false;
force force ace_ui_gunnerAmmoCount = true;
force force ace_ui_gunnerAmmoType = true;
force force ace_ui_gunnerFiringMode = true;
force force ace_ui_gunnerLaunchableCount = true;
force force ace_ui_gunnerLaunchableName = true;
force force ace_ui_gunnerMagCount = true;
force force ace_ui_gunnerWeaponLowerInfoBackground = true;
force force ace_ui_gunnerWeaponName = true;
force force ace_ui_gunnerWeaponNameBackground = true;
force force ace_ui_gunnerZeroing = true;
force force ace_ui_magCount = true;
force force ace_ui_soldierVehicleWeaponInfo = true;
force force ace_ui_staminaBar = false;
force force ace_ui_stance = false;
force force ace_ui_throwableCount = true;
force force ace_ui_throwableName = true;
force force ace_ui_vehicleAltitude = true;
force force ace_ui_vehicleCompass = true;
force force ace_ui_vehicleDamage = true;
force force ace_ui_vehicleFuelBar = true;
force force ace_ui_vehicleInfoBackground = true;
force force ace_ui_vehicleName = true;
force force ace_ui_vehicleNameBackground = true;
force force ace_ui_vehicleRadar = true;
force force ace_ui_vehicleSpeed = true;
force force ace_ui_weaponLowerInfoBackground = true;
force force ace_ui_weaponName = true;
force force ace_ui_weaponNameBackground = true;
force force ace_ui_zeroing = true;

// ACE Vehicle Lock
force ace_vehiclelock_defaultLockpickStrength = 10;
force ace_vehiclelock_lockVehicleInventory = false;
force ace_vehiclelock_vehicleStartingLockState = -1;

// ACE Vehicles
ace_vehicles_hideEjectAction = true;
force ace_vehicles_keepEngineRunning = false;
ace_vehicles_speedLimiterStep = 5;

// ACE View Distance Limiter
force ace_viewdistance_enabled = true;
force force ace_viewdistance_limitViewDistance = 10000;
ace_viewdistance_objectViewDistanceCoeff = 0;
ace_viewdistance_viewDistanceAirVehicle = 0;
ace_viewdistance_viewDistanceLandVehicle = 0;
ace_viewdistance_viewDistanceOnFoot = 0;

// ACE Weapons
ace_common_persistentLaserEnabled = false;
force ace_laserpointer_enabled = true;
ace_reload_displayText = true;
ace_reload_showCheckAmmoSelf = false;
ace_weaponselect_displayText = true;

// ACE Weather
force ace_weather_enabled = true;
ace_weather_showCheckAirTemperature = true;
force ace_weather_updateInterval = 60;
force ace_weather_windSimulation = true;

// ACE Wind Deflection
force ace_winddeflection_enabled = true;
force ace_winddeflection_simulationInterval = 0.05;
force ace_winddeflection_vehicleEnabled = true;

// ACE Zeus
force force ace_zeus_autoAddObjects = true;
force ace_zeus_canCreateZeus = -1;
force ace_zeus_radioOrdnance = false;
force ace_zeus_remoteWind = false;
force ace_zeus_revealMines = 0;
force ace_zeus_zeusAscension = false;
force ace_zeus_zeusBird = false;

// ACEX Field Rations
force acex_field_rations_affectAdvancedFatigue = true;
force acex_field_rations_enabled = false;
acex_field_rations_hudShowLevel = 0;
acex_field_rations_hudTransparency = -1;
acex_field_rations_hudType = 0;
force acex_field_rations_hungerSatiated = 1;
force acex_field_rations_thirstQuenched = 1;
force acex_field_rations_timeWithoutFood = 2;
force acex_field_rations_timeWithoutWater = 2;

// ACEX Fortify
acex_fortify_settingHint = 2;

// ACEX Headless
force acex_headless_delay = 15;
force acex_headless_enabled = false;
force acex_headless_endMission = 0;
force acex_headless_log = false;
force acex_headless_transferLoadout = 0;

// ACEX Sitting
force force acex_sitting_enable = true;

// ACEX View Restriction
force acex_viewrestriction_mode = 0;
force acex_viewrestriction_modeSelectiveAir = 0;
force acex_viewrestriction_modeSelectiveFoot = 0;
force acex_viewrestriction_modeSelectiveLand = 0;
force acex_viewrestriction_modeSelectiveSea = 0;
acex_viewrestriction_preserveView = false;

// ACEX Volume
acex_volume_enabled = false;
acex_volume_fadeDelay = 1;
acex_volume_lowerInVehicles = false;
acex_volume_reduction = 5;
acex_volume_remindIfLowered = false;
acex_volume_showNotification = true;

// ACRE2
acre_sys_core_automaticAntennaDirection = false;
acre_sys_core_defaultRadioVolume = 0.8;
force force acre_sys_core_fullDuplex = false;
acre_sys_core_godVolume = 1;
force force acre_sys_core_ignoreAntennaDirection = true;
force force acre_sys_core_interference = true;
acre_sys_core_postmixGlobalVolume = 1;
acre_sys_core_premixGlobalVolume = 1;
force force acre_sys_core_revealToAI = 1;
acre_sys_core_spectatorVolume = 1;
force force acre_sys_core_terrainLoss = 0;
force force acre_sys_core_ts3ChannelName = "ACRE - Operations";
force force acre_sys_core_ts3ChannelPassword = "dontjoinmebro";
force force acre_sys_core_ts3ChannelSwitch = true;
acre_sys_core_unmuteClients = true;
force acre_sys_signal_signalModel = 2;

// ACRE2 Gestures
acre_sys_gestures_enabled = true;
acre_sys_gestures_stopADS = false;

// ACRE2 UI
acre_sys_godmode_rxNotification = true;
acre_sys_godmode_rxNotificationColor = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotification = true;
acre_sys_godmode_txNotificationCurrentChatColor = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotificationGroup1Color = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotificationGroup2Color = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotificationGroup3Color = [0.8,0.8,0.8,1];
acre_sys_gui_volumeColorScale = [[1,1,0,0.5],[1,0.83,0,0.5],[1,0.65,0,0.5],[1,0.44,0,0.5],[1,0,0,0.5]];
acre_sys_list_CycleRadiosColor = [0.66,0.05,1,1];
acre_sys_list_DefaultPTTColor = [1,0.8,0,1];
acre_sys_list_HintBackgroundColor = [0,0,0,0.8];
acre_sys_list_HintTextFont = "RobotoCondensed";
acre_sys_list_LanguageColor = [1,0.29,0.16,1];
acre_sys_list_PTT1Color = [1,0.8,0,1];
acre_sys_list_PTT2Color = [1,0.8,0,1];
acre_sys_list_PTT3Color = [1,0.8,0,1];
acre_sys_list_SwitchChannelColor = [0.66,0.05,1,1];
acre_sys_list_ToggleHeadsetColor = [0.66,0.05,1,1];

// ACRE2 Zeus
acre_sys_zeus_zeusCanSpectate = true;
acre_sys_zeus_zeusCommunicateViaCamera = true;
acre_sys_zeus_zeusDefaultVoiceSource = false;

// Community Base Addons
cba_diagnostic_ConsoleIndentType = -1;
cba_disposable_dropUsedLauncher = 2;
force cba_disposable_replaceDisposableLauncher = true;
cba_events_repetitionMode = 1;
force cba_network_loadoutValidation = 0;
cba_optics_usePipOptics = true;
cba_ui_notifyLifetime = 4;
cba_ui_StorePasswords = 1;

// CUP
CUP_CheckCfgPatches = false;
CUP_Vehicles_PreventBarrelClip = true;

// CUP Static Weapons
CUP_staticWeapons_allowMovement = false;
CUP_staticWeapons_allowRotation = false;

// CWR3
cwr3_intro_customLogo = true;
cwr3_intro_disableSpotlight = true;

// Freestyle's Crash Landing
force force fscl_captiveSystem = true;
force force fscl_damageTreshold = 99;
force force fscl_debug = false;
force force fscl_ejectionProp = 0;
force force fscl_ejectionSystem = false;
force force fscl_gForceThreshold = 0;
force force fscl_ignoreNonPlayerVehicles = false;
force force fscl_stateThreshold = 75.4317;

// GRAD Trenches
grad_trenches_functions_allowBigEnvelope = true;
grad_trenches_functions_allowCamouflage = true;
grad_trenches_functions_allowDigging = true;
grad_trenches_functions_allowGiantEnvelope = true;
grad_trenches_functions_allowLongEnvelope = true;
grad_trenches_functions_allowShortEnvelope = true;
grad_trenches_functions_allowSmallEnvelope = true;
grad_trenches_functions_allowVehicleEnvelope = true;
force force grad_trenches_functions_bigEnvelopeDigTime = 120;
force grad_trenches_functions_buildFatigueFactor = 1;
grad_trenches_functions_camouflageRequireEntrenchmentTool = true;
force force grad_trenches_functions_giantEnvelopeDigTime = 270;
force force grad_trenches_functions_LongEnvelopeDigTime = 300;
force force grad_trenches_functions_shortEnvelopeDigTime = 45;
force force grad_trenches_functions_smallEnvelopeDigTime = 90;
grad_trenches_functions_stopBuildingAtFatigueMax = true;
force force grad_trenches_functions_vehicleEnvelopeDigTime = 360;

// TWC
TWC_Core_BroadcastMode = false;
force TWC_Core_isPublic = false;
force force TWC_Core_isServer = true;
force TWC_Debug_Enable = true;
force TWC_Debug_PlayerLimit = 4;
force TWC_Ignore_Gestures = false;
force force TWC_Medical_Threshold_Body = 18.2262;
force force TWC_Medical_Threshold_Head = 12.609;
force force TWC_Medical_Threshold_Total = 30.4579;
TWC_Show_Gestures = true;

// TWC - Cleanup
force TWC_Corpse_Enabled = true;
force TWC_Corpse_Queue_Max = 25;
force TWC_Corpse_Queue_MinTime = 300;
