// Pseudo-C++ — auto-generated from x86/x64 assembly
// Source function: sub_180021018
// Credits 2 Claude (AI) for making the C++ version.
// You can also add more headers.
#include <cstdint>
#include <cmath>
#include <immintrin.h>

// Inferred string/const data pointers
const char* aR6002FloatingP = /* class="str">"aR6002FloatingP" */ nullptr;
const char* aR6008NotEnough = /* class="str">"aR6008NotEnough" */ nullptr;
const char* aR6009NotEnough = /* class="str">"aR6009NotEnough" */ nullptr;
const char* aR6010AbortHasB = /* class="str">"aR6010AbortHasB" */ nullptr;
const char* aR6016NotEnough = /* class="str">"aR6016NotEnough" */ nullptr;
const char* aR6017Unexpecte = /* class="str">"aR6017Unexpecte" */ nullptr;
const char* aR6018Unexpecte = /* class="str">"aR6018Unexpecte" */ nullptr;
const char* aR6019UnableToO = /* class="str">"aR6019UnableToO" */ nullptr;
const char* aR6024NotEnough = /* class="str">"aR6024NotEnough" */ nullptr;
const char* aR6025PureVirtu = /* class="str">"aR6025PureVirtu" */ nullptr;
const char* aR6026NotEnough = /* class="str">"aR6026NotEnough" */ nullptr;
const char* aR6027NotEnough = /* class="str">"aR6027NotEnough" */ nullptr;
const char* aR6028UnableToI = /* class="str">"aR6028UnableToI" */ nullptr;
const char* aR6030CrtNotIni = /* class="str">"aR6030CrtNotIni" */ nullptr;
const char* aR6031AttemptTo = /* class="str">"aR6031AttemptTo" */ nullptr;
const char* aR6032NotEnough = /* class="str">"aR6032NotEnough" */ nullptr;
const char* aR6033AttemptTo = /* class="str">"aR6033AttemptTo" */ nullptr;
const char* aDomainError = /* class="str">"aDomainError" */ nullptr;
const char* aSingError = /* class="str">"aSingError" */ nullptr;
const char* aTlossError = /* class="str">"aTlossError" */ nullptr;
const char* asc_180002258 = /* class="str">"asc_180002258" */ nullptr;
const char* aRuntimeError = /* class="str">"aRuntimeError" */ nullptr;
const char* aBased = /* class="str">"aBased" */ nullptr;
const char* aCdecl = /* class="str">"aCdecl" */ nullptr;
const char* aPascal = /* class="str">"aPascal" */ nullptr;
const char* aStdcall = /* class="str">"aStdcall" */ nullptr;
const char* aThiscall = /* class="str">"aThiscall" */ nullptr;
const char* aFastcall = /* class="str">"aFastcall" */ nullptr;
const char* aClrcall = /* class="str">"aClrcall" */ nullptr;
const char* aEabi = /* class="str">"aEabi" */ nullptr;
const char* aPtr64 = /* class="str">"aPtr64" */ nullptr;
const char* aRestrict = /* class="str">"aRestrict" */ nullptr;
const char* aUnaligned = /* class="str">"aUnaligned" */ nullptr;
const char* aNew_0 = /* class="str">"aNew_0" */ nullptr;
const char* aDelete_0 = /* class="str">"aDelete_0" */ nullptr;
const char* asc_1800031D0 = /* class="str">"asc_1800031D0" */ nullptr;
const char* asc_180003958 = /* class="str">"asc_180003958" */ nullptr;
const char* asc_180003954 = /* class="str">"asc_180003954" */ nullptr;
const char* asc_180003950 = /* class="str">"asc_180003950" */ nullptr;
const char* asc_18000394C = /* class="str">"asc_18000394C" */ nullptr;
const char* asc_180003948 = /* class="str">"asc_180003948" */ nullptr;
const char* asc_180003944 = /* class="str">"asc_180003944" */ nullptr;
const char* aOperator = /* class="str">"aOperator" */ nullptr;
const char* asc_180003934 = /* class="str">"asc_180003934" */ nullptr;
const char* asc_180003930 = /* class="str">"asc_180003930" */ nullptr;
const char* asc_18000392C = /* class="str">"asc_18000392C" */ nullptr;
const char* asc_180003928 = /* class="str">"asc_180003928" */ nullptr;
const char* asc_180003924 = /* class="str">"asc_180003924" */ nullptr;
const char* asc_180003920 = /* class="str">"asc_180003920" */ nullptr;
const char* asc_18000391C = /* class="str">"asc_18000391C" */ nullptr;
const char* asc_180003918 = /* class="str">"asc_180003918" */ nullptr;
const char* asc_180003914 = /* class="str">"asc_180003914" */ nullptr;
const char* asc_180003910 = /* class="str">"asc_180003910" */ nullptr;
const char* asc_18000390C = /* class="str">"asc_18000390C" */ nullptr;
const char* asc_180003908 = /* class="str">"asc_180003908" */ nullptr;
const char* asc_180003904 = /* class="str">"asc_180003904" */ nullptr;
const char* asc_180003900 = /* class="str">"asc_180003900" */ nullptr;
const char* asc_1800038FC = /* class="str">"asc_1800038FC" */ nullptr;
const char* asc_1800038F8 = /* class="str">"asc_1800038F8" */ nullptr;
const char* asc_1800038F4 = /* class="str">"asc_1800038F4" */ nullptr;
const char* asc_1800038F0 = /* class="str">"asc_1800038F0" */ nullptr;
const char* asc_1800038EC = /* class="str">"asc_1800038EC" */ nullptr;
const char* asc_1800038E8 = /* class="str">"asc_1800038E8" */ nullptr;
const char* asc_1800038E4 = /* class="str">"asc_1800038E4" */ nullptr;
const char* asc_1800038E0 = /* class="str">"asc_1800038E0" */ nullptr;
const char* asc_1800038DC = /* class="str">"asc_1800038DC" */ nullptr;
const char* asc_1800038D8 = /* class="str">"asc_1800038D8" */ nullptr;
const char* asc_1800038D4 = /* class="str">"asc_1800038D4" */ nullptr;
const char* asc_1800038D0 = /* class="str">"asc_1800038D0" */ nullptr;
const char* asc_1800038CC = /* class="str">"asc_1800038CC" */ nullptr;
const char* asc_1800038C8 = /* class="str">"asc_1800038C8" */ nullptr;
const char* asc_1800038C4 = /* class="str">"asc_1800038C4" */ nullptr;
const char* asc_1800038C0 = /* class="str">"asc_1800038C0" */ nullptr;
const char* asc_1800038BC = /* class="str">"asc_1800038BC" */ nullptr;
const char* aVftable = /* class="str">"aVftable" */ nullptr;
const char* aVbtable = /* class="str">"aVbtable" */ nullptr;
const char* aVcall = /* class="str">"aVcall" */ nullptr;
const char* aTypeof = /* class="str">"aTypeof" */ nullptr;
const char* aLocalStaticGua = /* class="str">"aLocalStaticGua" */ nullptr;
const char* aString = /* class="str">"aString" */ nullptr;
const char* aVbaseDestructo = /* class="str">"aVbaseDestructo" */ nullptr;
const char* aVectorDeleting = /* class="str">"aVectorDeleting" */ nullptr;
const char* aDefaultConstru = /* class="str">"aDefaultConstru" */ nullptr;
const char* aScalarDeleting = /* class="str">"aScalarDeleting" */ nullptr;
const char* aVectorConstruc = /* class="str">"aVectorConstruc" */ nullptr;
const char* aVectorDestruct = /* class="str">"aVectorDestruct" */ nullptr;
const char* aVectorVbaseCon = /* class="str">"aVectorVbaseCon" */ nullptr;
const char* aVirtualDisplac = /* class="str">"aVirtualDisplac" */ nullptr;
const char* aEhVectorConstr = /* class="str">"aEhVectorConstr" */ nullptr;
const char* aEhVectorDestru = /* class="str">"aEhVectorDestru" */ nullptr;
const char* aEhVectorVbaseC_0 = /* class="str">"aEhVectorVbaseC_0" */ nullptr;
const char* aCopyConstructo = /* class="str">"aCopyConstructo" */ nullptr;
const char* aUdtReturning = /* class="str">"aUdtReturning" */ nullptr;
const char* aEh = /* class="str">"aEh" */ nullptr;
const char* aRtti = /* class="str">"aRtti" */ nullptr;
const char* aLocalVftable = /* class="str">"aLocalVftable" */ nullptr;
const char* aLocalVftableCo = /* class="str">"aLocalVftableCo" */ nullptr;
const char* aNew = /* class="str">"aNew" */ nullptr;
const char* aDelete = /* class="str">"aDelete" */ nullptr;
const char* aOmniCallsig = /* class="str">"aOmniCallsig" */ nullptr;
const char* aPlacementDelet_0 = /* class="str">"aPlacementDelet_0" */ nullptr;
const char* aPlacementDelet = /* class="str">"aPlacementDelet" */ nullptr;
const char* aManagedVectorC_0 = /* class="str">"aManagedVectorC_0" */ nullptr;
const char* aManagedVectorD = /* class="str">"aManagedVectorD" */ nullptr;
const char* aEhVectorCopyCo = /* class="str">"aEhVectorCopyCo" */ nullptr;
const char* aEhVectorVbaseC = /* class="str">"aEhVectorVbaseC" */ nullptr;
const char* aDynamicInitial = /* class="str">"aDynamicInitial" */ nullptr;
const char* aDynamicAtexitD = /* class="str">"aDynamicAtexitD" */ nullptr;
const char* aVectorCopyCons = /* class="str">"aVectorCopyCons" */ nullptr;
const char* aVectorVbaseCop = /* class="str">"aVectorVbaseCop" */ nullptr;
const char* aManagedVectorC = /* class="str">"aManagedVectorC" */ nullptr;
const char* aLocalStaticThr = /* class="str">"aLocalStaticThr" */ nullptr;
const char* aTypeDescriptor = /* class="str">"aTypeDescriptor" */ nullptr;
const char* aBaseClassDescr = /* class="str">"aBaseClassDescr" */ nullptr;
const char* aBaseClassArray = /* class="str">"aBaseClassArray" */ nullptr;
const char* aClassHierarchy = /* class="str">"aClassHierarchy" */ nullptr;
const char* aCompleteObject = /* class="str">"aCompleteObject" */ nullptr;
const char* Str2       ; class="str">"baseclass" = /* class="str">"Str2       ; "baseclassclass="str">"" */ nullptr;
const char* aDtBaseplayer ; class="str">"DT_BasePlayer" = /* class="str">"aDtBaseplayer ; "DT_BasePlayerclass="str">"" */ nullptr;
const char* aMLifestate ; class="str">"m_lifeState" = /* class="str">"aMLifestate ; "m_lifeStateclass="str">"" */ nullptr;
const char* aMIhealth  ; class="str">"m_iHealth" = /* class="str">"aMIhealth  ; "m_iHealthclass="str">"" */ nullptr;
const char* aMNtickbase ; class="str">"m_nTickBase" = /* class="str">"aMNtickbase ; "m_nTickBaseclass="str">"" */ nullptr;
const char* aMFflags   ; class="str">"m_fFlags" = /* class="str">"aMFflags   ; "m_fFlagsclass="str">"" */ nullptr;
const char* aMImaxhealth ; class="str">"m_iMaxHealth" = /* class="str">"aMImaxhealth ; "m_iMaxHealthclass="str">"" */ nullptr;
const char* aDtTfplayerreso ; class="str">"DT_TFPlayerResource" = /* class="str">"aDtTfplayerreso ; "DT_TFPlayerResourceclass="str">"" */ nullptr;
const char* aMIteamnum ; class="str">"m_iTeamNum" = /* class="str">"aMIteamnum ; "m_iTeamNumclass="str">"" */ nullptr;
const char* aDtBaseentity ; class="str">"DT_BaseEntity" = /* class="str">"aDtBaseentity ; "DT_BaseEntityclass="str">"" */ nullptr;
const char* aDtTfplayer ; class="str">"DT_TFPlayer" = /* class="str">"aDtTfplayer ; "DT_TFPlayerclass="str">"" */ nullptr;
const char* aMShared   ; class="str">"m_Shared" = /* class="str">"aMShared   ; "m_Sharedclass="str">"" */ nullptr;
const char* aMNplayercond ; class="str">"m_nPlayerCond" = /* class="str">"aMNplayercond ; "m_nPlayerCondclass="str">"" */ nullptr;
const char* aMNplayercondex ; class="str">"m_nPlayerCondEx" = /* class="str">"aMNplayercondex ; "m_nPlayerCondExclass="str">"" */ nullptr;
const char* aMPlayerclass ; class="str">"m_PlayerClass" = /* class="str">"aMPlayerclass ; "m_PlayerClassclass="str">"" */ nullptr;
const char* aMBglowenabled ; class="str">"m_bGlowEnabled" = /* class="str">"aMBglowenabled ; "m_bGlowEnabledclass="str">"" */ nullptr;
const char* aMFlheadscale ; class="str">"m_flHeadScale" = /* class="str">"aMFlheadscale ; "m_flHeadScaleclass="str">"" */ nullptr;
const char* aDtBaseobject ; class="str">"DT_BaseObject" = /* class="str">"aDtBaseobject ; "DT_BaseObjectclass="str">"" */ nullptr;
const char* aMBhassapper ; class="str">"m_bHasSapper" = /* class="str">"aMBhassapper ; "m_bHasSapperclass="str">"" */ nullptr;
const char* aMIupgradelevel ; class="str">"m_iUpgradeLevel" = /* class="str">"aMIupgradelevel ; "m_iUpgradeLevelclass="str">"" */ nullptr;
const char* aMIupgrademetal ; class="str">"m_iUpgradeMetal" = /* class="str">"aMIupgrademetal ; "m_iUpgradeMetalclass="str">"" */ nullptr;
const char* aDtBasecombatwe ; class="str">"DT_BaseCombatWeapon" = /* class="str">"aDtBasecombatwe ; "DT_BaseCombatWeaponclass="str">"" */ nullptr;
const char* aMIprimaryammot ; class="str">"m_iPrimaryAmmoType" = /* class="str">"aMIprimaryammot ; "m_iPrimaryAmmoTypeclass="str">"" */ nullptr;
const char* aMIclip1   ; class="str">"m_iClip1" = /* class="str">"aMIclip1   ; "m_iClip1class="str">"" */ nullptr;
const char* aMIclip2   ; class="str">"m_iClip2" = /* class="str">"aMIclip2   ; "m_iClip2class="str">"" */ nullptr;
const char* aMFllastcritche ; class="str">"m_flLastCritCheckTime" = /* class="str">"aMFllastcritche ; "m_flLastCritCheckTimeclass="str">"" */ nullptr;
const char* aDtTfweaponbase ; class="str">"DT_TFWeaponBase" = /* class="str">"aDtTfweaponbase ; "DT_TFWeaponBaseclass="str">"" */ nullptr;
const char* aMFeffects ; class="str">"m_fEffects" = /* class="str">"aMFeffects ; "m_fEffectsclass="str">"" */ nullptr;
const char* aDtBaseviewmode ; class="str">"DT_BaseViewModel" = /* class="str">"aDtBaseviewmode ; "DT_BaseViewModelclass="str">"" */ nullptr;
const char* aMVecviewoffset ; class="str">"m_vecViewOffset0" = /* class="str">"aMVecviewoffset ; "m_vecViewOffset0class="str">"" */ nullptr;
const char* aMFllastfiretim ; class="str">"m_flLastFireTime" = /* class="str">"aMFllastfiretim ; "m_flLastFireTimeclass="str">"" */ nullptr;
const char* aDtWeaponmedigu ; class="str">"DT_WeaponMedigun" = /* class="str">"aDtWeaponmedigu ; "DT_WeaponMedigunclass="str">"" */ nullptr;
const char* aMBhealing ; class="str">"m_bHealing" = /* class="str">"aMBhealing ; "m_bHealingclass="str">"" */ nullptr;
const char* aMHhealingtarge ; class="str">"m_hHealingTarget" = /* class="str">"aMHhealingtarge ; "m_hHealingTargetclass="str">"" */ nullptr;
const char* aMFlchargelevel ; class="str">"m_flChargeLevel" = /* class="str">"aMFlchargelevel ; "m_flChargeLevelclass="str">"" */ nullptr;
const char* aMIweaponstate ; class="str">"m_iWeaponState" = /* class="str">"aMIweaponstate ; "m_iWeaponStateclass="str">"" */ nullptr;
const char* aDtWeaponminigu ; class="str">"DT_WeaponMinigun" = /* class="str">"aDtWeaponminigu ; "DT_WeaponMinigunclass="str">"" */ nullptr;
const char* aMBreadytobacks ; class="str">"m_bReadyToBackstab" = /* class="str">"aMBreadytobacks ; "m_bReadyToBackstabclass="str">"" */ nullptr;
const char* aDtTfweaponknif ; class="str">"DT_TFWeaponKnife" = /* class="str">"aDtTfweaponknif ; "DT_TFWeaponKnifeclass="str">"" */ nullptr;
const char* aMHactiveweapon ; class="str">"m_hActiveWeapon" = /* class="str">"aMHactiveweapon ; "m_hActiveWeaponclass="str">"" */ nullptr;
const char* aDtBasecombatch ; class="str">"DT_BaseCombatCharacter" = /* class="str">"aDtBasecombatch ; "DT_BaseCombatCharacterclass="str">"" */ nullptr;
const char* aMItem     ; class="str">"m_Item" = /* class="str">"aMItem     ; "m_Itemclass="str">"" */ nullptr;
const char* aDtEconentity ; class="str">"DT_EconEntity" = /* class="str">"aDtEconentity ; "DT_EconEntityclass="str">"" */ nullptr;
const char* aMFlchargeddama ; class="str">"m_flChargedDamage" = /* class="str">"aMFlchargeddama ; "m_flChargedDamageclass="str">"" */ nullptr;
const char* aDtTfsniperrifl ; class="str">"DT_TFSniperRifle" = /* class="str">"aDtTfsniperrifl ; "DT_TFSniperRifleclass="str">"" */ nullptr;
const char* aMBtouched ; class="str">"m_bTouched" = /* class="str">"aMBtouched ; "m_bTouchedclass="str">"" */ nullptr;
const char* aDtTfprojectile ; class="str">"DT_TFProjectile_Pipebomb" = /* class="str">"aDtTfprojectile ; "DT_TFProjectile_Pipebombclass="str">"" */ nullptr;
const char* aMItype    ; class="str">"m_iType" = /* class="str">"aMItype    ; "m_iTypeclass="str">"" */ nullptr;
const char* aCtfplayer ; class="str">"CTFPlayer" = /* class="str">"aCtfplayer ; "CTFPlayerclass="str">"" */ nullptr;
const char* Text       ; class="str">"Game data updated, some features might "... = /* class="str">"Text       ; "Game data updated, some features might class="str">"..." */ nullptr;
const char* aAim       ; class="str">"+ AIM" = /* class="str">"aAim       ; "+ AIMclass="str">"" */ nullptr;
const char* aAimBot    ; class="str">"Aim Bot" = /* class="str">"aAimBot    ; "Aim Botclass="str">"" */ nullptr;
const char* aAimKey    ; class="str">"Aim Key" = /* class="str">"aAimKey    ; "Aim Keyclass="str">"" */ nullptr;
const char* aAutoShoot ; class="str">"Auto Shoot" = /* class="str">"aAutoShoot ; "Auto Shootclass="str">"" */ nullptr;
const char* aPreserveTarget ; class="str">"Preserve Target" = /* class="str">"aPreserveTarget ; "Preserve Targetclass="str">"" */ nullptr;
const char* aSilentAim ; class="str">"Silent Aim" = /* class="str">"aSilentAim ; "Silent Aimclass="str">"" */ nullptr;
const char* aAimSentry ; class="str">"Aim Sentry" = /* class="str">"aAimSentry ; "Aim Sentryclass="str">"" */ nullptr;
const char* aAimStickies ; class="str">"Aim Stickies" = /* class="str">"aAimStickies ; "Aim Stickiesclass="str">"" */ nullptr;
const char* aIgnoreDeadring ; class="str">"Ignore DeadRinger" = /* class="str">"aIgnoreDeadring ; "Ignore DeadRingerclass="str">"" */ nullptr;
const char* aIgnoreCloakDis ; class="str">"Ignore Cloak/Disguse" = /* class="str">"aIgnoreCloakDis ; "Ignore Cloak/Disguseclass="str">"" */ nullptr;
const char* aNpcOnly   ; class="str">"NPC only" = /* class="str">"aNpcOnly   ; "NPC onlyclass="str">"" */ nullptr;
const char* aMeleeAim  ; class="str">"Melee Aim" = /* class="str">"aMeleeAim  ; "Melee Aimclass="str">"" */ nullptr;
const char* aStuff     ; class="str">"+ STUFF" = /* class="str">"aStuff     ; "+ STUFFclass="str">"" */ nullptr;
const char* aBigHeads  ; class="str">"Big Heads" = /* class="str">"aBigHeads  ; "Big Headsclass="str">"" */ nullptr;
const char* aSpinbot   ; class="str">"SpinBot" = /* class="str">"aSpinbot   ; "SpinBotclass="str">"" */ nullptr;
const char* aTriggerBot ; class="str">"Trigger Bot" = /* class="str">"aTriggerBot ; "Trigger Botclass="str">"" */ nullptr;
const char* aEsp       ; class="str">"+ ESP" = /* class="str">"aEsp       ; "+ ESPclass="str">"" */ nullptr;
const char* aEnemyOnly ; class="str">"Enemy Only" = /* class="str">"aEnemyOnly ; "Enemy Onlyclass="str">"" */ nullptr;
const char* aName      ; class="str">"Name" = /* class="str">"aName      ; "Nameclass="str">"" */ nullptr;
const char* aHealth    ; class="str">"Health" = /* class="str">"aHealth    ; "Healthclass="str">"" */ nullptr;
const char* aWeapon    ; class="str">"Weapon" = /* class="str">"aWeapon    ; "Weaponclass="str">"" */ nullptr;
const char* aUbercharge ; class="str">"UberCharge" = /* class="str">"aUbercharge ; "UberChargeclass="str">"" */ nullptr;
const char* aDistance  ; class="str">"Distance" = /* class="str">"aDistance  ; "Distanceclass="str">"" */ nullptr;
const char* aClass     ; class="str">"Class" = /* class="str">"aClass     ; "Classclass="str">"" */ nullptr;
const char* aWorldEsp  ; class="str">"World ESP" = /* class="str">"aWorldEsp  ; "World ESPclass="str">"" */ nullptr;
const char* aRadar     ; class="str">"Radar" = /* class="str">"aRadar     ; "Radarclass="str">"" */ nullptr;
const char* aRadarX    ; class="str">"Radar X" = /* class="str">"aRadarX    ; "Radar Xclass="str">"" */ nullptr;
const char* aRadarY    ; class="str">"Radar Y" = /* class="str">"aRadarY    ; "Radar Yclass="str">"" */ nullptr;
const char* aRadarW    ; class="str">"Radar W" = /* class="str">"aRadarW    ; "Radar Wclass="str">"" */ nullptr;
const char* aMisc      ; class="str">"+ MISC" = /* class="str">"aMisc      ; "+ MISCclass="str">"" */ nullptr;
const char* aAutoBackstab ; class="str">"Auto Backstab" = /* class="str">"aAutoBackstab ; "Auto Backstabclass="str">"" */ nullptr;
const char* aAntiCloakDisgu ; class="str">"Anti-Cloak/Disguse" = /* class="str">"aAntiCloakDisgu ; "Anti-Cloak/Disguseclass="str">"" */ nullptr;
const char* aBunnyHop  ; class="str">"Bunny Hop" = /* class="str">"aBunnyHop  ; "Bunny Hopclass="str">"" */ nullptr;
const char* aChatSpam  ; class="str">"Chat Spam" = /* class="str">"aChatSpam  ; "Chat Spamclass="str">"" */ nullptr;
const char* aLmaoboxHack141 ; class="str">"LMAOBOX HACK 1.4.15" = /* class="str">"aLmaoboxHack141 ; "LMAOBOX HACK 1.4.15class="str">"" */ nullptr;
const char* aOff       ; class="str">"OFF" = /* class="str">"aOff       ; "OFFclass="str">"" */ nullptr;
const char* Format     ; class="str">"%s" = /* class="str">"Format     ; "%sclass="str">"" */ nullptr;
const char* aD         ; class="str">"%d" = /* class="str">"aD         ; "%dclass="str">"" */ nullptr;
const char* aFreeVersion ; class="str">"** Free version **" = /* class="str">"aFreeVersion ; "** Free version **class="str">"" */ nullptr;
const char* Name       ; class="str">"LOCALAPPDATA" = /* class="str">"Name       ; "LOCALAPPDATAclass="str">"" */ nullptr;
const char* asc_180005D40 ; class="str">"\\" = /* class="str">"asc_180005D40 ; "\\class="str">"" */ nullptr;
const char* aSettingsIni ; class="str">"_settings.ini" = /* class="str">"aSettingsIni ; "_settings.iniclass="str">"" */ nullptr;
const char* aObjectives ; class="str">"objectives" = /* class="str">"aObjectives ; "objectivesclass="str">"" */ nullptr;
const char* aTeamone   ; class="str">"teamone" = /* class="str">"aTeamone   ; "teamoneclass="str">"" */ nullptr;
const char* aTeamtwo   ; class="str">"teamtwo" = /* class="str">"aTeamtwo   ; "teamtwoclass="str">"" */ nullptr;
const char* aTeamthree ; class="str">"teamthree" = /* class="str">"aTeamthree ; "teamthreeclass="str">"" */ nullptr;
const char* aTeamfour  ; class="str">"teamfour" = /* class="str">"aTeamfour  ; "teamfourclass="str">"" */ nullptr;
const char* aBackground ; class="str">"background" = /* class="str">"aBackground ; "backgroundclass="str">"" */ nullptr;
const char* aLines     ; class="str">"lines" = /* class="str">"aLines     ; "linesclass="str">"" */ nullptr;
const char* aOutlines  ; class="str">"outlines" = /* class="str">"aOutlines  ; "outlinesclass="str">"" */ nullptr;
const char* aSelected  ; class="str">"selected" = /* class="str">"aSelected  ; "selectedclass="str">"" */ nullptr;
const char* aHudText   ; class="str">"hud_text" = /* class="str">"aHudText   ; "hud_textclass="str">"" */ nullptr;
const char* aCross     ; class="str">"cross" = /* class="str">"aCross     ; "crossclass="str">"" */ nullptr;
const char* aCrossSec  ; class="str">"cross_sec" = /* class="str">"aCrossSec  ; "cross_secclass="str">"" */ nullptr;
const char* aInvisTeam2 ; class="str">"invis_team2" = /* class="str">"aInvisTeam2 ; "invis_team2class="str">"" */ nullptr;
const char* aInvisTeam3 ; class="str">"invis_team3" = /* class="str">"aInvisTeam3 ; "invis_team3class="str">"" */ nullptr;
const char* aMenuOn    ; class="str">"menu_on" = /* class="str">"aMenuOn    ; "menu_onclass="str">"" */ nullptr;
const char* aMenuOff   ; class="str">"menu_off" = /* class="str">"aMenuOff   ; "menu_offclass="str">"" */ nullptr;
const char* aAimTarget ; class="str">"aim_target" = /* class="str">"aAimTarget ; "aim_targetclass="str">"" */ nullptr;
const char* aBlack     ; class="str">"black" = /* class="str">"aBlack     ; "blackclass="str">"" */ nullptr;
const char* aHpGreen   ; class="str">"hp_green" = /* class="str">"aHpGreen   ; "hp_greenclass="str">"" */ nullptr;
const char* aHpYellow  ; class="str">"hp_yellow" = /* class="str">"aHpYellow  ; "hp_yellowclass="str">"" */ nullptr;
const char* aHpRed     ; class="str">"hp_red" = /* class="str">"aHpRed     ; "hp_redclass="str">"" */ nullptr;
const char* aGray      ; class="str">"gray" = /* class="str">"aGray      ; "grayclass="str">"" */ nullptr;
const char* aFriend    ; class="str">"friend" = /* class="str">"aFriend    ; "friendclass="str">"" */ nullptr;
const char* aMerasmus  ; class="str">"merasmus" = /* class="str">"aMerasmus  ; "merasmusclass="str">"" */ nullptr;
const char* aPlayVoHeavyMvm ; class="str">"play vo/heavy_mvm_say_ready02.mp3" = /* class="str">"aPlayVoHeavyMvm ; "play vo/heavy_mvm_say_ready02.mp3class="str">"" */ nullptr;
const char* aLastdisguise ; class="str">"lastdisguise" = /* class="str">"aLastdisguise ; "lastdisguiseclass="str">"" */ nullptr;
const char* aSayWwwLmaoboxN ; class="str">"say WWW.LMAOBOX.NET - THE BEST TF2 HACK"... = /* class="str">"aSayWwwLmaoboxN ; "say WWW.LMAOBOX.NET - THE BEST TF2 HACKclass="str">"..." */ nullptr;
const char* aSayGetGoodGetL ; class="str">"say GET GOOD. GET LMAOBOX." = /* class="str">"aSayGetGoodGetL ; "say GET GOOD. GET LMAOBOX.class="str">"" */ nullptr;
const char* aStringTooLong ; class="str">"string too long" = /* class="str">"aStringTooLong ; "string too longclass="str">"" */ nullptr;
const char* aVectorTTooLong ; class="str">"vector<T> too long" = /* class="str">"aVectorTTooLong ; "vector<T> too longclass="str">"" */ nullptr;
const char* aAimBot_0  ; class="str">"aim_bot" = /* class="str">"aAimBot_0  ; "aim_botclass="str">"" */ nullptr;
const char* aAimKey_0  ; class="str">"aim_key" = /* class="str">"aAimKey_0  ; "aim_keyclass="str">"" */ nullptr;
const char* aAimSafe   ; class="str">"aim_safe" = /* class="str">"aAimSafe   ; "aim_safeclass="str">"" */ nullptr;
const char* aAimTeam   ; class="str">"aim_team" = /* class="str">"aAimTeam   ; "aim_teamclass="str">"" */ nullptr;
const char* aAimLock   ; class="str">"aim_lock" = /* class="str">"aAimLock   ; "aim_lockclass="str">"" */ nullptr;
const char* aAimSilent ; class="str">"aim_silent" = /* class="str">"aAimSilent ; "aim_silentclass="str">"" */ nullptr;
const char* aAimIgnoreFrien ; class="str">"aim_ignore_friends" = /* class="str">"aAimIgnoreFrien ; "aim_ignore_friendsclass="str">"" */ nullptr;
const char* aAimIgnoreDr ; class="str">"aim_ignore_dr" = /* class="str">"aAimIgnoreDr ; "aim_ignore_drclass="str">"" */ nullptr;
const char* aAimSentry_0 ; class="str">"aim_sentry" = /* class="str">"aAimSentry_0 ; "aim_sentryclass="str">"" */ nullptr;
const char* aAimSticky ; class="str">"aim_sticky" = /* class="str">"aAimSticky ; "aim_stickyclass="str">"" */ nullptr;
const char* aAimShoot  ; class="str">"aim_shoot" = /* class="str">"aAimShoot  ; "aim_shootclass="str">"" */ nullptr;
const char* aAimMelee  ; class="str">"aim_melee" = /* class="str">"aAimMelee  ; "aim_meleeclass="str">"" */ nullptr;
const char* aAimConstcrits ; class="str">"aim_constcrits" = /* class="str">"aAimConstcrits ; "aim_constcritsclass="str">"" */ nullptr;
const char* aAimSmooth ; class="str">"aim_smooth" = /* class="str">"aAimSmooth ; "aim_smoothclass="str">"" */ nullptr;
const char* aAimTriggerbot ; class="str">"aim_triggerbot" = /* class="str">"aAimTriggerbot ; "aim_triggerbotclass="str">"" */ nullptr;
const char* aEspName   ; class="str">"esp_name" = /* class="str">"aEspName   ; "esp_nameclass="str">"" */ nullptr;
const char* aEspHealth ; class="str">"esp_health" = /* class="str">"aEspHealth ; "esp_healthclass="str">"" */ nullptr;
const char* aEspWeapon ; class="str">"esp_weapon" = /* class="str">"aEspWeapon ; "esp_weaponclass="str">"" */ nullptr;
const char* aEspDistance ; class="str">"esp_distance" = /* class="str">"aEspDistance ; "esp_distanceclass="str">"" */ nullptr;
const char* aEspFriends ; class="str">"esp_friends" = /* class="str">"aEspFriends ; "esp_friendsclass="str">"" */ nullptr;
const char* aEspClass  ; class="str">"esp_class" = /* class="str">"aEspClass  ; "esp_classclass="str">"" */ nullptr;
const char* aEspStructure ; class="str">"esp_structure" = /* class="str">"aEspStructure ; "esp_structureclass="str">"" */ nullptr;
const char* aEspGlow   ; class="str">"esp_glow" = /* class="str">"aEspGlow   ; "esp_glowclass="str">"" */ nullptr;
const char* aEspUber   ; class="str">"esp_uber" = /* class="str">"aEspUber   ; "esp_uberclass="str">"" */ nullptr;
const char* aEspRadar  ; class="str">"esp_radar" = /* class="str">"aEspRadar  ; "esp_radarclass="str">"" */ nullptr;
const char* aEspRadarX ; class="str">"esp_radar_x" = /* class="str">"aEspRadarX ; "esp_radar_xclass="str">"" */ nullptr;
const char* aEspRadarY ; class="str">"esp_radar_y" = /* class="str">"aEspRadarY ; "esp_radar_yclass="str">"" */ nullptr;
const char* aEspRadarW ; class="str">"esp_radar_w" = /* class="str">"aEspRadarW ; "esp_radar_wclass="str">"" */ nullptr;
const char* aTaunt     ; class="str">"taunt" = /* class="str">"aTaunt     ; "tauntclass="str">"" */ nullptr;
const char* aMiscBunnyhop ; class="str">"misc_bunnyhop" = /* class="str">"aMiscBunnyhop ; "misc_bunnyhopclass="str">"" */ nullptr;
const char* aMiscSpeedOn ; class="str">"misc_speed_on" = /* class="str">"aMiscSpeedOn ; "misc_speed_onclass="str">"" */ nullptr;
const char* aMiscSpeedKey ; class="str">"misc_speed_key" = /* class="str">"aMiscSpeedKey ; "misc_speed_keyclass="str">"" */ nullptr;
const char* aMiscSpeed ; class="str">"misc_speed" = /* class="str">"aMiscSpeed ; "misc_speedclass="str">"" */ nullptr;
const char* aMiscAntiss ; class="str">"misc_antiss" = /* class="str">"aMiscAntiss ; "misc_antissclass="str">"" */ nullptr;
const char* aMiscSpinbot ; class="str">"misc_spinbot" = /* class="str">"aMiscSpinbot ; "misc_spinbotclass="str">"" */ nullptr;
const char* aAimIgnoreCloak ; class="str">"aim_ignore_cloak" = /* class="str">"aAimIgnoreCloak ; "aim_ignore_cloakclass="str">"" */ nullptr;
const char* aEspEnemyOnly ; class="str">"esp_enemy_only" = /* class="str">"aEspEnemyOnly ; "esp_enemy_onlyclass="str">"" */ nullptr;
const char* aMiscChatspam ; class="str">"misc_chatspam" = /* class="str">"aMiscChatspam ; "misc_chatspamclass="str">"" */ nullptr;
const char* aCloakRemoval ; class="str">"cloak_removal" = /* class="str">"aCloakRemoval ; "cloak_removalclass="str">"" */ nullptr;
const char* aAutoBackstab_0 ; class="str">"auto_backstab" = /* class="str">"aAutoBackstab_0 ; "auto_backstabclass="str">"" */ nullptr;
const char* aEspBox    ; class="str">"esp_box" = /* class="str">"aEspBox    ; "esp_boxclass="str">"" */ nullptr;
const char* aEspOptical ; class="str">"esp_optical" = /* class="str">"aEspOptical ; "esp_opticalclass="str">"" */ nullptr;
const char* aEspRadarAltitu ; class="str">"esp_radar_altitude" = /* class="str">"aEspRadarAltitu ; "esp_radar_altitudeclass="str">"" */ nullptr;
const char* aMiscSpeedMode ; class="str">"misc_speed_mode" = /* class="str">"aMiscSpeedMode ; "misc_speed_modeclass="str">"" */ nullptr;
const char* aMiscSniper ; class="str">"misc_sniper" = /* class="str">"aMiscSniper ; "misc_sniperclass="str">"" */ nullptr;
const char* aMiscModelhack ; class="str">"misc_modelhack" = /* class="str">"aMiscModelhack ; "misc_modelhackclass="str">"" */ nullptr;
const char* aGameuiDll ; class="str">"gameui.dll" = /* class="str">"aGameuiDll ; "gameui.dllclass="str">"" */ nullptr;
const char* aClientDll ; class="str">"client.dll" = /* class="str">"aClientDll ; "client.dllclass="str">"" */ nullptr;
const char* aEngineDll ; class="str">"engine.dll" = /* class="str">"aEngineDll ; "engine.dllclass="str">"" */ nullptr;
const char* aTier0Dll  ; class="str">"tier0.dll" = /* class="str">"aTier0Dll  ; "tier0.dllclass="str">"" */ nullptr;
const char* aXxxxxXxXx  ; class="str">"xxxxx????xx????xx" = /* class="str">"aXxxxxXxXx  ; "xxxxx????xx????xxclass="str">"" */ nullptr;
const char* aVengineclient0 ; class="str">"VEngineClient013" = /* class="str">"aVengineclient0 ; "VEngineClient013class="str">"" */ nullptr;
const char* aPleaseGetANewV ; class="str">"Please get a new version." = /* class="str">"aPleaseGetANewV ; "Please get a new version.class="str">"" */ nullptr;
const char* aVclient017 ; class="str">"VClient017" = /* class="str">"aVclient017 ; "VClient017class="str">"" */ nullptr;
const char* aVcliententityl ; class="str">"VClientEntityList003" = /* class="str">"aVcliententityl ; "VClientEntityList003class="str">"" */ nullptr;
const char* aXxxXxxxxxX ; class="str">"xxx????xxxxxx????x" = /* class="str">"aXxxXxxxxxX ; "xxx????xxxxxx????xclass="str">"" */ nullptr;
const char* aVmodelinfoclie ; class="str">"VModelInfoClient006" = /* class="str">"aVmodelinfoclie ; "VModelInfoClient006class="str">"" */ nullptr;
const char* aVguiSurface030 ; class="str">"VGUI_Surface030" = /* class="str">"aVguiSurface030 ; "VGUI_Surface030class="str">"" */ nullptr;
const char* aVguiPanel009 ; class="str">"VGUI_Panel009" = /* class="str">"aVguiPanel009 ; "VGUI_Panel009class="str">"" */ nullptr;
const char* aEnginetracecli ; class="str">"EngineTraceClient003" = /* class="str">"aEnginetracecli ; "EngineTraceClient003class="str">"" */ nullptr;
const char* aVenginevgui002 ; class="str">"VEngineVGui002" = /* class="str">"aVenginevgui002 ; "VEngineVGui002class="str">"" */ nullptr;
const char* aEngineclientre ; class="str">"EngineClientReplay001" = /* class="str">"aEngineclientre ; "EngineClientReplay001class="str">"" */ nullptr;
const char* aXxxXxxx    ; class="str">"xxx????xxxx" = /* class="str">"aXxxXxxx    ; "xxx????xxxxclass="str">"" */ nullptr;
const char* aVenginecvar004 ; class="str">"VEngineCvar004" = /* class="str">"aVenginecvar004 ; "VEngineCvar004class="str">"" */ nullptr;
const char* AppName    ; class="str">"\"Cvars\class="str">"" = /* class="str">"AppName    ; "\class="str">"Cvars\"class="str">"" */ nullptr;
const char* asc_180005A10 ; class="str">"%f" = /* class="str">"asc_180005A10 ; "%fclass="str">"" */ nullptr;
const char* aTf2Build   ; class="str">"TF2 Build" = /* class="str">"aTf2Build   ; "TF2 Buildclass="str">"" */ nullptr;
const char* aS         ; class="str">"%S" = /* class="str">"aS         ; "%Sclass="str">"" */ nullptr;
const char* aNewmatchfound ; class="str">"NewMatchFound" = /* class="str">"aNewmatchfound ; "NewMatchFoundclass="str">"" */ nullptr;
const char* aNotificationto ; class="str">"NotificationToastContainer" = /* class="str">"aNotificationto ; "NotificationToastContainerclass="str">"" */ nullptr;
const char* aFocusoverlaypa ; class="str">"FocusOverlayPanel" = /* class="str">"aFocusoverlaypa ; "FocusOverlayPanelclass="str">"" */ nullptr;
const char* aLlclfjHi   ; class="str">"llclfj~\a`hi`" = /* class="str">"aLlclfjHi   ; "llclfj~\a`hi`class="str">"" */ nullptr;
const char* aVisitWwwLmaobo ; class="str">"VISIT WWW.LMAOBOX.NET FOR PREMIUM VERSI"... = /* class="str">"aVisitWwwLmaobo ; "VISIT WWW.LMAOBOX.NET FOR PREMIUM VERSIclass="str">"..." */ nullptr;
const char* ArgList    ; class="str">"bot " = /* class="str">"ArgList    ; "bot class="str">"" */ nullptr;
const char* aSS        ; class="str">"%s%s" = /* class="str">"aSS        ; "%s%sclass="str">"" */ nullptr;
const char* aUbercharge_0 ; class="str">"UBERCHARGE" = /* class="str">"aUbercharge_0 ; "UBERCHARGEclass="str">"" */ nullptr;
const char* aUberchargeD ; class="str">"UberCharge %d%%" = /* class="str">"aUberchargeD ; "UberCharge %d%%class="str">"" */ nullptr;
const char* aUnk       ; class="str">"-unk-" = /* class="str">"aUnk       ; "-unk-class="str">"" */ nullptr;
const char* aEngineer  ; class="str">"Engineer" = /* class="str">"aEngineer  ; "Engineerclass="str">"" */ nullptr;
const char* aSpy       ; class="str">"Spy" = /* class="str">"aSpy       ; "Spyclass="str">"" */ nullptr;
const char* aPyro      ; class="str">"Pyro" = /* class="str">"aPyro      ; "Pyroclass="str">"" */ nullptr;
const char* aHeavy     ; class="str">"Heavy" = /* class="str">"aHeavy     ; "Heavyclass="str">"" */ nullptr;
const char* aMedic     ; class="str">"Medic" = /* class="str">"aMedic     ; "Medicclass="str">"" */ nullptr;
const char* aDemo      ; class="str">"Demo" = /* class="str">"aDemo      ; "Democlass="str">"" */ nullptr;
const char* aSoldier   ; class="str">"Soldier" = /* class="str">"aSoldier   ; "Soldierclass="str">"" */ nullptr;
const char* aSniper    ; class="str">"Sniper" = /* class="str">"aSniper    ; "Sniperclass="str">"" */ nullptr;
const char* aScout     ; class="str">"Scout" = /* class="str">"aScout     ; "Scoutclass="str">"" */ nullptr;
const char* aZoomed    ; class="str">"(Zoomed)" = /* class="str">"aZoomed    ; "(Zoomed)class="str">"" */ nullptr;
const char* aIHp       ; class="str">"%i hp" = /* class="str">"aIHp       ; "%i hpclass="str">"" */ nullptr;
const char* aIHp_0     ; class="str">"%i%% hp" = /* class="str">"aIHp_0     ; "%i%% hpclass="str">"" */ nullptr;
const char* aMerasmus_0 ; class="str">"Merasmus!" = /* class="str">"aMerasmus_0 ; "Merasmus!class="str">"" */ nullptr;
const char* aMonoculus ; class="str">"MONOCULUS!" = /* class="str">"aMonoculus ; "MONOCULUS!class="str">"" */ nullptr;
const char* aTank      ; class="str">"TANK!" = /* class="str">"aTank      ; "TANK!class="str">"" */ nullptr;
const char* aAmmo      ; class="str">"ammo" = /* class="str">"aAmmo      ; "ammoclass="str">"" */ nullptr;
const char* aMedkitSmall ; class="str">"medkit_small" = /* class="str">"aMedkitSmall ; "medkit_smallclass="str">"" */ nullptr;
const char* aPills     ; class="str">"pills" = /* class="str">"aPills     ; "pillsclass="str">"" */ nullptr;
const char* aMedkit    ; class="str">"medkit" = /* class="str">"aMedkit    ; "medkitclass="str">"" */ nullptr;
const char* aMeat      ; class="str">"_meat" = /* class="str">"aMeat      ; "_meatclass="str">"" */ nullptr;
const char* aAmmo_0    ; class="str">"/ammo" = /* class="str">"aAmmo_0    ; "/ammoclass="str">"" */ nullptr;
const char* aCapture   ; class="str">"**Capture**" = /* class="str">"aCapture   ; "**Capture**class="str">"" */ nullptr;
const char* asc_180005BE4 ; class="str">"(#)" = /* class="str">"asc_180005BE4 ; "(#)class="str">"" */ nullptr;
const char* asc_180005BE8 ; class="str">"-X-" = /* class="str">"asc_180005BE8 ; "-X-class="str">"" */ nullptr;
const char* asc_180005BEC ; class="str">"<->" = /* class="str">"asc_180005BEC ; "<->class="str">"" */ nullptr;
const char* asc_180005BF4 ; class="str">"\\\\" = /* class="str">"asc_180005BF4 ; "\\\\class="str">"" */ nullptr;
const char* asc_180005BF0 ; class="str">"&" = /* class="str">"asc_180005BF0 ; "&class="str">"" */ nullptr;
const char* aDispenser ; class="str">"Dispenser" = /* class="str">"aDispenser ; "Dispenserclass="str">"" */ nullptr;
const char* aZomhwtf   ; class="str">"zomhwtf" = /* class="str">"aZomhwtf   ; "zomhwtfclass="str">"" */ nullptr;
const char* aTeleporter ; class="str">"Teleporter" = /* class="str">"aTeleporter ; "Teleporterclass="str">"" */ nullptr;
const char* aSentry    ; class="str">"Sentry" = /* class="str">"aSentry    ; "Sentryclass="str">"" */ nullptr;
const char* aSapped    ; class="str">"** SAPPED **" = /* class="str">"aSapped    ; "** SAPPED **class="str">"" */ nullptr;
const char* aSI        ; class="str">"%s: %i" = /* class="str">"aSI        ; "%s: %iclass="str">"" */ nullptr;
const char* aHudEngBuildSen ; class="str">"HUD/eng_build_sentry" = /* class="str">"aHudEngBuildSen ; "HUD/eng_build_sentryclass="str">"" */ nullptr;
const char* aHudLeaderboard ; class="str">"HUD/leaderboard_class_scout" = /* class="str">"aHudLeaderboard ; "HUD/leaderboard_class_scoutclass="str">"" */ nullptr;
const char* aHudLeaderboard_0 ; class="str">"HUD/leaderboard_class_sniper" = /* class="str">"aHudLeaderboard_0 ; "HUD/leaderboard_class_sniperclass="str">"" */ nullptr;
const char* aHudLeaderboard_1 ; class="str">"HUD/leaderboard_class_soldier" = /* class="str">"aHudLeaderboard_1 ; "HUD/leaderboard_class_soldierclass="str">"" */ nullptr;
const char* aHudLeaderboard_2 ; class="str">"HUD/leaderboard_class_demo" = /* class="str">"aHudLeaderboard_2 ; "HUD/leaderboard_class_democlass="str">"" */ nullptr;
const char* aHudLeaderboard_3 ; class="str">"HUD/leaderboard_class_medic" = /* class="str">"aHudLeaderboard_3 ; "HUD/leaderboard_class_medicclass="str">"" */ nullptr;
const char* aHudLeaderboard_4 ; class="str">"HUD/leaderboard_class_heavy" = /* class="str">"aHudLeaderboard_4 ; "HUD/leaderboard_class_heavyclass="str">"" */ nullptr;
const char* aHudLeaderboard_5 ; class="str">"HUD/leaderboard_class_pyro" = /* class="str">"aHudLeaderboard_5 ; "HUD/leaderboard_class_pyroclass="str">"" */ nullptr;
const char* aHudLeaderboard_6 ; class="str">"HUD/leaderboard_class_spy" = /* class="str">"aHudLeaderboard_6 ; "HUD/leaderboard_class_spyclass="str">"" */ nullptr;
const char* aHudLeaderboard_7 ; class="str">"HUD/leaderboard_class_engineer" = /* class="str">"aHudLeaderboard_7 ; "HUD/leaderboard_class_engineerclass="str">"" */ nullptr;
const char* aMessageboxw ; class="str">"MessageBoxW" = /* class="str">"aMessageboxw ; "MessageBoxWclass="str">"" */ nullptr;
const char* aGetactivewindo ; class="str">"GetActiveWindow" = /* class="str">"aGetactivewindo ; "GetActiveWindowclass="str">"" */ nullptr;
const char* aGetlastactivep ; class="str">"GetLastActivePopup" = /* class="str">"aGetlastactivep ; "GetLastActivePopupclass="str">"" */ nullptr;
const char* aGetuserobjecti ; class="str">"GetUserObjectInformationW" = /* class="str">"aGetuserobjecti ; "GetUserObjectInformationWclass="str">"" */ nullptr;
const char* aGetprocesswind ; class="str">"GetProcessWindowStation" = /* class="str">"aGetprocesswind ; "GetProcessWindowStationclass="str">"" */ nullptr;
const char* stru_180022B68 ; pThrowInfo = /* class="str">"stru_180022B68 ; pThrowInfo" */ nullptr;
const char* stru_180022BD0 ; pThrowInfo = /* class="str">"stru_180022BD0 ; pThrowInfo" */ nullptr;
const char* aPleaseRestartA ; class="str">"Please restart and try again. Error no."... = /* class="str">"aPleaseRestartA ; "Please restart and try again. Error no.class="str">"..." */ nullptr;
const char* aPleaseRestartA_0 ; class="str">"Please restart and try again. Error no."... = /* class="str">"aPleaseRestartA_0 ; "Please restart and try again. Error no.class="str">"..." */ nullptr;
const char* aPleaseRestartA_1 ; class="str">"Please restart and try again. Error no."... = /* class="str">"aPleaseRestartA_1 ; "Please restart and try again. Error no.class="str">"..." */ nullptr;
const char* aPleaseRestartA_2 ; class="str">"Please restart and try again. Error no."... = /* class="str">"aPleaseRestartA_2 ; "Please restart and try again. Error no.class="str">"..." */ nullptr;
const char* aPleaseRestartA_3 ; class="str">"Please restart and try again. Generic e"... = /* class="str">"aPleaseRestartA_3 ; "Please restart and try again. Generic eclass="str">"..." */ nullptr;
const char* aExp = /* class="str">"aExp" */ nullptr;
const char* aPow = /* class="str">"aPow" */ nullptr;
const char* aLog = /* class="str">"aLog" */ nullptr;
const char* aLog10 = /* class="str">"aLog10" */ nullptr;
const char* aSinh = /* class="str">"aSinh" */ nullptr;
const char* aCosh = /* class="str">"aCosh" */ nullptr;
const char* aTanh = /* class="str">"aTanh" */ nullptr;
const char* aAsin = /* class="str">"aAsin" */ nullptr;
const char* aAcos = /* class="str">"aAcos" */ nullptr;
const char* aAtan = /* class="str">"aAtan" */ nullptr;
const char* aAtan2 = /* class="str">"aAtan2" */ nullptr;
const char* aSqrt = /* class="str">"aSqrt" */ nullptr;
const char* aSin = /* class="str">"aSin" */ nullptr;
const char* aCos = /* class="str">"aCos" */ nullptr;
const char* aTan = /* class="str">"aTan" */ nullptr;
const char* aCeil = /* class="str">"aCeil" */ nullptr;
const char* aFloor = /* class="str">"aFloor" */ nullptr;
const char* aFabs = /* class="str">"aFabs" */ nullptr;
const char* aModf = /* class="str">"aModf" */ nullptr;
const char* aLdexp = /* class="str">"aLdexp" */ nullptr;
const char* aCabs = /* class="str">"aCabs" */ nullptr;
const char* aHypot = /* class="str">"aHypot" */ nullptr;
const char* aFmod = /* class="str">"aFmod" */ nullptr;
const char* aFrexp = /* class="str">"aFrexp" */ nullptr;
const char* aY0 = /* class="str">"aY0" */ nullptr;
const char* aY1 = /* class="str">"aY1" */ nullptr;
const char* aYn = /* class="str">"aYn" */ nullptr;
const char* aLogb = /* class="str">"aLogb" */ nullptr;
const char* aNextafter = /* class="str">"aNextafter" */ nullptr;
const char* aNull_0 = /* class="str">"aNull_0" */ nullptr;
const char* aNull = /* class="str">"aNull" */ nullptr;
const char* aSun_0 = /* class="str">"aSun_0" */ nullptr;
const char* aMon_0 = /* class="str">"aMon_0" */ nullptr;
const char* aTue_0 = /* class="str">"aTue_0" */ nullptr;
const char* aWed_0 = /* class="str">"aWed_0" */ nullptr;
const char* aThu_0 = /* class="str">"aThu_0" */ nullptr;
const char* aFri_0 = /* class="str">"aFri_0" */ nullptr;
const char* aSat_0 = /* class="str">"aSat_0" */ nullptr;
const char* aSunday_0 = /* class="str">"aSunday_0" */ nullptr;
const char* aMonday_0 = /* class="str">"aMonday_0" */ nullptr;
const char* aTuesday_0 = /* class="str">"aTuesday_0" */ nullptr;
const char* aWednesday_0 = /* class="str">"aWednesday_0" */ nullptr;
const char* aThursday_0 = /* class="str">"aThursday_0" */ nullptr;
const char* aFriday_0 = /* class="str">"aFriday_0" */ nullptr;
const char* aSaturday_0 = /* class="str">"aSaturday_0" */ nullptr;
const char* aJan_0 = /* class="str">"aJan_0" */ nullptr;
const char* aFeb_0 = /* class="str">"aFeb_0" */ nullptr;
const char* aMar_0 = /* class="str">"aMar_0" */ nullptr;
const char* aApr_0 = /* class="str">"aApr_0" */ nullptr;
const char* aMay_0 = /* class="str">"aMay_0" */ nullptr;
const char* aJun_0 = /* class="str">"aJun_0" */ nullptr;
const char* aJul_0 = /* class="str">"aJul_0" */ nullptr;
const char* aAug_0 = /* class="str">"aAug_0" */ nullptr;
const char* aSep_0 = /* class="str">"aSep_0" */ nullptr;
const char* aOct_0 = /* class="str">"aOct_0" */ nullptr;
const char* aNov_0 = /* class="str">"aNov_0" */ nullptr;
const char* aDec_0 = /* class="str">"aDec_0" */ nullptr;
const char* aJanuary_0 = /* class="str">"aJanuary_0" */ nullptr;
const char* aFebruary_0 = /* class="str">"aFebruary_0" */ nullptr;
const char* aMarch_0 = /* class="str">"aMarch_0" */ nullptr;
const char* aApril_0 = /* class="str">"aApril_0" */ nullptr;
const char* aJune_0 = /* class="str">"aJune_0" */ nullptr;
const char* aJuly_0 = /* class="str">"aJuly_0" */ nullptr;
const char* aAugust_0 = /* class="str">"aAugust_0" */ nullptr;
const char* aSeptember_0 = /* class="str">"aSeptember_0" */ nullptr;
const char* aOctober_0 = /* class="str">"aOctober_0" */ nullptr;
const char* aNovember_0 = /* class="str">"aNovember_0" */ nullptr;
const char* aDecember_0 = /* class="str">"aDecember_0" */ nullptr;
const char* aAm_0 = /* class="str">"aAm_0" */ nullptr;
const char* aPm_0 = /* class="str">"aPm_0" */ nullptr;
const char* aMmDdYy_0 = /* class="str">"aMmDdYy_0" */ nullptr;
const char* aDdddMmmmDdYyyy_0 = /* class="str">"aDdddMmmmDdYyyy_0" */ nullptr;
const char* aHhMmSs = /* class="str">"aHhMmSs" */ nullptr;
const char* aSun = /* class="str">"aSun" */ nullptr;
const char* aMon = /* class="str">"aMon" */ nullptr;
const char* aTue = /* class="str">"aTue" */ nullptr;
const char* aWed = /* class="str">"aWed" */ nullptr;
const char* aThu = /* class="str">"aThu" */ nullptr;
const char* aFri = /* class="str">"aFri" */ nullptr;
const char* aSat = /* class="str">"aSat" */ nullptr;
const char* aSunday = /* class="str">"aSunday" */ nullptr;
const char* aMonday = /* class="str">"aMonday" */ nullptr;
const char* aTuesday = /* class="str">"aTuesday" */ nullptr;
const char* aWednesday = /* class="str">"aWednesday" */ nullptr;
const char* aThursday = /* class="str">"aThursday" */ nullptr;
const char* aFriday = /* class="str">"aFriday" */ nullptr;
const char* aSaturday = /* class="str">"aSaturday" */ nullptr;
const char* aJan = /* class="str">"aJan" */ nullptr;
const char* aFeb = /* class="str">"aFeb" */ nullptr;
const char* aMar = /* class="str">"aMar" */ nullptr;
const char* aApr = /* class="str">"aApr" */ nullptr;
const char* aMay = /* class="str">"aMay" */ nullptr;
const char* aJun = /* class="str">"aJun" */ nullptr;
const char* aJul = /* class="str">"aJul" */ nullptr;
const char* aAug = /* class="str">"aAug" */ nullptr;
const char* aSep = /* class="str">"aSep" */ nullptr;
const char* aOct = /* class="str">"aOct" */ nullptr;
const char* aNov = /* class="str">"aNov" */ nullptr;
const char* aDec = /* class="str">"aDec" */ nullptr;
const char* aJanuary = /* class="str">"aJanuary" */ nullptr;
const char* aFebruary = /* class="str">"aFebruary" */ nullptr;
const char* aMarch = /* class="str">"aMarch" */ nullptr;
const char* aApril = /* class="str">"aApril" */ nullptr;
const char* aJune = /* class="str">"aJune" */ nullptr;
const char* aJuly = /* class="str">"aJuly" */ nullptr;
const char* aAugust = /* class="str">"aAugust" */ nullptr;
const char* aSeptember = /* class="str">"aSeptember" */ nullptr;
const char* aOctober = /* class="str">"aOctober" */ nullptr;
const char* aNovember = /* class="str">"aNovember" */ nullptr;
const char* aDecember = /* class="str">"aDecember" */ nullptr;
const char* aAm = /* class="str">"aAm" */ nullptr;
const char* aPm = /* class="str">"aPm" */ nullptr;
const char* aMmDdYy = /* class="str">"aMmDdYy" */ nullptr;
const char* aDdddMmmmDdYyyy = /* class="str">"aDdddMmmmDdYyyy" */ nullptr;
const char* asc_180003E80 = /* class="str">"asc_180003E80" */ nullptr;
const char* aCmd = /* class="str">"aCmd" */ nullptr;
const char* aBat = /* class="str">"aBat" */ nullptr;
const char* aExe = /* class="str">"aExe" */ nullptr;
const char* aCom = /* class="str">"aCom" */ nullptr;
const char* aOff = /* class="str">"aOff" */ nullptr;
const char* aMouse1 = /* class="str">"aMouse1" */ nullptr;
const char* aMouse2 = /* class="str">"aMouse2" */ nullptr;
const char* aMouse3 = /* class="str">"aMouse3" */ nullptr;
const char* aLshift = /* class="str">"aLshift" */ nullptr;
const char* asc_180004ED8 = /* class="str">"asc_180004ED8" */ nullptr;
const char* aRange = /* class="str">"aRange" */ nullptr;
const char* aAlways = /* class="str">"aAlways" */ nullptr;

// Global data references
extern class="type">uint64_t qword_1800012A0;
extern class="type">uint64_t qword_1800014F8;
extern class="type">uint64_t qword_180001500;
extern class="type">uint64_t qword_180001520;
extern class="type">uint64_t qword_180001548;
extern class="type">uint64_t qword_180001550;
extern class="type">uint64_t qword_180001560;
extern class="type">uint64_t qword_180001570;
extern class="type">uint64_t qword_180001580;
extern class="type">uint64_t qword_180001590;
extern class="type">uint64_t qword_1800015A0;
extern class="type">uint64_t qword_1800015B0;
extern class="type">uint64_t qword_1800015C0;
extern class="type">uint64_t qword_1800015D0;
extern class="type">uint64_t qword_1800015E0;
extern class="type">uint64_t qword_1800015F0;
extern class="type">uint64_t qword_180001600;
extern class="type">uint64_t qword_180001610;
extern class="type">uint64_t qword_180001620;
extern class="type">uint64_t qword_180001630;
extern class="type">uint64_t qword_180001640;
extern class="type">uint64_t qword_180001650;
extern class="type">uint64_t qword_180001660;
extern class="type">uint64_t qword_180001670;
extern class="type">uint64_t qword_180001680;
extern class="type">uint64_t qword_180001690;
extern class="type">uint64_t qword_1800016A0;
extern class="type">uint64_t qword_1800016B0;
extern class="type">uint64_t qword_1800016D0;
extern class="type">uint64_t qword_1800016E0;
extern class="type">uint64_t qword_1800016F0;
extern class="type">uint64_t qword_180001700;
extern class="type">uint64_t qword_180001720;
extern class="type">uint64_t qword_180001730;
extern class="type">uint64_t qword_180001738;
extern class="type">uint64_t qword_180001740;
extern class="type">uint64_t qword_180001748;
extern class="type">uint64_t qword_180001750;
extern class="type">uint64_t qword_180001758;
extern class="type">uint64_t qword_180001760;
extern class="type">uint64_t qword_180001768;
extern class="type">uint64_t qword_180001780;
extern class="type">uint64_t qword_180001B20;
extern class="type">uint64_t qword_180001F08;
extern class="type">uint64_t qword_180001F10;
extern class="type">uint64_t qword_180001F18;
extern class="type">uint64_t qword_180001F20;
extern class="type">uint64_t qword_180001F28;
extern class="type">uint64_t qword_180001F30;
extern class="type">uint64_t qword_180001F38;
extern class="type">uint64_t qword_180001F40;
extern class="type">uint32_t dword_180001F48;
extern class="type">uint32_t dword_180001F78;
extern class="type">uint64_t qword_180001F80;
extern class="type">uint64_t qword_180001F88;
extern class="type">uint64_t qword_180001F90;
extern class="type">uint64_t qword_180001F98;
extern class="type">uint32_t dword_180001FA0;
extern class="type">uint32_t dword_180001FA4;
extern class="type">uint32_t dword_180001FA8;
extern class="type">uint32_t dword_180001FAC;
extern class="type">uint32_t dword_180001FB0;
extern class="type">uint32_t dword_180001FB4;
extern class="type">uint32_t dword_180001FB8;
extern class="type">uint64_t qword_180001FE0;
extern class="type">uint64_t qword_180001FE8;
extern class="type">uint64_t qword_180001FF0;
extern class="type">uint64_t qword_180001FF8;
extern class="type">uint64_t qword_180002000;
extern class="type">uint64_t qword_180002008;
extern class="type">uint64_t qword_180002010;
extern class="type">uint64_t qword_180002018;
extern class="type">uint64_t qword_180002020;
extern class="type">uint64_t qword_180002028;
extern class="type">uint64_t qword_180002030;
extern class="type">uint64_t qword_180002038;
extern class="type">uint64_t qword_180002040;
extern class="type">uint64_t qword_180002048;
extern class="type">uint64_t qword_180002050;
extern class="type">uint64_t qword_180002058;
extern class="type">uint64_t qword_180002060;
extern class="type">uint64_t qword_180002068;
extern class="type">uint64_t qword_180002070;
extern class="type">uint64_t qword_180002078;
extern class="type">uint64_t qword_180002080;
extern class="type">uint64_t qword_180002088;
extern class="type">uint64_t qword_180006388;
extern class="type">uint64_t qword_180006400;
extern class="type">uint64_t qword_180006428;
extern class="type">uint64_t qword_1800064A8;
extern class="type">uint64_t qword_180006528;
extern class="type">uint64_t qword_180006838;
extern class="type">uint64_t qword_180002160;
extern class="type">uint64_t qword_180002168;
extern class="type">uint64_t qword_180002B00;
extern class="type">uint64_t qword_180002D40;
extern class="type">uint64_t qword_180003200;
extern class="type">uint64_t qword_180003270;
extern class="type">uint32_t dword_180003330;
extern class="type">uint32_t dword_180003334;
extern class="type">uint32_t dword_18000333C;
extern class="type">uint64_t qword_180003350;
extern class="type">uint32_t byte_180005AD3;
extern class="type">uint64_t qword_180004080;
extern class="type">uint64_t qword_180004290;
extern class="type">uint64_t qword_180004590;
extern class="type">uint32_t byte_18000459A;
extern class="type">uint32_t dword_180026B50;
extern class="type">uint64_t qword_1800065B0;
extern class="type">uint64_t qword_180006630;
extern class="type">uint64_t qword_1800066B8;
extern class="type">uint64_t qword_1800067C0;
extern class="type">uint64_t qword_180006740;
extern class="type">uint64_t qword_1800056C8;
extern class="type">uint64_t qword_1800057C8;
extern class="type">uint64_t qword_180005920;
extern class="type">uint64_t qword_180005A88;
extern class="type">uint32_t dword_180005DA8;
extern class="type">uint32_t dword_180005DAC;
extern class="type">uint32_t dword_180005DB0;
extern class="type">uint64_t qword_180005DD0;
extern class="type">uint32_t dword_180005DD8;
extern class="type">uint64_t qword_180005DE0;
extern class="type">uint32_t dword_180005E48;
extern class="type">uint64_t qword_180005E50;
extern class="type">uint64_t qword_180005E58;
extern class="type">uint64_t qword_180005E60;
extern class="type">uint64_t qword_180005E68;
extern class="type">uint32_t dword_180005E70;
extern class="type">uint32_t dword_180005E74;
extern class="type">uint32_t dword_180005E78;
extern class="type">uint32_t dword_180005E7C;
extern class="type">uint64_t qword_180005E80;
extern class="type">uint64_t qword_180005E88;
extern class="type">uint32_t dword_180005E90;
extern class="type">uint32_t dword_180005E94;
extern class="type">uint32_t dword_180005E98;
extern class="type">uint32_t dword_180005EF8;
extern class="type">uint32_t dword_180005EFC;
extern class="type">uint32_t dword_180005F00;
extern class="type">uint32_t dword_180005F04;
extern class="type">uint32_t dword_180005F08;
extern class="type">uint32_t dword_180005F0C;
extern class="type">uint32_t dword_180005F10;
extern class="type">uint32_t dword_180005F14;
extern class="type">uint32_t dword_180005F18;
extern class="type">uint32_t dword_180005F1C;
extern class="type">uint32_t dword_180005F20;
extern class="type">uint32_t dword_180005F58;
extern class="type">uint32_t dword_180005F88;
extern class="type">uint64_t qword_180005F90;
extern class="type">uint64_t qword_180005FC8;
extern class="type">uint32_t dword_180005FD0;
extern class="type">uint32_t dword_180005FD4;
extern class="type">uint32_t dword_180006008;
extern class="type">uint32_t dword_1800060F8;
extern class="type">uint32_t dword_1800060FC;
extern class="type">uint32_t dword_180006158;
extern class="type">uint32_t dword_180006188;
extern class="type">uint32_t dword_18000618C;
extern class="type">uint32_t dword_1800061B8;
extern class="type">uint64_t qword_180006280;
extern class="type">uint64_t qword_180006908;
extern class="type">uint64_t qword_180006990;
extern class="type">uint64_t qword_1800069A0;
extern class="type">uint64_t qword_1800294F8;
extern class="type">uint32_t dword_1800270F8;
extern class="type">uint32_t dword_1800270EC;
extern class="type">uint32_t dword_180027158;
extern class="type">uint32_t dword_1800270F0;
extern class="type">uint32_t dword_1800270F4;
extern class="type">uint32_t dword_1800270FC;
extern class="type">uint32_t dword_18002711C;
extern class="type">uint32_t dword_180027164;
extern class="type">uint32_t dword_1800270E0;
extern class="type">uint32_t dword_180027100;
extern class="type">uint32_t dword_180027104;
extern class="type">uint32_t dword_180027108;
extern class="type">uint32_t dword_18002710C;
extern class="type">uint32_t dword_180027114;
extern class="type">uint32_t dword_180027118;
extern class="type">uint32_t dword_180027120;
extern class="type">uint32_t dword_180027130;
extern class="type">uint32_t dword_180027134;
extern class="type">uint32_t dword_180027160;
extern class="type">uint32_t dword_18002715C;
extern class="type">uint32_t dword_180027110;
extern class="type">uint32_t dword_18002714C;
extern class="type">uint32_t dword_180027140;
extern class="type">uint32_t dword_180027144;
extern class="type">uint32_t dword_18002713C;
extern class="type">uint32_t dword_180027148;
extern class="type">uint32_t dword_1800270E8;
extern class="type">uint32_t dword_180027124;
extern class="type">uint32_t dword_180027128;
extern class="type">uint32_t dword_180027138;
extern class="type">uint32_t dword_180027150;
extern class="type">uint32_t dword_180027154;
extern class="type">uint64_t qword_180029518;
extern class="type">uint64_t qword_180029508;
extern class="type">uint64_t qword_180029858;
extern class="type">uint32_t dword_180029198;
extern class="type">uint32_t dword_1800291A4;
extern class="type">uint32_t dword_1800291A8;
extern class="type">uint32_t dword_180029184;
extern class="type">uint32_t dword_180029180;
extern class="type">uint32_t dword_180029188;
extern class="type">uint32_t dword_18002919C;
extern class="type">uint32_t dword_180029A08;
extern class="type">uint64_t qword_180029A00;
extern class="type">uint64_t qword_180029530;
extern class="type">uint32_t dword_180029174;
extern class="type">uint32_t dword_1800299E4;
extern class="type">uint64_t qword_180029540;
extern class="type">uint32_t dword_180029160;
extern class="type">uint32_t dword_180029168;
extern class="type">uint32_t dword_1800291A0;
extern class="type">uint64_t qword_180029538;
extern class="type">uint32_t dword_1800299F8;
extern class="type">uint64_t qword_1800299F0;
extern class="type">uint32_t dword_1800299E8;
extern class="type">uint32_t byte_180027170;
extern class="type">uint32_t dword_1800294F0;
extern class="type">uint32_t dword_1800294F4;
extern class="type">uint32_t dword_1800291BC;
extern class="type">uint32_t dword_18002922C;
extern class="type">uint32_t dword_180029190;
extern class="type">uint32_t dword_1800291B0;
extern class="type">uint32_t dword_1800291C0;
extern class="type">uint32_t dword_1800291D0;
extern class="type">uint32_t dword_1800291C8;
extern class="type">uint32_t dword_1800291E8;
extern class="type">uint32_t dword_1800291C4;
extern class="type">uint32_t dword_1800291DC;
extern class="type">uint32_t dword_1800291E0;
extern class="type">uint32_t dword_1800291EC;
extern class="type">uint32_t dword_1800291F0;
extern class="type">uint32_t dword_1800291F4;
extern class="type">uint32_t dword_1800291F8;
extern class="type">uint32_t dword_18002925C;
extern class="type">uint32_t dword_180029264;
extern class="type">uint32_t dword_180029214;
extern class="type">uint32_t dword_180029210;
extern class="type">uint32_t dword_180027178;
extern class="type">uint32_t dword_180029208;
extern class="type">uint32_t dword_1800297F0;
extern class="type">uint32_t dword_180029204;
extern class="type">uint64_t qword_1800293A0;
extern class="type">uint32_t dword_1800298D8;
extern class="type">uint32_t dword_18002920C;
extern class="type">uint64_t qword_180029028;
extern class="type">uint64_t qword_180029520;
extern class="type">uint32_t byte_180029A28;
extern class="type">uint32_t dword_180029A24;
extern class="type">uint32_t byte_180029A20;
extern class="type">uint32_t dword_180025C24;
extern class="type">uint32_t dword_180025C28;
extern class="type">uint32_t dword_180025C2C;
extern class="type">uint64_t qword_180027168;
extern class="type">uint64_t qword_180029778;
extern class="type">uint64_t qword_180029780;
extern class="type">uint32_t dword_180029170;
extern class="type">uint32_t dword_180029178;
extern class="type">uint32_t dword_18002917C;
extern class="type">uint32_t dword_180029194;
extern class="type">uint32_t dword_18002918C;
extern class="type">uint32_t dword_1800291B4;
extern class="type">uint32_t dword_1800291E4;
extern class="type">uint32_t dword_180029218;
extern class="type">uint32_t dword_18002921C;
extern class="type">uint32_t dword_180029224;
extern class="type">uint32_t dword_180029220;
extern class="type">uint32_t dword_180029244;
extern class="type">uint32_t dword_1800291D8;
extern class="type">uint32_t dword_1800291CC;
extern class="type">uint32_t dword_180029200;
extern class="type">uint32_t dword_180029228;
extern class="type">uint32_t dword_18002923C;
extern class="type">uint32_t dword_18002924C;
extern class="type">uint64_t qword_180029550;
extern class="type">uint64_t qword_180029500;
extern class="type">uint64_t qword_180029548;
extern class="type">uint64_t qword_180029510;
extern class="type">uint64_t qword_180029558;
extern class="type">uint64_t qword_180029528;
extern class="type">uint32_t dword_1800297F8;
extern class="type">uint32_t dword_1800297F4;
extern class="type">uint32_t dword_1800297FC;
extern class="type">uint32_t dword_180029800;
extern class="type">uint32_t dword_180029804;
extern class="type">uint64_t qword_1800293A8;
extern class="type">uint64_t qword_180029A18;
extern class="type">uint32_t dword_180029A10;
extern class="type">uint32_t dword_180029A0C;
extern class="type">uint64_t qword_180029560;
extern class="type">uint32_t byte_180025FA1;
extern class="type">uint32_t byte_180029568;
extern class="type">uint32_t dword_18002926C;
extern class="type">uint32_t dword_1800293B0;
extern class="type">uint32_t dword_1800293B4;
extern class="type">uint32_t dword_1800293B8;
extern class="type">uint32_t dword_1800293BC;
extern class="type">uint32_t dword_1800293C0;
extern class="type">uint32_t dword_1800293C4;
extern class="type">uint32_t dword_1800293C8;
extern class="type">uint32_t dword_1800293CC;
extern class="type">uint32_t dword_1800293D0;
extern class="type">uint32_t byte_18000EDC0;
extern class="type">uint32_t byte_18000F7F7;
extern class="type">uint32_t byte_18001035A;
extern class="type">uint64_t qword_180024EB8;
extern class="type">uint64_t qword_180026690;
extern class="type">uint64_t qword_180026718;
extern class="type">uint32_t byte_180015CD5;
extern class="type">uint64_t qword_180026A80;
extern class="type">uint64_t qword_180026A98;
extern class="type">uint64_t qword_180026AA0;
extern class="type">uint64_t qword_180026AA8;
extern class="type">uint64_t qword_180026AB8;
extern class="type">uint64_t qword_180026AB0;
extern class="type">uint32_t dword_180029A2C;
extern class="type">uint32_t byte_180018FF4;
extern class="type">uint32_t byte_1800190D7;
extern class="type">uint64_t qword_180026B40;
extern class="type">uint32_t dword_180025618;
extern class="type">uint32_t dword_180025614;
extern class="type">uint32_t dword_18002561C;
extern class="type">uint32_t dword_180025610;
extern class="type">uint32_t dword_180025624;
extern class="type">uint32_t dword_180025620;
extern class="type">uint32_t dword_180025630;
extern class="type">uint32_t dword_18002562C;
extern class="type">uint32_t dword_180025634;
extern class="type">uint32_t dword_180025628;
extern class="type">uint32_t dword_18002563C;
extern class="type">uint32_t dword_180025638;
extern class="type">uint32_t byte_180020201;
extern class="type">uint32_t byte_180020395;
extern class="type">uint32_t byte_180020484;
extern class="type">uint32_t byte_180020511;
extern class="type">uint32_t byte_180020588;
extern class="type">uint32_t byte_18002067E;
extern class="type">uint32_t byte_1800206BE;
extern class="type">uint32_t byte_1800207AE;
extern class="type">uint32_t byte_1800207EE;
extern class="type">uint32_t byte_18002083E;
extern class="type">uint32_t byte_18002088E;
extern class="type">uint32_t byte_180020964;
extern class="type">uint32_t byte_180020AA3;
extern class="type">uint32_t dword_180029724;
extern class="type">uint32_t dword_18002972C;
extern class="type">uint32_t dword_180025B5C;
extern class="type">uint32_t dword_180025B64;
extern class="type">uint32_t dword_180029734;
extern class="type">uint32_t dword_18002973C;
extern class="type">uint32_t dword_180025B8C;
extern class="type">uint32_t dword_180025B94;
extern class="type">uint32_t dword_180029744;
extern class="type">uint32_t dword_18002974C;
extern class="type">uint32_t dword_180025BBC;
extern class="type">uint32_t dword_180025BC4;
extern class="type">uint32_t dword_180029754;
extern class="type">uint32_t dword_18002975C;
extern class="type">uint32_t dword_180025C54;
extern class="type">uint32_t dword_180025C5C;
extern class="type">uint32_t dword_180029764;
extern class="type">uint32_t dword_18002976C;
extern class="type">uint32_t dword_180025C84;
extern class="type">uint32_t dword_180025C8C;
extern class="type">uint32_t dword_180029794;
extern class="type">uint32_t dword_18002979C;
extern class="type">uint32_t dword_180025CB4;
extern class="type">uint32_t dword_180025CBC;
extern class="type">uint32_t dword_1800297A4;
extern class="type">uint32_t dword_1800297AC;
extern class="type">uint32_t dword_180025CE4;
extern class="type">uint32_t dword_180025CEC;
extern class="type">uint32_t dword_1800297B4;
extern class="type">uint32_t dword_1800297BC;
extern class="type">uint32_t dword_180025D14;
extern class="type">uint32_t dword_180025D1C;
extern class="type">uint32_t dword_1800297C4;
extern class="type">uint32_t dword_1800297CC;
extern class="type">uint32_t dword_180025D44;
extern class="type">uint32_t dword_180025D4C;
extern class="type">uint32_t dword_1800297D4;
extern class="type">uint32_t dword_1800297DC;
extern class="type">uint32_t dword_180025D74;
extern class="type">uint32_t dword_180025D7C;
extern class="type">uint32_t dword_1800297E4;
extern class="type">uint32_t dword_1800297EC;
extern class="type">uint32_t dword_180025DA4;
extern class="type">uint32_t dword_180025DAC;
extern class="type">uint32_t dword_180029814;
extern class="type">uint32_t dword_18002981C;
extern class="type">uint32_t dword_180025DD4;
extern class="type">uint32_t dword_180025DDC;
extern class="type">uint32_t dword_180029824;
extern class="type">uint32_t dword_18002982C;
extern class="type">uint32_t dword_180025E04;
extern class="type">uint32_t dword_180025E0C;
extern class="type">uint32_t dword_180029834;
extern class="type">uint32_t dword_18002983C;
extern class="type">uint32_t dword_180025E34;
extern class="type">uint32_t dword_180025E3C;
extern class="type">uint32_t dword_180029844;
extern class="type">uint32_t dword_18002984C;
extern class="type">uint32_t dword_180025E64;
extern class="type">uint32_t dword_180025E6C;
extern class="type">uint32_t dword_180029854;
extern class="type">uint32_t dword_180029864;
extern class="type">uint32_t dword_180025E94;
extern class="type">uint32_t dword_180025E9C;
extern class="type">uint32_t dword_18002986C;
extern class="type">uint32_t dword_180029874;
extern class="type">uint32_t dword_180025EC4;
extern class="type">uint32_t dword_180025ECC;
extern class="type">uint32_t dword_18002987C;
extern class="type">uint32_t dword_180029884;
extern class="type">uint32_t dword_180025EF4;
extern class="type">uint32_t dword_180025EFC;
extern class="type">uint64_t qword_180026000;
extern class="type">uint64_t qword_180024000;
extern class="type">uint64_t qword_180024008;
extern class="type">uint64_t qword_180024010;
extern class="type">uint64_t qword_180024018;
extern class="type">uint64_t qword_180024020;
extern class="type">uint32_t byte_180024140;
extern class="type">uint64_t qword_180024320;
extern class="type">uint64_t qword_180024330;
extern class="type">uint32_t dword_18002434C;
extern class="type">uint32_t dword_180024A00;
extern class="type">uint64_t qword_180024EC0;
extern class="type">uint32_t dword_180024ED0;
extern class="type">uint32_t dword_180026018;
extern class="type">uint32_t dword_180026020;
extern class="type">uint32_t dword_180026024;
extern class="type">uint64_t qword_180026028;
extern class="type">uint32_t dword_180026038;
extern class="type">uint64_t qword_180026040;
extern class="type">uint64_t qword_180026688;
extern class="type">uint32_t dword_180026698;
extern class="type">uint32_t dword_1800266AC;
extern class="type">uint32_t dword_1800266B0;
extern class="type">uint32_t dword_1800266B4;
extern class="type">uint32_t dword_1800266B8;
extern class="type">uint32_t dword_1800266BC;
extern class="type">uint32_t dword_1800266C4;
extern class="type">uint64_t qword_1800266C8;
extern class="type">uint64_t qword_1800266D8;
extern class="type">uint64_t qword_1800266E0;
extern class="type">uint64_t qword_1800266E8;
extern class="type">uint64_t qword_1800266F8;
extern class="type">uint32_t byte_180026708;
extern class="type">uint32_t dword_18002670C;
extern class="type">uint32_t dword_180026710;
extern class="type">uint32_t dword_180026728;
extern class="type">uint32_t byte_180026730;
extern class="type">uint32_t byte_180026834;
extern class="type">uint64_t qword_180026A70;
extern class="type">uint64_t qword_180026A78;
extern class="type">uint64_t qword_180026A88;
extern class="type">uint32_t dword_180026B2C;
extern class="type">uint64_t qword_180026B30;
extern class="type">uint32_t dword_180026B54;
extern class="type">uint64_t qword_180026B60;
extern class="type">uint32_t dword_180026BE8;
extern class="type">uint32_t byte_1800270C0;
extern class="type">uint64_t qword_180029A30;
extern class="type">uint32_t dword_18002AA40;
extern class="type">uint64_t qword_18002AA60;
extern class="type">uint32_t dword_18002AC60;
extern class="type">uint64_t qword_18002AC68;
extern class="type">uint64_t qword_18002AC70;
extern class="type">uint32_t dword_18002AC78;
extern class="type">uint64_t qword_18002AC80;
extern class="type">uint64_t qword_18002AC88;

auto sub_180021018(class="type">uint64_t arg_0, class="type">uint32_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_0, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint32_t arg_8, class="type">uint64_t arg_10, class="type">uint32_t arg_18, class="type">uint64_t arg_0, class="type">uint32_t arg_0, class="type">uint32_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint32_t arg_20, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint32_t arg_20, class="type">uint32_t arg_28, class="type">uint32_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_18, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint32_t arg_20, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint32_t arg_20, class="type">uint64_t arg_0, class="type">uint32_t arg_0, class="type">uint32_t arg_20, class="type">uint32_t arg_0, class="type">uint64_t arg_8, class="type">uint8_t arg_10, class="type">uint32_t arg_20, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint32_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_20, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_10, class="type">uint64_t arg_18, class="type">uint64_t arg_10, class="type">uint64_t arg_10, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_0, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_8, class="type">uint64_t arg_0) {
    // Local variables
    class="type">uint64_t var_8;
    class="type">uint32_t var_28;
    class="type">uint32_t var_24;
    class="type">uint64_t var_20;
    class="type">uint64_t var_18;
    class="type">uint32_t var_14;
    class="type">uint64_t var_10;
    class="type">uint64_t var_70;
    class="type">uint32_t var_6C;
    class="type">uint64_t var_68;
    class="type">uint32_t var_60;
    class="type">uint32_t var_5C;
    class="type">uint32_t var_58;
    class="type">uint32_t var_50;
    class="type">uint8_t var_s0;
    class="type">uint32_t var_E8;
    class="type">uint32_t var_D8;
    class="type">uint32_t var_D4;
    class="type">uint32_t var_D0;
    class="type">uint32_t var_C8;
    class="type">uint32_t var_C4;
    class="type">uint32_t var_C0;
    class="type">uint32_t var_B8;
    class="type">uint32_t var_B4;
    class="type">uint32_t var_B0;
    class="type">uint32_t var_A8;
    class="type">uint32_t var_A4;
    class="type">uint32_t var_A0;
    class="type">uint64_t var_98;
    class="type">uint8_t var_97;
    class="type">uint64_t var_88;
    class="type">uint64_t var_78;
    class="type">uint32_t var_4C;
    class="type">uint64_t var_30;
    class="type">uint32_t var_2C;
    class="type">uint32_t var_1C;
    class="type">uint32_t var_C;
    class="type">uint32_t var_1908;
    class="type">uint8_t var_18F8;
    class="type">uint32_t var_18F0;
    class="type">uint32_t var_18EC;
    class="type">uint32_t var_18E8;
    class="type">uint32_t var_18E0;
    class="type">uint32_t var_18DC;
    class="type">uint32_t var_18D8;
    class="type">uint64_t var_18D0;
    class="type">uint32_t var_18C8;
    class="type">uint64_t var_18B8;
    class="type">uint32_t var_18B0;
    class="type">uint32_t var_18A0;
    class="type">uint32_t var_1894;
    class="type">uint32_t var_1888;
    class="type">uint32_t var_1884;
    class="type">uint32_t var_1880;
    class="type">uint32_t var_187C;
    class="type">uint32_t var_1878;
    class="type">uint32_t var_1874;
    class="type">uint32_t var_1870;
    class="type">uint32_t var_186C;
    class="type">uint32_t var_1868;
    class="type">uint32_t var_1864;
    class="type">uint32_t var_1860;
    class="type">uint32_t var_185C;
    class="type">uint64_t var_38;
    class="type">uint64_t var_1F0;
    class="type">uint32_t var_1E0;
    class="type">uint32_t var_1DC;
    class="type">uint32_t var_1D8;
    class="type">uint32_t var_1D0;
    class="type">uint32_t var_1CC;
    class="type">uint32_t var_1C8;
    class="type">uint32_t var_1C0;
    class="type">uint32_t var_1BC;
    class="type">uint32_t var_1B8;
    class="type">uint32_t var_1B0;
    class="type">uint32_t var_1AC;
    class="type">uint8_t var_1A8;
    class="type">uint8_t var_1A0;
    class="type">uint8_t var_19F;
    class="type">uint64_t var_190;
    class="type">uint8_t var_180;
    class="type">uint32_t var_130;
    class="type">uint32_t var_128;
    class="type">uint32_t var_110;
    class="type">uint32_t var_120;
    class="type">uint32_t var_11C;
    class="type">uint32_t var_118;
    class="type">uint32_t var_10C;
    class="type">uint32_t var_108;
    class="type">uint32_t var_100;
    class="type">uint32_t var_FC;
    class="type">uint64_t var_F8;
    class="type">uint32_t var_F0;
    class="type">uint32_t var_EC;
    class="type">uint32_t var_E0;
    class="type">uint32_t var_DC;
    class="type">uint32_t var_CC;
    class="type">uint32_t var_40;
    class="type">uint32_t var_C38;
    class="type">uint8_t var_C27;
    class="type">uint8_t var_826;
    class="type">uint64_t var_828;
    class="type">uint8_t var_816;
    class="type">uint64_t var_C50;
    class="type">uint32_t var_C40;
    class="type">uint8_t var_C3C;
    class="type">uint8_t var_C2F;
    class="type">uint8_t var_82E;
    class="type">uint32_t var_188;
    class="type">uint64_t var_170;
    class="type">uint32_t var_168;
    class="type">uint32_t var_164;
    class="type">uint32_t var_158;
    class="type">uint32_t var_154;
    class="type">uint32_t var_150;
    class="type">uint32_t var_148;
    class="type">uint32_t var_144;
    class="type">uint32_t var_140;
    class="type">uint32_t var_138;
    class="type">uint32_t var_134;
    class="type">uint32_t var_124;
    class="type">uint32_t var_114;
    class="type">uint32_t var_104;
    class="type">uint8_t var_7C;
    class="type">uint32_t var_E4;
    class="type">uint32_t var_94;
    class="type">uint32_t var_90;
    class="type">uint32_t var_84;
    class="type">uint64_t var_80;
    class="type">uint32_t var_74;
    class="type">uint32_t var_64;
    class="type">uint64_t var_48;
    class="type">uint32_t var_3C;

    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // +-------------------------------------------------------------------------+
    // [.IDATA:0000000180001000]   // |      This file was generated by The Interactive Disassembler (IDA)      |
    // [.IDATA:0000000180001000]   // |           Copyright (c) 2026 Hex-Rays, <support@hex-rays.com>           |
    // [.IDATA:0000000180001000]   // |                            Freeware version                             |
    // [.IDATA:0000000180001000]   // +-------------------------------------------------------------------------+
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // Input SHA256 : 86086B4D5B819B19561AB2414D66EBA339A08E6605B75740BDBF9E9C7E06BBB6
    // [.IDATA:0000000180001000]   // Input MD5    : 66B238D05BFF45AE862FD27D89ADB103
    // [.IDATA:0000000180001000]   // Input CRC32  : 452F5550
    // [.IDATA:0000000180001000]   // Compiler     : Visual C++
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // File Name   : C:\Users\romyc\Downloads\originallbox.dll
    // [.IDATA:0000000180001000]   // Format      : Portable executable for AMD64 (PE)
    // [.IDATA:0000000180001000]   // Imagebase   : 180000000
    // [.IDATA:0000000180001000]   // Timestamp   : 691CFF58 (Tue Nov 18 23:20:56 2025 UTC)
    // [.IDATA:0000000180001000]   // Section 1. (virtual address 00001000)
    // [.IDATA:0000000180001000]   // Virtual size                  : 000226F8 ( 141048.)
    // [.IDATA:0000000180001000]   // Section size in file          : 00022800 ( 141312.)
    // [.IDATA:0000000180001000]   // Offset to raw data for section: 00000400
    // [.IDATA:0000000180001000]   // Flags 60000020: Text Executable Readable
    // [.IDATA:0000000180001000]   // Alignment     : default
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // Imports from KERNEL32.DLL
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // OS type         :  MS Windows
    // [.IDATA:0000000180001000]   // Application type:  DLL
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000] .686p
    // [.IDATA:0000000180001000] .mmx
    // [.IDATA:0000000180001000] .model flat
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // ===========================================================================
    // [.IDATA:0000000180001000] 
    // [.IDATA:0000000180001000]   // Segment type: Externs
    // [.IDATA:0000000180001000]   // _idata
    // [.IDATA:0000000180001000]   // UINT (__stdcall *GetOEMCP)()
    // [.IDATA:0000000180001000] extrn GetOEMCP:qword  // CODE XREF: getSystemCP(int)+2A↓p
    // [.IDATA:0000000180001000]   // DATA XREF: getSystemCP(int)+2A↓r ...
    // [.IDATA:0000000180001008]   // BOOL (__stdcall *FlushFileBuffers)(HANDLE hFile)
    // [.IDATA:0000000180001008] extrn FlushFileBuffers:qword
    // [.IDATA:0000000180001008]   // CODE XREF: _commit+7C↓p
    // [.IDATA:0000000180001008]   // DATA XREF: _commit+7C↓r
    // [.IDATA:0000000180001010]   // HANDLE (__stdcall *CreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
    // [.IDATA:0000000180001010] extrn CreateFileW:qword  // CODE XREF: __initconout+29↓p
    // [.IDATA:0000000180001010]   // DATA XREF: __initconout+29↓r
    // [.IDATA:0000000180001018]   // BOOL (__stdcall *SetEnvironmentVariableA)(LPCSTR lpName, LPCSTR lpValue)
    // [.IDATA:0000000180001018] extrn SetEnvironmentVariableA:qword
    // [.IDATA:0000000180001018]   // CODE XREF: __crtsetenv+340↓p
    // [.IDATA:0000000180001018]   // DATA XREF: __crtsetenv+340↓r
    // [.IDATA:0000000180001020]   // int (__stdcall *CompareStringW)(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)
    // [.IDATA:0000000180001020] extrn CompareStringW:qword
    // [.IDATA:0000000180001020]   // CODE XREF: __crtCompareStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char const *,int,int)+2FA↓p
    // [.IDATA:0000000180001020]   // DATA XREF: __crtCompareStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char const *,int,int)+2FA↓r
    // [.IDATA:0000000180001028]   // HMODULE (__stdcall *GetModuleHandleA)(LPCSTR lpModuleName)
    // [.IDATA:0000000180001028] extrn GetModuleHandleA:qword
    // [.IDATA:0000000180001028]   // CODE XREF: sub_18000E624+C↓p
    // [.IDATA:0000000180001028]   // DATA XREF: sub_18000E624+C↓r
    // [.IDATA:0000000180001030]   // HANDLE (__stdcall *GetCurrentProcess)()
    // [.IDATA:0000000180001030] extrn GetCurrentProcess:qword
    // [.IDATA:0000000180001030]   // CODE XREF: _invoke_watson+18↓p
    // [.IDATA:0000000180001030]   // __report_gsfailure:loc_18001A1AA↓p
    // [.IDATA:0000000180001030]   // DATA XREF: ...
    // [.IDATA:0000000180001038]   // FARPROC (__stdcall *GetProcAddress)(HMODULE hModule, LPCSTR lpProcName)
    // [.IDATA:0000000180001038] extrn GetProcAddress:qword
    // [.IDATA:0000000180001038]   // CODE XREF: StartAddress+5E↓p
    // [.IDATA:0000000180001038]   // __crtCorExitProcess+24↓p ...
    // [.IDATA:0000000180001040]   // BOOL (__stdcall *VirtualProtect)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
    // [.IDATA:0000000180001040] extrn VirtualProtect:qword
    // [.IDATA:0000000180001040]   // CODE XREF: sub_18000BA6C+39↓p
    // [.IDATA:0000000180001040]   // sub_18000BA6C+5C↓p ...
    // [.IDATA:0000000180001048]   // DWORD (__stdcall *GetCurrentThreadId)()
    // [.IDATA:0000000180001048] extrn GetCurrentThreadId:qword
    // [.IDATA:0000000180001048]   // CODE XREF: _CRT_INIT+122↓p
    // [.IDATA:0000000180001048]   // _getptd_noexit+58↓p ...
    // [.IDATA:0000000180001050]   // BOOL (__stdcall *CloseHandle)(HANDLE hObject)
    // [.IDATA:0000000180001050] extrn CloseHandle:qword  // CODE XREF: _dospawn+259↓p
    // [.IDATA:0000000180001050]   // _dospawn+269↓p ...
    // [.IDATA:0000000180001058]   // DWORD (__stdcall *GetCurrentProcessId)()
    // [.IDATA:0000000180001058] extrn GetCurrentProcessId:qword
    // [.IDATA:0000000180001058]   // CODE XREF: __security_init_cookie+42↓p
    // [.IDATA:0000000180001058]   // DATA XREF: __security_init_cookie+42↓r
    // [.IDATA:0000000180001060]   // HANDLE (__stdcall *CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)
    // [.IDATA:0000000180001060] extrn CreateThread:qword
    // [.IDATA:0000000180001060]   // CODE XREF: DllMain+22↓p
    // [.IDATA:0000000180001060]   // DATA XREF: DllMain+22↓r
    // [.IDATA:0000000180001068]   // UINT (__stdcall *GetPrivateProfileIntA)(LPCSTR lpAppName, LPCSTR lpKeyName, INT nDefault, LPCSTR lpFileName)
    // [.IDATA:0000000180001068] extrn GetPrivateProfileIntA:qword
    // [.IDATA:0000000180001068]   // CODE XREF: sub_18000C220+1A↓p
    // [.IDATA:0000000180001068]   // DATA XREF: sub_18000C220+1A↓r
    // [.IDATA:0000000180001070]   // BOOL (__stdcall *WritePrivateProfileStringA)(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpString, LPCSTR lpFileName)
    // [.IDATA:0000000180001070] extrn WritePrivateProfileStringA:qword
    // [.IDATA:0000000180001070]   // CODE XREF: sub_18000C24C+3E↓p
    // [.IDATA:0000000180001070]   // DATA XREF: sub_18000C24C+3E↓r
    // [.IDATA:0000000180001078]   // void (__stdcall *Sleep)(DWORD dwMilliseconds)
    // [.IDATA:0000000180001078] extrn Sleep:qword  // CODE XREF: sub_18000E624+1C↓p
    // [.IDATA:0000000180001078]   // _malloc_crt+3E↓p ...
    // [.IDATA:0000000180001080]   // DWORD (__stdcall *GetEnvironmentVariableA)(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize)
    // [.IDATA:0000000180001080] extrn GetEnvironmentVariableA:qword
    // [.IDATA:0000000180001080]   // CODE XREF: sub_18000A050+40↓p
    // [.IDATA:0000000180001080]   // DATA XREF: sub_18000A050+40↓r
    // [.IDATA:0000000180001088]   // PVOID (__stdcall *DecodePointer)(PVOID Ptr)
    // [.IDATA:0000000180001088] extrn DecodePointer:qword
    // [.IDATA:0000000180001088]   // CODE XREF: _purecall+B↓p
    // [.IDATA:0000000180001088]   // _onexit+29↓p ...
    // [.IDATA:0000000180001090]   // PVOID (__stdcall *EncodePointer)(PVOID Ptr)
    // [.IDATA:0000000180001090] extrn EncodePointer:qword
    // [.IDATA:0000000180001090]   // CODE XREF: __onexitinit+19↓p
    // [.IDATA:0000000180001090]   // _onexit+B7↓p ...
    // [.IDATA:0000000180001098]   // void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime)
    // [.IDATA:0000000180001098] extrn GetSystemTimeAsFileTime:qword
    // [.IDATA:0000000180001098]   // CODE XREF: _time64+E↓p
    // [.IDATA:0000000180001098]   // __security_init_cookie+37↓p
    // [.IDATA:0000000180001098]   // DATA XREF: ...
    // [.IDATA:00000001800010A0]   // LPVOID (__stdcall *HeapAlloc)(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
    // [.IDATA:00000001800010A0] extrn HeapAlloc:qword  // CODE XREF: malloc+55↓p
    // [.IDATA:00000001800010A0]   // _calloc_impl+57↓p
    // [.IDATA:00000001800010A0]   // DATA XREF: ...
    // [.IDATA:00000001800010A8]   // BOOL (__stdcall *FlsSetValue)(DWORD dwFlsIndex, PVOID lpFlsData)
    // [.IDATA:00000001800010A8] extrn FlsSetValue:qword  // CODE XREF: _CRT_INIT+10E↓p
    // [.IDATA:00000001800010A8]   // _getptd_noexit+44↓p ...
    // [.IDATA:00000001800010B0]   // LPSTR (__stdcall *GetCommandLineA)()
    // [.IDATA:00000001800010B0] extrn GetCommandLineA:qword
    // [.IDATA:00000001800010B0]   // CODE XREF: _CRT_INIT+37↓p
    // [.IDATA:00000001800010B0]   // DATA XREF: _CRT_INIT+37↓r
    // [.IDATA:00000001800010B8]   // void (__stdcall *RtlUnwindEx)(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable)
    // [.IDATA:00000001800010B8] extrn __imp_RtlUnwindEx:qword
    // [.IDATA:00000001800010B8]   // CODE XREF: __C_specific_handler+10A↓p
    // [.IDATA:00000001800010B8]   // DATA XREF: __C_specific_handler+10A↓r ...
    // [.IDATA:00000001800010C0]   // DWORD (__stdcall *GetLastError)()
    // [.IDATA:00000001800010C0] extrn GetLastError:qword
    // [.IDATA:00000001800010C0]   // CODE XREF: free+28↓p
    // [.IDATA:00000001800010C0]   // _getptd_noexit+A↓p ...
    // [.IDATA:00000001800010C8]   // BOOL (__stdcall *HeapFree)(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
    // [.IDATA:00000001800010C8] extrn HeapFree:qword  // CODE XREF: free+16↓p
    // [.IDATA:00000001800010C8]   // DATA XREF: free+16↓r
    // [.IDATA:00000001800010D0]   // void (__stdcall *RaiseException)(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments)
    // [.IDATA:00000001800010D0] extrn RaiseException:qword
    // [.IDATA:00000001800010D0]   // CODE XREF: _raise_exc_ex+260↓p
    // [.IDATA:00000001800010D0]   // _CxxThrowException+7B↓p ...
    // [.IDATA:00000001800010D8]   // PVOID (__stdcall *FlsGetValue)(DWORD dwFlsIndex)
    // [.IDATA:00000001800010D8] extrn FlsGetValue:qword  // CODE XREF: _getptd_noexit+18↓p
    // [.IDATA:00000001800010D8]   // _freeptd+19↓p
    // [.IDATA:00000001800010D8]   // DATA XREF: ...
    // [.IDATA:00000001800010E0]   // BOOL (__stdcall *FlsFree)(DWORD dwFlsIndex)
    // [.IDATA:00000001800010E0] extrn FlsFree:qword  // CODE XREF: _mtterm+F↓p
    // [.IDATA:00000001800010E0]   // DATA XREF: _mtterm+F↓r
    // [.IDATA:00000001800010E8]   // void (__stdcall *SetLastError)(DWORD dwErrCode)
    // [.IDATA:00000001800010E8] extrn SetLastError:qword
    // [.IDATA:00000001800010E8]   // CODE XREF: _getptd_noexit+70↓p
    // [.IDATA:00000001800010E8]   // DATA XREF: _getptd_noexit+70↓r
    // [.IDATA:00000001800010F0]   // DWORD (__stdcall *FlsAlloc)(PFLS_CALLBACK_FUNCTION lpCallback)
    // [.IDATA:00000001800010F0] extrn FlsAlloc:qword  // CODE XREF: _mtinit+1B↓p
    // [.IDATA:00000001800010F0]   // DATA XREF: _mtinit+1B↓r
    // [.IDATA:00000001800010F8]   // BOOL (__stdcall *WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
    // [.IDATA:00000001800010F8] extrn WriteFile:qword  // CODE XREF: _NMSG_WRITE+22A↓p
    // [.IDATA:00000001800010F8]   // _write_nolock+264↓p ...
    // [.IDATA:0000000180001100]   // HANDLE (__stdcall *GetStdHandle)(DWORD nStdHandle)
    // [.IDATA:0000000180001100] extrn GetStdHandle:qword
    // [.IDATA:0000000180001100]   // CODE XREF: _NMSG_WRITE+1CD↓p
    // [.IDATA:0000000180001100]   // _ioinit+229↓p
    // [.IDATA:0000000180001100]   // DATA XREF: ...
    // [.IDATA:0000000180001108]   // DWORD (__stdcall *GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
    // [.IDATA:0000000180001108] extrn GetModuleFileNameW:qword
    // [.IDATA:0000000180001108]   // CODE XREF: _NMSG_WRITE+B8↓p
    // [.IDATA:0000000180001108]   // DATA XREF: _NMSG_WRITE+B8↓r
    // [.IDATA:0000000180001110]   // LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo)
    // [.IDATA:0000000180001110] extrn UnhandledExceptionFilter:qword
    // [.IDATA:0000000180001110]   // CODE XREF: _call_reportfault+10A↓p
    // [.IDATA:0000000180001110]   // __report_gsfailure+115↓p
    // [.IDATA:0000000180001110]   // DATA XREF: ...
    // [.IDATA:0000000180001118]   // LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
    // [.IDATA:0000000180001118] extrn SetUnhandledExceptionFilter:qword
    // [.IDATA:0000000180001118]   // CODE XREF: _call_reportfault+FF↓p
    // [.IDATA:0000000180001118]   // __report_gsfailure+108↓p
    // [.IDATA:0000000180001118]   // DATA XREF: ...
    // [.IDATA:0000000180001120]   // BOOL (__stdcall *IsDebuggerPresent)()
    // [.IDATA:0000000180001120] extrn IsDebuggerPresent:qword
    // [.IDATA:0000000180001120]   // CODE XREF: _call_reportfault+F5↓p
    // [.IDATA:0000000180001120]   // __report_gsfailure+F0↓p
    // [.IDATA:0000000180001120]   // DATA XREF: ...
    // [.IDATA:0000000180001128]   // PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
    // [.IDATA:0000000180001128] extrn __imp_RtlVirtualUnwind:qword
    // [.IDATA:0000000180001128]   // DATA XREF: RtlVirtualUnwind↓r
    // [.IDATA:0000000180001130]   // PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable)
    // [.IDATA:0000000180001130] extrn __imp_RtlLookupFunctionEntry:qword
    // [.IDATA:0000000180001130]   // DATA XREF: RtlLookupFunctionEntry↓r
    // [.IDATA:0000000180001138]   // void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord)
    // [.IDATA:0000000180001138] extrn RtlCaptureContext:qword
    // [.IDATA:0000000180001138]   // CODE XREF: _call_reportfault+6D↓p
    // [.IDATA:0000000180001138]   // __report_gsfailure+13↓p
    // [.IDATA:0000000180001138]   // DATA XREF: ...
    // [.IDATA:0000000180001140]   // BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode)
    // [.IDATA:0000000180001140] extrn TerminateProcess:qword
    // [.IDATA:0000000180001140]   // CODE XREF: __report_gsfailure+13C↓p
    // [.IDATA:0000000180001140]   // DATA XREF: _invoke_watson+2A↓r ...
    // [.IDATA:0000000180001148]   // BOOL (__stdcall *GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo)
    // [.IDATA:0000000180001148] extrn GetCPInfo:qword  // CODE XREF: setSBUpLow(threadmbcinfostruct *)+3A↓p
    // [.IDATA:0000000180001148]   // _setmbcp_nolock+98↓p ...
    // [.IDATA:0000000180001150]   // UINT (__stdcall *GetACP)()
    // [.IDATA:0000000180001150] extrn GetACP:qword  // CODE XREF: getSystemCP(int)+54↓p
    // [.IDATA:0000000180001150]   // DATA XREF: getSystemCP(int)+54↓r
    // [.IDATA:0000000180001158]   // BOOL (__stdcall *IsValidCodePage)(UINT CodePage)
    // [.IDATA:0000000180001158] extrn IsValidCodePage:qword
    // [.IDATA:0000000180001158]   // CODE XREF: _setmbcp_nolock+83↓p
    // [.IDATA:0000000180001158]   // DATA XREF: _setmbcp_nolock+83↓r
    // [.IDATA:0000000180001160]   // SIZE_T (__stdcall *HeapSize)(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)
    // [.IDATA:0000000180001160] extrn HeapSize:qword  // DATA XREF: _msize+32↓r
    // [.IDATA:0000000180001168]   // HMODULE (__stdcall *GetModuleHandleW)(LPCWSTR lpModuleName)
    // [.IDATA:0000000180001168] extrn GetModuleHandleW:qword
    // [.IDATA:0000000180001168]   // CODE XREF: __crtCorExitProcess+F↓p
    // [.IDATA:0000000180001168]   // DATA XREF: __crtCorExitProcess+F↓r
    // [.IDATA:0000000180001170]   // void (__stdcall __noreturn *ExitProcess)(UINT uExitCode)
    // [.IDATA:0000000180001170] extrn ExitProcess:qword  // CODE XREF: __crtExitProcess+F↓p
    // [.IDATA:0000000180001170]   // doexit+170↓p
    // [.IDATA:0000000180001170]   // DATA XREF: ...
    // [.IDATA:0000000180001178]   // PVOID (__stdcall *RtlPcToFileHeader)(PVOID PcValue, PVOID *BaseOfImage)
    // [.IDATA:0000000180001178] extrn __imp_RtlPcToFileHeader:qword
    // [.IDATA:0000000180001178]   // DATA XREF: RtlPcToFileHeader↓r
    // [.IDATA:0000000180001180]   // DWORD (__stdcall *GetFileAttributesA)(LPCSTR lpFileName)
    // [.IDATA:0000000180001180] extrn GetFileAttributesA:qword
    // [.IDATA:0000000180001180]   // CODE XREF: sub_180014E78+32↓p
    // [.IDATA:0000000180001180]   // DATA XREF: sub_180014E78+32↓r
    // [.IDATA:0000000180001188]   // BOOL (__stdcall *HeapSetInformation)(HANDLE HeapHandle, HEAP_INFORMATION_CLASS HeapInformationClass, PVOID HeapInformation, SIZE_T HeapInformationLength)
    // [.IDATA:0000000180001188] extrn HeapSetInformation:qword
    // [.IDATA:0000000180001188]   // CODE XREF: _heap_init+46↓p
    // [.IDATA:0000000180001188]   // DATA XREF: _heap_init+46↓r
    // [.IDATA:0000000180001190]   // DWORD (__stdcall *GetVersion)()
    // [.IDATA:0000000180001190] extrn GetVersion:qword  // CODE XREF: _heap_init+28↓p
    // [.IDATA:0000000180001190]   // DATA XREF: _heap_init+28↓r
    // [.IDATA:0000000180001198]   // HANDLE (__stdcall *HeapCreate)(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
    // [.IDATA:0000000180001198] extrn HeapCreate:qword  // CODE XREF: _heap_init+16↓p
    // [.IDATA:0000000180001198]   // DATA XREF: _heap_init+16↓r
    // [.IDATA:00000001800011A0]   // BOOL (__stdcall *HeapDestroy)(HANDLE hHeap)
    // [.IDATA:00000001800011A0] extrn HeapDestroy:qword  // CODE XREF: _heap_term+B↓p
    // [.IDATA:00000001800011A0]   // DATA XREF: _heap_term+B↓r
    // [.IDATA:00000001800011A8]   // UINT (__stdcall *SetHandleCount)(UINT uNumber)
    // [.IDATA:00000001800011A8] extrn SetHandleCount:qword
    // [.IDATA:00000001800011A8]   // CODE XREF: _ioinit+2AC↓p
    // [.IDATA:00000001800011A8]   // DATA XREF: _ioinit+2AC↓r
    // [.IDATA:00000001800011B0]   // BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
    // [.IDATA:00000001800011B0] extrn InitializeCriticalSectionAndSpinCount:qword
    // [.IDATA:00000001800011B0]   // CODE XREF: _ioinit+1CA↓p
    // [.IDATA:00000001800011B0]   // _ioinit+271↓p ...
    // [.IDATA:00000001800011B8]   // DWORD (__stdcall *GetFileType)(HANDLE hFile)
    // [.IDATA:00000001800011B8] extrn GetFileType:qword  // CODE XREF: _ioinit+18C↓p
    // [.IDATA:00000001800011B8]   // _ioinit+240↓p
    // [.IDATA:00000001800011B8]   // DATA XREF: ...
    // [.IDATA:00000001800011C0]   // void (__stdcall *GetStartupInfoW)(LPSTARTUPINFOW lpStartupInfo)
    // [.IDATA:00000001800011C0] extrn GetStartupInfoW:qword
    // [.IDATA:00000001800011C0]   // CODE XREF: _ioinit+21↓p
    // [.IDATA:00000001800011C0]   // DATA XREF: _ioinit+21↓r
    // [.IDATA:00000001800011C8]   // void (__stdcall *DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)
    // [.IDATA:00000001800011C8] extrn DeleteCriticalSection:qword
    // [.IDATA:00000001800011C8]   // CODE XREF: _ioterm+36↓p
    // [.IDATA:00000001800011C8]   // _mtdeletelocks+33↓p ...
    // [.IDATA:00000001800011D0]   // DWORD (__stdcall *GetModuleFileNameA)(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
    // [.IDATA:00000001800011D0] extrn GetModuleFileNameA:qword
    // [.IDATA:00000001800011D0]   // CODE XREF: _setargv+36↓p
    // [.IDATA:00000001800011D0]   // DATA XREF: _setargv+36↓r
    // [.IDATA:00000001800011D8]   // BOOL (__stdcall *FreeEnvironmentStringsW)(LPWCH penv)
    // [.IDATA:00000001800011D8] extrn FreeEnvironmentStringsW:qword
    // [.IDATA:00000001800011D8]   // CODE XREF: __crtGetEnvironmentStringsA+C3↓p
    // [.IDATA:00000001800011D8]   // __crtGetEnvironmentStringsA+D1↓p
    // [.IDATA:00000001800011D8]   // DATA XREF: ...
    // [.IDATA:00000001800011E0]   // int (__stdcall *WideCharToMultiByte)(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar)
    // [.IDATA:00000001800011E0] extrn WideCharToMultiByte:qword
    // [.IDATA:00000001800011E0]   // CODE XREF: __crtGetEnvironmentStringsA+70↓p
    // [.IDATA:00000001800011E0]   // __crtGetEnvironmentStringsA+AB↓p ...
    // [.IDATA:00000001800011E8]   // LPWCH (__stdcall *GetEnvironmentStringsW)()
    // [.IDATA:00000001800011E8] extrn GetEnvironmentStringsW:qword
    // [.IDATA:00000001800011E8]   // CODE XREF: __crtGetEnvironmentStringsA+19↓p
    // [.IDATA:00000001800011E8]   // DATA XREF: __crtGetEnvironmentStringsA+19↓r
    // [.IDATA:00000001800011F0]   // BOOL (__stdcall *QueryPerformanceCounter)(LARGE_INTEGER *lpPerformanceCount)
    // [.IDATA:00000001800011F0] extrn QueryPerformanceCounter:qword
    // [.IDATA:00000001800011F0]   // CODE XREF: __security_init_cookie+6B↓p
    // [.IDATA:00000001800011F0]   // DATA XREF: __security_init_cookie+6B↓r
    // [.IDATA:00000001800011F8]   // DWORD (__stdcall *GetTickCount)()
    // [.IDATA:00000001800011F8] extrn GetTickCount:qword
    // [.IDATA:00000001800011F8]   // CODE XREF: __security_init_cookie+5A↓p
    // [.IDATA:00000001800011F8]   // DATA XREF: __security_init_cookie+5A↓r
    // [.IDATA:0000000180001200]   // void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)
    // [.IDATA:0000000180001200] extrn LeaveCriticalSection:qword
    // [.IDATA:0000000180001200]   // CODE XREF: _mtinitlocknum+C8↓p
    // [.IDATA:0000000180001200]   // _mtinitlocknum+95DE↓p
    // [.IDATA:0000000180001200]   // DATA XREF: ...
    // [.IDATA:0000000180001208]   // void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection)
    // [.IDATA:0000000180001208] extrn EnterCriticalSection:qword
    // [.IDATA:0000000180001208]   // CODE XREF: __lock_fhandle+82↓p
    // [.IDATA:0000000180001208]   // DATA XREF: _lock+3D↓r ...
    // [.IDATA:0000000180001210]   // HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName)
    // [.IDATA:0000000180001210] extrn LoadLibraryW:qword
    // [.IDATA:0000000180001210]   // CODE XREF: sub_1800170A4+45↓p
    // [.IDATA:0000000180001210]   // DATA XREF: sub_1800170A4+45↓r
    // [.IDATA:0000000180001218]   // DWORD (__stdcall *SetFilePointer)(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
    // [.IDATA:0000000180001218] extrn SetFilePointer:qword
    // [.IDATA:0000000180001218]   // CODE XREF: _lseeki64_nolock+42↓p
    // [.IDATA:0000000180001218]   // DATA XREF: _lseeki64_nolock+42↓r
    // [.IDATA:0000000180001220]   // UINT (__stdcall *GetConsoleCP)()
    // [.IDATA:0000000180001220] extrn GetConsoleCP:qword
    // [.IDATA:0000000180001220]   // CODE XREF: _write_nolock:loc_180017766↓p
    // [.IDATA:0000000180001220]   // DATA XREF: _write_nolock:loc_180017766↓r
    // [.IDATA:0000000180001228]   // BOOL (__stdcall *GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode)
    // [.IDATA:0000000180001228] extrn GetConsoleMode:qword
    // [.IDATA:0000000180001228]   // CODE XREF: _write_nolock+11F↓p
    // [.IDATA:0000000180001228]   // DATA XREF: _write_nolock+11F↓r
    // [.IDATA:0000000180001230]   // int (__stdcall *LCMapStringW)(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
    // [.IDATA:0000000180001230] extrn LCMapStringW:qword
    // [.IDATA:0000000180001230]   // CODE XREF: __crtLCMapStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char *,int,int,int)+15E↓p
    // [.IDATA:0000000180001230]   // __crtLCMapStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char *,int,int,int)+1A6↓p ...
    // [.IDATA:0000000180001238]   // int (__stdcall *MultiByteToWideChar)(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
    // [.IDATA:0000000180001238] extrn MultiByteToWideChar:qword
    // [.IDATA:0000000180001238]   // CODE XREF: __crtLCMapStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char *,int,int,int)+9A↓p
    // [.IDATA:0000000180001238]   // __crtLCMapStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char *,int,int,int)+137↓p ...
    // [.IDATA:0000000180001240]   // BOOL (__stdcall *GetStringTypeW)(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)
    // [.IDATA:0000000180001240] extrn GetStringTypeW:qword
    // [.IDATA:0000000180001240]   // CODE XREF: __crtGetStringTypeA_stat(localeinfo_struct *,ulong,char const *,int,ushort *,int,int,int)+11D↓p
    // [.IDATA:0000000180001240]   // DATA XREF: __crtGetStringTypeA_stat(localeinfo_struct *,ulong,char const *,int,ushort *,int,int,int)+11D↓r
    // [.IDATA:0000000180001248]   // LPVOID (__stdcall *HeapReAlloc)(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
    // [.IDATA:0000000180001248] extrn HeapReAlloc:qword  // CODE XREF: realloc+51↓p
    // [.IDATA:0000000180001248]   // DATA XREF: realloc+51↓r
    // [.IDATA:0000000180001250]   // BOOL (__stdcall *GetExitCodeProcess)(HANDLE hProcess, LPDWORD lpExitCode)
    // [.IDATA:0000000180001250] extrn GetExitCodeProcess:qword
    // [.IDATA:0000000180001250]   // CODE XREF: _dospawn+23F↓p
    // [.IDATA:0000000180001250]   // DATA XREF: _dospawn+23F↓r
    // [.IDATA:0000000180001258]   // DWORD (__stdcall *WaitForSingleObject)(HANDLE hHandle, DWORD dwMilliseconds)
    // [.IDATA:0000000180001258] extrn WaitForSingleObject:qword
    // [.IDATA:0000000180001258]   // CODE XREF: _dospawn+231↓p
    // [.IDATA:0000000180001258]   // DATA XREF: _dospawn+231↓r
    // [.IDATA:0000000180001260]   // BOOL (__stdcall *CreateProcessA)(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation)
    // [.IDATA:0000000180001260] extrn CreateProcessA:qword
    // [.IDATA:0000000180001260]   // CODE XREF: _dospawn+1EF↓p
    // [.IDATA:0000000180001260]   // DATA XREF: _dospawn+1EF↓r
    // [.IDATA:0000000180001268]   // BOOL (__stdcall *SetStdHandle)(DWORD nStdHandle, HANDLE hHandle)
    // [.IDATA:0000000180001268] extrn SetStdHandle:qword
    // [.IDATA:0000000180001268]   // CODE XREF: _free_osfhnd+70↓p
    // [.IDATA:0000000180001268]   // DATA XREF: _free_osfhnd+70↓r
    // [.IDATA:0000000180001270]   // BOOL (__stdcall *WriteConsoleW)(HANDLE hConsoleOutput, const void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)
    // [.IDATA:0000000180001270] extrn WriteConsoleW:qword
    // [.IDATA:0000000180001270]   // CODE XREF: _putwch_nolock+45↓p
    // [.IDATA:0000000180001270]   // DATA XREF: _putwch_nolock+45↓r
    // [.IDATA:0000000180001278] 
    // [.IDATA:0000000180001280] 
    // [.IDATA:0000000180001280]   // Imports from USER32.dll
    // [.IDATA:0000000180001280] 
    // [.IDATA:0000000180001280]   // int (*wsprintfW)(LPWSTR, LPCWSTR, ...)
    // [.IDATA:0000000180001280] extrn wsprintfW:qword  // CODE XREF: sub_18000C420+8D↓p
    // [.IDATA:0000000180001280]   // sub_18000C560+41↓p ...
    // [.IDATA:0000000180001288]   // SHORT (__stdcall *GetAsyncKeyState)(int vKey)
    // [.IDATA:0000000180001288] extrn GetAsyncKeyState:qword
    // [.IDATA:0000000180001288]   // CODE XREF: sub_180008810:loc_1800088CF↓p
    // [.IDATA:0000000180001288]   // sub_18000CB04+6E↓p
    // [.IDATA:0000000180001288]   // DATA XREF: ...
    // [.IDATA:0000000180001290]   // int (__stdcall *MessageBoxW)(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
    // [.IDATA:0000000180001290] extrn MessageBoxW:qword  // CODE XREF: sub_180007A0C+354↓p
    // [.IDATA:0000000180001290]   // StartAddress+CC↓p ...
    // [.IDATA:0000000180001290] 
    // ===========================================================================

    // Segment type: Pure code
    // Segment permissions: Read/Execute
    // [X] segment para public 'CODE' use64
    // [ASSUME] cs:X
    //org 180001298h
    // [ASSUME] es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
    // [ALIGN] 0x20
    // [QWORD_1800012A0] dq 0  // DATA XREF: _cinit+56↓o
    // [DQ] offset sub_180020B40
    // [DQ] offset sub_180020B4C
    // [DQ] offset sub_180020B58
    // [DQ] offset sub_180020B64
    // [DQ] offset sub_180020B70
    // [DQ] offset sub_180020B7C
    // [DQ] offset sub_180020B88
    // [DQ] offset sub_180020B94
    // [DQ] offset sub_180020BA0
    // [DQ] offset sub_180020BAC
    // [DQ] offset sub_180020BB8
    // [DQ] offset sub_180020BC4
    // [DQ] offset sub_180020BD0
    // [DQ] offset sub_180020BDC
    // [DQ] offset sub_180020BE8
    // [DQ] offset sub_180020BF4
    // [DQ] offset sub_180020C00
    // [DQ] offset sub_180020C0C
    // [DQ] offset sub_180020C18
    // [DQ] offset sub_180020C24
    // [DQ] offset sub_180020C30
    // [DQ] offset sub_180020C50
    // [DQ] offset sub_180020C6C
    // [DQ] offset sub_180020C78
    // [DQ] offset sub_180020C84
    // [DQ] offset sub_180020C90
    // [DQ] offset sub_180020CAC
    // [DQ] offset sub_180020CB8
    // [DQ] offset sub_180020CC4
    // [DQ] offset sub_180020CD0
    // [DQ] offset sub_180020CEC
    // [DQ] offset sub_180020CF8
    // [DQ] offset sub_180020D04
    // [DQ] offset sub_180020D10
    // [DQ] offset sub_180020D2C
    // [DQ] offset sub_180020D38
    // [DQ] offset sub_180020D44
    // [DQ] offset sub_180020D50
    // [DQ] offset sub_180020D6C
    // [DQ] offset sub_180020D78
    // [DQ] offset sub_180020D84
    // [DQ] offset sub_180020D90
    // [DQ] offset sub_180020DAC
    // [DQ] offset sub_180020DB8
    // [DQ] offset sub_180020DC4
    // [DQ] offset sub_180020DD0
    // [DQ] offset sub_180020DEC
    // [DQ] offset sub_180020DF8
    // [DQ] offset sub_180020E04
    // [DQ] offset sub_180020E10
    // [DQ] offset sub_180020E2C
    // [DQ] offset sub_180020E38
    // [DQ] offset sub_180020E44
    // [DQ] offset sub_180020E50
    // [DQ] offset sub_180020E6C
    // [DQ] offset sub_180020E78
    // [DQ] offset sub_180020E84
    // [DQ] offset sub_180020E90
    // [DQ] offset sub_180020EAC
    // [DQ] offset sub_180020EB8
    // [DQ] offset sub_180020EC4
    // [DQ] offset sub_180020ED0
    // [DQ] offset sub_180020EEC
    // [DQ] offset sub_180020EF8
    // [DQ] offset sub_180020F04
    // [DQ] offset sub_180020F10
    // [DQ] offset sub_180020F74
    // [DQ] offset sub_180020F90
    // [DQ] offset sub_180020F9C
    // [DQ] offset sub_180020FA8
    // [DQ] offset sub_180020FB4
    // [DQ] offset sub_180020FD0
    // [DQ] offset sub_180020FDC
    // [DQ] offset sub_180020FE8
    // [QWORD_1800014F8] dq 0  // DATA XREF: _cinit+5D↓o
    // const _PIFV qword_180001500
    // [QWORD_180001500] dq 0  // DATA XREF: _cinit+3A↓o
    // [DQ] offset __onexitinit
    // [DQ] offset __initmbctable
    // [DQ] offset __initstdio
    // const _PIFV qword_180001520
    // [QWORD_180001520] dq 0  // DATA XREF: _cinit+33↓o
    // const _PVFV First
    // [FIRST] dq 0  // DATA XREF: doexit+11D↓o
    // [DQ] offset sub_18001D838
    // [DQ] offset __endstdio
    // const _PVFV Last
    // [LAST] dq 0  // DATA XREF: doexit:loc_180014702↓o
    // const _PVFV qword_180001548
    // [QWORD_180001548] dq 0  // DATA XREF: doexit+130↓o
    // const _PVFV qword_180001550
    // [QWORD_180001550] dq 0  // DATA XREF: doexit:loc_180014715↓o
    // [ALIGN] 0x20
    // [QWORD_180001560] dq 0x3FF0000000000000  // DATA XREF: sinf:Lcosfregion↓r
    // sinf+229↓r ...
    // [ALIGN] 0x10
    // [QWORD_180001570] dq 0x3FE0000000000000  // DATA XREF: sinf+126↓r
    // sinf+208↓r
    // [ALIGN] 0x20
    // [QWORD_180001580] dq 0x3FC5555555555555  // DATA XREF: sinf+7D↓r
    // sinf+1E1↓r
    // [ALIGN] 0x10
    // [QWORD_180001590] dq 0x3FE45F306DC9C883  // DATA XREF: sinf+11A↓r
    // [ALIGN] 0x20
    // [QWORD_1800015A0] dq 0x3FF921FB54400000  // DATA XREF: sinf+13D↓r
    // [ALIGN] 0x10
    // [QWORD_1800015B0] dq 0x3DD0B4611A626331  // DATA XREF: sinf+149↓r
    // [ALIGN] 0x20
    // [QWORD_1800015C0] dq 0x3DD0B4611A600000  // DATA XREF: sinf+16D↓r
    // [ALIGN] 0x10
    // [QWORD_1800015D0] dq 0x3BA3198A2E037073  // DATA XREF: sinf+17A↓r
    // [ALIGN] 0x20
    // [QWORD_1800015E0] dq 0x411E848000000000  // DATA XREF: sinf:L50e5↓r
    // [ALIGN] 0x10
    // [QWORD_1800015F0] dq 0x0BFE0000000000000  // DATA XREF: sinf+2EC↓r
    // [ALIGN] 0x20
    // [QWORD_180001600] dq 0x3FA5555555555555  // DATA XREF: sinf+308↓r
    // [ALIGN] 0x10
    // [QWORD_180001610] dq 0x0BF56C16C16C16C16  // DATA XREF: sinf+2E0↓r
    // [ALIGN] 0x20
    // [QWORD_180001620] dq 0x3EFA01A01A01A019  // DATA XREF: sinf+2FC↓r
    // [ALIGN] 0x10
    // [QWORD_180001630] dq 0x0BE927E4FB7789F5C  // DATA XREF: sinf:Lcosfregion2↓r
    // [ALIGN] 0x20
    // [QWORD_180001640] dq 0x0BFC5555555555555  // DATA XREF: sinf+D6↓r
    // sinf+2B7↓r
    // [ALIGN] 0x10
    // [QWORD_180001650] dq 0x3F81111111111111  // DATA XREF: sinf+B2↓r
    // sinf+297↓r
    // [ALIGN] 0x20
    // [QWORD_180001660] dq 0x0BF2A01A01A01A01A  // DATA XREF: sinf+CA↓r
    // sinf+2AB↓r
    // [ALIGN] 0x10
    // [QWORD_180001670] dq 0x3EC71DE3A556C734  // DATA XREF: sinf+A2↓r
    // sinf+283↓r
    // [ALIGN] 0x20
    // [QWORD_180001680] dq 0x3FF0000000000000  // DATA XREF: cosf:Lsinsmall↓r
    // cosf+1B9↓r ...
    // [ALIGN] 0x10
    // [QWORD_180001690] dq 0x3FE0000000000000  // DATA XREF: cosf+66↓r
    // cosf+B0↓r ...
    // [ALIGN] 0x20
    // [QWORD_1800016A0] dq 0x3FC5555555555555  // DATA XREF: cosf+16F↓r
    // [ALIGN] 0x10
    // [QWORD_1800016B0] dq 0x3FE45F306DC9C883  // DATA XREF: cosf+A8↓r
    // [ALIGN] 0x20
    // [DQ] 0x3FF921FB54442D18, 0
    // [QWORD_1800016D0] dq 0x3FF921FB54400000  // DATA XREF: cosf+C3↓r
    // [ALIGN] 0x20
    // [QWORD_1800016E0] dq 0x3DD0B4611A626331  // DATA XREF: cosf+CF↓r
    // [ALIGN] 0x10
    // [QWORD_1800016F0] dq 0x3DD0B4611A600000  // DATA XREF: cosf+F3↓r
    // [ALIGN] 0x20
    // [QWORD_180001700] dq 0x3BA3198A2E037073  // DATA XREF: cosf+FB↓r
    // [DQ] 0
    // [DQ] 0x0FFFFFFFFF8000000, 0
    // [QWORD_180001720] dq 0x411E848000000000  // DATA XREF: cosf:Lpositive↓r
    // [ALIGN] 0x10
    // [QWORD_180001730] dq 0x0BFC5555555555555  // DATA XREF: cosf+205↓r
    // [QWORD_180001738] dq 0x3FA5555555555555  // DATA XREF: cosf+250↓r
    // [QWORD_180001740] dq 0x3F81111111110BB3  // DATA XREF: cosf+1E5↓r
    // [QWORD_180001748] dq 0x0BF56C16C16C16967  // DATA XREF: cosf+230↓r
    // [QWORD_180001750] dq 0x0BF2A01A019E83E5C  // DATA XREF: cosf+1F9↓r
    // [QWORD_180001758] dq 0x3EFA01A019F4EC90  // DATA XREF: cosf+244↓r
    // [QWORD_180001760] dq 0x3EC71DE3796CDE01  // DATA XREF: cosf+1D5↓r
    // [QWORD_180001768] dq 0x0BE927E4FA17F65F6  // DATA XREF: cosf:Lcospiby4↓r
    // [ASQRTF] db 'sqrtf',0  // DATA XREF: sqrtf:loc_18000E6C8↓o
    // [ALIGN] 0x20
    // [QWORD_180001780] dq 0x3FAFF55BB72CFDE9, 0x3FB0F99EA71D52A6, 0x3FB1F86DBF082D58
    // DATA XREF: atan2f+3E2↓o
    // [DQ] 0x3FB2F719318A4A9A, 0x3FB3F59F0E7C559D, 0x3FB4F3FD677292FB
    // [DQ] 0x3FB5F2324FD2D7B2, 0x3FB6F03BDCEA4B0C, 0x3FB7EE182602F10E
    // [DQ] 0x3FB8EBC54478FB28, 0x3FB9E94153CFDCF1, 0x3FBAE68A71C722B8
    // [DQ] 0x3FBBE39EBE6F07C3, 0x3FBCE07C5C3CCA32, 0x3FBDDD21701EBA6E
    // [DQ] 0x3FBED98C2190043A, 0x3FBFD5BA9AAC2F6D, 0x3FC068D584212B3D
    // [DQ] 0x3FC0E6ADCCF40881, 0x3FC1646541060850, 0x3FC1E1FAFB043726
    // [DQ] 0x3FC25F6E171A535C, 0x3FC2DCBDB2FBA1FF, 0x3FC359E8EDEB99A3
    // [DQ] 0x3FC3D6EEE8C6626C, 0x3FC453CEC6092A9E, 0x3FC4D087A9DA4F17
    // [DQ] 0x3FC54D18BA11570A, 0x3FC5C9811E3EC269, 0x3FC645BFFFB3AA73
    // [DQ] 0x3FC6C1D4898933D8, 0x3FC73DBDE8A7D201, 0x3FC7B97B4BCE5B02
    // [DQ] 0x3FC8350BE398EBC7, 0x3FC8B06EE2879C28, 0x3FC92BA37D050271
    // [DQ] 0x3FC9A6A8E96C8626, 0x3FCA217E601081A5, 0x3FCA9C231B403279
    // [DQ] 0x3FCB1696574D780B, 0x3FCB90D7529260A2, 0x3FCC0AE54D768466
    // [DQ] 0x3FCC84BF8A742E6D, 0x3FCCFE654E1D5395, 0x3FCD77D5DF205736
    // [DQ] 0x3FCDF110864C9D9D, 0x3FCE6A148E96EC4D, 0x3FCEE2E1451D980C
    // [DQ] 0x3FCF5B75F92C80DD, 0x3FCFD3D1FC40DBE4, 0x3FD025FA510665B5
    // [DQ] 0x3FD061EEA03D6290, 0x3FD09DC597D86362, 0x3FD0D97EE509ACB3
    // [DQ] 0x3FD1151A362431C9, 0x3FD150973A9CE546, 0x3FD18BF5A30BF178
    // [DQ] 0x3FD1C735212DD883, 0x3FD2025567E47C95, 0x3FD23D562B381041
    // [DQ] 0x3FD278372057EF45, 0x3FD2B2F7FD9B5FE2, 0x3FD2ED987A823CFE
    // [DQ] 0x3FD328184FB58951, 0x3FD362773707EBCB, 0x3FD39CB4EB76157B
    // [DQ] 0x3FD3D6D129271134, 0x3FD410CBAD6C7D32, 0x3FD44AA436C2AF09
    // [DQ] 0x3FD4845A84D0C21B, 0x3FD4BDEE586890E6, 0x3FD4F75F73869978
    // [DQ] 0x3FD530AD9951CD49, 0x3FD569D88E1B4CD7, 0x3FD5A2E0175E0F4E
    // [DQ] 0x3FD5DBC3FBBE768D, 0x3FD614840309CFE1, 0x3FD64D1FF635C1C5
    // [DQ] 0x3FD685979F5FA6FD, 0x3FD6BDEAC9CBD76C, 0x3FD6F61941E4DEF0
    // [DQ] 0x3FD72E22D53AA2A9, 0x3FD7660752817501, 0x3FD79DC6899118D1
    // [DQ] 0x3FD7D5604B63B3F7, 0x3FD80CD46A14B1D0, 0x3FD84422B8DF95D7
    // [DQ] 0x3FD87B4B0C1EBEDB, 0x3FD8B24D394A1B25, 0x3FD8E92916F5CDE8
    // [DQ] 0x3FD91FDE7CD0C662, 0x3FD9566D43A34907, 0x3FD98CD5454D6B18
    // [DQ] 0x3FD9C3165CC58107, 0x3FD9F93066168001, 0x3FDA2F233E5E530B
    // [DQ] 0x3FDA64EEC3CC23FC, 0x3FDA9A92D59E98CF, 0x3FDAD00F5422058B
    // [DQ] 0x3FDB056420AE9343, 0x3FDB3A911DA65C6C, 0x3FDB6F962E737EFB
    // [DQ] 0x3FDBA473378624A5, 0x3FDBD9281E528191, 0x3FDC0DB4C94EC9EF
    // [DQ] 0x3FDC42191FF11EB6, 0x3FDC76550AAD71F8, 0x3FDCAA6872F3631B
    // [DQ] 0x3FDCDE53432C1350, 0x3FDD121566B7F2AD, 0x3FDD45AEC9EC862B
    // [DQ] 0x3FDD791F5A1226F4, 0x3FDDAC670561BB4F, 0x3FDDDF85BB026974
    // [DQ] 0x3FDE127B6B0744AF, 0x3FDE4548066CF51A
    // [QWORD_180001B20] dq 0x3FDE77EB7F175A34, 0x3FDEAA65C7CF28C4, 0x3FDEDCB6D43F8434
    // DATA XREF: X:00000001800217A0↓o
    // [DQ] 0x3FDF0EDE98F393CF, 0x3FDF40DD0B541417, 0x3FDF72B221A4E495
    // [DQ] 0x3FDFA45DD3029258, 0x3FDFD5E0175FDF83, 0x3FE0039C73C1A40B
    // [DQ] 0x3FE01C341E82422D, 0x3FE034B709250488, 0x3FE04D25314342E5
    // [DQ] 0x3FE0657E94DB30CF, 0x3FE07DC3324E9B38, 0x3FE095F30861A58F
    // [DQ] 0x3FE0AE0E1639866C, 0x3FE0C6145B5B43DA, 0x3FE0DE05D7AA6F7C
    // [DQ] 0x3FE0F5E28B67E295, 0x3FE10DAA77307A0D, 0x3FE1255D9BFBD2A8
    // [DQ] 0x3FE13CFBFB1B056E, 0x3FE1548596376469, 0x3FE16BFA6F5137E1
    // [DQ] 0x3FE1835A88BE7C13, 0x3FE19AA5E5299F99, 0x3FE1B1DC87904284
    // [DQ] 0x3FE1C8FE7341F64F, 0x3FE1E00BABDEFEB3, 0x3FE1F7043557138A
    // [DQ] 0x3FE20DE813E823B1, 0x3FE224B74C1D192A, 0x3FE23B71E2CC9E6A
    // [DQ] 0x3FE25217DD17E501, 0x3FE268A940696DA6, 0x3FE27F261273D1B3
    // [DQ] 0x3FE2958E59308E30, 0x3FE2ABE21ADED073, 0x3FE2C2215E024465
    // [DQ] 0x3FE2D84C2961E48B, 0x3FE2EE628406CBCA, 0x3FE30464753B090A
    // [DQ] 0x3FE31A52048874BE, 0x3FE3302B39B78856, 0x3FE345F01CCE37BB
    // [DQ] 0x3FE35BA0B60ECCCE, 0x3FE3713D0DF6C503, 0x3FE386C52D3DB11E
    // [DQ] 0x3FE39C391CD41719, 0x3FE3B198E5E2564A, 0x3FE3C6E491C78DC4
    // [DQ] 0x3FE3DC1C2A188504, 0x3FE3F13FB89E96F4, 0x3FE4064F47569F48
    // [DQ] 0x3FE41B4AE06FEA41, 0x3FE430328E4B26D5, 0x3FE445065B795B55
    // [DQ] 0x3FE459C652BADC7F, 0x3FE46E727EFE4715, 0x3FE4830AEB5F7BFD
    // [DQ] 0x3FE4978FA3269EE1, 0x3FE4AC00B1C71762, 0x3FE4C05E22DE94E4
    // [DQ] 0x3FE4D4A8023414E8, 0x3FE4E8DE5BB6EC04, 0x3FE4FD013B7DD17E
    // [DQ] 0x3FE51110ADC5ED81, 0x3FE5250CBEF1E9FA, 0x3FE538F57B89061E
    // [DQ] 0x3FE54CCAF0362C8F, 0x3FE5608D29C70C34, 0x3FE5743C352B33B9
    // [DQ] 0x3FE587D81F732FBA, 0x3FE59B60F5CFAB9D, 0x3FE5AED6C5909517
    // [DQ] 0x3FE5C2399C244260, 0x3FE5D58987169B18, 0x3FE5E8C6941043CF
    // [DQ] 0x3FE5FBF0D0D5CC49, 0x3FE60F084B46E05E, 0x3FE6220D115D7B8D
    // [DQ] 0x3FE634FF312D1F3B, 0x3FE647DEB8E20B8F, 0x3FE65AABB6C07B02
    // [DQ] 0x3FE66D663923E086, 0x3FE6800E4E7E2857, 0x3FE692A40556FB6A
    // [DQ] 0x3FE6A5276C4B0575, 0x3FE6B798920B3D98, 0x3FE6C9F7855C3198
    // [DQ] 0x3FE6DC44551553AE, 0x3FE6EE7F10204AEF, 0x3FE700A7C5784633
    // [DQ] 0x3FE712BE84295198, 0x3FE724C35B4FAE7B, 0x3FE736B65A172DFF
    // [DQ] 0x3FE748978FBA8E0F, 0x3FE75A670B82D8D8, 0x3FE76C24DCC6C6C0
    // [DQ] 0x3FE77DD112EA22C7, 0x3FE78F6BBD5D315E, 0x3FE7A0F4EB9C19A2
    // [DQ] 0x3FE7B26CAD2E50FD, 0x3FE7C3D311A6092B, 0x3FE7D528289FA093
    // [DQ] 0x3FE7E66C01C114FD, 0x3FE7F79EACB97898, 0x3FE808C03940694A
    // [DQ] 0x3FE819D0B7158A4C, 0x3FE82AD036000005, 0x3FE83BBEC5CDEE22
    // [DQ] 0x3FE84C9C7653F7EA, 0x3FE85D69576CC2C5, 0x3FE86E2578F87AE5
    // [DQ] 0x3FE87ED0EADC5A2A, 0x3FE88F6BBD023118, 0x3FE89FF5FF57F1F7
    // [DQ] 0x3FE8B06FC1CF3DFE, 0x3FE8C0D9145CF49D, 0x3FE8D13206F8C4CA
    // [DQ] 0x3FE8E17AA99CC05D, 0x3FE8F1B30C44F167, 0x3FE901DB3EEEF187
    // [DQ] 0x3FE911F35199833B, 0x3FE921FB54442D18
    // [QWORD_180001F08] dq 0x3FD5555555555538  // DATA XREF: atan2f+452↓r
    // [QWORD_180001F10] dq 0x3FC2492482BD6BE1  // DATA XREF: atan2f+446↓r
    // [QWORD_180001F18] dq 0x3FC99999999643A3  // DATA XREF: atan2f+432↓r
    // [QWORD_180001F20] dq 0x3F1A36E2EB1C432D  // DATA XREF: atan2f:loc_18000EB64↓r
    // [QWORD_180001F28] dq 0x3FD5555555550877  // DATA XREF: atan2f+41A↓r
    // [QWORD_180001F30] dq 0x3FE0000000000000  // DATA XREF: atan2f+3CB↓r
    // [QWORD_180001F38] dq 0x4070000000000000  // DATA XREF: atan2f+3B3↓r
    // [QWORD_180001F40] dq 0x3FB0000000000000  // DATA XREF: atan2f+3A9↓r
    // [DWORD_180001F48] dd 0x80000000  // DATA XREF: atan2f+1F3↓r
    // [ALIGN] 0x10
    // [XMMWORD_180001F50] xmmword 0x80000000000000008000000000000000
    // DATA XREF: atan2f+139↓r
    // atan2f:loc_18000E8BB↓r ...
    // [AATAN2F] db 'atan2f',0  // DATA XREF: atan2f+E8↓o
    // [ALIGN] 0x10
    // [AFMODF] db 'fmodf',0  // DATA XREF: fmodf:loc_18000ECA6↓o
    // [ALIGN] 8
    // [DWORD_180001F78] dd 0x3FC90FDB  // DATA XREF: acosf+8D↓r
    // [ALIGN] 0x20
    // [QWORD_180001F80] dq 0x400921FB54442D18  // DATA XREF: acosf+1DA↓r
    // [QWORD_180001F88] dq 0x3FF921FB54442D18  // DATA XREF: acosf:loc_18000F0DF↓r
    // [QWORD_180001F90] dq 0x3C91A62633145C07  // DATA XREF: acosf+1CE↓r
    // acosf+271↓r
    // [QWORD_180001F98] dq 0x4000000000000000  // DATA XREF: acosf+1E2↓r
    // atan+185↓r ...
    // [DWORD_180001FA0] dd 0x3F561F0D  // DATA XREF: acosf+1A2↓r
    // [DWORD_180001FA4] dd 0x3E3C94DC  // DATA XREF: acosf+196↓r
    // [DWORD_180001FA8] dd 0x3D678BDD  // DATA XREF: acosf+18A↓r
    // [DWORD_180001FAC] dd 0x3F8D6FA5  // DATA XREF: acosf+17E↓r
    // [DWORD_180001FB0] dd 0x3B81CE6B  // DATA XREF: acosf+172↓r
    // [DWORD_180001FB4] dd 0x0BC5B3FE1  // DATA XREF: acosf:loc_18000EFE7↓r
    // [DWORD_180001FB8] dd 0x40490FDB  // DATA XREF: acosf+B9↓r
    // [AACOSF] db 'acosf',0  // DATA XREF: acosf:loc_18000EEF2↓o
    // [ALIGN] 4
    // [ASQRT] db 'sqrt',0  // DATA XREF: sqrt:loc_18000F19E↓o
    // .data:0000000180024208↓o
    // [ALIGN] 0x10
    // [ANEXTAFTER] db '_nextafter',0  // DATA XREF: .data:0000000180024318↓o
    // [ALIGN] 0x20
    // [QWORD_180001FE0] dq 0x3FE9C1B08FDA1EEC  // DATA XREF: atan+233↓r
    // [QWORD_180001FE8] dq 0x3FD12BCB0A9169F3  // DATA XREF: atan+22B↓r
    // [QWORD_180001FF0] dq 0x3FFD372A17CDF5A0  // DATA XREF: atan+21B↓r
    // [QWORD_180001FF8] dq 0x3FDCA6BE4C993B3C  // DATA XREF: atan+213↓r
    // [QWORD_180002000] dq 0x3FF699C644C48D2E  // DATA XREF: atan+203↓r
    // [QWORD_180002008] dq 0x3FCC3DE43DB425C0  // DATA XREF: atan+1FB↓r
    // [QWORD_180002010] dq 0x3FDB2CB05BF9BEFF  // DATA XREF: atan+1EB↓r
    // [QWORD_180002018] dq 0x3F9F2D2116F053F2  // DATA XREF: atan+1E3↓r
    // [QWORD_180002020] dq 0x3FA3F197F1E85ED9  // DATA XREF: atan+1D7↓r
    // [QWORD_180002028] dq 0x3F22A75CE41B9F87  // DATA XREF: atan+1CF↓r
    // [QWORD_180002030] dq 0x3C7A2B7F222F65E0  // DATA XREF: atan+1A5↓r
    // [QWORD_180002038] dq 0x3FDDAC670561BB4F  // DATA XREF: atan+195↓r
    // [QWORD_180002040] dq 0x3C81A62633145C06  // DATA XREF: atan+16C↓r
    // [QWORD_180002048] dq 0x3FE921FB54442D18  // DATA XREF: atan+160↓r
    // [QWORD_180002050] dq 0x3C7007887AF0CBBC  // DATA XREF: atan+133↓r
    // [QWORD_180002058] dq 0x3FF0000000000000  // DATA XREF: atan+12B↓r
    // atan+150↓r ...
    // [QWORD_180002060] dq 0x3FEF730BD281F69B  // DATA XREF: atan+123↓r
    // [QWORD_180002068] dq 0x3FF8000000000000  // DATA XREF: atan+113↓r
    // atan+11B↓r
    // [QWORD_180002070] dq 0x3C91A62633145C06  // DATA XREF: atan+EF↓r
    // [QWORD_180002078] dq 0x3FF921FB54442D18  // DATA XREF: atan+E7↓r
    // [QWORD_180002080] dq 0x0BFF0000000000000  // DATA XREF: atan:loc_18000F407↓r
    // [QWORD_180002088] dq 0x43D0DC0000000000  // DATA XREF: atan:loc_18000F3D5↓r
    // [AATAN] db 'atan',0  // DATA XREF: atan+88↓o
    // .data:00000001800241E8↓o
    // [ALIGN] 8
    // [DQ] offset qword_180006388
    // [OFF_1800020A0] dq offset sub_18000F594  // DATA XREF: sub_18000F594+A↓o
    // .data:0000000180024028↓o ...
    // [DQ] offset qword_180006400
    // [OFF_1800020B0] dq offset sub_18000FDEC  // DATA XREF: std::exception::exception(char const * const &,int)↓o
    // std::exception::exception(char const * const &)+B↓o ...
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [AUNKNOWNEXCEPTI] db 'Unknown exception',0
    // DATA XREF: unknown_libname_25+5↓o
    // [ALIGN] 8
    // [DQ] offset qword_180006428
    // [OFF_1800020E0] dq offset sub_18000FDEC  // DATA XREF: sub_18000FD20+17↓o
    // sub_18000FDC8+E↓o
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [DQ] offset qword_1800064A8
    // [OFF_1800020F8] dq offset sub_18000FDEC  // DATA XREF: sub_18000FD4C+17↓o
    // sub_18000FE28+E↓o
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [DQ] offset qword_180006528
    // [OFF_180002110] dq offset sub_18000FDEC  // DATA XREF: sub_18000FD78+E↓o
    // sub_18000FE4C+E↓o
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [DQ] offset qword_180006838
    // [OFF_180002128] dq offset sub_18000A668  // CODE XREF: sub_180020407+7B↓j
    // DATA XREF: sub_18000A640+12↓o ...
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [ABADALLOCATION] db 'bad allocation',0  // DATA XREF: operator new(unsigned __int64)+57↓o
    // [ALIGN] 8
    // const char aCmdExe[]
    // [ACMDEXE] db 'cmd.exe',0  // DATA XREF: system:loc_180010206↓o
    // [AC] db '/c',0  // DATA XREF: system:loc_1800101A3↓o
    // [ALIGN] 8
    // const char VarName[]
    // [VARNAME] db 'COMSPEC',0  // DATA XREF: system+15↓o
    // [QWORD_180002160] dq 0  // DATA XREF: __DllMainCRTStartup:loc_1800106CF↓r
    // __DllMainCRTStartup+A8↓r ...
    // [QWORD_180002168] dq 0x3FF921FB54442D18  // DATA XREF: sub_1800107EC+242↓r
    // [ASINF] db 'sinf',0  // DATA XREF: _sinf_special↓o
    // [ALIGN] 8
    // [ASIN] db 'sin',0  // DATA XREF: .data:0000000180024218↓o
    // [ACOSF] db 'cosf',0  // DATA XREF: _cosf_special↓o
    // [ALIGN] 4
    // [ACOS] db 'cos',0  // DATA XREF: .data:0000000180024228↓o
    // [OFF_180002188] dq offset j_unknown_libname_2
    // DATA XREF: _cinit+A↓r
    // _cinit+16↓o ...
    // [ALOGB] db '_logb',0  // DATA XREF: .data:0000000180024308↓o
    // [ALIGN] 8
    // [AYN] db '_yn',0  // DATA XREF: .data:00000001800242F8↓o
    // [AY1] db '_y1',0  // DATA XREF: .data:00000001800242E8↓o
    // [AY0] db '_y0',0  // DATA XREF: .data:00000001800242D8↓o
    // [AFREXP] db 'frexp',0  // DATA XREF: .data:00000001800242C8↓o
    // [ALIGN] 4
    // [AFMOD] db 'fmod',0  // DATA XREF: .data:00000001800242B8↓o
    // [ALIGN] 4
    // [AHYPOT] db '_hypot',0  // DATA XREF: .data:00000001800242A8↓o
    // [ALIGN] 4
    // [ACABS] db '_cabs',0  // DATA XREF: .data:0000000180024298↓o
    // [ALIGN] 4
    // [ALDEXP] db 'ldexp',0  // DATA XREF: .data:0000000180024288↓o
    // [ALIGN] 4
    // [AMODF] db 'modf',0  // DATA XREF: .data:0000000180024278↓o
    // [ALIGN] 4
    // [AFABS] db 'fabs',0  // DATA XREF: .data:0000000180024268↓o
    // [ALIGN] 4
    // [AFLOOR] db 'floor',0  // DATA XREF: .data:0000000180024258↓o
    // [ALIGN] 4
    // [ACEIL] db 'ceil',0  // DATA XREF: .data:0000000180024248↓o
    // [ALIGN] 4
    // [ATAN] db 'tan',0  // DATA XREF: .data:0000000180024238↓o
    // [AATAN2] db 'atan2',0  // DATA XREF: .data:00000001800241F8↓o
    // [ALIGN] 8
    // [AACOS] db 'acos',0  // DATA XREF: .data:00000001800241D8↓o
    // [ALIGN] 0x20
    // [AASIN] db 'asin',0  // DATA XREF: .data:00000001800241C8↓o
    // [ALIGN] 8
    // [ATANH] db 'tanh',0  // DATA XREF: .data:00000001800241B8↓o
    // [ALIGN] 0x10
    // [ACOSH] db 'cosh',0  // DATA XREF: .data:00000001800241A8↓o
    // [ALIGN] 8
    // [ASINH] db 'sinh',0  // DATA XREF: .data:0000000180024198↓o
    // [ALIGN] 0x20
    // [ALOG10] db 'log10',0  // DATA XREF: .data:0000000180024188↓o
    // [ALIGN] 8
    // [ALOG] db 'log',0  // DATA XREF: .data:0000000180024178↓o
    // [APOW] db 'pow',0  // DATA XREF: .data:0000000180024168↓o
    // [AEXP] db 'exp',0  // DATA XREF: .data:0000000180024158↓o
    // [ALIGN] 8
class="lbl">aRuntimeError:
    // [TEXT] "UTF-16LE", 'runtime error ',0
    // [ALIGN] 8
class="lbl">asc_180002258:
    // [TEXT] "UTF-16LE", 0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aTlossError:
    // [TEXT] "UTF-16LE", 'TLOSS error',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aSingError:
    // [TEXT] "UTF-16LE", 'SING error',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aDomainError:
    // [TEXT] "UTF-16LE", 'DOMAIN error',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6033AttemptTo:
    // [TEXT] "UTF-16LE", 'R6033',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- Attempt to use MSIL code from this assembly durin'
    // [TEXT] "UTF-16LE", 'g native code initialization',0x0A
    // [TEXT] "UTF-16LE", 'This indicates a bug in your application. It is mos'
    // [TEXT] "UTF-16LE", 't likely the result of calling an MSIL-compiled (/c'
    // [TEXT] "UTF-16LE", 'lr) function from a native constructor or from DllM'
    // [TEXT] "UTF-16LE", 'ain.',0x0D,0x0A,0
    // [ALIGN] 0x10
class="lbl">aR6032NotEnough:
    // [TEXT] "UTF-16LE", 'R6032',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for locale information',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6031AttemptTo:
    // [TEXT] "UTF-16LE", 'R6031',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- Attempt to initialize the CRT more than once.',0x0A
    // [TEXT] "UTF-16LE", 'This indicates a bug in your application.',0x0D,0x0A,0
    // [ALIGN] 8
class="lbl">aR6030CrtNotIni:
    // [TEXT] "UTF-16LE", 'R6030',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- CRT not initialized',0x0D,0x0A,0
    // [ALIGN] 0x10
class="lbl">aR6028UnableToI:
    // [TEXT] "UTF-16LE", 'R6028',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- unable to initialize heap',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6027NotEnough:
    // [TEXT] "UTF-16LE", 'R6027',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for lowio initialization',0x0D,0x0A
    // [TEXT] "UTF-16LE", 0
    // [ALIGN] 0x10
class="lbl">aR6026NotEnough:
    // [TEXT] "UTF-16LE", 'R6026',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for stdio initialization',0x0D,0x0A
    // [TEXT] "UTF-16LE", 0
    // [ALIGN] 0x20
class="lbl">aR6025PureVirtu:
    // [TEXT] "UTF-16LE", 'R6025',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- pure virtual function call',0x0D,0x0A,0
    // [ALIGN] 0x10
class="lbl">aR6024NotEnough:
    // [TEXT] "UTF-16LE", 'R6024',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for _onexit/atexit table',0x0D,0x0A
    // [TEXT] "UTF-16LE", 0
    // [ALIGN] 0x20
class="lbl">aR6019UnableToO:
    // [TEXT] "UTF-16LE", 'R6019',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- unable to open console device',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6018Unexpecte:
    // [TEXT] "UTF-16LE", 'R6018',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- unexpected heap error',0x0D,0x0A,0
    // [ALIGN] 0x10
class="lbl">aR6017Unexpecte:
    // [TEXT] "UTF-16LE", 'R6017',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- unexpected multithread lock error',0x0D,0x0A,0
    // [ALIGN] 0x10
class="lbl">aR6016NotEnough:
    // [TEXT] "UTF-16LE", 'R6016',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for thread data',0x0D,0x0A,0
    // [ALIGN] 0x10
class="lbl">aR6010AbortHasB:
    // [TEXT] "UTF-16LE", 'R6010',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- abort() has been called',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6009NotEnough:
    // [TEXT] "UTF-16LE", 'R6009',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for environment',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6008NotEnough:
    // [TEXT] "UTF-16LE", 'R6008',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- not enough space for arguments',0x0D,0x0A,0
    // [ALIGN] 0x20
class="lbl">aR6002FloatingP:
    // [TEXT] "UTF-16LE", 'R6002',0x0D,0x0A
    // [TEXT] "UTF-16LE", '- floating point support not loaded',0x0D,0x0A,0
    // [ALIGN] 0x20
    // [QWORD_180002B00] dq 2  // DATA XREF: _GET_RTERRMSG↓o
    // [DQ] offset aR6002FloatingP  // "R6002\r\n- floating point support not l"...
    // [DQ] 8
    // [DQ] offset aR6008NotEnough  // "R6008\r\n- not enough space for argumen"...
    // [DQ] 9
    // [DQ] offset aR6009NotEnough  // "R6009\r\n- not enough space for environ"...
    // [DQ] 0x0A
    // [DQ] offset aR6010AbortHasB  // "R6010\r\n- abort() has been called\r\n"
    // [DQ] 0x10
    // [DQ] offset aR6016NotEnough  // "R6016\r\n- not enough space for thread "...
    // [DQ] 0x11
    // [DQ] offset aR6017Unexpecte  // "R6017\r\n- unexpected multithread lock "...
    // [DQ] 0x12
    // [DQ] offset aR6018Unexpecte  // "R6018\r\n- unexpected heap error\r\n"
    // [DQ] 0x13
    // [DQ] offset aR6019UnableToO  // "R6019\r\n- unable to open console devic"...
    // [DQ] 0x18
    // [DQ] offset aR6024NotEnough  // "R6024\r\n- not enough space for _onexit"...
    // [DQ] 0x19
    // [DQ] offset aR6025PureVirtu  // "R6025\r\n- pure virtual function call\r"...
    // [DQ] 0x1A
    // [DQ] offset aR6026NotEnough  // "R6026\r\n- not enough space for stdio i"...
    // [DQ] 0x1B
    // [DQ] offset aR6027NotEnough  // "R6027\r\n- not enough space for lowio i"...
    // [DQ] 0x1C
    // [DQ] offset aR6028UnableToI  // "R6028\r\n- unable to initialize heap\r"...
    // [DQ] 0x1E
    // [DQ] offset aR6030CrtNotIni  // "R6030\r\n- CRT not initialized\r\n"
    // [DQ] 0x1F
    // [DQ] offset aR6031AttemptTo  // "R6031\r\n- Attempt to initialize the CR"...
    // [DQ] 0x20
    // [DQ] offset aR6032NotEnough  // "R6032\r\n- not enough space for locale "...
    // [DQ] 0x21
    // [DQ] offset aR6033AttemptTo  // "R6033\r\n- Attempt to use MSIL code fro"...
    // [DQ] 0x78
    // [DQ] offset aDomainError  // "DOMAIN error\r\n"
    // [DQ] 0x79
    // [DQ] offset aSingError  // "SING error\r\n"
    // [DQ] 0x7A
    // [DQ] offset aTlossError  // "TLOSS error\r\n"
    // [DQ] 0x0FC
    // [DQ] offset asc_180002258  // "\r\n"
    // [DQ] 0x0FF
    // [DQ] offset aRuntimeError  // "runtime error "
class="lbl">aMicrosoftVisua:
    // [TEXT] "UTF-16LE", 'Microsoft Visual C++ Runtime Library',0
    // [ALIGN] 4
    // const wchar_t asc_180002CAC
class="lbl">asc_180002CAC:
    // [TEXT] "UTF-16LE", 0x0A
    // [TEXT] "UTF-16LE", 0x0A,0
    // [ALIGN] 8
    // const wchar_t asc_180002CB8
class="lbl">asc_180002CB8:
    // [TEXT] "UTF-16LE", '...',0
    // const wchar_t aProgramNameUnk
class="lbl">aProgramNameUnk:
    // [TEXT] "UTF-16LE", '<program name unknown>',0
    // [ALIGN] 0x10
    // const wchar_t aRuntimeErrorPr
class="lbl">aRuntimeErrorPr:
    // [TEXT] "UTF-16LE", 'Runtime Error!',0x0A
    // [TEXT] "UTF-16LE", 0x0A
    // [TEXT] "UTF-16LE", 'Program: ',0
    // [ALIGN] 8
class="lbl">aNull:
    // [TEXT] "UTF-16LE", '(null)',0
    // [ALIGN] 8
    // [ANULL_0] db '(null)',0  // DATA XREF: .data:off_180024350↓o
    // [ALIGN] 0x20
    // [QWORD_180002D40] dq 0x10006000006, 0x1002060006030010, 0x505050545454504, 0x5000303505
    // [DQ] 0x807585038202800, 0x7505730303700, 0x8202000, 0x60606060686008
    // [DQ] 0x878787878707800, 0x808000700000807, 0x700080008000008
    // [DQ] 8, 0x6D003A00480048, 0x730073003A006D, 0
class="lbl">aDdddMmmmDdYyyy:
    // [TEXT] "UTF-16LE", 'dddd, MMMM dd, yyyy',0
class="lbl">aMmDdYy:
    // [TEXT] "UTF-16LE", 'MM/dd/yy',0
    // [ALIGN] 4
class="lbl">aPm:
    // [TEXT] "UTF-16LE", 'PM',0
    // [ALIGN] 4
class="lbl">aAm:
    // [TEXT] "UTF-16LE", 'AM',0
    // [ALIGN] 8
class="lbl">aDecember:
    // [TEXT] "UTF-16LE", 'December',0
    // [ALIGN] 0x20
class="lbl">aNovember:
    // [TEXT] "UTF-16LE", 'November',0
    // [ALIGN] 8
class="lbl">aOctober:
    // [TEXT] "UTF-16LE", 'October',0
class="lbl">aSeptember:
    // [TEXT] "UTF-16LE", 'September',0
    // [ALIGN] 0x20
class="lbl">aAugust:
    // [TEXT] "UTF-16LE", 'August',0
    // [ALIGN] 0x10
class="lbl">aJuly:
    // [TEXT] "UTF-16LE", 'July',0
    // [ALIGN] 0x20
class="lbl">aJune:
    // [TEXT] "UTF-16LE", 'June',0
    // [ALIGN] 0x10
class="lbl">aApril:
    // [TEXT] "UTF-16LE", 'April',0
    // [ALIGN] 0x20
class="lbl">aMarch:
    // [TEXT] "UTF-16LE", 'March',0
    // [ALIGN] 0x10
class="lbl">aFebruary:
    // [TEXT] "UTF-16LE", 'February',0
    // [ALIGN] 8
class="lbl">aJanuary:
    // [TEXT] "UTF-16LE", 'January',0
class="lbl">aDec:
    // [TEXT] "UTF-16LE", 'Dec',0
class="lbl">aNov:
    // [TEXT] "UTF-16LE", 'Nov',0
class="lbl">aOct:
    // [TEXT] "UTF-16LE", 'Oct',0
class="lbl">aSep:
    // [TEXT] "UTF-16LE", 'Sep',0
class="lbl">aAug:
    // [TEXT] "UTF-16LE", 'Aug',0
class="lbl">aJul:
    // [TEXT] "UTF-16LE", 'Jul',0
class="lbl">aJun:
    // [TEXT] "UTF-16LE", 'Jun',0
class="lbl">aMay:
    // .data:0000000180024C68↓o
    // [TEXT] "UTF-16LE", 'May',0
class="lbl">aApr:
    // [TEXT] "UTF-16LE", 'Apr',0
class="lbl">aMar:
    // [TEXT] "UTF-16LE", 'Mar',0
class="lbl">aFeb:
    // [TEXT] "UTF-16LE", 'Feb',0
class="lbl">aJan:
    // [TEXT] "UTF-16LE", 'Jan',0
class="lbl">aSaturday:
    // [TEXT] "UTF-16LE", 'Saturday',0
    // [ALIGN] 0x10
class="lbl">aFriday:
    // [TEXT] "UTF-16LE", 'Friday',0
    // [ALIGN] 0x20
class="lbl">aThursday:
    // [TEXT] "UTF-16LE", 'Thursday',0
    // [ALIGN] 8
class="lbl">aWednesday:
    // [TEXT] "UTF-16LE", 'Wednesday',0
    // [ALIGN] 0x10
class="lbl">aTuesday:
    // [TEXT] "UTF-16LE", 'Tuesday',0
class="lbl">aMonday:
    // [TEXT] "UTF-16LE", 'Monday',0
    // [ALIGN] 0x10
class="lbl">aSunday:
    // [TEXT] "UTF-16LE", 'Sunday',0
    // [ALIGN] 0x20
class="lbl">aSat:
    // [TEXT] "UTF-16LE", 'Sat',0
class="lbl">aFri:
    // [TEXT] "UTF-16LE", 'Fri',0
class="lbl">aThu:
    // [TEXT] "UTF-16LE", 'Thu',0
class="lbl">aWed:
    // [TEXT] "UTF-16LE", 'Wed',0
class="lbl">aTue:
    // [TEXT] "UTF-16LE", 'Tue',0
class="lbl">aMon:
    // [TEXT] "UTF-16LE", 'Mon',0
class="lbl">aSun:
    // [TEXT] "UTF-16LE", 'Sun',0
    // [AHHMMSS] db 'HH:mm:ss',0  // DATA XREF: .data:0000000180024B60↓o
    // [ALIGN] 8
    // [ADDDDMMMMDDYYYY_0] db 'dddd, MMMM dd, yyyy',0
    // DATA XREF: .data:0000000180024B58↓o
    // [ALIGN] 0x20
    // [AMMDDYY_0] db 'MM/dd/yy',0  // DATA XREF: .data:0000000180024B50↓o
    // [ALIGN] 4
    // [APM_0] db 'PM',0  // DATA XREF: .data:0000000180024B48↓o
    // [ALIGN] 0x10
    // [AAM_0] db 'AM',0  // DATA XREF: .data:0000000180024B40↓o
    // [ALIGN] 8
    // [ADECEMBER_0] db 'December',0  // DATA XREF: .data:0000000180024B38↓o
    // [ALIGN] 8
    // [ANOVEMBER_0] db 'November',0  // DATA XREF: .data:0000000180024B30↓o
    // [ALIGN] 8
    // [AOCTOBER_0] db 'October',0  // DATA XREF: .data:0000000180024B28↓o
    // [ASEPTEMBER_0] db 'September',0  // DATA XREF: .data:0000000180024B20↓o
    // [ALIGN] 4
    // [AAUGUST_0] db 'August',0  // DATA XREF: .data:0000000180024B18↓o
    // [ALIGN] 4
    // [AJULY_0] db 'July',0  // DATA XREF: .data:0000000180024B10↓o
    // [ALIGN] 4
    // [AJUNE_0] db 'June',0  // DATA XREF: .data:0000000180024B08↓o
    // [ALIGN] 4
    // [AAPRIL_0] db 'April',0  // DATA XREF: .data:0000000180024AF8↓o
    // [ALIGN] 4
    // [AMARCH_0] db 'March',0  // DATA XREF: .data:0000000180024AF0↓o
    // [ALIGN] 8
    // [AFEBRUARY_0] db 'February',0  // DATA XREF: .data:0000000180024AE8↓o
    // [ALIGN] 8
    // [AJANUARY_0] db 'January',0  // DATA XREF: .data:0000000180024AE0↓o
    // [ADEC_0] db 'Dec',0  // DATA XREF: .data:0000000180024AD8↓o
    // [ANOV_0] db 'Nov',0  // DATA XREF: .data:0000000180024AD0↓o
    // [AOCT_0] db 'Oct',0  // DATA XREF: .data:0000000180024AC8↓o
    // [ASEP_0] db 'Sep',0  // DATA XREF: .data:0000000180024AC0↓o
    // [AAUG_0] db 'Aug',0  // DATA XREF: .data:0000000180024AB8↓o
    // [AJUL_0] db 'Jul',0  // DATA XREF: .data:0000000180024AB0↓o
    // [AJUN_0] db 'Jun',0  // DATA XREF: .data:0000000180024AA8↓o
    // [AMAY_0] db 'May',0  // DATA XREF: .data:0000000180024AA0↓o
    // .data:0000000180024B00↓o
    // [AAPR_0] db 'Apr',0  // DATA XREF: .data:0000000180024A98↓o
    // [AMAR_0] db 'Mar',0  // DATA XREF: .data:0000000180024A90↓o
    // [AFEB_0] db 'Feb',0  // DATA XREF: .data:0000000180024A88↓o
    // [AJAN_0] db 'Jan',0  // DATA XREF: .data:0000000180024A80↓o
    // [ASATURDAY_0] db 'Saturday',0  // DATA XREF: .data:0000000180024A78↓o
    // [ALIGN] 4
    // [AFRIDAY_0] db 'Friday',0  // DATA XREF: .data:0000000180024A70↓o
    // [ALIGN] 8
    // [ATHURSDAY_0] db 'Thursday',0  // DATA XREF: .data:0000000180024A68↓o
    // [ALIGN] 8
    // [AWEDNESDAY_0] db 'Wednesday',0  // DATA XREF: .data:0000000180024A60↓o
    // [ALIGN] 8
    // [ATUESDAY_0] db 'Tuesday',0  // DATA XREF: .data:0000000180024A58↓o
    // [AMONDAY_0] db 'Monday',0  // DATA XREF: .data:0000000180024A50↓o
    // [ALIGN] 8
    // [ASUNDAY_0] db 'Sunday',0  // DATA XREF: .data:0000000180024A48↓o
    // [ALIGN] 0x10
    // [ASAT_0] db 'Sat',0  // DATA XREF: .data:0000000180024A40↓o
    // [AFRI_0] db 'Fri',0  // DATA XREF: .data:0000000180024A38↓o
    // [ATHU_0] db 'Thu',0  // DATA XREF: .data:0000000180024A30↓o
    // [AWED_0] db 'Wed',0  // DATA XREF: .data:0000000180024A28↓o
    // [ATUE_0] db 'Tue',0  // DATA XREF: .data:0000000180024A20↓o
    // [AMON_0] db 'Mon',0  // DATA XREF: .data:0000000180024A18↓o
    // [ASUN_0] db 'Sun',0  // DATA XREF: .data:off_180024A10↓o
    // [ALIGN] 0x10
    // [DQ] 0x807060504030201, 0x100F0E0D0C0B0A09, 0x1817161514131211
    // [DQ] 0x201F1E1D1C1B1A19, 0x2827262524232221, 0x302F2E2D2C2B2A29
    // [DQ] 0x3837363534333231, 0x403F3E3D3C3B3A39, 0x4847464544434241
    // [DQ] 0x504F4E4D4C4B4A49, 0x5857565554535251, 0x605F5E5D5C5B5A59
    // [DQ] 0x6867666564636261, 0x706F6E6D6C6B6A69, 0x7877767574737271
    // [DQ] 0x7F7E7D7C7B7A79
    // const char asc_1800031D0[2]
    // [ASC_1800031D0] db '=',0  // DATA XREF: X:0000000180003A80↓o
    // _cenvarg+3D8↓o
    // [ALIGN] 8
    // const CHAR aCorexitprocess[]
    // [ACOREXITPROCESS] db 'CorExitProcess',0  // DATA XREF: __crtCorExitProcess+1A↓o
    // [ALIGN] 8
    // const WCHAR ModuleName
class="lbl">ModuleName:
    // [TEXT] "UTF-16LE", 'mscoree.dll',0
    // [QWORD_180003200] dq 0x1E06D7363, 2 dup(0)  // DATA XREF: _CxxThrowException+1C↓o
    // [DQ] 4, 0x19930520, 3 dup(0)
    // const char aPath[]
    // [APATH] db 'PATH',0  // DATA XREF: _spawnvpe+B0↓o
    // [ALIGN] 8
    // [ACOM] db '.com',0  // DATA XREF: .data:off_180024E58↓o
    // [ALIGN] 0x10
    // [AEXE] db '.exe',0  // DATA XREF: .data:0000000180024E50↓o
    // [ALIGN] 8
    // [ABAT] db '.bat',0  // DATA XREF: .data:0000000180024E48↓o
    // [ALIGN] 0x20
    // [ACMD] db '.cmd',0  // DATA XREF: .data:off_180024E40↓o
    // [ALIGN] 8
    // const char asc_180003268[3]
    // [ASC_180003268] db '.\',0  // DATA XREF: _spawnve+E0↓o
    // [ALIGN] 0x10
    // [QWORD_180003270] dq 0x0BC0000005, 0  // DATA XREF: _initptd+10↓o
    // _freefls+82↓o
    // [DQ] 0x4C000001D, 0
    // [DQ] 0x4C0000096, 0
    // [DB] 0x8D, 0
    // [DW] 0x0C000, 8, 0
    // [ALIGN] 0x10
    // [DQ] 0x8C000008E, 0
    // [DQ] 0x8C000008F, 0
    // [DB] 0x90
    // [DB] 2 dup(0), 0x0C0, 8, 3 dup(0)
    // [ALIGN] 0x20
    // [DQ] 0x8C0000091, 0
    // [DQ] 0x8C0000092, 0
    // [DQ] 0x8C0000093, 0
    // [DQ] 0x8C00002B4, 0
    // [DQ] 0x8C00002B5, 0
    // [DWORD_180003330] dd 3  // DATA XREF: raise+185↓r
    // raise+1B6↓r
    // [DWORD_180003334] dd 9  // DATA XREF: raise:loc_180017001↓r
    // [DB] 0x0C0, 3 dup(0)
    // [DWORD_18000333C] dd 0x0C  // DATA XREF: raise+B2↓r
    // const char aE000[]
    // [AE000] db 'e+000',0  // DATA XREF: _cftoe2_l+143↓o
    // [ALIGN] 0x10
    // [QWORD_180003350] dq 0x433FFFFFFFFFFFFF, 0x0C33FFFFFFFFFFFFF
    // DATA XREF: X:_frnd↓r
    // X:0000000180016BD8↓r
    // const CHAR aGetprocesswind[]
    // [AGETPROCESSWIND] db 'GetProcessWindowStation',0
    // DATA XREF: sub_1800170A4+E8↓o
    // const CHAR aGetuserobjecti[]
    // [AGETUSEROBJECTI] db 'GetUserObjectInformationW',0
    // DATA XREF: sub_1800170A4+B9↓o
    // [ALIGN] 8
    // const CHAR aGetlastactivep[]
    // [AGETLASTACTIVEP] db 'GetLastActivePopup',0
    // DATA XREF: sub_1800170A4+99↓o
    // [ALIGN] 0x10
    // const CHAR aGetactivewindo[]
    // [AGETACTIVEWINDO] db 'GetActiveWindow',0  // DATA XREF: sub_1800170A4+79↓o
    // const CHAR aMessageboxw[]
    // [AMESSAGEBOXW] db 'MessageBoxW',0  // DATA XREF: sub_1800170A4+57↓o
    // [ALIGN] 0x10
    // const WCHAR LibFileName
class="lbl">LibFileName:
    // [TEXT] "UTF-16LE", 'USER32.DLL',0
    // [ALIGN] 8
    // [ACOMPLETEOBJECT] db ' Complete Object Locator',0x27,0
    // DATA XREF: X:0000000180003D10↓o
    // [ALIGN] 8
    // [ACLASSHIERARCHY] db ' Class Hierarchy Descriptor',0x27,0
    // DATA XREF: X:0000000180003D08↓o
    // [ALIGN] 8
    // [ABASECLASSARRAY] db ' Base Class Array',0x27,0
    // DATA XREF: X:0000000180003D00↓o
    // [ALIGN] 0x20
    // [ABASECLASSDESCR] db ' Base Class Descriptor at (',0
    // DATA XREF: X:0000000180003CF8↓o
    // [ALIGN] 0x20
    // [ATYPEDESCRIPTOR] db ' Type Descriptor',0x27,0
    // DATA XREF: X:0000000180003CF0↓o
    // [ALIGN] 8
    // [ALOCALSTATICTHR] db '`local static thread guard',0x27,0
    // DATA XREF: X:0000000180003CE0↓o
    // [ALIGN] 8
    // [AMANAGEDVECTORC] db '`managed vector copy constructor iterator',0x27,0
    // DATA XREF: X:0000000180003CD8↓o
    // [ALIGN] 8
    // [AVECTORVBASECOP] db '`vector vbase copy constructor iterator',0x27,0
    // DATA XREF: X:0000000180003CD0↓o
    // [ALIGN] 8
    // [AVECTORCOPYCONS] db '`vector copy constructor iterator',0x27,0
    // DATA XREF: X:0000000180003CC8↓o
    // [ALIGN] 0x20
    // [ADYNAMICATEXITD] db '`dynamic atexit destructor for ',0x27,0
    // DATA XREF: X:0000000180003CC0↓o
    // [ALIGN] 8
    // [ADYNAMICINITIAL] db '`dynamic initializer for ',0x27,0
    // DATA XREF: X:0000000180003CB8↓o
    // [ALIGN] 8
    // [AEHVECTORVBASEC] db '`0xE vector vbase copy constructor iterator',0x27,0
    // DATA XREF: X:0000000180003CB0↓o
    // [ALIGN] 8
    // [AEHVECTORCOPYCO] db '`0xE vector copy constructor iterator',0x27,0
    // DATA XREF: X:0000000180003CA8↓o
    // [ALIGN] 0x20
    // [AMANAGEDVECTORD] db '`managed vector destructor iterator',0x27,0
    // DATA XREF: X:0000000180003CA0↓o
    // [ALIGN] 8
    // [AMANAGEDVECTORC_0] db '`managed vector constructor iterator',0x27,0
    // DATA XREF: X:0000000180003C98↓o
    // [ALIGN] 0x10
    // [APLACEMENTDELET] db '`placement delete[] closure',0x27,0
    // DATA XREF: X:0000000180003C90↓o
    // [ALIGN] 0x10
    // [APLACEMENTDELET_0] db '`placement delete closure',0x27,0
    // DATA XREF: X:0000000180003C88↓o
    // [ALIGN] 0x10
    // [AOMNICALLSIG] db '`omni callsig',0x27,0
    // DATA XREF: X:0000000180003C80↓o
    // [ALIGN] 0x20
    // [ADELETE] db ' delete[]',0  // DATA XREF: X:0000000180003C78↓o
    // [ALIGN] 4
    // [ANEW] db ' new[]',0  // DATA XREF: X:0000000180003C70↓o
    // [ALIGN] 8
    // [ALOCALVFTABLECO] db '`local vftable constructor closure',0x27,0
    // DATA XREF: X:0000000180003C68↓o
    // [ALIGN] 0x20
    // [ALOCALVFTABLE] db '`local vftable',0x27,0
    // DATA XREF: X:0000000180003C60↓o
    // [ARTTI] db '`RTTI',0  // DATA XREF: X:0000000180003C58↓o
    // [ALIGN] 8
    // [0XAE] db '`EH',0  // DATA XREF: X:0000000180003C50↓o
    // [ALIGN] 0x20
    // [AUDTRETURNING] db '`udt returning',0x27,0
    // DATA XREF: X:0000000180003C48↓o
    // [ACOPYCONSTRUCTO] db '`copy constructor closure',0x27,0
    // DATA XREF: X:0000000180003C40↓o
    // [ALIGN] 0x10
    // [AEHVECTORVBASEC_0] db '`0xE vector vbase constructor iterator',0x27,0
    // DATA XREF: X:0000000180003C38↓o
    // [ALIGN] 8
    // [AEHVECTORDESTRU] db '`0xE vector destructor iterator',0x27,0
    // DATA XREF: X:0000000180003C30↓o
    // [AEHVECTORCONSTR] db '`0xE vector constructor iterator',0x27,0
    // DATA XREF: X:0000000180003C28↓o
    // [ALIGN] 0x20
    // [AVIRTUALDISPLAC] db '`virtual displacement map',0x27,0
    // DATA XREF: X:0000000180003C20↓o
    // [ALIGN] 0x20
    // [AVECTORVBASECON] db '`vector vbase constructor iterator',0x27,0
    // DATA XREF: X:0000000180003C18↓o
    // [ALIGN] 8
    // [AVECTORDESTRUCT] db '`vector destructor iterator',0x27,0
    // DATA XREF: X:0000000180003C10↓o
    // [ALIGN] 8
    // [AVECTORCONSTRUC] db '`vector constructor iterator',0x27,0
    // DATA XREF: X:0000000180003C08↓o
    // [ALIGN] 8
    // [ASCALARDELETING] db '`scalar deleting destructor',0x27,0
    // DATA XREF: X:0000000180003C00↓o
    // [ALIGN] 8
    // [ADEFAULTCONSTRU] db '`default constructor closure',0x27,0
    // DATA XREF: X:0000000180003BF8↓o
    // [ALIGN] 8
    // [AVECTORDELETING] db '`vector deleting destructor',0x27,0
    // DATA XREF: X:0000000180003BF0↓o
    // [ALIGN] 8
    // [AVBASEDESTRUCTO] db '`vbase destructor',0x27,0
    // DATA XREF: X:0000000180003BE8↓o
    // [ALIGN] 0x20
    // [ASTRING] db '`string',0x27,0  // DATA XREF: X:0000000180003BE0↓o
    // [ALIGN] 0x10
    // [ALOCALSTATICGUA] db '`local static guard',0x27,0
    // DATA XREF: X:0000000180003BD8↓o
    // [ALIGN] 8
    // [ATYPEOF] db '`typeof',0x27,0  // DATA XREF: X:0000000180003BD0↓o
    // [ALIGN] 8
    // [AVCALL] db '`vcall',0x27,0  // DATA XREF: X:0000000180003BC8↓o
    // [AVBTABLE] db '`vbtable',0x27,0  // DATA XREF: X:0000000180003BC0↓o
    // [ALIGN] 0x10
    // [AVFTABLE] db '`vftable',0x27,0  // DATA XREF: X:0000000180003BB8↓o
    // [ALIGN] 4
    // [ASC_1800038BC] db '^=',0  // DATA XREF: X:0000000180003BB0↓o
    // [ALIGN] 0x20
    // [ASC_1800038C0] db '|=',0  // DATA XREF: X:0000000180003BA8↓o
    // [ALIGN] 4
    // [ASC_1800038C4] db '&=',0  // DATA XREF: X:0000000180003BA0↓o
    // [ALIGN] 8
    // [ASC_1800038C8] db '<<=',0  // DATA XREF: X:0000000180003B98↓o
    // [ASC_1800038CC] db '>>=',0  // DATA XREF: X:0000000180003B90↓o
    // [ASC_1800038D0] db '%=',0  // DATA XREF: X:0000000180003B88↓o
    // [ALIGN] 4
    // [ASC_1800038D4] db '/=',0  // DATA XREF: X:0000000180003B80↓o
    // [ALIGN] 8
    // [ASC_1800038D8] db '-=',0  // DATA XREF: X:0000000180003B78↓o
    // [ALIGN] 4
    // [ASC_1800038DC] db '+=',0  // DATA XREF: X:0000000180003B70↓o
    // [ALIGN] 0x20
    // [ASC_1800038E0] db '*=',0  // DATA XREF: X:0000000180003B68↓o
    // [ALIGN] 4
    // [ASC_1800038E4] db '||',0  // DATA XREF: X:0000000180003B60↓o
    // [ALIGN] 8
    // [ASC_1800038E8] db '&&',0  // DATA XREF: X:0000000180003B58↓o
    // [ALIGN] 4
    // [ASC_1800038EC] db '|',0  // DATA XREF: X:0000000180003B50↓o
    // [ALIGN] 0x10
    // [ASC_1800038F0] db '^',0  // DATA XREF: X:0000000180003B48↓o
    // [ALIGN] 4
    // [ASC_1800038F4] db '~',0  // DATA XREF: X:0000000180003B40↓o
    // [ALIGN] 8
    // [ASC_1800038F8] db '()',0  // DATA XREF: X:0000000180003B38↓o
    // [ALIGN] 4
    // [ASC_1800038FC] db ',',0  // DATA XREF: X:0000000180003B30↓o
    // [ALIGN] 0x20
    // [ASC_180003900] db '>=',0  // DATA XREF: X:0000000180003B28↓o
    // [ALIGN] 4
    // [ASC_180003904] db '>',0  // DATA XREF: X:0000000180003B20↓o
    // [ALIGN] 8
    // [ASC_180003908] db '<=',0  // DATA XREF: X:0000000180003B18↓o
    // [ALIGN] 4
    // [ASC_18000390C] db '<',0  // DATA XREF: X:0000000180003B10↓o
    // [ALIGN] 0x10
    // [ASC_180003910] db '%',0  // DATA XREF: X:0000000180003B08↓o
    // [ALIGN] 4
    // [ASC_180003914] db '/',0  // DATA XREF: X:0000000180003B00↓o
    // [ALIGN] 8
    // [ASC_180003918] db '->*',0  // DATA XREF: X:0000000180003AF8↓o
    // [ASC_18000391C] db '&',0  // DATA XREF: X:0000000180003AF0↓o
    // [ALIGN] 0x20
    // [ASC_180003920] db '+',0  // DATA XREF: X:0000000180003AE8↓o
    // [ALIGN] 4
    // [ASC_180003924] db '-',0  // DATA XREF: X:0000000180003AE0↓o
    // [ALIGN] 8
    // [ASC_180003928] db '--',0  // DATA XREF: X:0000000180003AD8↓o
    // [ALIGN] 4
    // [ASC_18000392C] db '++',0  // DATA XREF: X:0000000180003AD0↓o
    // [ALIGN] 0x10
    // [ASC_180003930] db '*',0  // DATA XREF: X:0000000180003AC8↓o
    // [ALIGN] 4
    // [ASC_180003934] db '->',0  // DATA XREF: X:0000000180003AC0↓o
    // [ALIGN] 8
    // [AOPERATOR] db 'operator',0  // DATA XREF: X:0000000180003AB8↓o
    // [ALIGN] 4
    // [ASC_180003944] db '[]',0  // DATA XREF: X:0000000180003AB0↓o
    // [ALIGN] 8
    // [ASC_180003948] db '!=',0  // DATA XREF: X:0000000180003AA8↓o
    // [ALIGN] 4
    // [ASC_18000394C] db '==',0  // DATA XREF: X:0000000180003AA0↓o
    // [ALIGN] 0x10
    // [ASC_180003950] db '!',0  // DATA XREF: X:0000000180003A98↓o
    // [ALIGN] 4
    // [ASC_180003954] db '<<',0  // DATA XREF: X:0000000180003A90↓o
    // [ALIGN] 8
    // [ASC_180003958] db '>>',0  // DATA XREF: X:0000000180003A88↓o
    // [ALIGN] 0x20
    // [ADELETE_0] db ' delete',0  // DATA XREF: X:0000000180003A78↓o
    // [ANEW_0] db ' new',0  // DATA XREF: X:0000000180003A70↓o
    // [ALIGN] 0x10
    // [AUNALIGNED] db '__unaligned',0  // DATA XREF: X:0000000180003A60↓o
    // [ALIGN] 0x20
    // [ARESTRICT] db '__restrict',0  // DATA XREF: X:0000000180003A58↓o
    // [ALIGN] 0x10
    // [APTR64] db '__ptr64',0  // DATA XREF: X:0000000180003A50↓o
    // [AEABI] db '__eabi',0  // DATA XREF: X:0000000180003A48↓o
    // [ALIGN] 0x20
    // [ACLRCALL] db '__clrcall',0  // DATA XREF: X:0000000180003A40↓o
    // [ALIGN] 0x10
    // [AFASTCALL] db '__fastcall',0  // DATA XREF: X:0000000180003A38↓o
    // [ALIGN] 0x20
    // [ATHISCALL] db '__thiscall',0  // DATA XREF: X:0000000180003A30↓o
    // [ALIGN] 0x10
    // [ASTDCALL] db '__stdcall',0  // DATA XREF: X:0000000180003A28↓o
    // [ALIGN] 0x20
    // [APASCAL] db '__pascal',0  // DATA XREF: X:0000000180003A20↓o
    // [ALIGN] 0x10
    // [ACDECL] db '__cdecl',0  // DATA XREF: X:0000000180003A18↓o
    // [ABASED] db '__based(',0  // DATA XREF: X:0000000180003A10↓o
    // [ALIGN] 0x10
    // [DQ] offset aBased  // "__based("
    // [DQ] offset aCdecl  // "__cdecl"
    // [DQ] offset aPascal  // "__pascal"
    // [DQ] offset aStdcall  // "__stdcall"
    // [DQ] offset aThiscall  // "__thiscall"
    // [DQ] offset aFastcall  // "__fastcall"
    // [DQ] offset aClrcall  // "__clrcall"
    // [DQ] offset aEabi  // "__eabi"
    // [DQ] offset aPtr64  // "__ptr64"
    // [DQ] offset aRestrict  // "__restrict"
    // [DQ] offset aUnaligned  // "__unaligned"
    // [DQ] offset byte_180005AD3
    // [DQ] offset aNew_0  // " new"
    // [DQ] offset aDelete_0  // " delete"
    // [DQ] offset asc_1800031D0  // "="
    // [DQ] offset asc_180003958  // ">>"
    // [DQ] offset asc_180003954  // "<<"
    // [DQ] offset asc_180003950  // "!"
    // [DQ] offset asc_18000394C  // "=="
    // [DQ] offset asc_180003948  // "!="
    // [DQ] offset asc_180003944  // "[]"
    // [DQ] offset aOperator  // "operator"
    // [DQ] offset asc_180003934  // "->"
    // [DQ] offset asc_180003930  // "*"
    // [DQ] offset asc_18000392C  // "++"
    // [DQ] offset asc_180003928  // "--"
    // [DQ] offset asc_180003924  // "-"
    // [DQ] offset asc_180003920  // "+"
    // [DQ] offset asc_18000391C  // "&"
    // [DQ] offset asc_180003918  // "->*"
    // [DQ] offset asc_180003914  // "/"
    // [DQ] offset asc_180003910  // "%"
    // [DQ] offset asc_18000390C  // "<"
    // [DQ] offset asc_180003908  // "<="
    // [DQ] offset asc_180003904  // ">"
    // [DQ] offset asc_180003900  // ">="
    // [DQ] offset asc_1800038FC  // ","
    // [DQ] offset asc_1800038F8  // "()"
    // [DQ] offset asc_1800038F4  // "~"
    // [DQ] offset asc_1800038F0  // "^"
    // [DQ] offset asc_1800038EC  // "|"
    // [DQ] offset asc_1800038E8  // "&&"
    // [DQ] offset asc_1800038E4  // "||"
    // [DQ] offset asc_1800038E0  // "*="
    // [DQ] offset asc_1800038DC  // "+="
    // [DQ] offset asc_1800038D8  // "-="
    // [DQ] offset asc_1800038D4  // "/="
    // [DQ] offset asc_1800038D0  // "%="
    // [DQ] offset asc_1800038CC  // ">>="
    // [DQ] offset asc_1800038C8  // "<<="
    // [DQ] offset asc_1800038C4  // "&="
    // [DQ] offset asc_1800038C0  // "|="
    // [DQ] offset asc_1800038BC  // "^="
    // [DQ] offset aVftable  // "`vftable'"
    // [DQ] offset aVbtable  // "`vbtable'"
    // [DQ] offset aVcall  // "`vcall'"
    // [DQ] offset aTypeof  // "`typeof'"
    // [DQ] offset aLocalStaticGua  // "`local static guard'"
    // [DQ] offset aString  // "`string'"
    // [DQ] offset aVbaseDestructo  // "`vbase destructor'"
    // [DQ] offset aVectorDeleting  // "`vector deleting destructor'"
    // [DQ] offset aDefaultConstru  // "`default constructor closure'"
    // [DQ] offset aScalarDeleting  // "`scalar deleting destructor'"
    // [DQ] offset aVectorConstruc  // "`vector constructor iterator'"
    // [DQ] offset aVectorDestruct  // "`vector destructor iterator'"
    // [DQ] offset aVectorVbaseCon  // "`vector vbase constructor iterator'"
    // [DQ] offset aVirtualDisplac  // "`virtual displacement map'"
    // [DQ] offset aEhVectorConstr  // "`eh vector constructor iterator'"
    // [DQ] offset aEhVectorDestru  // "`eh vector destructor iterator'"
    // [DQ] offset aEhVectorVbaseC_0  // "`eh vector vbase constructor iterator'"
    // [DQ] offset aCopyConstructo  // "`copy constructor closure'"
    // [DQ] offset aUdtReturning  // "`udt returning'"
    // [DQ] offset 0xAE  // "`EH"
    // [DQ] offset aRtti  // "`RTTI"
    // [DQ] offset aLocalVftable  // "`local vftable'"
    // [DQ] offset aLocalVftableCo  // "`local vftable constructor closure'"
    // [DQ] offset aNew  // " new[]"
    // [DQ] offset aDelete  // " delete[]"
    // [DQ] offset aOmniCallsig  // "`omni callsig'"
    // [DQ] offset aPlacementDelet_0  // "`placement delete closure'"
    // [DQ] offset aPlacementDelet  // "`placement delete[] closure'"
    // [DQ] offset aManagedVectorC_0  // "`managed vector constructor iterator'"
    // [DQ] offset aManagedVectorD  // "`managed vector destructor iterator'"
    // [DQ] offset aEhVectorCopyCo  // "`eh vector copy constructor iterator'"
    // [DQ] offset aEhVectorVbaseC  // "`eh vector vbase copy constructor itera"...
    // [DQ] offset aDynamicInitial  // "`dynamic initializer for '"
    // [DQ] offset aDynamicAtexitD  // "`dynamic atexit destructor for '"
    // [DQ] offset aVectorCopyCons  // "`vector copy constructor iterator'"
    // [DQ] offset aVectorVbaseCop  // "`vector vbase copy constructor iterator"...
    // [DQ] offset aManagedVectorC  // "`managed vector copy constructor iterat"...
    // [DQ] offset aLocalStaticThr  // "`local static thread guard'"
    // [DQ] offset byte_180005AD3
    // [DQ] offset aTypeDescriptor  // " Type Descriptor'"
    // [DQ] offset aBaseClassDescr  // " Base Class Descriptor at ("
    // [DQ] offset aBaseClassArray  // " Base Class Array'"
    // [DQ] offset aClassHierarchy  // " Class Hierarchy Descriptor'"
    // [DQ] offset aCompleteObject  // " Complete Object Locator'"
    // [ALIGN] 0x20
    // [DQ] 0x80818086808006, 0x8082868086031000, 0x8585454545050514
    // [DQ] 0x5080303000000585, 0x3827280008008880, 0x3037000700805750
    // [DQ] 0x2000000088505030, 0x8080888028
    // [AHHHHXPPWPP] db '`h`hhh',8,8,7,'xppwpp',8,8,0
    // [DW] 2 dup(0x800), 0x700
    // [DQ] 8, 0x20 dup(0)
class="lbl">asc_180003E80:
    // .data:00000001800255D8↓o
    // [TEXT] "UTF-16LE", ' ((((( H'
    // [DW] 3 dup(0x10)
    // [DQ] 3 dup(0x10001000100010), 2 dup(0x84008400840084), 0x10001000840084
    // [DQ] 0x10001000100010, 0x81008100810010, 0x1008100810081, 4 dup(0x1000100010001)
    // [DQ] 0x10000100010001, 0x10001000100010, 0x82008200820010, 0x2008200820082
    // [DQ] 4 dup(0x2000200020002), 0x10000200020002, 0x20001000100010
    // [DQ] 0x20 dup(0)
    // [QWORD_180004080] dq 0x20002000200000, 0x20002000200020, 0x28006800200020, 0x20002800280028
    // DATA XREF: .data:00000001800255E0↓o
    // .data:0000000180024E38↓o
    // [DQ] 4 dup(0x20002000200020), 0x10001000480020, 3 dup(0x10001000100010)
    // [DQ] 0x84008400840010, 0x84008400840084, 0x10008400840084, 0x10001000100010
    // [DQ] 0x181018100100010, 0x181018101810181, 5 dup(0x101010101010101)
    // [DQ] 0x10001000100010, 0x182018200100010, 0x182018201820182
    // [DQ] 5 dup(0x102010201020102), 0x10001000100010, 8 dup(0x20002000200020)
    // [DQ] 0x10001000480020, 3 dup(0x10001000100010), 0x14001000100010
    // [DQ] 0x10001000100014, 0x10001400100010, 0x10001000100010, 0x101010101010010
    // [DQ] 5 dup(0x101010101010101), 0x101010101010010, 0x101010101010101
    // [DQ] 6 dup(0x102010201020102), 0x102010201020010, 0x102010201020102
    // [DQ] 0x1010102, 0
    // [QWORD_180004290] dq 0x8786858483828180, 0x8F8E8D8C8B8A8988, 0x9796959493929190
    // [DQ] 0x9F9E9D9C9B9A9998, 0x0A7A6A5A4A3A2A1A0, 0x0AFAEADACABAAA9A8
    // [DQ] 0x0B7B6B5B4B3B2B1B0, 0x0BFBEBDBCBBBAB9B8, 0x0C7C6C5C4C3C2C1C0
    // [DQ] 0x0CFCECDCCCBCAC9C8, 0x0D7D6D5D4D3D2D1D0, 0x0DFDEDDDCDBDAD9D8
    // [DQ] 0x0E7E6E5E4E3E2E1E0, 0x0EFEEEDECEBEAE9E8, 0x0F7F6F5F4F3F2F1F0
    // [DQ] 0x0FFFEFDFCFBFAF9F8, 0x706050403020100, 0x0F0E0D0C0B0A0908
    // [DQ] 0x1716151413121110, 0x1F1E1D1C1B1A1918, 0x2726252423222120
    // [DQ] 0x2F2E2D2C2B2A2928, 0x3736353433323130, 0x3F3E3D3C3B3A3938
    // [DQ] 0x6766656463626140, 0x6F6E6D6C6B6A6968, 0x7776757473727170
    // [DQ] 0x5F5E5D5C5B7A7978, 0x6766656463626160, 0x6F6E6D6C6B6A6968
    // [DQ] 0x7776757473727170, 0x7F7E7D7C7B7A7978, 0x8786858483828180
    // [DQ] 0x8F8E8D8C8B8A8988, 0x9796959493929190, 0x9F9E9D9C9B9A9998
    // [DQ] 0x0A7A6A5A4A3A2A1A0, 0x0AFAEADACABAAA9A8, 0x0B7B6B5B4B3B2B1B0
    // [DQ] 0x0BFBEBDBCBBBAB9B8, 0x0C7C6C5C4C3C2C1C0, 0x0CFCECDCCCBCAC9C8
    // [DQ] 0x0D7D6D5D4D3D2D1D0, 0x0DFDEDDDCDBDAD9D8, 0x0E7E6E5E4E3E2E1E0
    // [DQ] 0x0EFEEEDECEBEAE9E8, 0x0F7F6F5F4F3F2F1F0, 0x0FFFEFDFCFBFAF9F8
    // [DQ] 0x8786858483828180, 0x8F8E8D8C8B8A8988, 0x9796959493929190
    // [DQ] 0x9F9E9D9C9B9A9998, 0x0A7A6A5A4A3A2A1A0, 0x0AFAEADACABAAA9A8
    // [DQ] 0x0B7B6B5B4B3B2B1B0, 0x0BFBEBDBCBBBAB9B8, 0x0C7C6C5C4C3C2C1C0
    // [DQ] 0x0CFCECDCCCBCAC9C8, 0x0D7D6D5D4D3D2D1D0, 0x0DFDEDDDCDBDAD9D8
    // [DQ] 0x0E7E6E5E4E3E2E1E0, 0x0EFEEEDECEBEAE9E8, 0x0F7F6F5F4F3F2F1F0
    // [DQ] 0x0FFFEFDFCFBFAF9F8, 0x706050403020100, 0x0F0E0D0C0B0A0908
    // [DQ] 0x1716151413121110, 0x1F1E1D1C1B1A1918, 0x2726252423222120
    // [DQ] 0x2F2E2D2C2B2A2928, 0x3736353433323130, 0x3F3E3D3C3B3A3938
    // [DQ] 0x4746454443424140, 0x4F4E4D4C4B4A4948, 0x5756555453525150
    // [DQ] 0x5F5E5D5C5B5A5958, 0x4746454443424160, 0x4F4E4D4C4B4A4948
    // [DQ] 0x5756555453525150, 0x7F7E7D7C7B5A5958, 0x8786858483828180
    // [DQ] 0x8F8E8D8C8B8A8988, 0x9796959493929190, 0x9F9E9D9C9B9A9998
    // [DQ] 0x0A7A6A5A4A3A2A1A0, 0x0AFAEADACABAAA9A8, 0x0B7B6B5B4B3B2B1B0
    // [DQ] 0x0BFBEBDBCBBBAB9B8, 0x0C7C6C5C4C3C2C1C0, 0x0CFCECDCCCBCAC9C8
    // [DQ] 0x0D7D6D5D4D3D2D1D0, 0x0DFDEDDDCDBDAD9D8, 0x0E7E6E5E4E3E2E1E0
    // [DQ] 0x0EFEEEDECEBEAE9E8, 0x0F7F6F5F4F3F2F1F0, 0x0FFFEFDFCFBFAF9F8
    // [QWORD_180004590] dq 0x6F526D6574737953  // DATA XREF: _cenvarg+27↓r
    // [WORD_180004598] dw 0x746F  // DATA XREF: _cenvarg+38↓r
    // [BYTE_18000459A] db 0  // DATA XREF: _cenvarg+47↓r
    // [ALIGN] 0x20
    // const struct _EXCEPTION_POINTERS ExceptionInfo
    // [EXCEPTIONINFO] _EXCEPTION_POINTERS <offset dword_180026B50, offset ContextRecord>
    // DATA XREF: __report_gsfailure+10E↓o
    // const char a1Qnan[]
    // [A1QNAN] db '1#QNAN',0  // DATA XREF: $I10_OUTPUT+19D↓o
    // [ALIGN] 8
    // const char a1Inf[]
    // [A1INF] db '1#INF',0  // DATA XREF: $I10_OUTPUT+166↓o
    // [ALIGN] 0x20
    // const char a1Ind[]
    // [A1IND] db '1#IND',0  // DATA XREF: $I10_OUTPUT+12F↓o
    // [ALIGN] 8
    // const char a1Snan[]
    // [A1SNAN] db '1#SNAN',0  // DATA XREF: $I10_OUTPUT+EA↓o
    // [ALIGN] 0x10
    // const WCHAR aConout
class="lbl">aConout:
    // [TEXT] "UTF-16LE", 'CONOUT$',0
    // [DQ] offset qword_1800065B0
    // [OFF_1800045E8] dq offset sub_18001DF64  // DATA XREF: sub_18001DE88+E↓o
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [DQ] offset qword_180006630
    // [OFF_180004600] dq offset sub_18001DF64  // DATA XREF: sub_18001DEAC+18↓o
    // sub_18001DEE4+E↓o
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [DQ] offset qword_1800066B8
    // [OFF_180004618] dq offset sub_18001DF64  // DATA XREF: sub_18001DF08+18↓o
    // sub_18001DF40+E↓o
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [DQ] 0
    // [DQ] 8 dup(0x3980000039800000), 0x7707309600000000, 0x990951BAEE0E612C
    // [DQ] 0x706AF48F076DC419, 0x9E6495A3E963A535, 0x79DCB8A40EDB8832
    // [DQ] 0x97D2D988E0D5E91E, 0x7EB17CBD09B64C2B, 0x90BF1D91E7B82D07
    // [DQ] 0x6AB020F21DB71064, 0x84BE41DEF3B97148, 0x6DDDE4EB1ADAD47D
    // [DQ] 0x83D385C7F4D4B551, 0x646BA8C0136C9856, 0x8A65C9ECFD62F97A
    // [DQ] 0x63066CD914015C4F, 0x8D080DF5FA0F3D63, 0x4C69105E3B6E20C8
    // [DQ] 0x0A2677172D56041E4, 0x4B04D4473C03E4D1, 0x0A50AB56BD20D85FD
    // [DQ] 0x42B2986C35B5A8FA, 0x0ACBCF940DBBBC9D6, 0x45DF5C7532D86CE3
    // [DQ] 0x0ABD13D59DCD60DCF, 0x51DE003A26D930AC, 0x0BFD06116C8D75180
    // [DQ] 0x56B3C42321B4F4B5, 0x0B8BDA50FCFBA9599, 0x5F0588082802B89E
    // [DQ] 0x0B10BE924C60CD9B2, 0x58684C112F6F7C87, 0x0B6662D3DC1611DAB
    // [DQ] 0x1DB710676DC4190, 0x0EFD5102A98D220BC, 0x6B6B51F71B18589
    // [DQ] 0x0E8B8D4339FBFE4A5, 0x0F00F9347807C9A2, 0x0E10E98189609A88E
    // [DQ] 0x86D3D2D7F6A0DBB, 0x0E6635C0191646C97, 0x1C6C61626B6B51F4
    // [DQ] 0x0F262004E856530D8, 0x1B01A57B6C0695ED, 0x0F50FC4578208F4C1
    // [DQ] 0x12B7E95065B0D9C6, 0x0FCB9887C8BBEB8EA, 0x15DA2D4962DD1DDF
    // [DQ] 0x0FBD44C658CD37CF3, 0x3AB551CE4DB26158, 0x0D4BB30E2A3BC0074
    // [DQ] 0x3DD895D74ADFA541, 0x0D3D6F4FBA4D1C46D, 0x346ED9FC4369E96A
    // [DQ] 0x0DA60B8D0AD678846, 0x33031DE544042D73, 0x0DD0D7CC9AA0A4C5F
    // [DQ] 0x270241AA5005713C, 0x0C90C2086BE0B1010, 0x206F85B35768B525
    // [DQ] 0x0CE61E49FB966D409, 0x29D9C9985EDEF90E, 0x0C7D7A8B4B0D09822
    // [DQ] 0x2EB40D8159B33D17, 0x0C0BA6CADB7BD5C3B, 0x9ABFB3B6EDB88320
    // [DQ] 0x74B1D29A03B6E20C, 0x9DD277AFEAD54739, 0x73DC168304DB2615
    // [DQ] 0x94643B84E3630B12, 0x7A6A5AA80D6D6A3E, 0x9309FF9DE40ECF0B
    // [DQ] 0x7D079EB10A00AE27, 0x8708A3D2F00F9344, 0x6906C2FE1E01F268
    // [DQ] 0x806567CBF762575D, 0x6E6B06E7196C3671, 0x89D32BE0FED41B76
    // [DQ] 0x67DD4ACC10DA7A5A, 0x8EBEEFF9F9B9DF6F, 0x60B08ED517B7BE43
    // [DQ] 0x0A1D1937ED6D6A3E8, 0x4FDFF25238D8C2C4, 0x0A6BC5767D1BB67F1
    // [DQ] 0x48B2364B3FB506DD, 0x0AF0A1B4CD80D2BDA, 0x41047A6036034AF6
    // [DQ] 0x0A867DF55DF60EFC3, 0x4669BE79316E8EEF, 0x0BC66831ACB61B38C
    // [DQ] 0x5268E236256FD2A0, 0x0BB0B4703CC0C7795, 0x5505262F220216B9
    // [DQ] 0x0B2BD0B28C5BA3BBE, 0x5CB36A042BB45A92, 0x0B5D0CF31C2D7FFA7
    // [DQ] 0x5BDEAE1D2CD99E8B, 0x0EC63F2269B64C2B0, 0x26D930A756AA39C
    // [DQ] 0x0EB0E363F9C0906A9, 0x500571372076785, 0x0E2B87A1495BF4A82
    // [DQ] 0x0CB61B387BB12BAE, 0x0E5D5BE0D92D28E9B, 0x0BDBDF217CDCEFB7
    // [DQ] 0x0F1D4E24286D3D2D4, 0x1FDA836E68DDB3F8, 0x0F6B9265B81BE16CD
    // [DQ] 0x18B747776FB077E1, 0x0FF0F6A7088085AE6, 0x11010B5C66063BCA
    // [DQ] 0x0F862AE698F659EFF, 0x166CCF45616BFFD3, 0x0D70DD2EEA00AE278
    // [DQ] 0x3903B3C24E048354, 0x0D06016F7A7672661, 0x3E6E77DB4969474D
    // [DQ] 0x0D9D65ADCAED16A4A, 0x37D83BF040DF0B66, 0x0DEBB9EC5A9BCAE53
    // [DQ] 0x30B5FFE947B2CF7F, 0x0CABAC28ABDBDF21C, 0x24B4A3A653B39330
    // [DQ] 0x0CDD70693BAD03605, 0x23D967BF54DE5729, 0x0C4614AB8B3667A2E
    // [DQ] 0x2A6F2B945D681B02, 0x0C30C8EA1B40BBE37, 0x2D02EF8D5A05DF1B
    // [DQ] 0x3980000039800000
    // const char Str2[]
    // [STR2] db 'baseclass',0  // DATA XREF: sub_180006CAC+66↓o
    // [ALIGN] 8
    // const char aMLifestate[]
    // [AMLIFESTATE] db 'm_lifeState',0  // DATA XREF: sub_180006E10+11↓o
    // [ALIGN] 8
    // const char aDtBaseplayer[]
    // [ADTBASEPLAYER] db 'DT_BasePlayer',0  // DATA XREF: sub_180006E10+A↓o
    // [ALIGN] 8
    // const char aMIhealth[]
    // [AMIHEALTH] db 'm_iHealth',0  // DATA XREF: sub_180006E10+20↓o
    // [ALIGN] 8
    // const char aMNtickbase[]
    // [AMNTICKBASE] db 'm_nTickBase',0  // DATA XREF: sub_180006E10+35↓o
    // [ALIGN] 8
    // const char aMFflags[]
    // [AMFFLAGS] db 'm_fFlags',0  // DATA XREF: sub_180006E10+4A↓o
    // [ALIGN] 8
    // const char aMImaxhealth[]
    // [AMIMAXHEALTH] db 'm_iMaxHealth',0  // DATA XREF: sub_180006E10+5F↓o
    // [ALIGN] 8
    // const char aDtTfplayerreso[]
    // [ADTTFPLAYERRESO] db 'DT_TFPlayerResource',0
    // DATA XREF: sub_180006E10+66↓o
    // [ALIGN] 0x20
    // const char aMIteamnum[]
    // [AMITEAMNUM] db 'm_iTeamNum',0  // DATA XREF: sub_180006E10+78↓o
    // [ALIGN] 0x10
    // const char aDtBaseentity[]
    // [ADTBASEENTITY] db 'DT_BaseEntity',0  // DATA XREF: sub_180006E10+7F↓o
    // [ALIGN] 0x20
    // const char aMShared[]
    // [AMSHARED] db 'm_Shared',0  // DATA XREF: sub_180006E10+98↓o
    // [ALIGN] 0x10
    // const char aDtTfplayer[]
    // [ADTTFPLAYER] db 'DT_TFPlayer',0  // DATA XREF: sub_180006E10+91↓o
    // [ALIGN] 0x20
    // const char aMNplayercond[]
    // [AMNPLAYERCOND] db 'm_nPlayerCond',0  // DATA XREF: sub_180006E10+AD↓o
    // [ALIGN] 0x10
    // const char aMNplayercondex[]
    // [AMNPLAYERCONDEX] db 'm_nPlayerCondEx',0  // DATA XREF: sub_180006E10+C2↓o
    // const char aMPlayerclass[]
    // [AMPLAYERCLASS] db 'm_PlayerClass',0  // DATA XREF: sub_180006E10+D7↓o
    // [ALIGN] 0x10
    // const char aMBglowenabled[]
    // [AMBGLOWENABLED] db 'm_bGlowEnabled',0  // DATA XREF: sub_180006E10+EC↓o
    // [ALIGN] 0x20
    // const char aMFlheadscale[]
    // [AMFLHEADSCALE] db 'm_flHeadScale',0  // DATA XREF: sub_180006E10+104↓o
    // [ALIGN] 0x10
    // const char aMBhassapper[]
    // [AMBHASSAPPER] db 'm_bHasSapper',0  // DATA XREF: sub_180006E10+120↓o
    // [ALIGN] 0x20
    // const char aDtBaseobject[]
    // [ADTBASEOBJECT] db 'DT_BaseObject',0  // DATA XREF: sub_180006E10+119↓o
    // [ALIGN] 0x10
    // const char aMIupgradelevel[]
    // [AMIUPGRADELEVEL] db 'm_iUpgradeLevel',0  // DATA XREF: sub_180006E10+135↓o
    // const char aMIupgrademetal[]
    // [AMIUPGRADEMETAL] db 'm_iUpgradeMetal',0  // DATA XREF: sub_180006E10+14A↓o
    // const char aMIprimaryammot[]
    // [AMIPRIMARYAMMOT] db 'm_iPrimaryAmmoType',0
    // DATA XREF: sub_180006E10+166↓o
    // [ALIGN] 8
    // const char aDtBasecombatwe[]
    // [ADTBASECOMBATWE] db 'DT_BaseCombatWeapon',0
    // DATA XREF: sub_180006E10+15F↓o
    // [ALIGN] 0x20
    // const char aMIclip1[]
    // [AMICLIP1] db 'm_iClip1',0  // DATA XREF: sub_180006E10+17B↓o
    // [ALIGN] 0x10
    // const char aMIclip2[]
    // [AMICLIP2] db 'm_iClip2',0  // DATA XREF: sub_180006E10+190↓o
    // [ALIGN] 0x20
    // const char aMFllastcritche[]
    // [AMFLLASTCRITCHE] db 'm_flLastCritCheckTime',0
    // DATA XREF: sub_180006E10+1A5↓o
    // [ALIGN] 8
    // const char aDtTfweaponbase[]
    // [ADTTFWEAPONBASE] db 'DT_TFWeaponBase',0  // DATA XREF: sub_180006E10+1AC↓o
    // sub_180006E10+1F3↓o
    // const char aMFeffects[]
    // [AMFEFFECTS] db 'm_fEffects',0  // DATA XREF: sub_180006E10+1C4↓o
    // [ALIGN] 8
    // const char aDtBaseviewmode[]
    // [ADTBASEVIEWMODE] db 'DT_BaseViewModel',0  // DATA XREF: sub_180006E10+1CB↓o
    // [ALIGN] 0x10
    // const char aMVecviewoffset[]
    // [AMVECVIEWOFFSET] db 'm_vecViewOffset[0]',0
    // DATA XREF: sub_180006E10+1D7↓o
    // [ALIGN] 8
    // const char aMFllastfiretim[]
    // [AMFLLASTFIRETIM] db 'm_flLastFireTime',0  // DATA XREF: sub_180006E10+1EC↓o
    // [ALIGN] 0x20
    // const char aMBhealing[]
    // [AMBHEALING] db 'm_bHealing',0  // DATA XREF: sub_180006E10+20C↓o
    // [ALIGN] 0x10
    // const char aDtWeaponmedigu[]
    // [ADTWEAPONMEDIGU] db 'DT_WeaponMedigun',0  // DATA XREF: sub_180006E10+205↓o
    // [ALIGN] 8
    // const char aMHhealingtarge[]
    // [AMHHEALINGTARGE] db 'm_hHealingTarget',0  // DATA XREF: sub_180006E10+221↓o
    // [ALIGN] 0x20
    // const char aMFlchargelevel[]
    // [AMFLCHARGELEVEL] db 'm_flChargeLevel',0  // DATA XREF: sub_180006E10+236↓o
    // const char aMIweaponstate[]
    // [AMIWEAPONSTATE] db 'm_iWeaponState',0  // DATA XREF: sub_180006E10+24B↓o
    // [ALIGN] 0x20
    // const char aDtWeaponminigu[]
    // [ADTWEAPONMINIGU] db 'DT_WeaponMinigun',0  // DATA XREF: sub_180006E10+252↓o
    // [ALIGN] 8
    // const char aMBreadytobacks[]
    // [AMBREADYTOBACKS] db 'm_bReadyToBackstab',0
    // DATA XREF: sub_180006E10+264↓o
    // [ALIGN] 0x10
    // const char aDtTfweaponknif[]
    // [ADTTFWEAPONKNIF] db 'DT_TFWeaponKnife',0  // DATA XREF: sub_180006E10+26B↓o
    // [ALIGN] 8
    // const char aMHactiveweapon[]
    // [AMHACTIVEWEAPON] db 'm_hActiveWeapon',0  // DATA XREF: sub_180006E10+27D↓o
    // const char aDtBasecombatch[]
    // [ADTBASECOMBATCH] db 'DT_BaseCombatCharacter',0
    // DATA XREF: sub_180006E10+284↓o
    // [ALIGN] 0x10
    // const char aMItem[]
    // [AMITEM] db 'm_Item',0  // DATA XREF: sub_180006E10+296↓o
    // [ALIGN] 8
    // const char aDtEconentity[]
    // [ADTECONENTITY] db 'DT_EconEntity',0  // DATA XREF: sub_180006E10+29D↓o
    // [ALIGN] 8
    // const char aMFlchargeddama[]
    // [AMFLCHARGEDDAMA] db 'm_flChargedDamage',0
    // DATA XREF: sub_180006E10+2AF↓o
    // [ALIGN] 0x20
    // const char aDtTfsniperrifl[]
    // [ADTTFSNIPERRIFL] db 'DT_TFSniperRifle',0  // DATA XREF: sub_180006E10+2B6↓o
    // [ALIGN] 8
    // const char aMBtouched[]
    // [AMBTOUCHED] db 'm_bTouched',0  // DATA XREF: sub_180006E10+2CD↓o
    // [ALIGN] 8
    // const char aDtTfprojectile[]
    // [ADTTFPROJECTILE] db 'DT_TFProjectile_Pipebomb',0
    // DATA XREF: sub_180006E10+2D4↓o
    // sub_180006E10+2ED↓o
    // [ALIGN] 8
    // const char aMItype[]
    // [AMITYPE] db 'm_iType',0  // DATA XREF: sub_180006E10+2E6↓o
    // const char SubStr
    // [SUBSTR] db 0x0E2  // DATA XREF: sub_180007188:loc_1800071C9↓o
    // sub_18000CE70:loc_18000CF97↓o
    // [DB] 0x80, 0x8E, 0
    // [00000003 BYTES: COLLAPSED FUNCTION nullsub_1. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // const CHAR aClientDll[]
    // [ACLIENTDLL] db 'client.dll',0  // DATA XREF: StartAddress+29↓o
    // [ALIGN] 8
    // const char aCtfplayer[]
    // [ACTFPLAYER] db 'CTFPlayer',0  // DATA XREF: sub_180007A0C+32E↓o
    // [ALIGN] 0x20
    // const WCHAR Text
class="lbl">Text:
    // [TEXT] "UTF-16LE", 'Game data updated, some features might not work cor'
    // [TEXT] "UTF-16LE", 'rectly.',0
    // [ALIGN] 8
    // [DQ] offset qword_1800067C0
    // [OFF_180004EA0] dq offset _purecall  // DATA XREF: sub_18000839C:loc_1800083D0↓o
    // [DQ] offset _purecall
    // [DQ] offset qword_180006740
    // [OFF_180004EB8] dq offset sub_180007120  // DATA XREF: sub_18000839C+42↓o
    // sub_180008F70:loc_180008FD8↓o
    // [DQ] offset sub_180007184
    // [AALWAYS] db 'ALWAYS',0  // DATA XREF: .data:0000000180025B30↓o
    // [ALIGN] 0x10
    // [ARANGE] db 'RANGE',0  // DATA XREF: .data:0000000180025B28↓o
    // [ALIGN] 8
    // [ASC_180004ED8] db 'F',0  // DATA XREF: .data:0000000180025B18↓o
    // [ALIGN] 4
    // [ALSHIFT] db 'LShift',0  // DATA XREF: .data:0000000180025B10↓o
    // [ALIGN] 4
    // [AMOUSE3] db 'mouse3',0  // DATA XREF: .data:0000000180025B08↓o
    // [ALIGN] 4
    // [AMOUSE2] db 'mouse2',0  // DATA XREF: .data:0000000180025B00↓o
    // [ALIGN] 4
    // [AMOUSE1] db 'mouse1',0  // DATA XREF: .data:0000000180025AF8↓o
    // [ALIGN] 4
    // [AOFF] db 'OFF',0  // DATA XREF: sub_180009D88+115↓o
    // .data:off_180025AF0↓o ...
    // const char aD[3]
    // [AD] db '%d',0  // DATA XREF: sub_180009D88:loc_180009ECA↓o
    // [ALIGN] 4
    // const char Format[3]
    // [FORMAT] db '%s',0  // DATA XREF: sub_180009D88+134↓o
    // sub_18000CE70+588↓o
    // [ALIGN] 8
    // [AAIM] db '[+] AIM',0  // DATA XREF: sub_18000977C+10↓o
    // [AAIMBOT] db 'Aim Bot',0  // DATA XREF: sub_18000977C+45↓o
    // [AAIMKEY] db 'Aim Key',0  // DATA XREF: sub_18000977C+6E↓o
    // [AAUTOSHOOT] db 'Auto Shoot',0  // DATA XREF: sub_18000977C+8B↓o
    // [ALIGN] 0x10
    // [APRESERVETARGET] db 'Preserve Target',0  // DATA XREF: sub_18000977C+AD↓o
    // [ASILENTAIM] db 'Silent Aim',0  // DATA XREF: sub_18000977C+CF↓o
    // [ALIGN] 0x10
    // [AAIMSENTRY] db 'Aim Sentry',0  // DATA XREF: sub_18000977C+F1↓o
    // [ALIGN] 0x20
    // [AAIMSTICKIES] db 'Aim Stickies',0  // DATA XREF: sub_18000977C+113↓o
    // [ALIGN] 0x10
    // [AIGNOREDEADRING] db 'Ignore DeadRinger',0
    // DATA XREF: sub_18000977C+135↓o
    // [ALIGN] 8
    // [AIGNORECLOAKDIS] db 'Ignore Cloak/Disguse',0
    // DATA XREF: sub_18000977C+157↓o
    // [ALIGN] 0x20
    // [ANPCONLY] db 'NPC only',0  // DATA XREF: sub_18000977C+179↓o
    // [ALIGN] 0x10
    // [AMELEEAIM] db 'Melee Aim',0  // DATA XREF: sub_18000977C+1AA↓o
    // [ALIGN] 0x20
    // [ASTUFF] db '[+] STUFF',0  // DATA XREF: sub_18000977C+1C2↓o
    // [ALIGN] 0x10
    // [ABIGHEADS] db 'Big Heads',0  // DATA XREF: sub_18000977C+1DD↓o
    // [ALIGN] 0x20
    // [ASPINBOT] db 'SpinBot',0  // DATA XREF: sub_18000977C+1FF↓o
    // [ATRIGGERBOT] db 'Trigger Bot',0  // DATA XREF: sub_18000977C+221↓o
    // [ALIGN] 8
    // [AESP] db '[+] ESP',0  // DATA XREF: sub_18000977C+246↓o
    // [AENEMYONLY] db 'Enemy Only',0  // DATA XREF: sub_18000977C+261↓o
    // [ALIGN] 4
    // [ANAME] db 'Name',0  // DATA XREF: sub_18000977C+283↓o
    // [ALIGN] 4
    // [AHEALTH] db 'Health',0  // DATA XREF: sub_18000977C+2A5↓o
    // [ALIGN] 4
    // [AWEAPON] db 'Weapon',0  // DATA XREF: sub_18000977C+2CA↓o
    // [ALIGN] 8
    // [AUBERCHARGE] db 'UberCharge',0  // DATA XREF: sub_18000977C+2EC↓o
    // [ALIGN] 8
    // [ADISTANCE] db 'Distance',0  // DATA XREF: sub_18000977C+30E↓o
    // [ALIGN] 4
    // [ACLASS] db 'Class',0  // DATA XREF: sub_18000977C+330↓o
    // [ALIGN] 0x10
    // [AWORLDESP] db 'World ESP',0  // DATA XREF: sub_18000977C+352↓o
    // [ALIGN] 4
    // [ARADAR] db 'Radar',0  // DATA XREF: sub_18000977C+374↓o
    // [ALIGN] 8
    // [ARADARX] db 'Radar X',0  // DATA XREF: sub_18000977C+39B↓o
    // [ARADARY] db 'Radar Y',0  // DATA XREF: sub_18000977C+3C5↓o
    // [ARADARW] db 'Radar W',0  // DATA XREF: sub_18000977C+3EF↓o
    // [AMISC] db '[+] MISC',0  // DATA XREF: sub_18000977C+417↓o
    // [ALIGN] 0x10
    // [AAUTOBACKSTAB] db 'Auto Backstab',0  // DATA XREF: sub_18000977C+432↓o
    // [ALIGN] 0x20
    // [AANTICLOAKDISGU] db 'Anti-Cloak/Disguse',0
    // DATA XREF: sub_18000977C+454↓o
    // [ALIGN] 8
    // [ABUNNYHOP] db 'Bunny Hop',0  // DATA XREF: sub_18000977C+476↓o
    // [ALIGN] 8
    // [ACHATSPAM] db 'Chat Spam',0  // DATA XREF: sub_18000977C+498↓o
    // [ALIGN] 8
    // const char aLmaoboxHack141[]
    // [ALMAOBOXHACK141] db 'LMAOBOX HACK 1.4.15',0
    // DATA XREF: sub_180009D88+B1↓o
    // const char Source[]
    // [SOURCE] db 'ON',0  // DATA XREF: sub_180009D88+10B↓o
    // [ALIGN] 0x10
    // const char aFreeVersion[]
    // [AFREEVERSION] db '** Free version **',0
    // DATA XREF: sub_180009D88+296↓o
    // [ALIGN] 8
    // const char aSettingsIni[]
    // [ASETTINGSINI] db '_settings.ini',0  // DATA XREF: sub_18000A050+97↓o
    // [ALIGN] 8
    // [APLAYVOHEAVYMVM] db 'play vo/heavy_mvm_say_ready02.mp3',0
    // DATA XREF: sub_18000A050+2A9↓o
    // [ALIGN] 0x20
    // const CHAR aEngineDll[]
    // [AENGINEDLL] db 'engine.dll',0  // DATA XREF: StartAddress+38↓o
    // [ALIGN] 0x10
    // [ALASTDISGUISE] db 'lastdisguise',0  // DATA XREF: sub_18000A30C+F9↓o
    // [ALIGN] 0x20
    // [ASAYWWWLMAOBOXN] db 'say WWW.LMAOBOX.NET - THE BEST TF2 HACK!',0
    // DATA XREF: sub_18000A30C+1AD↓o
    // [ALIGN] 0x10
    // [ASAYGETGOODGETL] db 'say GET GOOD. GET LMAOBOX.',0
    // DATA XREF: sub_18000A30C+1B6↓o
    // [ALIGN] 0x10
    // [AOBJECTIVES] db 'objectives',0  // DATA XREF: sub_18000A050+E2↓o
    // [ALIGN] 0x20
    // [ATEAMONE] db 'teamone',0  // DATA XREF: sub_18000A050+F3↓o
    // [ATEAMTWO] db 'teamtwo',0  // DATA XREF: sub_18000A050+104↓o
    // [ATEAMTHREE] db 'teamthree',0  // DATA XREF: sub_18000A050+115↓o
    // [ALIGN] 0x20
    // [ATEAMFOUR] db 'teamfour',0  // DATA XREF: sub_18000A050+126↓o
    // [ALIGN] 0x10
    // [ABACKGROUND] db 'background',0  // DATA XREF: sub_18000A050+137↓o
    // [ALIGN] 4
    // [ALINES] db 'lines',0  // DATA XREF: sub_18000A050+148↓o
    // [ALIGN] 8
    // [AOUTLINES] db 'outlines',0  // DATA XREF: sub_18000A050+15B↓o
    // [ALIGN] 8
    // [ASELECTED] db 'selected',0  // DATA XREF: sub_18000A050+169↓o
    // [ALIGN] 8
    // [AHUDTEXT] db 'hud_text',0  // DATA XREF: sub_18000A050+178↓o
    // [ALIGN] 4
    // [ACROSS] db 'cross',0  // DATA XREF: sub_18000A050+187↓o
    // [ALIGN] 0x20
    // [ACROSSSEC] db 'cross_sec',0  // DATA XREF: sub_18000A050+198↓o
    // [ALIGN] 0x10
    // [AINVISTEAM2] db 'invis_team2',0  // DATA XREF: sub_18000A050+1A9↓o
    // [ALIGN] 0x20
    // [AINVISTEAM3] db 'invis_team3',0  // DATA XREF: sub_18000A050+1BA↓o
    // [ALIGN] 0x10
    // [AMENUON] db 'menu_on',0  // DATA XREF: sub_18000A050+1CB↓o
    // [AMENUOFF] db 'menu_off',0  // DATA XREF: sub_18000A050+1DA↓o
    // [ALIGN] 8
    // [AAIMTARGET] db 'aim_target',0  // DATA XREF: sub_18000A050+1ED↓o
    // [ALIGN] 4
    // [ABLACK] db 'black',0  // DATA XREF: sub_18000A050+1FE↓o
    // [ALIGN] 0x20
    // [AHPGREEN] db 'hp_green',0  // DATA XREF: sub_18000A050+20C↓o
    // [ALIGN] 0x10
    // [AHPYELLOW] db 'hp_yellow',0  // DATA XREF: sub_18000A050+21D↓o
    // [ALIGN] 4
    // [AHPRED] db 'hp_red',0  // DATA XREF: sub_18000A050+22E↓o
    // [ALIGN] 4
    // [AGRAY] db 'gray',0  // DATA XREF: sub_18000A050+23F↓o
    // [ALIGN] 4
    // [AFRIEND] db 'friend',0  // DATA XREF: sub_18000A050+250↓o
    // [ALIGN] 8
    // [AMERASMUS] db 'merasmus',0  // DATA XREF: sub_18000A050+261↓o
    // [ALIGN] 8
    // [AVECTORTTOOLONG] db 'vector<T> too long',0
    // DATA XREF: sub_18000AA3C+45↓o
    // sub_18000AAE8+2F↓o
    // [ALIGN] 0x20
    // [ASTRINGTOOLONG] db 'string too long',0  // DATA XREF: sub_18000A6FC+9B↓o
    // std::string::assign(std::string const &,unsigned __int64,unsigned __int64)+67↓o
    // [AINVALIDSTRINGP] db 'invalid string position',0
    // DATA XREF: std::string::assign(std::string const &,unsigned __int64,unsigned __int64)+26↓o
    // std::string::erase(unsigned __int64,unsigned __int64)+1C↓o
    // const CHAR aAimBot_0[]
    // [AAIMBOT_0] db 'aim_bot',0  // DATA XREF: sub_18000B00C+C↓o
    // sub_18000B3DC+72↓o
    // const CHAR AppName[]
    // [APPNAME] db '"Cvars"',0  // DATA XREF: sub_18000C220+13↓o
    // sub_18000C24C+34↓o
    // const CHAR aAimKey_0[]
    // [AAIMKEY_0] db 'aim_key',0  // DATA XREF: sub_18000B00C+23↓o
    // sub_18000B3DC+9B↓o
    // const CHAR aAimSafe[]
    // [AAIMSAFE] db 'aim_safe',0  // DATA XREF: sub_18000B00C+3A↓o
    // sub_18000B3DC+BC↓o
    // [ALIGN] 0x10
    // const CHAR aAimTeam[]
    // [AAIMTEAM] db 'aim_team',0  // DATA XREF: sub_18000B00C+51↓o
    // sub_18000B3DC+DD↓o
    // [ALIGN] 0x20
    // const CHAR aAimLock[]
    // [AAIMLOCK] db 'aim_lock',0  // DATA XREF: sub_18000B00C+68↓o
    // sub_18000B3DC+FE↓o
    // [ALIGN] 0x10
    // const CHAR KeyName[]
    // [KEYNAME] db 'bigheadss',0  // DATA XREF: sub_18000B00C+7F↓o
    // sub_18000B3DC+50↓o
    // [ALIGN] 0x20
    // const CHAR aAimSilent[]
    // [AAIMSILENT] db 'aim_silent',0  // DATA XREF: sub_18000B00C+96↓o
    // sub_18000B3DC+11F↓o
    // [ALIGN] 0x10
    // const CHAR aAimIgnoreFrien[]
    // [AAIMIGNOREFRIEN] db 'aim_ignore_friends',0
    // DATA XREF: sub_18000B00C+AD↓o
    // sub_18000B3DC+140↓o
    // [ALIGN] 8
    // const CHAR aAimIgnoreDr[]
    // [AAIMIGNOREDR] db 'aim_ignore_dr',0  // DATA XREF: sub_18000B00C+C4↓o
    // sub_18000B3DC+161↓o
    // [ALIGN] 8
    // const CHAR aAimSentry_0[]
    // [AAIMSENTRY_0] db 'aim_sentry',0  // DATA XREF: sub_18000B00C+DB↓o
    // sub_18000B3DC+182↓o
    // [ALIGN] 8
    // const CHAR aAimSticky[]
    // [AAIMSTICKY] db 'aim_sticky',0  // DATA XREF: sub_18000B00C+F2↓o
    // sub_18000B3DC+1A3↓o
    // [ALIGN] 8
    // const CHAR aAimShoot[]
    // [AAIMSHOOT] db 'aim_shoot',0  // DATA XREF: sub_18000B00C+109↓o
    // sub_18000B00C+348↓o ...
    // [ALIGN] 8
    // const CHAR aAimMelee[]
    // [AAIMMELEE] db 'aim_melee',0  // DATA XREF: sub_18000B00C+120↓o
    // sub_18000B3DC+1E5↓o
    // [ALIGN] 8
    // const CHAR aAimConstcrits[]
    // [AAIMCONSTCRITS] db 'aim_constcrits',0  // DATA XREF: sub_18000B00C+137↓o
    // sub_18000B3DC+206↓o
    // [ALIGN] 8
    // const CHAR aAimSmooth[]
    // [AAIMSMOOTH] db 'aim_smooth',0  // DATA XREF: sub_18000B00C+14E↓o
    // sub_18000B3DC+227↓o
    // [ALIGN] 8
    // const CHAR aAimTriggerbot[]
    // [AAIMTRIGGERBOT] db 'aim_triggerbot',0  // DATA XREF: sub_18000B00C+165↓o
    // sub_18000B3DC+248↓o
    // [ALIGN] 8
    // const CHAR aEspName[]
    // [AESPNAME] db 'esp_name',0  // DATA XREF: sub_18000B00C+17C↓o
    // sub_18000B3DC+269↓o
    // [ALIGN] 8
    // const CHAR aEspHealth[]
    // [AESPHEALTH] db 'esp_health',0  // DATA XREF: sub_18000B00C+193↓o
    // sub_18000B3DC+28A↓o
    // [ALIGN] 8
    // const CHAR aEspWeapon[]
    // [AESPWEAPON] db 'esp_weapon',0  // DATA XREF: sub_18000B00C+1AA↓o
    // sub_18000B3DC+2AB↓o
    // [ALIGN] 8
    // const CHAR aEspDistance[]
    // [AESPDISTANCE] db 'esp_distance',0  // DATA XREF: sub_18000B00C+1C1↓o
    // sub_18000B3DC+2CC↓o
    // [ALIGN] 8
    // const CHAR aEspFriends[]
    // [AESPFRIENDS] db 'esp_friends',0  // DATA XREF: sub_18000B00C+1DB↓o
    // sub_18000B3DC+30E↓o
    // [ALIGN] 8
    // const CHAR aEspClass[]
    // [AESPCLASS] db 'esp_class',0  // DATA XREF: sub_18000B00C+1EF↓o
    // sub_18000B3DC+32F↓o
    // [ALIGN] 8
    // const CHAR aEspStructure[]
    // [AESPSTRUCTURE] db 'esp_structure',0  // DATA XREF: sub_18000B00C+206↓o
    // sub_18000B3DC+350↓o
    // [ALIGN] 8
    // const CHAR aEspGlow[]
    // [AESPGLOW] db 'esp_glow',0  // DATA XREF: sub_18000B00C+21D↓o
    // sub_18000B3DC+396↓o
    // [ALIGN] 8
    // const CHAR aEspUber[]
    // [AESPUBER] db 'esp_uber',0  // DATA XREF: sub_18000B00C+234↓o
    // sub_18000B3DC+3B3↓o
    // [ALIGN] 8
    // const CHAR aEspRadar[]
    // [AESPRADAR] db 'esp_radar',0  // DATA XREF: sub_18000B00C+24B↓o
    // sub_18000B3DC+3D4↓o
    // [ALIGN] 8
    // const CHAR aEspRadarX[]
    // [AESPRADARX] db 'esp_radar_x',0  // DATA XREF: sub_18000B00C+262↓o
    // sub_18000B3DC+3F5↓o
    // [ALIGN] 8
    // const CHAR aEspRadarY[]
    // [AESPRADARY] db 'esp_radar_y',0  // DATA XREF: sub_18000B00C+279↓o
    // sub_18000B3DC+416↓o
    // [ALIGN] 8
    // const CHAR aEspRadarW[]
    // [AESPRADARW] db 'esp_radar_w',0  // DATA XREF: sub_18000B00C+290↓o
    // sub_18000B3DC+437↓o
    // const CHAR aTaunt[]
    // [ATAUNT] db 'taunt',0  // DATA XREF: sub_18000B00C+2A7↓o
    // sub_18000B3DC+49A↓o
    // [ALIGN] 0x20
    // const CHAR aMiscBunnyhop[]
    // [AMISCBUNNYHOP] db 'misc_bunnyhop',0  // DATA XREF: sub_18000B00C+2BE↓o
    // sub_18000B3DC+479↓o
    // [ALIGN] 0x10
    // const CHAR aMiscSpeedOn[]
    // [AMISCSPEEDON] db 'misc_speed_on',0  // DATA XREF: sub_18000B00C+2D5↓o
    // sub_18000B3DC+4BB↓o
    // [ALIGN] 0x20
    // const CHAR aMiscSpeedKey[]
    // [AMISCSPEEDKEY] db 'misc_speed_key',0  // DATA XREF: sub_18000B00C+2EC↓o
    // sub_18000B3DC+4DC↓o
    // [ALIGN] 0x10
    // const CHAR aMiscSpeed[]
    // [AMISCSPEED] db 'misc_speed',0  // DATA XREF: sub_18000B00C+303↓o
    // sub_18000B3DC+4FD↓o
    // [ALIGN] 0x20
    // const CHAR aMiscAntiss[]
    // [AMISCANTISS] db 'misc_antiss',0  // DATA XREF: sub_18000B00C+31A↓o
    // sub_18000B3DC+560↓o
    // [ALIGN] 0x10
    // const CHAR aMiscSpinbot[]
    // [AMISCSPINBOT] db 'misc_spinbot',0  // DATA XREF: sub_18000B00C+331↓o
    // sub_18000B3DC+5A2↓o
    // [ALIGN] 0x20
    // const CHAR aAimIgnoreCloak[]
    // [AAIMIGNORECLOAK] db 'aim_ignore_cloak',0  // DATA XREF: sub_18000B00C+35F↓o
    // sub_18000B3DC+5E4↓o
    // [ALIGN] 8
    // const CHAR aEspEnemyOnly[]
    // [AESPENEMYONLY] db 'esp_enemy_only',0  // DATA XREF: sub_18000B00C+376↓o
    // sub_18000B3DC+605↓o
    // [ALIGN] 8
    // const CHAR aMiscChatspam[]
    // [AMISCCHATSPAM] db 'misc_chatspam',0  // DATA XREF: sub_18000B00C+38D↓o
    // sub_18000B3DC+626↓o
    // [ALIGN] 8
    // const CHAR aCloakRemoval[]
    // [ACLOAKREMOVAL] db 'cloak_removal',0  // DATA XREF: sub_18000B00C+3A7↓o
    // sub_18000B3DC+647↓o
    // [ALIGN] 8
    // const CHAR aAutoBackstab_0[]
    // [AAUTOBACKSTAB_0] db 'auto_backstab',0  // DATA XREF: sub_18000B00C+3B3↓o
    // sub_18000B3DC+668↓o
    // [ALIGN] 8
    // const CHAR aEspBox[]
    // [AESPBOX] db 'esp_box',0  // DATA XREF: sub_18000B3DC+2ED↓o
    // const CHAR aEspOptical[]
    // [AESPOPTICAL] db 'esp_optical',0  // DATA XREF: sub_18000B3DC+371↓o
    // [ALIGN] 0x10
    // const CHAR aEspRadarAltitu[]
    // [AESPRADARALTITU] db 'esp_radar_altitude',0
    // DATA XREF: sub_18000B3DC+458↓o
    // [ALIGN] 8
    // const CHAR aMiscSpeedMode[]
    // [AMISCSPEEDMODE] db 'misc_speed_mode',0  // DATA XREF: sub_18000B3DC+51E↓o
    // const CHAR aMiscSniper[]
    // [AMISCSNIPER] db 'misc_sniper',0  // DATA XREF: sub_18000B3DC+54C↓o
    // [ALIGN] 8
    // const CHAR aMiscModelhack[]
    // [AMISCMODELHACK] db 'misc_modelhack',0  // DATA XREF: sub_18000B3DC+581↓o
    // [ALIGN] 8
    // const CHAR aGameuiDll[]
    // [AGAMEUIDLL] db 'gameui.dll',0  // DATA XREF: StartAddress+1D↓o
    // [ALIGN] 8
    // const CHAR aTier0Dll[]
    // [ATIER0DLL] db 'tier0.dll',0  // DATA XREF: StartAddress+47↓o
    // [ALIGN] 0x20
    // const WCHAR aPleaseRestartA
class="lbl">aPleaseRestartA:
    // [TEXT] "UTF-16LE", 'Please restart and try again. Error no. 0x1.',0
    // [ALIGN] 0x20
    // const CHAR ProcName[]
    // [PROCNAME] db 'CreateInterface',0  // DATA XREF: StartAddress:loc_18000BB3C↓o
    // [AXXXXXXXXX] db 'xxxxx????xx????xx',0
    // DATA XREF: StartAddress+6C↓o
    // [ALIGN] 8
    // [QWORD_1800056C8] dq 0x0CCCCCC0D8D48D233, 0x33CCCCCCCC15FFCC, 0x0D2
    // DATA XREF: StartAddress+73↓o
    // [AVENGINECLIENT0] db 'VEngineClient013',0  // DATA XREF: StartAddress+A1↓o
    // [ALIGN] 8
    // const WCHAR aPleaseGetANewV
class="lbl">aPleaseGetANewV:
    // StartAddress+D9↓o
    // [TEXT] "UTF-16LE", 'Please get a new version.',0
    // [ALIGN] 0x10
    // const WCHAR aPleaseRestartA_0
class="lbl">aPleaseRestartA_0:
    // [TEXT] "UTF-16LE", 'Please restart and try again. Error no. 2.',0
    // [ALIGN] 8
    // [AVCLIENT017] db 'VClient017',0  // DATA XREF: StartAddress+F0↓o
    // [ALIGN] 8
    // [AVCLIENTENTITYL] db 'VClientEntityList003',0
    // DATA XREF: StartAddress+185↓o
    // [ALIGN] 0x10
    // [AXXXXXXXXXX] db 'xxx????xxxxxx????x',0
    // DATA XREF: StartAddress:loc_18000BC93↓o
    // [ALIGN] 8
    // [QWORD_1800057C8] dq 0x48CCCCCCCC0D8B48, 0x0CCCCCCE810FF018B, 0x0E8CC
    // DATA XREF: StartAddress+1B2↓o
    // const WCHAR aPleaseRestartA_1
class="lbl">aPleaseRestartA_1:
    // [TEXT] "UTF-16LE", 'Please restart and try again. Error no. 3.',0
    // [ALIGN] 8
    // [AVMODELINFOCLIE] db 'VModelInfoClient006',0
    // DATA XREF: StartAddress+1E1↓o
    // [ALIGN] 0x10
    // [AVGUISURFACE030] db 'VGUI_Surface030',0  // DATA XREF: StartAddress+214↓o
    // [AVGUIPANEL009] db 'VGUI_Panel009',0  // DATA XREF: StartAddress+247↓o
    // [ALIGN] 0x10
    // [AENGINETRACECLI] db 'EngineTraceClient003',0
    // DATA XREF: StartAddress+27F↓o
    // [ALIGN] 8
    // [AVENGINEVGUI002] db 'VEngineVGui002',0  // DATA XREF: StartAddress+2B6↓o
    // [ALIGN] 0x20
    // const WCHAR aPleaseRestartA_2
class="lbl">aPleaseRestartA_2:
    // [TEXT] "UTF-16LE", 'Please restart and try again. Error no. 4.',0
    // [ALIGN] 8
    // [AENGINECLIENTRE] db 'EngineClientReplay001',0
    // DATA XREF: StartAddress+340↓o
    // [ALIGN] 0x10
    // [AXXXXXXX] db 'xxx????xxxx',0  // DATA XREF: StartAddress+34A↓o
    // [ALIGN] 0x20
    // [QWORD_180005920] dq 0x0FCCCCCCCC058B48, 0x0C702F
    // DATA XREF: StartAddress+351↓o
    // [AVENGINECVAR004] db 'VEngineCvar004',0  // DATA XREF: StartAddress+375↓o
    // [ALIGN] 0x20
    // const WCHAR aPleaseRestartA_3
class="lbl">aPleaseRestartA_3:
    // [TEXT] "UTF-16LE", 'Please restart and try again. Generic error.',0
    // [ALIGN] 0x20
    // const char Command[]
    // [COMMAND] db 'start https://lmaobox.net',0
    // DATA XREF: DllMain+57↓o
    // [ALIGN] 4
    // [AMEDIC] db 'Medic',0  // DATA XREF: sub_18000CE70:loc_18000D31C↓o
    // [ALIGN] 4
    // [ASCOUT] db 'Scout',0  // DATA XREF: sub_18000CE70:loc_18000D340↓o
    // [ALIGN] 0x10
    // [ASOLDIER] db 'Soldier',0  // DATA XREF: sub_18000CE70:loc_18000D32E↓o
    // [ADEMO] db 'Demo',0  // DATA XREF: sub_18000CE70:loc_18000D325↓o
    // [ALIGN] 0x20
    // [AHEAVY] db 'Heavy',0  // DATA XREF: sub_18000CE70:loc_18000D313↓o
    // [ALIGN] 8
    // [AENGINEER] db 'Engineer',0  // DATA XREF: sub_18000CE70:loc_18000D2F8↓o
    // [ALIGN] 4
    // [ASNIPER] db 'Sniper',0  // DATA XREF: sub_18000CE70:loc_18000D337↓o
    // [ALIGN] 4
    // [ASPY] db 'Spy',0  // DATA XREF: sub_18000CE70:loc_18000D301↓o
    // [APYRO] db 'Pyro',0  // DATA XREF: sub_18000CE70:loc_18000D30A↓o
    // [ALIGN] 8
    // const char aUnk[]
    // [AUNK] db '-unk-',0  // DATA XREF: sub_18000CE70+47F↓o
    // [ALIGN] 0x10
    // const char asc_180005A10[]
    // [ASC_180005A10] db '%f',0  // DATA XREF: sub_18000C24C+F↓o
    // [ALIGN] 8
    // [ATF2BUILD] db 'TF2 Build',0  // DATA XREF: sub_18000C29C+56↓o
    // sub_18000C29C+B7↓o ...
    // [ALIGN] 4
    // const WCHAR aS
class="lbl">aS:
    // sub_18000C560+32↓o ...
    // [TEXT] "UTF-16LE", '%S',0
    // [ALIGN] 0x10
    // const char aNewmatchfound[]
    // [ANEWMATCHFOUND] db 'NewMatchFound',0  // DATA XREF: sub_18000C8E8+43↓o
    // [ALIGN] 0x20
    // const char aNotificationto[]
    // [ANOTIFICATIONTO] db 'NotificationToastContainer',0
    // DATA XREF: sub_18000C8E8+69↓o
    // [ALIGN] 0x20
    // const char aFocusoverlaypa[]
    // [AFOCUSOVERLAYPA] db 'FocusOverlayPanel',0
    // DATA XREF: sub_18000C8E8+AD↓o
    // [ALIGN] 8
    // [ALLCLFJHI] db 'llclfj~',7,'`hi`',0  // DATA XREF: sub_18000CB04:loc_18000CBE4↓o
    // sub_18000CB04+225↓o
    // [ALIGN] 8
    // [QWORD_180005A88] dq 0x0A8A7A8A8CDB5B6B7, 0x0BAA8A2C5B2A6AA
    // DATA XREF: sub_18000CB04+126↓o
    // [AVISITWWWLMAOBO] db 'VISIT WWW.LMAOBOX.NET FOR PREMIUM VERSION AND FREE UPDATES',0
    // DATA XREF: sub_18000CB04+28A↓o
    // [BYTE_180005AD3] db 0  // DATA XREF: X:0000000180003A68↑o
    // X:0000000180003CE8↑o ...
    // const char ArgList[]
    // [ARGLIST] db '[bot] ',0  // DATA XREF: sub_18000CE70+222↓o
    // [ALIGN] 4
    // const char aSS[]
    // [ASS] db '%s%s',0  // DATA XREF: sub_18000CE70+258↓o
    // [ALIGN] 8
    // const char a0fm[]
    // [A0FM] db '[%.0fm]',0  // DATA XREF: sub_18000CE70+304↓o
    // const char aUbercharge_0[]
    // [AUBERCHARGE_0] db 'UBERCHARGE',0  // DATA XREF: sub_18000CE70+395↓o
    // [ALIGN] 0x20
    // const char aUberchargeD[]
    // [AUBERCHARGED] db 'UberCharge %d%%',0  // DATA XREF: sub_18000CE70+40F↓o
    // const char aZoomed[]
    // [AZOOMED] db '(Zoomed)',0  // DATA XREF: sub_18000CE70+51E↓o
    // [ALIGN] 4
    // const char aIHp[]
    // [AIHP] db '%i hp',0  // DATA XREF: sub_18000CE70+677↓o
    // [ALIGN] 8
    // const char aIHp_0[]
    // [AIHP_0] db '%i%% hp',0  // DATA XREF: sub_18000CE70+694↓o
    // sub_18000D624+7EA↓o
    // const char aMerasmus_0[]
    // [AMERASMUS_0] db 'Merasmus!',0  // DATA XREF: sub_18000D624+CD↓o
    // [ALIGN] 0x20
    // const char aMonoculus[]
    // [AMONOCULUS] db 'MONOCULUS!',0  // DATA XREF: sub_18000D624+10B↓o
    // [ALIGN] 4
    // const char aTank[]
    // [ATANK] db 'TANK!',0  // DATA XREF: sub_18000D624+14E↓o
    // [ALIGN] 4
    // const char aAmmo[]
    // [AAMMO] db 'ammo',0  // DATA XREF: sub_18000D624+187↓o
    // sub_18000D624+2D7↓o
    // [ALIGN] 0x20
    // const char aMedkitSmall[]
    // [AMEDKITSMALL] db 'medkit_small',0  // DATA XREF: sub_18000D624+276↓o
    // [ALIGN] 0x10
    // [APILLS] db 'pills',0  // DATA XREF: sub_18000D624+28A↓o
    // [ALIGN] 8
    // const char aMedkit[]
    // [AMEDKIT] db 'medkit',0  // DATA XREF: sub_18000D624:loc_18000D8BC↓o
    // [ALIGN] 0x20
    // const char aMeat[]
    // [AMEAT] db '_meat',0  // DATA XREF: sub_18000D624+2AF↓o
    // [ALIGN] 8
    // const char aAmmo_0[]
    // [AAMMO_0] db '/ammo',0  // DATA XREF: sub_18000D624+2C3↓o
    // [ALIGN] 0x10
    // [ASENTRY] db 'Sentry',0  // DATA XREF: sub_18000D624:loc_18000DCD2↓o
    // [ALIGN] 8
    // [ATELEPORTER] db 'Teleporter',0  // DATA XREF: sub_18000D624:loc_18000DBF0↓o
    // [ALIGN] 8
    // [ADISPENSER] db 'Dispenser',0  // DATA XREF: sub_18000D624:loc_18000DBD6↓o
    // [ALIGN] 8
    // const char aZomhwtf[]
    // [AZOMHWTF] db 'zomhwtf',0  // DATA XREF: sub_18000D624+5B9↓o
    // const char aSapped[]
    // [ASAPPED] db '** SAPPED **',0  // DATA XREF: sub_18000D624+75B↓o
    // [ALIGN] 0x10
    // const char aSI[]
    // [ASI] db '%s: %i',0  // DATA XREF: sub_18000D624+7A6↓o
    // [ALIGN] 8
    // const char aCapture[]
    // [ACAPTURE] db '**Capture**',0  // DATA XREF: sub_18000D624+376↓o
    // const char asc_180005BE4[]
    // [ASC_180005BE4] db '(#)',0  // DATA XREF: sub_18000D624+3B8↓o
    // const char asc_180005BE8[]
    // [ASC_180005BE8] db '-X-',0  // DATA XREF: sub_18000D624+402↓o
    // const char asc_180005BEC[]
    // [ASC_180005BEC] db '<->',0  // DATA XREF: sub_18000D624+48C↓o
    // const char asc_180005BF0[]
    // [ASC_180005BF0] db '[&]',0  // DATA XREF: sub_18000D624+58F↓o
    // const char asc_180005BF4[]
    // [ASC_180005BF4] db '\\',0  // DATA XREF: sub_18000D624+559↓o
    // [ALIGN] 8
    // [AHUDENGBUILDSEN] db 'HUD/eng_build_sentry',0
    // DATA XREF: sub_18000E46C+4A↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD] db 'HUD/leaderboard_class_scout',0
    // DATA XREF: sub_18000E46C+7C↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_0] db 'HUD/leaderboard_class_sniper',0
    // DATA XREF: sub_18000E46C+A0↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_1] db 'HUD/leaderboard_class_soldier',0
    // DATA XREF: sub_18000E46C+C4↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_2] db 'HUD/leaderboard_class_demo',0
    // DATA XREF: sub_18000E46C+E8↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_3] db 'HUD/leaderboard_class_medic',0
    // DATA XREF: sub_18000E46C+10C↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_4] db 'HUD/leaderboard_class_heavy',0
    // DATA XREF: sub_18000E46C+130↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_5] db 'HUD/leaderboard_class_pyro',0
    // DATA XREF: sub_18000E46C+154↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_6] db 'HUD/leaderboard_class_spy',0
    // DATA XREF: sub_18000E46C+178↓o
    // [ALIGN] 0x10
    // [AHUDLEADERBOARD_7] db 'HUD/leaderboard_class_engineer',0
    // DATA XREF: sub_18000E46C+19C↓o
    // [ALIGN] 0x10
    // const CHAR Name[]
    // [NAME] db 'LOCALAPPDATA',0  // DATA XREF: sub_18000A050+39↓o
    // [ALIGN] 0x20
    // const char asc_180005D40[]
    // [ASC_180005D40] db '\',0  // DATA XREF: sub_18000A050+46↓o
    // _spawnvpe+157↓o ...
    // [ALIGN] 4
    // const float Y
    // [Y] dd 2000.0  // DATA XREF: sub_18000E21C+8E↓r
    // [ALIGN] 0x10
    // [STRU_180005D50] FuncInfo <0x19930522, 1, rva stru_180021C18, 0, 0, 3, \
    // DATA XREF: X:0000000180021C14↓o
    // [RVA] stru_180021C20, 32, 0, 0>
    // [ALIGN] 0x20
    // [STRU_180005D80] FuncInfo <0x19930522, 1, rva stru_180021C18, 0, 0, 1, \
    // DATA XREF: X:0000000180021C44↓o
    // [RVA] stru_180021C48, 32, 0, 0>
    // [DWORD_180005DA8] dd 0x3F800000  // DATA XREF: sub_180008ABC+CC↓r
    // sub_1800092A8:loc_1800092F8↓r ...
    // [DWORD_180005DAC] dd 0x447A0000  // DATA XREF: sub_18000E21C+E5↓r
    // sub_18000E21C+10A↓r
    // [DWORD_180005DB0] dd 0x0BA03126F  // DATA XREF: sub_18000E21C+DC↓r
    // sub_18000E21C+ED↓r
    // [ALIGN] 0x20
    // [XMMWORD_180005DC0] xmmword 0x80000000800000008000000080000000
    // DATA XREF: sub_1800069B0+A4↓r
    // sub_1800069B0:loc_180006A85↓r ...
    // [QWORD_180005DD0] dq 0x3F91DF46A2529D39  // DATA XREF: sub_18000DE7C+90↓r
    // sub_18000E21C+66↓r
    // [DWORD_180005DD8] dd 0x3F000000  // DATA XREF: sub_180008ABC+1EC↓r
    // sub_180008ABC+470↓r ...
    // [ALIGN] 0x20
    // [QWORD_180005DE0] dq 0x3F50624DD2F1A9FC  // DATA XREF: sub_18000C014+53↓r
    // [ALIGN] 0x10
    // [STRU_180005DF0] FuncInfo <0x19930522, 1, rva stru_180021CD8, 0, 0, 1, \
    // DATA XREF: X:0000000180021CD4↓o
    // [RVA] stru_180021CE0, 32, 0, 0>
    // [ALIGN] 0x20
    // [STRU_180005E20] FuncInfo <0x19930522, 1, rva stru_180021C18, 0, 0, 1, \
    // DATA XREF: X:0000000180021CF8↓o
    // [RVA] stru_180021CFC, 32, 0, 0>
    // [DWORD_180005E48] dd 0x43340000  // DATA XREF: sub_180007F1C+C4↓r
    // sub_18000854C+B2↓r ...
    // [ALIGN] 0x10
    // [QWORD_180005E50] dq 0  // DATA XREF: sub_18000854C+96↓r
    // _handle_exc+AE↓r ...
    // [QWORD_180005E58] dq 0x404CA5DC20000000  // DATA XREF: sub_18000854C+79↓r
    // sub_18000854C+9F↓r
    // [QWORD_180005E60] dq 0x3F76C16C16C16C17  // DATA XREF: sub_180007960+38↓r
    // sub_180007960+40↓r
    // [QWORD_180005E68] dq 0x400921FB54442D18  // DATA XREF: sub_180007960+1D↓r
    // sub_180007960+25↓r
    // [DWORD_180005E70] dd 0  // DATA XREF: sub_180008624+11C↓r
    // sub_1800092A8+37↓r
    // [DWORD_180005E74] dd 0x42652EE1  // DATA XREF: sub_1800069B0+8F↓r
    // sub_1800069B0+F4↓r ...
    // [DWORD_180005E78] dd 0x3A83126F  // DATA XREF: sub_1800069B0+79↓r
    // [DWORD_180005E7C] dd 0x0C1B00000  // DATA XREF: sub_18000DE7C+338↓r
    // [QWORD_180005E80] dq 0x3FD3333333333333  // DATA XREF: sub_18000DE7C+2D4↓r
    // [QWORD_180005E88] dq 0x3FE3333333333333  // DATA XREF: sub_18000DE7C+2B4↓r
    // [DWORD_180005E90] dd 0x0BA5A740E  // DATA XREF: sub_18000DE7C+18A↓r
    // sub_18000DE7C+192↓r
    // [DWORD_180005E94] dd 0x0C4960000  // DATA XREF: sub_18000DE7C:loc_18000DFAF↓r
    // sub_18000DE7C:loc_18000DFDB↓r
    // [DWORD_180005E98] dd 0x44960000  // DATA XREF: sub_18000DE7C+EA↓r
    // [ALIGN] 0x20
    // [STRU_180005EA0] FuncInfo <0x19930522, 6, rva stru_180021E2C, 2, rva stru_180021DDC, 14,\
    // DATA XREF: X:0000000180021DB0↓o
    // X:0000000180021DC0↓o ...
    // [RVA] stru_180021E5C, 40, 0, 0>
    // [ALIGN] 0x10
    // [STRU_180005ED0] FuncInfo <0x19930522, 1, rva stru_180021CD8, 0, 0, 1, \
    // DATA XREF: X:0000000180021EDC↓o
    // [RVA] stru_180021EE0, 32, 0, 0>
    // [DWORD_180005EF8] dd 0x40400000  // DATA XREF: sub_180008624+148↓r
    // [DWORD_180005EFC] dd 0x3E4CCCCD  // DATA XREF: sub_180008624+13B↓r
    // sub_180008F70+2E8↓r
    // [DWORD_180005F00] dd 0x41200000  // DATA XREF: sub_180007188:loc_180007352↓r
    // sub_1800073DC+E6↓r ...
    // [DWORD_180005F04] dd 0x0C61C3C00  // DATA XREF: sub_180007188:loc_1800073B7↓r
    // [DWORD_180005F08] dd 0x41700000  // DATA XREF: sub_180007188+225↓r
    // [DWORD_180005F0C] dd 0x0C1200000  // DATA XREF: sub_180007188:loc_180007399↓r
    // sub_18000CE70+1FC↓r
    // [DWORD_180005F10] dd 0x40A00000  // DATA XREF: sub_180007188:loc_180007379↓r
    // [DWORD_180005F14] dd 0x0C1A00000  // DATA XREF: sub_180007188+1D7↓r
    // [DWORD_180005F18] dd 0x0C0A00000  // DATA XREF: sub_180007188+34↓r
    // [DWORD_180005F1C] dd 0x0BF800000  // DATA XREF: sub_180006B00+E5↓r
    // sub_180006B00+114↓r ...
    // [DWORD_180005F20] dd 0x3C8EFA35  // DATA XREF: sub_180006B00+24↓r
    // sub_180008F70+BA↓r ...
    // [ALIGN] 0x10
    // [STRU_180005F30] FuncInfo <0x19930522, 1, rva stru_180021F9C, 0, 0, 3, \
    // DATA XREF: X:0000000180021F98↓o
    // [RVA] stru_180021FA4, 128, 0, 0>
    // [DWORD_180005F58] dd 0x45FFF800  // DATA XREF: sub_180008F70+13E↓r
    // [ALIGN] 0x20
    // [STRU_180005F60] FuncInfo <0x19930522, 3, rva stru_18002200C, 1, rva stru_180021FE4, 6, \
    // DATA XREF: X:0000000180021FC8↓o
    // X:0000000180021FE0↓o
    // [RVA] stru_180022024, 128, 0, 0>
    // [DWORD_180005F88] dd 0x3F7FBE77  // DATA XREF: sub_18000839C+18A↓r
    // [ALIGN] 0x10
    // [QWORD_180005F90] dq 0x404CA5DC1A63C1F8  // DATA XREF: sub_180008024+16F↓r
    // [ALIGN] 0x20
    // [STRU_180005FA0] FuncInfo <0x19930522, 2, rva stru_1800220E4, 1, rva stru_1800220BC, 4, \
    // DATA XREF: X:0000000180022088↓o
    // X:00000001800220B8↓o
    // [RVA] stru_1800220F4, 208, 0, 0>
    // [QWORD_180005FC8] dq 0x4059000000000000  // DATA XREF: sub_18000CE70+619↓r
    // sub_18000D624+715↓r
    // [DWORD_180005FD0] dd 0x41A00000  // DATA XREF: sub_18000D624+4AA↓r
    // [DWORD_180005FD4] dd 0x44C80000  // DATA XREF: sub_18000D624+256↓r
    // [ALIGN] 0x20
    // [STRU_180005FE0] FuncInfo <0x19930522, 2, rva stru_1800220E4, 1, rva stru_180022154, 4, \
    // DATA XREF: X:0000000180022120↓o
    // X:0000000180022150↓o
    // [RVA] stru_18002217C, 176, 0, 0>
    // [DWORD_180006008] dd 0x42C80000  // DATA XREF: sub_18000CE70+3F5↓r
    // [ALIGN] 0x10
    // [STRU_180006010] FuncInfo <0x19930522, 5, rva stru_1800221EC, 1, rva stru_1800221C4, 7, \
    // DATA XREF: X:00000001800221AC↓o
    // X:00000001800221C0↓o
    // [RVA] stru_180022214, 32, 0, 0>
    // [ALIGN] 0x20
    // [STRU_180006040] FuncInfo <0x19930522, 4, rva stru_1800222A0, 1, rva stru_180022278, 7, \
    // DATA XREF: X:0000000180022258↓o
    // X:0000000180022274↓o
    // [RVA] stru_1800222C0, 32, 0, 0>
    // [ALIGN] 0x10
    // [STRU_180006070] FuncInfo <0x19930522, 7, rva stru_180022310, 0, 0, 7, \
    // DATA XREF: X:000000018002230C↓o
    // [RVA] stru_180022348, 32, 0, 0>
    // [ALIGN] 0x20
    // [STRU_1800060A0] FuncInfo <0x19930522, 1, rva stru_180022398, 0, 0, 3, \
    // DATA XREF: X:0000000180022394↓o
    // [RVA] stru_1800223A0, 32, 0, 0>
    // [ALIGN] 0x10
    // [STRU_1800060D0] FuncInfo <0x19930522, 2, rva stru_1800220E4, 1, rva stru_180022434, 4, \
    // DATA XREF: X:00000001800223FC↓o
    // X:0000000180022430↓o
    // [RVA] stru_18002245C, 112, 0, 0>
    // [DWORD_1800060F8] dd 0x42200000  // DATA XREF: sub_1800073DC:loc_180007519↓r
    // sub_1800073DC+15A↓r ...
    // [DWORD_1800060FC] dd 0x43B40000  // DATA XREF: sub_180007F1C+CD↓r
    // sub_180008810+219↓r
    // [STRU_180006100] FuncInfo <0x19930522, 2, rva stru_1800220E4, 1, rva stru_1800224AC, 4, \
    // DATA XREF: X:0000000180022488↓o
    // X:00000001800224A8↓o
    // [RVA] stru_1800224D4, 32, 0, 0>
    // [ALIGN] 0x10
    // [STRU_180006130] FuncInfo <0x19930522, 2, rva stru_1800220E4, 1, rva stru_180022520, 4, \
    // DATA XREF: X:0000000180022500↓o
    // X:000000018002251C↓o
    // [RVA] stru_180022548, 56, 0, 0>
    // [DWORD_180006158] dd 0x41980000  // DATA XREF: sub_1800073DC+10C↓r
    // [ALIGN] 0x20
    // [STRU_180006160] FuncInfo <0x19930522, 1, rva stru_1800225B0, 0, 0, 3, \
    // DATA XREF: X:00000001800225AC↓o
    // [RVA] stru_1800225B8, 32, 0, 0>
    // [DWORD_180006188] dd 0x0C3340000  // DATA XREF: sub_180008810:loc_180008A21↓r
    // [DWORD_18000618C] dd 0x0C3B40000  // DATA XREF: sub_180008810+1EB↓r
    // [STRU_180006190] FuncInfo <0x19930522, 2, rva stru_1800220E4, 1, rva stru_180022618, 2, \
    // DATA XREF: X:00000001800225F4↓o
    // X:0000000180022614↓o
    // [RVA] stru_180022640, 32, 0, 0>
    // [DWORD_1800061B8] dd 0x40000000  // DATA XREF: sub_18000A30C+18A↓r
    // acosf:loc_18000F077↓r
    // [ALIGN] 0x20
    // [STRU_1800061C0] FuncInfo <0x19930522, 12, rva stru_180022744, 5, rva stru_18002267C, \
    // DATA XREF: X:000000018002265C↓o
    // X:0000000180022678↓o
    // [21,] rva stru_1800227A4, 32, 0, 0>
    // [ALIGN] 0x10
    // [STRU_1800061F0] FuncInfo <0x19930522, 1, rva stru_180022894, 0, 0, 1, \
    // DATA XREF: X:0000000180022858↓o
    // [RVA] stru_18002285C, 32, 0, 0>
    // [ALIGN] 0x20
    // [STRU_180006220] FuncInfo <0x19930522, 1, rva stru_180022874, 0, 0, 1, \
    // DATA XREF: X:0000000180022870↓o
    // [RVA] stru_18002287C, 32, 0, 0>
    // [ALIGN] 0x10
    // [STRU_180006250] FuncInfo <0x19930522, 1, rva stru_180022894, 0, 0, 1, \
    // DATA XREF: X:0000000180022890↓o
    // [RVA] stru_18002289C, 32, 0, 0>
    // [ALIGN] 0x20
    // [QWORD_180006280] dq 0x180000029, 2 dup(0)  // DATA XREF: _UnwindNestedFrames+50↓o
    // [DQ] 0x0F, 0x19930520, 0x0E dup(0)
    // [AACCESSVIOLATIO] db 'Access violation - no RTTI data!',0
    // DATA XREF: __RTDynamicCast+142↓o
    // [ALIGN] 0x20
    // [ABADDYNAMICCAST] db 'Bad dynamic_cast!',0
    // DATA XREF: __RTDynamicCast+114↓o
    // [ALIGN] 8
    // [OFF_180006358] dq offset __DestructExceptionObject
    // DATA XREF: __C_specific_handler+AA↓r
    // __C_specific_handler+B4↓o ...
    // [DQ] offset qword_180006908
    // [OFF_180006368] dq offset sub_18001ED90  // DATA XREF: sub_18001ED80↓o
    // sub_18001ED90+A↓o ...
    // [DQ] offset unknown_libname_25  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [ABADEXCEPTION] db 'bad exception',0  // DATA XREF: FindHandler(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,uchar,int,unsigned __int64 *)+21A↓o
    // [ALIGN] 8
    // [QWORD_180006388] dq 1, 0x2402800000000, 0x6388000063B0, 3 dup(0)
    // DATA XREF: X:0000000180002098↑o
    // [DQ] 0x63C800000001, 0
    // [DQ] 0x63D8, 0
    // [DQ] 0x24028, 0x0FFFFFFFF00000000, 0x4000000000, 0x63B0, 0
    // [QWORD_180006400] dq 1, 0x25F2800000000, 0x6400000068B8, 2 dup(0)
    // DATA XREF: X:00000001800020A8↑o
    // [QWORD_180006428] dq 1, 0x2405000000000, 0x642800006450, 3 dup(0)
    // DATA XREF: X:00000001800020D8↑o
    // [DQ] 0x646800000002, 0
    // [DQ] 0x689000006480, 2 dup(0)
    // [DQ] 0x100024050, 0x0FFFFFFFF00000000, 0x4000000000, 0x6450
    // [DQ] 0
    // [QWORD_1800064A8] dq 1, 0x2407800000000, 0x64A8000064D0, 3 dup(0)
    // DATA XREF: X:00000001800020F0↑o
    // [DQ] 0x64E800000002, 0
    // [DQ] 0x689000006500, 2 dup(0)
    // [DQ] 0x100024078, 0x0FFFFFFFF00000000, 0x4000000000, 0x64D0
    // [DQ] 0
    // [QWORD_180006528] dq 1, 0x240A000000000, 0x652800006550, 3 dup(0)
    // DATA XREF: X:0000000180002108↑o
    // [DQ] 0x656800000003, 0
    // [DQ] 0x650000006588, 0x6890, 2 dup(0)
    // [DQ] 0x2000240A0, 0x0FFFFFFFF00000000, 0x4000000000, 0x6550
    // [DQ] 0
    // [QWORD_1800065B0] dq 1, 0x2591000000000, 0x65B0000065D8, 3 dup(0)
    // DATA XREF: X:00000001800045E0↑o
    // [DQ] 0x65F000000002, 0
    // [DQ] 0x689000006608, 2 dup(0)
    // [DQ] 0x100025910, 0x0FFFFFFFF00000000, 0x4000000000, 0x65D8
    // [DQ] 0
    // [QWORD_180006630] dq 1, 0x2593800000000, 0x663000006658, 3 dup(0)
    // DATA XREF: X:00000001800045F8↑o
    // [DQ] 0x667000000003, 0
    // [DB] 0x90
    // [DB] 0x66, 2 dup(0), 8, 0x66, 2 dup(0)
    // [DB] 0x90
    // [DB] 0x68, 6 dup(0)
    // [DQ] 2 dup(0)
    // [DQ] 0x200025938, 0x0FFFFFFFF00000000, 0x4000000000, 0x6658
    // [DQ] 0
    // [QWORD_1800066B8] dq 1, 0x2596000000000, 0x66B8000066E0, 3 dup(0)
    // DATA XREF: X:0000000180004610↑o
    // [DQ] 0x66F800000003, 0
    // [DQ] 0x660800006718, 0x6890, 2 dup(0)
    // [DQ] 0x200025960, 0x0FFFFFFFF00000000, 0x4000000000, 0x66E0
    // [DQ] 0
    // [QWORD_180006740] dq 1, 0x2598800000000, 0x674000006768, 3 dup(0)
    // DATA XREF: X:0000000180004EB0↑o
    // [DQ] 0x678000000002, 0
    // [DQ] 0x681000006798, 2 dup(0)
    // [DQ] 0x100025988, 0x0FFFFFFFF00000000, 0x4000000000, 0x6768
    // [DQ] 0
    // [QWORD_1800067C0] dq 1, 0x259B000000000, 0x67C0000067E8, 3 dup(0)
    // DATA XREF: X:0000000180004E98↑o
    // [DQ] 0x680000000001, 0
    // [DQ] 0x6810, 0
    // [DQ] 0x259B0, 0x0FFFFFFFF00000000, 0x4000000000, 0x67E8, 0
    // [QWORD_180006838] dq 1, 0x25F0000000000, 0x683800006860, 3 dup(0)
    // DATA XREF: X:0000000180002120↑o
    // [DQ] 0x687800000002, 0
    // [DQ] 0x6890000068E0, 2 dup(0)
    // [DQ] 0x25F28, 0x0FFFFFFFF00000000, 0x4000000000, 0x68B8, 2 dup(0)
    // [DQ] 0x68D000000001, 0
    // [DB] 0x90
    // [DB] 0x68, 6 dup(0)
    // [DQ] 0
    // [DQ] 0x100025F00, 0x0FFFFFFFF00000000, 0x4000000000, 0x6860
    // [DQ] 0
    // [QWORD_180006908] dq 1, 0x25FD000000000, 0x690800006930, 3 dup(0)
    // DATA XREF: X:0000000180006360↑o
    // [DQ] 0x694800000002, 0
    // [DQ] 0x689000006960, 2 dup(0)
    // [DQ] 0x100025FD0, 0x0FFFFFFFF00000000, 0x4000000000, 0x6930
    // [DQ] 2 dup(0)
    // [QWORD_180006990] dq 2 dup(0)  // DATA XREF: sub_18001594C+A↓o
    // sub_18001594C+11↓o
    // [QWORD_1800069A0] dq 2 dup(0)  // DATA XREF: sub_180015984+A↓o
    // sub_180015984+11↓o

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:ExceptionDir↓o


    class="type">uint64_t rax;
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x0A0;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    // [MOVSS] xmm6, dword ptr [rcx+4]
    xmmword ptr [rax-0x28] = xmm7;  // SIMD move
    // [MOVSS] xmm7, dword ptr [rcx]
    rbx = rdx;
    xmmword ptr [rax-0x38] = xmm8;  // SIMD move
    // [MOVSS] xmm8, dword ptr [rcx+0x20]
    xmmword ptr [rax-0x48] = xmm9;  // SIMD move
    // [MOVSS] xmm9, dword ptr [rcx+0x10]
    xmmword ptr [rax-0x58] = xmm10;  // SIMD move
    xmmword ptr [rax-0x68] = xmm11;  // SIMD move
    // [MOVSS] xmm11, dword ptr [rcx+0x14]
    xmmword ptr [rax-0x78] = xmm12;  // SIMD move
    xmm0 = xmm9;  // SIMD move
    xmm2 = xmm7;  // SIMD move
    // [MOVSS] xmm12, dword ptr [rcx+0x24]
    xmm0=_mm_mul_ss(xmm0,xmm9);
    xmm2=_mm_mul_ss(xmm2,xmm7);
    *(void**)(rsp+0x0A8+var_88) = xmm13;  // SIMD move
    xmm0=_mm_add_ss(xmm0,xmm2);  // X
    // [MOVSS] xmm13, dword ptr [rcx+0x28]
    sqrtf();
    xmm10 = xmm0;  // SIMD move
    // comiss: compare xmm10 vs cs:dword_180005e78
    if(CF||ZF)        goto loc_180006A85;
    xmm1 = xmm7;  // SIMD move  // X
    xmm0 = xmm9;  // SIMD move  // Y
    atan2f();
    // [MOVSS] xmm6, cs:dword_180005E74
    xmm1 = xmm10;  // SIMD move  // X
    xmm0=_mm_mul_ss(xmm0,xmm6);
    // [MOVSS] dword ptr [rbx+4], xmm0
    xmm8=_mm_xor_ps(xmm8,cs:xmmword_180005dc0);
    xmm0 = xmm8;  // SIMD move  // Y
    atan2f();
    xmm1 = xmm13;  // SIMD move  // X
    xmm0=_mm_mul_ss(xmm0,xmm6);
    // [MOVSS] dword ptr [rbx], xmm0
    xmm0 = xmm12;  // SIMD move  // Y
    atan2f();
    xmm0=_mm_mul_ss(xmm0,xmm6);
    // [MOVSS] dword ptr [rbx+8], xmm0
    goto loc_180006ACA;
    // ---------------------------------------------------------------------------

class="lbl">loc_180006A85:
    // [MOVSS] xmm7, dword ptr cs:xmmword_180005DC0
    xmm1 = xmm11;  // SIMD move  // X
    xmm6=_mm_xor_ps(xmm6,xmm7);
    xmm0 = xmm6;  // SIMD move  // Y
    atan2f();
    xmm8=_mm_xor_ps(xmm8,xmm7);
    xmm1 = xmm10;  // SIMD move  // X
    xmm0=_mm_mul_ss(xmm0,cs:dword_180005e74);
    // [MOVSS] dword ptr [rbx+4], xmm0
    xmm0 = xmm8;  // SIMD move  // Y
    atan2f();
    *(class="type">uint32_t*)(rbx+8) &= 0;
    xmm0=_mm_mul_ss(xmm0,cs:dword_180005e74);
    // [MOVSS] dword ptr [rbx], xmm0

class="lbl">loc_180006ACA:
    class="type">uint64_t r11;
    r11 = &(rsp+0x0A8+var_8);  // effective address
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm7 = xmmword ptr [r11-0x20];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    xmm11 = xmmword ptr [r11-0x60];  // SIMD move
    xmm12 = xmmword ptr [r11-0x70];  // SIMD move
    xmm13 = xmmword ptr [r11-0x80];  // SIMD move
    rsp = r11;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_1800069B0] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180006AFF:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // sub_180009334+EB↓p
    // DATA XREF: ...


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x18) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x80;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    // [MOVSS] xmm6, dword ptr [rcx+4]
    xmmword ptr [rax-0x28] = xmm7;  // SIMD move
    // [MOVSS] xmm7, cs:dword_180005F20
    rdi = r9;
    class="type">uint64_t rbp;
    rbp = r8;
    class="type">uint64_t rsi;
    rsi = rdx;
    rbx = rcx;
    xmmword ptr [rax-0x38] = xmm8;  // SIMD move
    xmmword ptr [rax-0x48] = xmm9;  // SIMD move
    xmmword ptr [rax-0x58] = xmm10;  // SIMD move
    xmm6=_mm_mul_ss(xmm6,xmm7);
    xmm0 = xmm6;  // SIMD move  // X
    xmmword ptr [rax-0x68] = xmm11;  // SIMD move
    sinf();
    xmm8 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    // [MOVSS] xmm6, dword ptr [rbx]
    xmm6=_mm_mul_ss(xmm6,xmm7);
    xmm9 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    sinf();
    xmm11 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    // [MOVSS] xmm6, dword ptr [rbx+8]
    xmm6=_mm_mul_ss(xmm6,xmm7);
    xmm10 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    sinf();
    xmm7 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    xmm5 = xmm0;  // SIMD move
    // test: set flags = rsi & rsi
    if(ZF)            goto loc_180006BD7;
    xmm1 = xmm10;  // SIMD move
    xmm2 = xmm10;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm9);
    xmm2=_mm_mul_ss(xmm2,xmm8);
    // [MOVSS] dword ptr [rsi], xmm1
    xmm1 = xmm11;  // SIMD move
    // [MOVSS] dword ptr [rsi+4], xmm2
    xmm1=_mm_xor_ps(xmm1,cs:xmmword_180005dc0);
    // [MOVSS] dword ptr [rsi+8], xmm1

class="lbl">loc_180006BD7:
    // test: set flags = rbp & rbp
    if(ZF)            goto loc_180006C30;
    xmm1 = xmm0;  // SIMD move
    xmm4 = xmm7;  // SIMD move
    xmm2 = xmm5;  // SIMD move
    xmm2=_mm_mul_ss(xmm2,cs:dword_180005f1c);
    xmm4=_mm_mul_ss(xmm4,xmm11);
    xmm1=_mm_mul_ss(xmm1,xmm8);
    xmm0 = xmm4;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,xmm9);
    xmm2=_mm_mul_ss(xmm2,xmm9);
    xmm4=_mm_mul_ss(xmm4,xmm8);
    xmm1=_mm_sub_ss(xmm1,xmm0);
    xmm0 = xmm7;  // SIMD move
    xmm2=_mm_sub_ss(xmm2,xmm4);
    xmm0=_mm_mul_ss(xmm0,cs:dword_180005f1c);
    // [MOVSS] dword ptr [rbp+0], xmm1
    // [MOVSS] dword ptr [rbp+4], xmm2
    xmm0=_mm_mul_ss(xmm0,xmm10);
    // [MOVSS] dword ptr [rbp+8], xmm0

class="lbl">loc_180006C30:
    // test: set flags = rdi & rdi
    if(ZF)            goto loc_180006C72;
    xmm2 = xmm5;  // SIMD move
    xmm0 = xmm7;  // SIMD move
    xmm7=_mm_mul_ss(xmm7,xmm9);
    xmm2=_mm_mul_ss(xmm2,xmm11);
    xmm0=_mm_mul_ss(xmm0,xmm8);
    xmm5=_mm_mul_ss(xmm5,xmm10);
    xmm1 = xmm2;  // SIMD move
    // [MOVSS] dword ptr [rdi+8], xmm5
    xmm1=_mm_mul_ss(xmm1,xmm9);
    xmm2=_mm_mul_ss(xmm2,xmm8);
    xmm1=_mm_add_ss(xmm1,xmm0);
    xmm2=_mm_sub_ss(xmm2,xmm7);
    // [MOVSS] dword ptr [rdi], xmm1
    // [MOVSS] dword ptr [rdi+4], xmm2

class="lbl">loc_180006C72:
    xmm6 = *(void**)(rsp+0x88+var_18);  // SIMD move
    xmm7 = *(void**)(rsp+0x88+var_28);  // SIMD move
    r11 = &(rsp+0x88+var_8);  // effective address
    rbx = *(void**)(r11+0x10);
    rbp = *(void**)(r11+0x18);
    rsi = *(void**)(r11+0x20);
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    xmm11 = xmmword ptr [r11-0x60];  // SIMD move
    rsp = r11;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180006B00] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180006CA9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_180006CAC(char *Str2, char *)
    // sub_180006E10+30↓p ...

    // [STR2] = qword ptr 0x10

    *(void**)(rsp+arg_18) = rbx;
    *(void**)(rsp+Str2) = rdx;
    *(void**)(rsp+arg_0) = rcx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rsp -= 0x20;
    rbp = rcx;
    class="type">uint64_t rcx;
    rcx = cs:qword_1800294f8;
    r14 = rdx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x40)();
    rdi = rax;
    // test: set flags = rax & rax

class="lbl">loc_180006CE3:
    if(ZF)            goto loc_180006DF7;
    r12 = *(void**)(rdi+0x18);
    // cmp: set flags = *(uint32_t*)(r12+8) - 1
    if(ZF||SF!=OF)    goto loc_180006DE5;
    r13d = 0;  // xor self
    *(void**)(rsp+0x58+arg_10) = r13d;
    // cmp: set flags = *(void**)(r12+8) - r13d
    if(ZF||SF!=OF)    goto loc_180006DE5;
    ebx = 0;  // xor self

class="lbl">loc_180006D0E:
    rsi = *(void**)(r12);
    class="type">uint64_t rdx;
    rdx = (const char*)Str2;  // "baseclass"
    rcx = *(void**)(rbx+rsi);  // Str1
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_180006DC9;
    rcx = *(void**)(r12+0x18);  // Str1
    rdx = rbp;  // Str2
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_180006D4C;
    rcx = *(void**)(r12+0x18);  // Str1
    rdx = rbp;  // Str2
    strcmp();
    // test: set flags = eax & eax
    if(!ZF)           goto loc_180006DC9;

class="lbl">loc_180006D4C:
    rcx = *(void**)(rbx+rsi);  // Str1
    rdx = r14;  // Str2
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_180006DF1;
    rbp = *(void**)(rbx+rsi+0x40);
    // test: set flags = rbp & rbp
    if(ZF)            goto loc_180006DBE;
    // cmp: set flags = *(uint32_t*)(rbp+8) - 1
    if(SF!=OF)        goto loc_180006DBE;
    r15d = 0;  // xor self
    // cmp: set flags = *(void**)(rbp+8) - r15d
    if(ZF||SF!=OF)    goto loc_180006DC4;
    r13d = 0;  // xor self

class="lbl">loc_180006D7C:
    rax = *(void**)(rbp+0);
    r14 = &(r13+rax+0);  // effective address
    // test: set flags = r14 & r14
    if(ZF)            goto loc_180006D9B;
    rdx = *(void**)(rsp+0x58+Str2);  // Str2
    rcx = *(void**)(r14);  // Str1
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_180006DAF;

class="lbl">loc_180006D9B:
    r15d++;
    r13 += 0x60;  // '`'
    // cmp: set flags = r15d - *(void**)(rbp+8)
    if(SF!=OF)        goto loc_180006D7C;
    r13d = *(void**)(rsp+0x58+arg_10);
    goto loc_180006DC4;
    // ---------------------------------------------------------------------------

class="lbl">loc_180006DAF:
    eax = *(void**)(r14+0x48);
    r13d = *(void**)(rsp+0x58+arg_10);
    eax += *(void**)(rbx+rsi+0x48);
    goto loc_180006DC0;
    // ---------------------------------------------------------------------------

class="lbl">loc_180006DBE:
    // sub_180006CAC+C2↑j
    eax = 0;  // xor self

class="lbl">loc_180006DC0:
    // test: set flags = eax & eax
    if(!ZF)           goto loc_180006DF9;

class="lbl">loc_180006DC4:
    // sub_180006CAC+101↑j
    rbp = *(void**)(rsp+0x58+arg_0);

class="lbl">loc_180006DC9:
    // sub_180006CAC+9E↑j
    r14 = *(void**)(rsp+0x58+Str2);
    r13d++;
    rbx += 0x60;  // '`'
    *(void**)(rsp+0x58+arg_10) = r13d;
    // cmp: set flags = r13d - *(void**)(r12+8)
    if(SF!=OF)        goto loc_180006D0E;

class="lbl">loc_180006DE5:
    // sub_180006CAC+5A↑j
    rdi = *(void**)(rdi+0x20);
    // test: set flags = rdi & rdi
    goto loc_180006CE3;
    // ---------------------------------------------------------------------------

class="lbl">loc_180006DF1:
    eax = *(void**)(rbx+rsi+0x48);
    goto loc_180006DF9;
    // ---------------------------------------------------------------------------

class="lbl">loc_180006DF7:
    eax = 0;  // xor self

class="lbl">loc_180006DF9:
    // sub_180006CAC+149↑j
    rbx = *(void**)(rsp+0x58+arg_18);
    rsp += 0x20;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180006CAC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180006E0E:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B024↓o


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rdi = (const char*)aDtBaseplayer;  // "DT_BasePlayer"
    rdx = (const char*)aMLifestate;  // "m_lifeState"
    rcx = rdi;  // Str2
    sub_180006CAC();
    rdx = (const char*)aMIhealth;  // "m_iHealth"
    rcx = rdi;  // Str2
    cs:dword_1800270f8 = eax;
    sub_180006CAC();
    rdx = (const char*)aMNtickbase;  // "m_nTickBase"
    rcx = rdi;  // Str2
    cs:dword_1800270ec = eax;
    sub_180006CAC();
    rdx = (const char*)aMFflags;  // "m_fFlags"
    rcx = rdi;  // Str2
    cs:dword_180027158 = eax;
    sub_180006CAC();
    rdx = (const char*)aMImaxhealth;  // "m_iMaxHealth"
    rcx = (const char*)aDtTfplayerreso;  // "DT_TFPlayerResource"
    cs:dword_1800270f0 = eax;
    sub_180006CAC();
    rdx = (const char*)aMIteamnum;  // "m_iTeamNum"
    rcx = (const char*)aDtBaseentity;  // "DT_BaseEntity"
    cs:dword_1800270f4 = eax;
    sub_180006CAC();
    rbx = (const char*)aDtTfplayer;  // "DT_TFPlayer"
    rdx = (const char*)aMShared;  // "m_Shared"
    rcx = rbx;  // Str2
    cs:dword_1800270fc = eax;
    sub_180006CAC();
    rdx = (const char*)aMNplayercond;  // "m_nPlayerCond"
    rcx = rbx;  // Str2
    cs:dword_18002711c = eax;
    sub_180006CAC();
    rdx = (const char*)aMNplayercondex;  // "m_nPlayerCondEx"
    rcx = rbx;  // Str2
    cs:dword_180027164 = eax;
    sub_180006CAC();
    rdx = (const char*)aMPlayerclass;  // "m_PlayerClass"
    rcx = rbx;  // Str2
    cs:dword_1800270e0 = eax;
    sub_180006CAC();
    rdx = (const char*)aMBglowenabled;  // "m_bGlowEnabled"
    eax += 8;
    rcx = rbx;  // Str2
    cs:dword_180027100 = eax;
    sub_180006CAC();
    rdx = (const char*)aMFlheadscale;  // "m_flHeadScale"
    rcx = rbx;  // Str2
    cs:dword_180027104 = eax;
    sub_180006CAC();
    rbx = (const char*)aDtBaseobject;  // "DT_BaseObject"
    rdx = (const char*)aMBhassapper;  // "m_bHasSapper"
    rcx = rbx;  // Str2
    cs:dword_180027108 = eax;
    sub_180006CAC();
    rdx = (const char*)aMIupgradelevel;  // "m_iUpgradeLevel"
    rcx = rbx;  // Str2
    cs:dword_18002710c = eax;
    sub_180006CAC();
    rdx = (const char*)aMIupgrademetal;  // "m_iUpgradeMetal"
    rcx = rbx;  // Str2
    cs:dword_180027114 = eax;
    sub_180006CAC();
    rbx = (const char*)aDtBasecombatwe;  // "DT_BaseCombatWeapon"
    rdx = (const char*)aMIprimaryammot;  // "m_iPrimaryAmmoType"
    rcx = rbx;  // Str2
    cs:dword_180027118 = eax;
    sub_180006CAC();
    rdx = (const char*)aMIclip1;  // "m_iClip1"
    rcx = rbx;  // Str2
    cs:dword_180027120 = eax;
    sub_180006CAC();
    rdx = (const char*)aMIclip2;  // "m_iClip2"
    rcx = rbx;  // Str2
    cs:dword_180027130 = eax;
    sub_180006CAC();
    rdx = (const char*)aMFllastcritche;  // "m_flLastCritCheckTime"
    rcx = (const char*)aDtTfweaponbase;  // "DT_TFWeaponBase"
    cs:dword_180027134 = eax;
    sub_180006CAC();
    cs:dword_180027160 = eax;
    rdx = (const char*)aMFeffects;  // "m_fEffects"
    rcx = (const char*)aDtBaseviewmode;  // "DT_BaseViewModel"
    sub_180006CAC();
    rdx = (const char*)aMVecviewoffset;  // "m_vecViewOffset[0]"
    rcx = rdi;  // Str2
    cs:dword_18002715c = eax;
    sub_180006CAC();
    rdx = (const char*)aMFllastfiretim;  // "m_flLastFireTime"
    rcx = (const char*)aDtTfweaponbase;  // "DT_TFWeaponBase"
    cs:dword_180027110 = eax;
    sub_180006CAC();
    rbx = (const char*)aDtWeaponmedigu;  // "DT_WeaponMedigun"
    rdx = (const char*)aMBhealing;  // "m_bHealing"
    rcx = rbx;  // Str2
    cs:dword_18002714c = eax;
    sub_180006CAC();
    rdx = (const char*)aMHhealingtarge;  // "m_hHealingTarget"
    rcx = rbx;  // Str2
    cs:dword_180027140 = eax;
    sub_180006CAC();
    rdx = (const char*)aMFlchargelevel;  // "m_flChargeLevel"
    rcx = rbx;  // Str2
    cs:dword_180027144 = eax;
    sub_180006CAC();
    rdx = (const char*)aMIweaponstate;  // "m_iWeaponState"
    rcx = (const char*)aDtWeaponminigu;  // "DT_WeaponMinigun"
    cs:dword_18002713c = eax;
    sub_180006CAC();
    rdx = (const char*)aMBreadytobacks;  // "m_bReadyToBackstab"
    rcx = (const char*)aDtTfweaponknif;  // "DT_TFWeaponKnife"
    cs:dword_180027148 = eax;
    sub_180006CAC();
    rdx = (const char*)aMHactiveweapon;  // "m_hActiveWeapon"
    rcx = (const char*)aDtBasecombatch;  // "DT_BaseCombatCharacter"
    cs:dword_1800270e8 = eax;
    sub_180006CAC();
    rdx = (const char*)aMItem;  // "m_Item"
    rcx = (const char*)aDtEconentity;  // "DT_EconEntity"
    cs:dword_180027124 = eax;
    sub_180006CAC();
    rdx = (const char*)aMFlchargeddama;  // "m_flChargedDamage"
    rcx = (const char*)aDtTfsniperrifl;  // "DT_TFSniperRifle"
    eax += 0x0D4;
    cs:dword_180027128 = eax;
    sub_180006CAC();
    rdx = (const char*)aMBtouched;  // "m_bTouched"
    rcx = (const char*)aDtTfprojectile;  // "DT_TFProjectile_Pipebomb"
    cs:dword_180027138 = eax;
    sub_180006CAC();
    rdx = (const char*)aMItype;  // "m_iType"
    rcx = (const char*)aDtTfprojectile;  // "DT_TFProjectile_Pipebomb"
    cs:dword_180027150 = eax;
    sub_180006CAC();
    rbx = *(void**)(rsp+0x28+arg_0);
    cs:dword_180027154 = eax;
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180006E10] endp


    // =============== S U B R O U T I N E =======================================


    // .pdata:000000018002B024↓o ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rax = *(void**)(rdx);
    rcx = rdx;
    *(class="type">uint64_t*)(rax+0x10)();
    rcx = cs:qword_180029518;
    class="type">uint32_t edx;
    edx = *(void**)(rax);
    rax = *(void**)(rcx);
    edx &= 0x0FFF;
    *(class="type">uint64_t*)(rax+0x18)();
    edi = 0;  // xor self
    // test: set flags = rax & rax
    if(ZF)            goto loc_180007179;
    rbx = &(rax+0x10);  // effective address
    rcx = rbx;
    rax = *(void**)(rbx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x40  // '@'
    if(ZF)            goto loc_180007176;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x56  // 'V'
    if(ZF)            goto loc_180007176;
    edi = 1;

class="lbl">loc_180007176:
    // sub_180007120+4F↑j
    class="type">uint8_t al;
    al = dil;

class="lbl">loc_180007179:
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180007120] endp


    // =============== S U B R O U T I N E =======================================


    // _handle_errorf+105↓p ...
    eax = 0;  // xor self
    return rax;
    // [SUB_180007184] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B03C↓o

    = byte ptr -0x0A8=__str();

    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x0C0;
    ebx = ecx;
    rcx = cs:qword_180029508;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    rax = *(void**)(rcx);
    class="type">uint64_t r8;
    r8 = &(rsp+0x0C8+Str);  // effective address
    edx = ebx;
    xmm6 = xmm1;  // SIMD move
    *(class="type">uint64_t*)(rax+0x40)();
    // test: set flags = al & al
    if(!ZF)           goto loc_1800071C9;
    // [MOVSS] xmm0, cs:dword_180005F18
    goto loc_1800073BF;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800071C9:
    rdx = &(SubStr);  // effective address  // SubStr
    rcx = &(rsp+0x0C8+Str);  // effective address  // Str
    strstr();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_1800073B7;
    rdx = &(nullsub_1);  // effective address  // SubStr
    rcx = &(rsp+0x0C8+Str);  // effective address  // Str
    strstr();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_1800073B7;
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_180007222;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007212:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007238;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007222:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_180007231;
    rdx = rbx;
    goto loc_180007212;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007231:
    rdx = cs:qword_180029858;

class="lbl">loc_180007238:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x38)();
    rcx = rax;
    sub_18000C174();
    rsi = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000726C;

class="lbl">loc_180007264:
    // sub_180007188+1EB↓j ...
    xmm0=_mm_xor_ps(xmm0,xmm0);
    goto loc_1800073BF;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000726C:
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_180007291;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007281:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_1800072A7;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007291:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_1800072A0;
    rdx = rbx;
    goto loc_180007281;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800072A0:
    rdx = cs:qword_180029858;

class="lbl">loc_1800072A7:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x38)();
    class="type">uint32_t ecx;
    ecx = cs:dword_180027100;
    edi = *(void**)(rcx+rax);
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_1800072F1;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_1800072E1:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007307;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800072F1:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_180007300;
    rdx = rbx;
    goto loc_1800072E1;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007300:
    rdx = cs:qword_180029858;

class="lbl">loc_180007307:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x38)();
    edi -= 2;
    ecx = cs:dword_180027164;
    if(ZF)            goto loc_1800073A3;
    edi -= 3;
    if(ZF)            goto loc_180007379;
    edi--;
    if(ZF)            goto loc_180007383;
    eax = cs:dword_180027120;
    // cmp: set flags = edi - 3
    if(ZF)            goto loc_180007369;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 0x0FFFFFFFF
    if(ZF)            goto loc_180007352;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 4
    if(!ZF)           goto loc_180007264;

class="lbl">loc_180007352:
    // [MOVSS] xmm0, cs:dword_180005F00
    // comiss: compare xmm6 vs xmm0
    if(CF||ZF)        goto loc_1800073BF;
    // [MOVSS] xmm0, cs:dword_180005F14
    goto loc_1800073BF;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007369:
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 0x0FFFFFFFF
    if(ZF)            goto loc_180007379;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 4
    if(!ZF)           goto loc_180007264;

class="lbl">loc_180007379:
    // sub_180007188+1E5↑j
    // [MOVSS] xmm0, cs:dword_180005F10
    goto loc_1800073BF;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007383:
    eax = cs:dword_180027148;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 0
    if(ZF)            goto loc_180007399;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 4
    if(!ZF)           goto loc_180007264;

class="lbl">loc_180007399:
    // [MOVSS] xmm0, cs:dword_180005F0C
    goto loc_1800073BF;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800073A3:
    // test: set flags = *(uint8_t*)(rcx+rax) & 3
    if(ZF)            goto loc_180007264;
    // [MOVSS] xmm0, cs:dword_180005F08
    goto loc_1800073BF;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800073B7:
    // sub_180007188+6F↑j
    // [MOVSS] xmm0, cs:dword_180005F04

class="lbl">loc_1800073BF:
    // sub_180007188+DF↑j ...
    r11 = &(rsp+0x0C8+var_8);  // effective address
    rbx = *(void**)(r11+0x10);
    rsi = *(void**)(r11+0x18);
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    rsp = r11;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180007188] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_1800073D9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B048↓o


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x18) = rsi;
    *(void**)(rax+0x20) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp -= 0x40;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    rsi = r8;
    class="type">uint32_t ebp;
    ebp = edx;
    rdi = rcx;
    sub_180007EB4();
    // test: set flags = al & al
    if(ZF)            goto loc_180007559;
    eax = cs:dword_180027120;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 0x0FFFFFFFF
    if(ZF)            goto loc_180007425;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 4
    if(ZF)            goto loc_180007425;
    r12b = 0;  // xor self
    goto loc_180007428;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007425:
    // sub_1800073DC+42↑j
    r12b = 1;

class="lbl">loc_180007428:
    eax = *(void**)(rdi+0x18);
    rcx = cs:qword_180029508;
    *(void**)(rsp+0x48+var_28) = eax;
    eax = *(void**)(rdi+0x1C);
    *(void**)(rsp+0x48+var_24) = eax;
    eax = *(void**)(rdi+0x20);
    *(void**)(rsp+0x48+var_20) = eax;
    rax = cs:qword_180029518;
    rbx = *(void**)(rax);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    edx = eax;
    *(class="type">uint64_t*)(rbx+0x18)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x48)();
    // [MOVSS] xmm0, [rsp+0x48+var_28]
    // [MOVSS] xmm1, [rsp+0x48+var_24]
    xmm0=_mm_sub_ss(xmm0,*(class="type">uint32_t*)(rax));
    xmm1=_mm_sub_ss(xmm1,*(class="type">uint32_t*)(rax+4));
    // [MOVSS] xmm2, [rsp+0x48+var_20]
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm2=_mm_sub_ss(xmm2,*(class="type">uint32_t*)(rax+8));
    xmm0=_mm_add_ss(xmm0,xmm1);
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm0=_mm_add_ss(xmm0,xmm2);  // X
    sqrtf();
    sqrtf();
    xmm6 = xmm0;  // SIMD move
    // test: set flags = r12b & r12b
    if(ZF)            goto loc_1800074CF;
    eax = cs:dword_180029198;
    // test: set flags = eax & eax
    if(ZF)            goto loc_180007559;
    // cmp: set flags = eax - 1
    if(!ZF)           goto loc_1800074CF;
    // comiss: compare xmm6 vs cs:dword_180005f00
    if(!CF&&!ZF)      goto loc_180007559;

class="lbl">loc_1800074CF:
    // sub_1800073DC+E4↑j
    // test: set flags = rsi & rsi
    if(ZF)            goto loc_18000753F;
    rax = *(void**)(rsi+0x10);
    rcx = &(rsi+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0D0
    if(!ZF)           goto loc_1800074F1;
    // comiss: compare xmm6 vs cs:dword_180006158
    if(!CF&&!ZF)      goto loc_180007559;

class="lbl">loc_1800074F1:
    rax = *(void**)(rsi+0x10);
    rcx = &(rsi+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x124
    if(ZF)            goto loc_180007519;
    rax = *(void**)(rsi+0x10);
    rcx = &(rsi+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x126
    if(!ZF)           goto loc_180007522;

class="lbl">loc_180007519:
    // comiss: compare xmm6 vs cs:dword_1800060f8
    if(!CF&&!ZF)      goto loc_180007559;

class="lbl">loc_180007522:
    rax = *(void**)(rsi+0x10);
    rcx = &(rsi+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x13B
    if(!ZF)           goto loc_18000753F;
    // comiss: compare xmm6 vs cs:dword_1800060f8
    if(!CF&&!ZF)      goto loc_180007559;

class="lbl">loc_18000753F:
    // sub_1800073DC+158↑j
    xmm1 = xmm6;  // SIMD move
    ecx = ebp;
    sub_180007188();
    xmm6=_mm_sub_ss(xmm6,xmm0);
    // comiss: compare xmm6 vs *(uint32_t*)(rdi)
    if(!CF&&!ZF)      goto loc_180007559;
    // [MOVSS] dword ptr [rdi], xmm6
    *(void**)(rdi+0x0C) = ebp;

class="lbl">loc_180007559:
    // sub_1800073DC+DB↑j ...
    rbx = *(void**)(rsp+0x48+arg_0);
    rbp = *(void**)(rsp+0x48+arg_8);
    rsi = *(void**)(rsp+0x48+arg_10);
    xmm6 = *(void**)(rsp+0x48+var_18);  // SIMD move
    rdi = *(void**)(rsp+0x48+arg_18);
    rsp += 0x40;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_1800073DC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180007579:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B054↓o


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    ebx = ecx;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    rdx = eax;
    rax = *(void**)(rcx);
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    ecx = cs:dword_1800270fc;
    edi = *(void**)(rcx+rax);
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_1800075E7;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_1800075D7:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_1800075FD;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800075E7:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_1800075F6;
    rdx = rbx;
    goto loc_1800075D7;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800075F6:
    rdx = cs:qword_180029858;

class="lbl">loc_1800075FD:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    ecx = cs:dword_1800270fc;
    rbx = *(void**)(rsp+0x28+arg_0);
    // cmp: set flags = edi - *(void**)(rcx+rax)
    al=!ZF?1:0;
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000757C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180007627:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_1800224D4↓o ...


    // __unwind { // __CxxFrameHandler3
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    *(void**)(rax+0x18) = rdi;
    *(void**)(rax+0x20) = r12;
    ebx = edx;
    rsi = rcx;

class="lbl">loc_18000764F:
    //   try {
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_180007674;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007664:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_18000768A;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007674:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_180007683;
    rdx = rbx;
    goto loc_180007664;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007683:
    rdx = cs:qword_180029858;

class="lbl">loc_18000768A:
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    r13 = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_180007941;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    sub_18000C174();
    r12 = rax;
    rdx = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rdx+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0F7
    if(!ZF)           goto loc_18000780C;
    rcx = r12;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x133
    if(ZF)            goto loc_1800077F6;
    rcx = r12;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x135
    if(ZF)            goto loc_1800077F6;
    // test: set flags = r12 & r12
    if(ZF)            goto loc_180007739;
    eax = cs:dword_180027128;
    // cmp: set flags = *(uint32_t*)(rax+r12) - 0x3D  // '='
    if(ZF)            goto loc_1800077F6;

class="lbl">loc_180007739:
    rcx = r12;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x124
    if(ZF)            goto loc_1800077E0;
    rcx = r12;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x126
    if(ZF)            goto loc_1800077E0;
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_180007784;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007774:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_18000779A;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007784:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_180007793;
    rdx = rbx;
    goto loc_180007774;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007793:
    rdx = cs:qword_180029858;

class="lbl">loc_18000779A:
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    ecx = cs:dword_180027100;
    edx = ebx;
    // cmp: set flags = *(uint32_t*)(rcx+rax) - 9
    rcx = rsi;
    if(!ZF)           goto loc_1800077CF;
    r8 = &(unk_180025A20);  // effective address
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800077CF:
    r8 = &(unk_1800259E8);  // effective address
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800077E0:
    // sub_180007628+131↑j
    r8 = &(unk_1800259E0);  // effective address
    edx = ebx;
    rcx = rsi;
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800077F6:
    // sub_180007628+F5↑j ...
    r8 = &(unk_1800259D8);  // effective address
    edx = ebx;
    rcx = rsi;
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000780C:
    rax = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x108
    if(ZF)            goto loc_180007919;
    rax = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x109
    if(ZF)            goto loc_180007919;
    rax = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x58  // 'X'
    if(!ZF)           goto loc_18000789A;
    ecx = cs:dword_180027114;
    edx = *(void**)(rcx+r13);
    rcx = rsi;
    edx -= 2;
    if(ZF)            goto loc_180007887;
    edx--;
    edx = ebx;
    if(ZF)            goto loc_180007876;
    r8 = &(unk_180025A58);  // effective address
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007876:
    r8 = &(unk_180025AB0);  // effective address
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007887:
    r8 = &(unk_180025A70);  // effective address
    edx = ebx;
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000789A:
    rax = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0D9
    if(!ZF)           goto loc_1800078E0;
    eax = cs:dword_180027150;
    class="type">uint8_t cl;
    cl = *(void**)(rax+r13);
    eax = cs:dword_180027154;
    // test: set flags = cl & cl
    if(ZF)            goto loc_1800078DC;
    // cmp: set flags = *(uint32_t*)(rax+r13) - 1
    if(!ZF)           goto loc_1800078DC;
    r8 = &(unk_1800259D8);  // effective address
    edx = ebx;
    rcx = rsi;
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800078DC:
    // sub_180007628+29F↑j
    al = 0;  // xor self
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800078E0:
    rax = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x52  // 'R'
    if(ZF)            goto loc_180007906;
    rax = *(void**)(r13+0x10);
    rcx = &(r13+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x30  // '0'
    if(ZF)            goto loc_180007906;
    al = 0;  // xor self
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007906:
    // sub_180007628+2D8↑j
    r8 = &(unk_1800259E8);  // effective address
    edx = ebx;
    rcx = rsi;
    sub_180008ABC();
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007919:
    // sub_180007628+20E↑j
    rcx = r12;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x0D0
    if(ZF)            goto loc_18000792C;
    al = 0;  // xor self
    goto loc_180007941;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000792C:
    r8 = &(unk_1800259D8);  // effective address
    edx = ebx;
    rcx = rsi;
    sub_180008ABC();
    goto loc_180007941;
    //   } // starts at 18000764F
    // ---------------------------------------------------------------------------

class="lbl">loc_18000793F:
    // DATA XREF: unknown_libname_45:unknown_libname_46↓o ...
    al = 0;  // xor self

class="lbl">loc_180007941:
    // sub_180007628+1A2↑j ...
    rbx = *(void**)(rsp+0x38+arg_0);
    rsi = *(void**)(rsp+0x38+arg_8);
    rdi = *(void**)(rsp+0x38+arg_10);
    r12 = *(void**)(rsp+0x38+arg_18);
    rsp += 0x30;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 180007628
    // [SUB_180007628] endp

class="lbl">algn_18000795D:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // sub_180008024+CD↓p
    // DATA XREF: ...


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x50;
    // [MOVD] xmm0, dword ptr [rcx]
    // [MOVD] xmm1, dword ptr [rcx+4]
    *(void**)(rsp+0x58+var_18) = xmm6;  // SIMD move
    rbx = rdx;
    xmm0=_mm_cvtps_pd(xmm0);
    xmm1=_mm_cvtps_pd(xmm1);
    // [MULSD] xmm0, cs:qword_180005E68
    // [MULSD] xmm1, cs:qword_180005E68
    *(void**)(rsp+0x58+var_28) = xmm7;  // SIMD move
    *(void**)(rsp+0x58+var_38) = xmm8;  // SIMD move
    // [MULSD] xmm0, cs:qword_180005E60
    // [MULSD] xmm1, cs:qword_180005E60
    // [CVTSD2SS] xmm8, xmm0
    // [CVTSD2SS] xmm6, xmm1
    xmm0 = xmm8;  // SIMD move  // X
    cosf();
    xmm7 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    xmm0=_mm_mul_ss(xmm0,xmm7);
    // [MOVSS] dword ptr [rbx], xmm0
    xmm0 = xmm6;  // SIMD move  // X
    sinf();
    xmm0=_mm_mul_ss(xmm0,xmm7);
    // [MOVSS] dword ptr [rbx+4], xmm0
    xmm0 = xmm8;  // SIMD move  // X
    sinf();
    xmm6 = *(void**)(rsp+0x58+var_18);  // SIMD move
    xmm7 = *(void**)(rsp+0x58+var_28);  // SIMD move
    xmm0=_mm_xor_ps(xmm0,cs:xmmword_180005dc0);
    xmm8 = *(void**)(rsp+0x58+var_38);  // SIMD move
    // [MOVSS] dword ptr [rbx+8], xmm0
    rsp += 0x50;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180007960] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180007A09:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B078↓o


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    edi = 0x0FFFFFFFB;
    ebx = ecx;
    class="type">uint32_t esi;
    esi = 0x7FF;
    // cmp: set flags = ecx - edi
    if(!ZF)           goto loc_180007A4B;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007A3B:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007A5E;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007A4B:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007A57;
    rdx = rbx;
    goto loc_180007A3B;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007A57:
    rdx = cs:qword_180029858;

class="lbl">loc_180007A5E:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_180007A7D;

class="lbl">loc_180007A76:
    // sub_180007A0C+D8↓j ...
    al = 0;  // xor self
    goto loc_180007EA1;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007A7D:
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007AA1;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007A91:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007AB4;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007AA1:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007AAD;
    rdx = rbx;
    goto loc_180007A91;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007AAD:
    rdx = cs:qword_180029858;

class="lbl">loc_180007AB4:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x40)();
    // test: set flags = al & al
    if(!ZF)           goto loc_180007A76;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    // cmp: set flags = ebx - eax
    if(ZF)            goto loc_180007A76;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007B0A;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007AFA:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007B1D;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007B0A:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007B16;
    rdx = rbx;
    goto loc_180007AFA;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007B16:
    rdx = cs:qword_180029858;

class="lbl">loc_180007B1D:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0F7
    if(ZF)            goto loc_180007CE6;
    // cmp: set flags = cs:dword_1800291a4 - 0
    if(ZF)            goto loc_180007BAE;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007B74;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007B64:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007B87;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007B74:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007B80;
    rdx = rbx;
    goto loc_180007B64;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007B80:
    rdx = cs:qword_180029858;

class="lbl">loc_180007B87:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x58  // 'X'
    if(ZF)            goto loc_180007E9F;

class="lbl">loc_180007BAE:
    // cmp: set flags = cs:dword_1800291a8 - 0
    if(ZF)            goto loc_180007C18;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007BDB;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007BCB:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007BEE;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007BDB:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007BE7;
    rdx = rbx;
    goto loc_180007BCB;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007BE7:
    rdx = cs:qword_180029858;

class="lbl">loc_180007BEE:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0D9
    if(ZF)            goto loc_180007E9F;

class="lbl">loc_180007C18:
    // cmp: set flags = cs:dword_180029184 - 0
    if(ZF)            goto loc_180007A76;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007C49;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007C39:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007C5C;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007C49:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007C55;
    rdx = rbx;
    goto loc_180007C39;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007C55:
    rdx = cs:qword_180029858;

class="lbl">loc_180007C5C:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x52  // 'R'
    if(ZF)            goto loc_180007E9F;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007CA7;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007C97:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007CBA;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007CA7:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007CB3;
    rdx = rbx;
    goto loc_180007C97;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007CB3:
    rdx = cs:qword_180029858;

class="lbl">loc_180007CBA:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x30  // '0'
    if(ZF)            goto loc_180007E9F;
    goto loc_180007A76;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007CE6:
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007D0A;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007CFA:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007D1D;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007D0A:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007D16;
    rdx = rbx;
    goto loc_180007CFA;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007D16:
    rdx = cs:qword_180029858;

class="lbl">loc_180007D1D:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    rdx = (const char*)aCtfplayer;  // "CTFPlayer"
    rcx = *(void**)(rax+0x10);  // Str1
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_180007D6B;
    rdx = (const char*)Text;  // "Game data updated, some features might "...
    class="type">uint32_t r9d;
    r9d = 0x1010;  // uType
    r8d = 0;  // xor self  // lpCaption
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    goto loc_180007A76;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007D6B:
    // cmp: set flags = cs:dword_180029184 - 0
    if(!ZF)           goto loc_180007A76;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007D9C;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007D8C:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007DAF;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007D9C:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007DA8;
    rdx = rbx;
    goto loc_180007D8C;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007DA8:
    rdx = cs:qword_180029858;

class="lbl">loc_180007DAF:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    ecx = cs:dword_1800270f8;
    // cmp: set flags = *(uint8_t*)(rcx+rax) - 0
    if(!ZF)           goto loc_180007A76;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007DF6;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007DE6:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007E09;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007DF6:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007E02;
    rdx = rbx;
    goto loc_180007DE6;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007E02:
    rdx = cs:qword_180029858;

class="lbl">loc_180007E09:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    ecx = cs:dword_180029180;
    ecx = -ecx;
    ecx = cs:dword_180029188;
    r8d = r8d-r8d-CF;
    r8d &= 0x2000;
    ecx = -ecx;
    ecx = cs:dword_180027164;
    edx = edx-edx-CF;
    edx &= 0x18;
    r8d |= edx;
    r8d |= 0x4020;
    // test: set flags = *(void**)(rcx+rax) & r8d
    if(!ZF)           goto loc_180007A76;
    // cmp: set flags = ebx - edi
    if(!ZF)           goto loc_180007E79;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180007E69:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180007E8C;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007E79:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - esi
    if(!CF&&!ZF)      goto loc_180007E85;
    rdx = rbx;
    goto loc_180007E69;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007E85:
    rdx = cs:qword_180029858;

class="lbl">loc_180007E8C:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();

class="lbl">loc_180007E9F:
    // sub_180007A0C+206↑j ...
    al = 1;

class="lbl">loc_180007EA1:
    rbx = *(void**)(rsp+0x28+arg_0);
    rsi = *(void**)(rsp+0x28+arg_10);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180007A0C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180007EB1:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_1800081E4+66↓p
    // DATA XREF: ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rdi = rcx;
    ecx = edx;
    ebx = edx;
    sub_180007A0C();
    // test: set flags = al & al
    if(!ZF)           goto loc_180007ED2;

class="lbl">loc_180007ECE:
    // sub_180007EB4+35↓j ...
    al = 0;  // xor self
    goto loc_180007F0E;
    // ---------------------------------------------------------------------------

class="lbl">loc_180007ED2:
    ecx = ebx;
    sub_18000757C();
    // test: set flags = al & al
    if(ZF)            goto loc_180007ECE;
    edx = ebx;
    rcx = rdi;
    sub_180007628();
    // test: set flags = al & al
    if(ZF)            goto loc_180007ECE;
    rcx = &(rdi+0x18);  // effective address
    sub_180008024();
    // comiss: compare xmm0 vs cs:dword_1800060f8
    if(!CF&&!ZF)      goto loc_180007ECE;
    rdx = &(rdi+0x18);  // effective address
    rcx = rdi;
    sub_180007F1C();
    // test: set flags = al & al
    al=ZF?1:0;

class="lbl">loc_180007F0E:
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180007EB4] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180007F19:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B090↓o


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x40;
    rax = cs:qword_180029518;
    rsi = rcx;
    rcx = cs:qword_180029508;
    rbx = *(void**)(rax);
    rax = *(void**)(rcx);
    rdi = rdx;
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    edx = eax;
    *(class="type">uint64_t*)(rbx+0x18)();
    ebx = cs:dword_180027110;
    rdx = *(void**)(rax);
    rcx = rax;
    rbx += rax;
    *(class="type">uint64_t*)(rdx+0x48)();
    r8 = &(rsp+0x48+var_18);  // effective address
    rcx = &(rsp+0x48+var_28);  // effective address
    // [MOVSS] xmm0, dword ptr [rbx]
    // [MOVSS] xmm1, dword ptr [rbx+4]
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax));
    xmm1=_mm_add_ss(xmm1,*(class="type">uint32_t*)(rax+4));
    rdx = rdi;
    // [MOVSS] [rsp+0x48+var_28], xmm0
    // [MOVSS] xmm0, dword ptr [rbx+8]
    // [MOVSS] [rsp+0x48+var_24], xmm1
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax+8));
    // [MOVSS] [rsp+0x48+var_20], xmm0
    sub_18000854C();
    // [MOVSS] xmm2, dword ptr [rsi+0x54]
    // [MOVSS] xmm0, dword ptr [rsi+0x58]
    xmm0=_mm_sub_ss(xmm0,*(void**)(rsp+0x48+var_14));
    xmm2=_mm_sub_ss(xmm2,*(void**)(rsp+0x48+var_18));
    // [MOVSS] xmm1, dword ptr [rsi+0x5C]
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm1=_mm_sub_ss(xmm1,*(void**)(rsp+0x48+var_10));
    xmm0=_mm_add_ss(xmm0,xmm2);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm0=_mm_add_ss(xmm0,xmm1);  // X
    sqrtf();
    // comiss: compare xmm0 vs cs:dword_180005e48
    if(CF||ZF)        goto loc_180008000;
    xmm0=_mm_sub_ss(xmm0,cs:dword_1800060fc);
    // [UNPCKLPS] xmm0, xmm0
    xmm0=_mm_cvtps_pd(xmm0);  // X
    fabs();
    // [CVTSD2SS] xmm0, xmm0

class="lbl">loc_180008000:
    // comiss: compare xmm0 vs cs:dword_1800060f8
    if(CF||ZF)        goto loc_180008010;
    eax = 1;
    goto loc_180008012;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008010:
    eax = 0;  // xor self

class="lbl">loc_180008012:
    rbx = *(void**)(rsp+0x48+arg_0);
    rsi = *(void**)(rsp+0x48+arg_8);
    rsp += 0x40;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180007F1C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180008022:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame fpd=57h

    // DATA XREF: .pdata:000000018002B09C↓o


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    *(void**)(rax+0x18) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rbp = &(rax-0x5F);  // effective address
    rsp -= 0x90;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    xmmword ptr [rax-0x28] = xmm7;  // SIMD move
    xmmword ptr [rax-0x38] = xmm8;  // SIMD move
    rsi = rcx;
    rcx = cs:qword_180029508;
    xmmword ptr [rax-0x48] = xmm9;  // SIMD move
    rax = cs:qword_180029518;
    rbx = *(void**)(rax);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    edx = eax;
    *(class="type">uint64_t*)(rbx+0x18)();
    rcx = cs:qword_180029508;
    rdx = &(rbp+0x57+var_50);  // effective address
    r8 = *(void**)(rcx);
    rbx = rax;
    *(class="type">uint64_t*)(r8+0x98)();
    rdx = *(void**)(rbx);
    edi = cs:dword_180027110;
    rcx = rbx;
    *(class="type">uint64_t*)(rdx+0x48)();
    r8 = &(rbp+0x57+var_60);  // effective address
    rcx = &(rbp+0x57+var_70);  // effective address
    // [MOVSS] xmm0, dword ptr [rdi+rbx]
    // [MOVSS] xmm1, dword ptr [rdi+rbx+4]
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax));
    xmm1=_mm_add_ss(xmm1,*(class="type">uint32_t*)(rax+4));
    rdx = rsi;
    // [MOVSS] [rbp+0x57+var_70], xmm0
    // [MOVSS] xmm0, dword ptr [rdi+rbx+8]
    // [MOVSS] [rbp+0x57+var_6C], xmm1
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax+8));
    // [MOVSS] [rbp+0x57+var_68], xmm0
    sub_18000854C();
    rdx = &(rbp+0x57+var_70);  // effective address
    rcx = &(rbp+0x57+var_50);  // effective address
    sub_180007960();
    rdx = &(rbp+0x57+var_60);  // effective address
    rcx = &(rbp+0x57+var_60);  // effective address
    sub_180007960();
    // [MOVSS] xmm0, [rbp+0x57+var_6C]
    // [MOVSS] xmm1, [rbp+0x57+var_70]
    // [MOVSS] xmm2, [rbp+0x57+var_68]
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm0=_mm_add_ss(xmm0,xmm1);
    xmm0=_mm_add_ss(xmm0,xmm2);  // X
    sqrtf();
    sqrtf();
    // [MOVSS] xmm9, [rbp+0x57+var_5C]
    // [MOVSS] xmm7, [rbp+0x57+var_60]
    // [MOVSS] xmm6, [rbp+0x57+var_58]
    xmm1 = xmm7;  // SIMD move
    xmm2 = xmm6;  // SIMD move
    xmm8 = xmm0;  // SIMD move
    xmm0 = xmm9;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm7);
    xmm2=_mm_mul_ss(xmm2,xmm6);
    xmm0=_mm_mul_ss(xmm0,xmm9);
    xmm0=_mm_add_ss(xmm0,xmm1);
    xmm0=_mm_add_ss(xmm0,xmm2);  // X
    sqrtf();
    sqrtf();
    xmm9=_mm_mul_ss(xmm9,*(void**)(rbp+0x57+var_6C));
    xmm7=_mm_mul_ss(xmm7,*(void**)(rbp+0x57+var_70));
    xmm6=_mm_mul_ss(xmm6,*(void**)(rbp+0x57+var_68));
    xmm9=_mm_add_ss(xmm9,xmm7);
    xmm9=_mm_add_ss(xmm9,xmm6);
    xmm0=_mm_mul_ss(xmm0,xmm8);
    xmm9=_mm_div_ss(xmm9,xmm0);
    xmm0 = xmm9;  // SIMD move  // X
    acosf();
    // [UNPCKLPS] xmm0, xmm0
    xmm1=_mm_cvtps_pd(xmm0);
    // [MULSD] xmm1, cs:qword_180005F90
    // [CVTSD2SS] xmm6, xmm1
    // [UNPCKLPS] xmm6, xmm6
    xmm0=_mm_cvtps_pd(xmm6);  // X
    _isnan();
    // test: set flags = eax & eax
    if(ZF)            goto loc_1800081B3;
    xmm0=_mm_xor_ps(xmm0,xmm0);
    goto loc_1800081B6;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800081B3:
    xmm0 = xmm6;  // SIMD move

class="lbl">loc_1800081B6:
    xmm7 = *(void**)(rsp+0x90+var_28+8);  // SIMD move
    r11 = &(rsp+0x90+var_s0);  // effective address
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    rbx = *(void**)(r11+0x10);
    rsi = *(void**)(r11+0x18);
    rdi = *(void**)(r11+0x20);
    rsp = r11;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180008024] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_1800081E3:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B0A8↓o


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rax = cs:qword_180029518;
    rdi = rcx;
    rcx = cs:qword_180029508;
    rbx = *(void**)(rax);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    edx = eax;
    *(class="type">uint64_t*)(rbx+0x18)();
    rcx = rax;
    sub_18000C174();
    // cmp: set flags = cs:dword_18002919c - 0
    rsi = rax;
    if(ZF)            goto loc_1800082A3;
    edx = *(void**)(rdi+0x0C);
    // cmp: set flags = edx - 0x0FFFFFFFF
    if(ZF)            goto loc_1800082A3;
    ecx = cs:dword_180027120;
    // cmp: set flags = *(uint32_t*)(rcx+rax) - 0x0FFFFFFFF
    if(ZF)            goto loc_1800082A3;
    // cmp: set flags = *(uint32_t*)(rcx+rax) - 4
    if(ZF)            goto loc_1800082A3;
    rcx = rdi;
    sub_180007EB4();
    // test: set flags = al & al
    if(ZF)            goto loc_1800082A3;
    ecx = *(void**)(rdi+0x0C);
    // cmp: set flags = ecx - 0x0FFFFFFFB
    if(!ZF)           goto loc_18000827B;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = eax;

class="lbl">loc_18000826B:
    rcx *= (class="type">int64_t)0x0D0;
    rcx += cs:qword_180029858;
    goto loc_18000828C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000827B:
    eax = &(rcx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(CF||ZF)        goto loc_18000826B;
    rcx = cs:qword_180029858;

class="lbl">loc_18000828C:
    eax = *(void**)(rdi+0x18);
    *(void**)(rcx+0x1C) = eax;
    eax = *(void**)(rdi+0x1C);
    *(void**)(rcx+0x20) = eax;
    eax = *(void**)(rdi+0x20);
    *(void**)(rcx+0x24) = eax;
    goto loc_18000838A;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800082A3:
    // sub_1800081E4+4F↑j ...
    *(class="type">uint32_t*)(rdi+0x0C) |= 0x0FFFFFFFF;
    *(class="type">uint32_t*)(rdi) = 0x461C3C00;
    *(class="type">uint8_t*)(rdi+4) = 0;
    // test: set flags = rsi & rsi
    if(ZF)            goto loc_180008340;
    rcx = &(rsi+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    ecx = *(void**)(rax+0x28);
    // cmp: set flags = ecx - 0x149
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x14C
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x14B
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x14A
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x14F
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x146
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x0D7
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x0E5
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x0E4
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x0C3
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x160
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x5E  // '^'
    if(ZF)            goto loc_18000838A;
    // cmp: set flags = ecx - 0x128
    if(ZF)            goto loc_18000838A;

class="lbl">loc_180008340:
    rcx = cs:qword_180029518;
    ebx = 1;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x30)();
    // cmp: set flags = eax - ebx
    if(SF!=OF)        goto loc_18000838A;

class="lbl">loc_180008356:
    rcx = cs:qword_180029518;
    edx = ebx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    // test: set flags = rax & rax
    if(ZF)            goto loc_180008377;
    r8 = rsi;
    edx = ebx;
    rcx = rdi;
    sub_1800073DC();

class="lbl">loc_180008377:
    rcx = cs:qword_180029518;
    ebx++;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x30)();
    // cmp: set flags = ebx - eax
    if(ZF||SF!=OF)    goto loc_180008356;

class="lbl">loc_18000838A:
    // sub_1800081E4+E9↑j ...
    rbx = *(void**)(rsp+0x28+arg_0);
    rsi = *(void**)(rsp+0x28+arg_8);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_1800081E4] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000839A:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_180022024↓o ...


    // __unwind { // __CxxFrameHandler3
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x100;
    *(void**)(rsp+0x108+var_88) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rax+8) = rbx;
    ebx = r8d;
    rdi = rdx;

class="lbl">loc_1800083BD:
    //   try {
    eax = cs:dword_180029a08;
    // test: set flags = al & 1
    if(!ZF)           goto loc_1800083EC;
    eax |= 1;
    cs:dword_180029a08 = eax;
    //   } // starts at 1800083BD

class="lbl">loc_1800083D0:
    //   try {
    rax = &(off_180004EA0);  // effective address
    cs:qword_180029a00 = rax;
    rax = &(off_180004EB8);  // effective address
    cs:qword_180029a00 = rax;
    //   } // starts at 1800083D0

class="lbl">loc_1800083EC:
    // DATA XREF: X:000000018002203C↓o
    //   try {
    // [MOVSS] xmm3, dword ptr [rcx]
    // [MOVSS] xmm1, dword ptr [rdx]
    xmm1=_mm_sub_ss(xmm1,xmm3);
    // [MOVSS] [rsp+0x108+var_C8], xmm1
    // [MOVSS] xmm4, dword ptr [rcx+4]
    // [MOVSS] xmm2, dword ptr [rdx+4]
    xmm2=_mm_sub_ss(xmm2,xmm4);
    // [MOVSS] [rsp+0x108+var_C4], xmm2
    // [MOVSS] xmm5, dword ptr [rcx+8]
    // [MOVSS] xmm0, dword ptr [rdx+8]
    xmm0=_mm_sub_ss(xmm0,xmm5);
    // [MOVSS] [rsp+0x108+var_C0], xmm0
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm2=_mm_add_ss(xmm2,xmm1);
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm2=_mm_add_ss(xmm2,xmm0);
    xmm1=_mm_xor_ps(xmm1,xmm1);
    // ucomiss: compare xmm2 vs xmm1 (sets ZF/CF/PF)
    *(void**)(rsp+0x108+var_97) = 1;
    if(!ZF)           goto loc_18000844C;
    *(void**)(rsp+0x108+var_97) = 0;

class="lbl">loc_18000844C:
    // [MOVSS] [rsp+0x108+var_A0], xmm1
    // [MOVSS] [rsp+0x108+var_A4], xmm1
    // [MOVSS] [rsp+0x108+var_A8], xmm1
    *(void**)(rsp+0x108+var_98) = 1;
    // [MOVSS] [rsp+0x108+var_B0], xmm1
    // [MOVSS] [rsp+0x108+var_B4], xmm1
    // [MOVSS] [rsp+0x108+var_B8], xmm1
    // [MOVSS] [rsp+0x108+var_D8], xmm3
    // [MOVSS] [rsp+0x108+var_D4], xmm4
    // [MOVSS] [rsp+0x108+var_D0], xmm5
    rcx = cs:qword_180029530;
    rax = *(void**)(rcx);
    rdx = &(rsp+0x108+var_78);  // effective address
    *(void**)(rsp+0x108+var_E8) = rdx;
    class="type">uint64_t r9;
    r9 = &(qword_180029A00);  // effective address
    r8d = 0x4200400B;
    rdx = &(rsp+0x108+var_D8);  // effective address
    *(class="type">uint64_t*)(rax+0x20)();
    // cmp: set flags = ebx - 0x0FFFFFFFB
    if(!ZF)           goto loc_1800084D8;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_1800084C8:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_1800084EE;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800084D8:
    eax = &(rbx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_1800084E7;
    rdx = rbx;
    goto loc_1800084C8;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800084E7:
    rdx = cs:qword_180029858;

class="lbl">loc_1800084EE:
    ecx = *(void**)(rdi);
    *(void**)(rdx+0x1C) = ecx;
    ecx = *(void**)(rdi+4);
    *(void**)(rdx+0x20) = ecx;
    ecx = *(void**)(rdi+8);
    *(void**)(rdx+0x24) = ecx;
    rcx = cs:qword_180029518;
    r8 = *(void**)(rcx);
    edx = ebx;
    *(class="type">uint64_t*)(r8+0x18)();
    // cmp: set flags = *(void**)(rsp+0x108+var_20) - rax
    if(!ZF)           goto loc_18000851D;
    al = 1;
    goto loc_180008539;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000851D:
    // [MOVSS] xmm0, [rsp+0x108+var_4C]
    // comiss: compare xmm0 vs cs:dword_180005f88
    if(CF||ZF)        goto loc_180008533;
    al = 1;
    goto loc_180008539;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008533:
    al = 0;  // xor self
    goto loc_180008539;
    //   } // starts at 1800083EC
    // ---------------------------------------------------------------------------

class="lbl">loc_180008537:
    // DATA XREF: sub_18002051B+D↓o ...
    al = 0;  // xor self

class="lbl">loc_180008539:
    // sub_18000839C+195↑j ...
    rbx = *(void**)(rsp+0x108+arg_0);
    rsp += 0x100;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 18000839C
    // [SUB_18000839C] endp

class="lbl">algn_18000854B:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_180008024+B3↑p ...


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x50;
    // [MOVSS] xmm0, dword ptr [rcx]
    // [MOVSS] xmm1, dword ptr [rcx+4]
    *(void**)(rsp+0x58+var_18) = xmm6;  // SIMD move
    *(void**)(rsp+0x58+var_28) = xmm7;  // SIMD move
    *(void**)(rsp+0x58+var_38) = xmm8;  // SIMD move
    rbx = r8;
    xmm0=_mm_sub_ss(xmm0,*(class="type">uint32_t*)(rdx));
    xmm1=_mm_sub_ss(xmm1,*(class="type">uint32_t*)(rdx+4));
    // [UNPCKLPS] xmm0, xmm0
    // [UNPCKLPS] xmm1, xmm1
    xmm8=_mm_cvtps_pd(xmm0);
    // [MOVSS] xmm0, dword ptr [rcx+8]
    xmm7=_mm_cvtps_pd(xmm1);
    xmm0=_mm_sub_ss(xmm0,*(class="type">uint32_t*)(rdx+8));
    // [MOVAPD] xmm1, xmm7
    // [MULSD] xmm1, xmm7
    // [UNPCKLPS] xmm0, xmm0
    xmm6=_mm_cvtps_pd(xmm0);
    // [MOVAPD] xmm0, xmm8
    // [MULSD] xmm0, xmm8
    xmm1=_mm_add_sd(xmm1,xmm0);
    // [MOVAPD] xmm0, xmm1  // X
    sqrt();
    // [DIVSD] xmm6, xmm0
    // [MOVAPD] xmm0, xmm6  // X
    atan();
    // [DIVSD] xmm7, xmm8
    // [MULSD] xmm0, cs:qword_180005E58
    // [CVTSD2SS] xmm1, xmm0
    // [MOVAPD] xmm0, xmm7  // X
    // [MOVSS] dword ptr [rbx], xmm1
    atan();
    *(class="type">uint32_t*)(rbx+8) &= 0;
    // [COMISD] xmm8, cs:qword_180005E50
    // [MULSD] xmm0, cs:qword_180005E58
    // [CVTSD2SS] xmm1, xmm0
    // [MOVSS] dword ptr [rbx+4], xmm1
    if(CF)           goto loc_18000860B;
    xmm1=_mm_add_ss(xmm1,cs:dword_180005e48);
    // [MOVSS] dword ptr [rbx+4], xmm1

class="lbl">loc_18000860B:
    xmm6 = *(void**)(rsp+0x58+var_18);  // SIMD move
    xmm7 = *(void**)(rsp+0x58+var_28);  // SIMD move
    xmm8 = *(void**)(rsp+0x58+var_38);  // SIMD move
    rsp += 0x50;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000854C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180008621:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B0CC↓o


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x18) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x30;
    // cmp: set flags = cs:dword_180029174 - 0
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    rbx = r8;
    rbp = rdx;
    rsi = rcx;
    if(ZF)            goto loc_1800087F3;
    // cmp: set flags = *(uint8_t*)(rcx+4) - 0
    if(ZF)            goto loc_1800087F3;
    // test: set flags = rbx & rbx
    if(ZF)            goto loc_180008678;
    rcx = &(r8+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0E2
    if(ZF)            goto loc_1800087F3;

class="lbl">loc_180008678:
    // cmp: set flags = cs:dword_180029198 - 2
    if(!ZF)           goto loc_1800086A4;
    eax = cs:dword_180027120;
    // cmp: set flags = *(uint32_t*)(rax+rbx) - 0x0FFFFFFFF
    if(ZF)            goto loc_180008693;
    // cmp: set flags = *(uint32_t*)(rax+rbx) - 4
    if(!ZF)           goto loc_1800086A4;

class="lbl">loc_180008693:
    // [MOVSS] xmm0, cs:dword_180005F00
    // comiss: compare xmm0 vs *(uint32_t*)(rsi)
    if(CF)           goto loc_1800087F3;

class="lbl">loc_1800086A4:
    // sub_180008624+6D↑j
    // test: set flags = rbx & rbx
    if(ZF)            goto loc_1800087EF;
    rax = *(void**)(rbx+0x10);
    rcx = &(rbx+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x133
    if(ZF)            goto loc_1800086D9;
    rax = *(void**)(rbx+0x10);
    rcx = &(rbx+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x135
    if(!ZF)           goto loc_1800087EF;

class="lbl">loc_1800086D9:
    eax = cs:dword_180027138;
    rcx = cs:qword_180029508;
    // [MOVSS] xmm6, dword ptr [rax+rbx]
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    rdx = eax;
    rax = *(void**)(rcx);
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    ecx = cs:dword_180027164;
    // test: set flags = *(uint8_t*)(rcx+rax) & 2
    if(!ZF)           goto loc_180008731;
    xmm0=_mm_xor_ps(xmm0,xmm0);
    // [MOVSS] cs:dword_1800299E4, xmm0
    goto loc_1800087F3;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008731:
    // [MOVSS] xmm1, cs:dword_1800299E4
    rax = cs:qword_180029540;
    // ucomiss: compare xmm1 vs cs:dword_180005e70 (sets ZF/CF/PF)
    if(!ZF)           goto loc_180008756;
    // [MOVSS] xmm1, dword ptr [rax+0x0C]
    // [MOVSS] cs:dword_1800299E4, xmm1

class="lbl">loc_180008756:
    // [MOVSS] xmm0, dword ptr [rax+0x0C]
    xmm0=_mm_sub_ss(xmm0,xmm1);
    // comiss: compare xmm0 vs cs:dword_180005efc
    if(CF||ZF)        goto loc_1800087F3;
    xmm6=_mm_mul_ss(xmm6,cs:dword_180005ef8);
    ecx = *(void**)(rsi+0x0C);
    eax = 0x97;
    // [CVTTSS2SI] ebx, xmm6
    // cmp: set flags = ebx - eax
    if(SF!=OF) ebx=eax;
    // cmp: set flags = ecx - 0x0FFFFFFFB
    if(!ZF)           goto loc_1800087AA;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_18000879A:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_1800087C0;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800087AA:
    eax = &(rcx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_1800087B9;
    rdx = rcx;
    goto loc_18000879A;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800087B9:
    rdx = cs:qword_180029858;

class="lbl">loc_1800087C0:
    rcx = cs:qword_180029518;
    edx = *(void**)(rdx+0x0C4);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x38)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x350)();
    eax -= ebx;
    // cmp: set flags = eax - 0x0FFFFFFFF
    if(!ZF&&SF==OF)   goto loc_1800087F3;

class="lbl">loc_1800087EF:
    // sub_180008624+AF↑j
    *(class="type">uint32_t*)(rbp+0x28) |= 1;

class="lbl">loc_1800087F3:
    // sub_180008624+32↑j ...
    rbx = *(void**)(rsp+0x38+arg_0);
    rbp = *(void**)(rsp+0x38+arg_8);
    rsi = *(void**)(rsp+0x38+arg_10);
    xmm6 = *(void**)(rsp+0x38+var_18);  // SIMD move
    rsp += 0x30;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180008624] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000880D:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // DATA XREF: .pdata:000000018002B0D8↓o


    *(void**)(rsp-0x18+arg_0) = rbx;
    *(void**)(rsp-0x18+arg_8) = rsi;
    *(void**)(rsp-0x18+arg_10) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rbp = rsp;
    rsp -= 0x50;
    r13d = 0;  // xor self
    rsi = r8;
    r12 = rdx;
    rdi = rcx;
    // test: set flags = r8 & r8
    if(ZF)            goto loc_180008874;
    rbx = &(r8+0x10);  // effective address
    rcx = rbx;
    rax = *(void**)(rbx);
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0EA
    if(!ZF)           goto loc_180008862;
    eax = cs:dword_180027148;
    // cmp: set flags = *(uint32_t*)(rax+rsi) - 4
    if(ZF)            goto loc_180008AA0;

class="lbl">loc_180008862:
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x0EA
    if(ZF)            goto loc_180008884;

class="lbl">loc_180008874:
    eax = cs:dword_180027130;
    // cmp: set flags = *(void**)(rax+rsi) - r13d
    if(ZF)            goto loc_180008AA0;

class="lbl">loc_180008884:
    rcx = rdi;
    sub_1800081E4();
    // cmp: set flags = cs:dword_180029160 - r13d
    if(ZF)            goto loc_1800088DE;
    eax = cs:dword_180029168;
    // test: set flags = eax & eax
    if(ZF)            goto loc_1800088DA;
    // cmp: set flags = eax - 1
    if(!ZF)           goto loc_1800088A8;
    ecx = eax;
    goto loc_1800088CF;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800088A8:
    ecx = 2;
    // cmp: set flags = eax - ecx
    if(ZF)            goto loc_1800088CF;
    // cmp: set flags = eax - 3
    if(!ZF)           goto loc_1800088BB;
    ecx = &(rax+1);  // effective address
    goto loc_1800088CF;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800088BB:
    // cmp: set flags = eax - 4
    if(!ZF)           goto loc_1800088C7;
    ecx = 0x0A0;
    goto loc_1800088CF;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800088C7:
    // cmp: set flags = eax - 5
    if(!ZF)           goto loc_1800088DE;
    ecx = &(rax+0x41);  // effective address  // vKey

class="lbl">loc_1800088CF:
    // sub_180008810+9F↑j ...
    cs:getasynckeystate();
    // test: set flags = ax & ax
    if(ZF)            goto loc_1800088DE;

class="lbl">loc_1800088DA:
    class="type">uint8_t bl;
    bl = 1;
    goto loc_1800088E1;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800088DE:
    // sub_180008810+BA↑j ...
    bl = r13b;

class="lbl">loc_1800088E1:
    // cmp: set flags = *(uint32_t*)(rdi+0x0C) - 0x0FFFFFFFF
    if(ZF)            goto loc_180008AA0;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x2B0)();
    // cmp: set flags = al - 1
    if(ZF)            goto loc_180008AA0;
    // cmp: set flags = cs:dword_180029160 - r13d
    if(ZF)            goto loc_180008AA0;
    // test: set flags = bl & bl
    if(ZF)            goto loc_180008AA0;
    ecx = *(void**)(rdi+0x0C);
    // cmp: set flags = ecx - 0x0FFFFFFFB
    if(!ZF)           goto loc_180008940;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = eax;

class="lbl">loc_180008930:
    rcx *= (class="type">int64_t)0x0D0;
    rcx += cs:qword_180029858;
    goto loc_180008951;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008940:
    eax = &(rcx-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(CF||ZF)        goto loc_180008930;
    rcx = cs:qword_180029858;

class="lbl">loc_180008951:
    eax = *(void**)(rcx+0x1C);
    *(void**)(rbp+var_20) = eax;
    eax = *(void**)(rcx+0x20);
    *(void**)(rbp+var_1C) = eax;
    eax = *(void**)(rcx+0x24);
    rcx = cs:qword_180029508;
    *(void**)(rbp+var_18) = eax;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rcx = cs:qword_180029518;
    rdx = eax;
    rax = *(void**)(rcx);
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x38)();
    ebx = cs:dword_180027110;
    rdx = *(void**)(rax);
    rcx = rax;
    rbx += rax;
    *(class="type">uint64_t*)(rdx+0x48)();
    r8 = &(rbp+var_30);  // effective address
    rdx = &(rbp+var_20);  // effective address
    // [MOVSS] xmm0, dword ptr [rbx]
    // [MOVSS] xmm1, dword ptr [rbx+4]
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax));
    xmm1=_mm_add_ss(xmm1,*(class="type">uint32_t*)(rax+4));
    rcx = &(rbp+var_14);  // effective address
    // [MOVSS] [rbp+var_14], xmm0
    // [MOVSS] xmm0, dword ptr [rbx+8]
    // [MOVSS] [rbp+var_10], xmm1
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax+8));
    // [MOVSS] [rbp+var_C], xmm0
    sub_18000854C();
    // [MOVSS] xmm1, [rbp+var_30]
    // [MOVSS] xmm2, cs:dword_180005E48
    // comiss: compare xmm1 vs xmm2
    // [MOVSS] xmm5, cs:dword_18000618C
    if(CF||ZF)        goto loc_180008A0E;
    xmm1=_mm_add_ss(xmm1,xmm5);
    // [MOVSS] [rbp+var_30], xmm1

class="lbl">loc_180008A0E:
    // [MOVSS] xmm0, [rbp+var_2C]
    // comiss: compare xmm0 vs xmm2
    if(CF||ZF)        goto loc_180008A21;
    xmm0=_mm_add_ss(xmm0,xmm5);
    // [MOVSS] [rbp+var_2C], xmm0

class="lbl">loc_180008A21:
    // [MOVSS] xmm3, cs:dword_180006188
    // [MOVSS] xmm2, cs:dword_1800060FC
    // comiss: compare xmm1 vs xmm3
    if(!CF)          goto loc_180008A3F;
    xmm1=_mm_add_ss(xmm1,xmm2);
    // [MOVSS] [rbp+var_30], xmm1

class="lbl">loc_180008A3F:
    // comiss: compare xmm0 vs xmm3
    if(!CF)          goto loc_180008A4D;
    xmm0=_mm_add_ss(xmm0,xmm2);
    // [MOVSS] [rbp+var_2C], xmm0

class="lbl">loc_180008A4D:
    // cmp: set flags = cs:dword_1800291a0 - r13d
    if(!ZF)           goto loc_180008A74;
    rcx = cs:qword_180029508;
    rdx = &(rbp+var_30);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x0A0)();
    // [MOVSS] xmm0, [rbp+var_2C]
    // [MOVSS] xmm1, [rbp+var_30]

class="lbl">loc_180008A74:
    // [MOVSS] dword ptr [r12+0x14], xmm0
    // [MOVSS] xmm0, [rbp+var_28]
    // [MOVSS] dword ptr [r12+0x10], xmm1
    r8 = rsi;
    rdx = r12;
    rcx = rdi;
    // [MOVSS] dword ptr [r12+0x18], xmm0
    *(class="type">uint8_t*)(rdi+4) = 1;
    sub_180008624();

class="lbl">loc_180008AA0:
    // sub_180008810+6E↑j ...
    r11 = &(rsp+0x50+var_s0);  // effective address
    rbx = *(void**)(r11+0x20);
    rsi = *(void**)(r11+0x28);
    rdi = *(void**)(r11+0x30);
    rsp = r11;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180008810] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180008ABA:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_180007628+1AE↑p ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_10) = r8;
    *(void**)(rsp+arg_8) = edx;
    *(void**)(rsp+arg_0) = rcx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    eax = 0x18F0;
    __alloca_probe();
    rsp -= rax;
    *(void**)(rsp+0x1928+var_18B8) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x1928+var_48) = xmm6;  // SIMD move
    *(void**)(rsp+0x1928+var_58) = xmm7;  // SIMD move
    *(void**)(rsp+0x1928+var_68) = xmm8;  // SIMD move
    *(void**)(rsp+0x1928+var_78) = xmm9;  // SIMD move
    *(void**)(rsp+0x1928+var_88) = xmm10;  // SIMD move
    r13 = r8;
    edi = edx;
    r15 = rcx;
    // cmp: set flags = edx - 0x0FFFFFFFB
    if(!ZF)           goto loc_180008B43;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;

class="lbl">loc_180008B33:
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    goto loc_180008B59;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008B43:
    eax = &(rdi-1);  // effective address
    // cmp: set flags = eax - 0x7FF
    if(!CF&&!ZF)      goto loc_180008B52;
    rdx = rdi;
    goto loc_180008B33;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008B52:
    rdx = cs:qword_180029858;

class="lbl">loc_180008B59:
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    rdx = *(void**)(rax);
    rcx = rax;
    *(class="type">uint64_t*)(rdx+0x38)();
    rbx = &(rax+8);  // effective address
    class="type">uint64_t r10;
    r10 = *(void**)(rbx);
    rax = cs:qword_180029540;
    // [MOVSS] xmm0, dword ptr [rax+0x0C]
    xmm0=_mm_add_ss(xmm0,cs:dword_180005da8);
    // [MOVSS] [rsp+0x1928+var_1908], xmm0
    r9d = 0x100;
    r8d = &(r9-0x80);  // effective address
    rdx = &(rsp+0x1928+var_1888);  // effective address
    rcx = rbx;
    *(class="type">uint64_t*)(r10+0x80)();
    // test: set flags = al & al
    if(!ZF)           goto loc_180008BBD;

class="lbl">loc_180008BB6:
    // sub_180008ABC+12D↓j
    al = 0;  // xor self
    goto loc_180008F3F;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008BBD:
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x48)();
    rdx = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_180008BB6;
    rcx = cs:qword_180029538;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x0E0)();
    r12 = rax;
    *(void**)(rsp+0x1928+var_18D0) = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_180008BB6;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    rdx = *(void**)(rax);
    rcx = rax;
    *(class="type">uint64_t*)(rdx+0x38)();
    ebx = cs:dword_180027110;
    rbx += rax;
    rdx = *(void**)(rax);
    rcx = rax;
    *(class="type">uint64_t*)(rdx+0x48)();
    // [MOVSS] xmm0, dword ptr [rbx]
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax));
    // [MOVSS] [rsp+0x1928+var_18E0], xmm0
    // [MOVSS] xmm1, dword ptr [rbx+4]
    xmm1=_mm_add_ss(xmm1,*(class="type">uint32_t*)(rax+4));
    // [MOVSS] [rsp+0x1928+var_18DC], xmm1
    // [MOVSS] xmm0, dword ptr [rbx+8]
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax+8));
    // [MOVSS] [rsp+0x1928+var_18D8], xmm0
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    rdx = eax;
    rdx *= (class="type">int64_t)0x0D0;
    rdx += cs:qword_180029858;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = *(void**)(rdx+0x0C4);
    *(class="type">uint64_t*)(rax+0x18)();
    rcx = rax;
    sub_18000C174();
    r11b = 0;  // xor self
    *(void**)(rsp+0x1928+var_18F8) = r11b;
    esi = 0;  // xor self
    // [MOVSS] xmm10, cs:dword_180005DD8

class="lbl">loc_180008CB1:
    *(void**)(rsp+0x1928+arg_18) = esi;
    // test: set flags = r11b & r11b
    if(!ZF)           goto loc_180008F3C;
    rax = esi;
    rdx = *(class="type">uint32_t*)(r13+rax*4+0);
    // cmp: set flags = edx - 0x0FFFFFFFF
    if(ZF)            goto loc_180008F3C;

class="lbl">loc_180008CD2:
    //   try {
    rcx = *(class="type">uint32_t*)(r12+0x0B0);
    rcx += r12;
    if(ZF)            goto loc_180008F02;
    rax = rdx;
    rax *= (class="type">int64_t)0x44;  // 'D'
    r14 = *(class="type">uint32_t*)(rcx+8);
    rax += rcx;
    r14 += rax;
    if(ZF)            goto loc_180008F02;
    rax = *(class="type">uint32_t*)(r14);
    rcx = &(rax+rax*2);  // effective address
    rcx += rcx;
    rbx = &(rsp+rcx*8+0x1928+var_1888);  // effective address
    rdx = &(rsp+0x1928+var_18C8);  // effective address
    rcx = rbx;
    sub_1800069B0();
    // [MOVSS] xmm5, dword ptr [rbx+0x0C]
    // [MOVSS] [rsp+0x1928+var_18F0], xmm5
    rax = *(class="type">uint32_t*)(r14);
    rcx = &(rax+rax*2);  // effective address
    rcx += rcx;
    // [MOVSS] xmm9, dword ptr [r14+0x0C]
    // [MOVSS] xmm2, dword ptr [r14+8]
    // [MOVSS] xmm3, dword ptr [r14+0x10]
    xmm5 = xmm9;  // SIMD move
    xmm5=_mm_mul_ss(xmm5,*(void**)(rsp+rcx*8+0x1928+var_1884));
    xmm0 = xmm2;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,*(void**)(rsp+rcx*8+0x1928+var_1888));
    xmm5=_mm_add_ss(xmm5,xmm0);
    xmm1 = xmm3;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,*(void**)(rsp+rcx*8+0x1928+var_1880));
    xmm5=_mm_add_ss(xmm5,xmm1);
    xmm5=_mm_add_ss(xmm5,*(void**)(rsp+rcx*8+0x1928+var_187C));
    // [MOVSS] [rsp+0x1928+var_18C8], xmm5
    xmm4 = xmm9;  // SIMD move
    xmm4=_mm_mul_ss(xmm4,*(void**)(rsp+rcx*8+0x1928+var_1874));
    xmm0 = xmm2;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,*(void**)(rsp+rcx*8+0x1928+var_1878));
    xmm4=_mm_add_ss(xmm4,xmm0);
    xmm1 = xmm3;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,*(void**)(rsp+rcx*8+0x1928+var_1870));
    xmm4=_mm_add_ss(xmm4,xmm1);
    xmm4=_mm_add_ss(xmm4,*(void**)(rsp+rcx*8+0x1928+var_186C));
    xmm9=_mm_mul_ss(xmm9,*(void**)(rsp+rcx*8+0x1928+var_1864));
    xmm2=_mm_mul_ss(xmm2,*(void**)(rsp+rcx*8+0x1928+var_1868));
    xmm9=_mm_add_ss(xmm9,xmm2);
    xmm3=_mm_mul_ss(xmm3,*(void**)(rsp+rcx*8+0x1928+var_1860));
    xmm9=_mm_add_ss(xmm9,xmm3);
    xmm9=_mm_add_ss(xmm9,*(void**)(rsp+rcx*8+0x1928+var_185C));
    // [MOVSS] xmm8, dword ptr [r14+0x18]
    // [MOVSS] xmm2, dword ptr [r14+0x14]
    // [MOVSS] xmm3, dword ptr [r14+0x1C]
    xmm7 = xmm8;  // SIMD move
    xmm7=_mm_mul_ss(xmm7,*(void**)(rsp+rcx*8+0x1928+var_1884));
    xmm0 = xmm2;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,*(void**)(rsp+rcx*8+0x1928+var_1888));
    xmm7=_mm_add_ss(xmm7,xmm0);
    xmm1 = xmm3;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,*(void**)(rsp+rcx*8+0x1928+var_1880));
    xmm7=_mm_add_ss(xmm7,xmm1);
    xmm7=_mm_add_ss(xmm7,*(void**)(rsp+rcx*8+0x1928+var_187C));
    // [MOVSS] [rsp+0x1928+var_18B0], xmm7
    xmm6 = xmm8;  // SIMD move
    xmm6=_mm_mul_ss(xmm6,*(void**)(rsp+rcx*8+0x1928+var_1874));
    xmm0 = xmm2;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,*(void**)(rsp+rcx*8+0x1928+var_1878));
    xmm6=_mm_add_ss(xmm6,xmm0);
    xmm1 = xmm3;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,*(void**)(rsp+rcx*8+0x1928+var_1870));
    xmm6=_mm_add_ss(xmm6,xmm1);
    xmm6=_mm_add_ss(xmm6,*(void**)(rsp+rcx*8+0x1928+var_186C));
    xmm8=_mm_mul_ss(xmm8,*(void**)(rsp+rcx*8+0x1928+var_1864));
    xmm2=_mm_mul_ss(xmm2,*(void**)(rsp+rcx*8+0x1928+var_1868));
    xmm8=_mm_add_ss(xmm8,xmm2);
    xmm3=_mm_mul_ss(xmm3,*(void**)(rsp+rcx*8+0x1928+var_1860));
    xmm8=_mm_add_ss(xmm8,xmm3);
    xmm8=_mm_add_ss(xmm8,*(void**)(rsp+rcx*8+0x1928+var_185C));
    xmm7=_mm_add_ss(xmm7,xmm5);
    // [MOVSS] [rsp+0x1928+var_1894], xmm7
    xmm6=_mm_add_ss(xmm6,xmm4);
    xmm8=_mm_add_ss(xmm8,xmm9);
    xmm7=_mm_mul_ss(xmm7,xmm10);
    // [MOVSS] [rsp+0x1928+var_18A0], xmm7
    xmm6=_mm_mul_ss(xmm6,xmm10);
    xmm8=_mm_mul_ss(xmm8,xmm10);
    // [MOVSS] [rsp+0x1928+var_18F0], xmm7
    // [MOVSS] [rsp+0x1928+var_18EC], xmm6
    // [MOVSS] [rsp+0x1928+var_18E8], xmm8
    r8d = edi;
    rdx = &(rsp+0x1928+var_18F0);  // effective address
    rcx = &(rsp+0x1928+var_18E0);  // effective address
    sub_18000839C();
    r11b = al;
    *(void**)(rsp+0x1928+var_18F8) = al;
    // [MOVSS] dword ptr [r15+0x18], xmm7
    // [MOVSS] dword ptr [r15+0x1C], xmm6
    // [MOVSS] dword ptr [r15+0x20], xmm8
    //   } // starts at 180008CD2

class="lbl">loc_180008F02:
    // sub_180008ABC+238↑j
    // DATA XREF: ...
    goto loc_180008F35;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008F04:
    // DATA XREF: sub_180020702+D↓o
    r15 = *(void**)(rsp+0x1928+arg_0);
    r13 = *(void**)(rsp+0x1928+arg_10);
    edi = *(void**)(rsp+0x1928+arg_8);
    r12 = *(void**)(rsp+0x1928+var_18D0);
    r11b = *(void**)(rsp+0x1928+var_18F8);
    esi = *(void**)(rsp+0x1928+arg_18);
    // [MOVSS] xmm10, cs:dword_180005DD8

class="lbl">loc_180008F35:
    esi++;
    goto loc_180008CB1;
    // ---------------------------------------------------------------------------

class="lbl">loc_180008F3C:
    // sub_180008ABC+210↑j
    al = r11b;

class="lbl">loc_180008F3F:
    r11 = &(rsp+0x1928+var_38);  // effective address
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm7 = xmmword ptr [r11-0x20];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    rsp = r11;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 180008ABC
    // [SUB_180008ABC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180008F6F:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame fpd=110h

    // DATA XREF: X:stru_180021FA4↓o ...


    // __unwind { // __CxxFrameHandler3
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rbp = &(rax-0x118);  // effective address
    rsp -= 0x210;
    *(void**)(rbp+0x110+var_190) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    *(void**)(rax+0x18) = rdi;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    xmmword ptr [rax-0x28] = xmm7;  // SIMD move
    xmmword ptr [rax-0x38] = xmm8;  // SIMD move
    xmmword ptr [rax-0x48] = xmm9;  // SIMD move
    xmmword ptr [rax-0x58] = xmm10;  // SIMD move
    xmmword ptr [rax-0x68] = xmm11;  // SIMD move
    xmmword ptr [rax-0x78] = xmm12;  // SIMD move
    xmmword ptr [rax-0x88] = xmm13;  // SIMD move
    rdi = rdx;
    rsi = rcx;
    eax = cs:dword_1800299f8;
    // test: set flags = al & 1
    if(!ZF)           goto loc_180008FE6;
    eax |= 1;
    cs:dword_1800299f8 = eax;

class="lbl">loc_180008FD8:
    //   try {
    rax = &(off_180004EB8);  // effective address
    cs:qword_1800299f0 = rax;
    //   } // starts at 180008FD8

class="lbl">loc_180008FE6:
    // DATA XREF: X:0000000180021FB4↓o
    ebx = cs:dword_180027110;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x48)();
    // [MOVSS] xmm11, dword ptr [rbx+rsi]
    xmm11=_mm_add_ss(xmm11,*(class="type">uint32_t*)(rax));
    // [MOVSS] xmm12, dword ptr [rbx+rsi+4]
    xmm12=_mm_add_ss(xmm12,*(class="type">uint32_t*)(rax+4));
    // [MOVSS] xmm13, dword ptr [rbx+rsi+8]
    xmm13=_mm_add_ss(xmm13,*(class="type">uint32_t*)(rax+8));
    rax = *(void**)(rsi);
    rcx = rsi;
    *(class="type">uint64_t*)(rax+0x50)();
    // [MOVSS] xmm9, dword ptr [rax]
    // [MOVSS] xmm6, dword ptr [rax+4]
    xmm6=_mm_mul_ss(xmm6,cs:dword_180005f20);
    xmm0 = xmm6;  // SIMD move  // X
    sinf();
    xmm8 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    xmm6 = xmm0;  // SIMD move
    xmm9=_mm_mul_ss(xmm9,cs:dword_180005f20);
    xmm0 = xmm9;  // SIMD move  // X
    sinf();
    xmm10 = xmm0;  // SIMD move
    xmm0 = xmm9;  // SIMD move  // X
    cosf();
    xmm9 = xmm0;  // SIMD move
    xmm7 = xmm0;  // SIMD move
    xmm7=_mm_mul_ss(xmm7,xmm6);
    xmm9=_mm_mul_ss(xmm9,xmm8);
    xmm10=_mm_xor_ps(xmm10,cs:xmmword_180005dc0);
    ebx = cs:dword_180027110;
    rax = *(void**)(rsi);
    rcx = rsi;
    *(class="type">uint64_t*)(rax+0x48)();
    // [MOVSS] xmm1, dword ptr [rax]
    xmm1=_mm_add_ss(xmm1,*(class="type">uint32_t*)(rbx+rsi));
    // [MOVSS] xmm2, dword ptr [rbx+rsi+4]
    xmm2=_mm_add_ss(xmm2,*(class="type">uint32_t*)(rax+4));
    // [MOVSS] xmm3, dword ptr [rbx+rsi+8]
    xmm3=_mm_add_ss(xmm3,*(class="type">uint32_t*)(rax+8));
    // [MOVSS] xmm0, cs:dword_180005F58
    xmm7=_mm_mul_ss(xmm7,xmm0);
    xmm9=_mm_mul_ss(xmm9,xmm0);
    xmm10=_mm_mul_ss(xmm10,xmm0);
    xmm7=_mm_add_ss(xmm7,xmm1);
    xmm9=_mm_add_ss(xmm9,xmm2);
    xmm10=_mm_add_ss(xmm10,xmm3);
    xmm7=_mm_sub_ss(xmm7,xmm11);
    // [MOVSS] [rsp+0x210+var_1D0], xmm7
    xmm9=_mm_sub_ss(xmm9,xmm12);
    // [MOVSS] [rsp+0x210+var_1CC], xmm9
    xmm10=_mm_sub_ss(xmm10,xmm13);
    // [MOVSS] [rsp+0x210+var_1C8], xmm10
    xmm9=_mm_mul_ss(xmm9,xmm9);
    xmm7=_mm_mul_ss(xmm7,xmm7);
    xmm9=_mm_add_ss(xmm9,xmm7);
    xmm10=_mm_mul_ss(xmm10,xmm10);
    xmm9=_mm_add_ss(xmm9,xmm10);
    xmm6=_mm_xor_ps(xmm6,xmm6);
    // ucomiss: compare xmm9 vs xmm6 (sets ZF/CF/PF)
    *(void**)(rsp+0x210+var_19F) = 1;
    if(!ZF)           goto loc_180009120;
    *(void**)(rsp+0x210+var_19F) = 0;

class="lbl">loc_180009120:
    // [MOVSS] dword ptr [rsp+0x210+var_1A8], xmm6
    // [MOVSS] [rsp+0x210+var_1AC], xmm6
    // [MOVSS] [rsp+0x210+var_1B0], xmm6
    *(void**)(rsp+0x210+var_1A0) = 1;
    // [MOVSS] [rsp+0x210+var_1B8], xmm6
    // [MOVSS] [rsp+0x210+var_1BC], xmm6
    // [MOVSS] [rsp+0x210+var_1C0], xmm6
    // [MOVSS] [rsp+0x210+var_1E0], xmm11
    // [MOVSS] [rsp+0x210+var_1DC], xmm12
    // [MOVSS] [rsp+0x210+var_1D8], xmm13
    rcx = cs:qword_180029530;
    rax = *(void**)(rcx);
    rdx = &(rbp+0x110+var_180);  // effective address
    *(void**)(rsp+0x210+var_1F0) = rdx;
    r9 = &(qword_1800299F0);  // effective address
    r8d = 0x4200400B;
    rdx = &(rsp+0x210+var_1E0);  // effective address
    *(class="type">uint64_t*)(rax+0x20)();
    rcx = *(void**)(rbp+0x110+var_128);
    // test: set flags = rcx & rcx
    if(ZF)            goto loc_180009265;
    rax = cs:qword_180029508;
    rbx = *(void**)(rax);
    rcx += 0x10;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x48)();
    edx = eax;
    r8 = &(rbp+0x110+var_110);  // effective address
    rcx = cs:qword_180029508;
    *(class="type">uint64_t*)(rbx+0x40)();
    // test: set flags = al & al
    if(ZF)            goto loc_180009265;
    edx = cs:dword_1800270fc;
    ecx = *(void**)(rdx+rsi);
    rax = *(void**)(rbp+0x110+var_128);
    // cmp: set flags = *(void**)(rdx+rax) - ecx
    if(ZF)            goto loc_180009265;
    // test: set flags = rdi & rdi
    if(ZF)            goto loc_180009261;
    rax = *(void**)(rdi+0x10);
    rcx = &(rdi+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x133
    if(ZF)            goto loc_180009212;
    rax = *(void**)(rdi+0x10);
    rcx = &(rdi+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x135
    if(ZF)            goto loc_180009212;
    eax = cs:dword_180027128;
    // cmp: set flags = *(uint32_t*)(rax+rdi) - 0x3D  // '='
    if(!ZF)           goto loc_180009261;

class="lbl">loc_180009212:
    // sub_180008F70+294↑j
    eax = cs:dword_180027164;
    // test: set flags = *(uint8_t*)(rax+rsi) & 2
    if(!ZF)           goto loc_180009228;
    // [MOVSS] cs:dword_1800299E8, xmm6
    goto loc_180009265;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009228:
    rax = cs:qword_180029540;
    // [MOVSS] xmm1, cs:dword_1800299E8
    // ucomiss: compare xmm1 vs xmm6 (sets ZF/CF/PF)
    if(!ZF)           goto loc_180009249;
    // [MOVSS] xmm1, dword ptr [rax+0x0C]
    // [MOVSS] cs:dword_1800299E8, xmm1

class="lbl">loc_180009249:
    // cmp: set flags = *(void**)(rbp+0x110+var_130) - 1
    if(!ZF)           goto loc_180009265;
    // [MOVSS] xmm0, dword ptr [rax+0x0C]
    xmm0=_mm_sub_ss(xmm0,xmm1);
    // comiss: compare xmm0 vs cs:dword_180005efc
    if(CF||ZF)        goto loc_180009265;

class="lbl">loc_180009261:
    // sub_180008F70+2A0↑j
    al = 1;
    goto loc_180009267;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009265:
    // sub_180008F70+249↑j ...
    al = 0;  // xor self

class="lbl">loc_180009267:
    r11 = &(rsp+0x210+var_s0);  // effective address
    rbx = *(void**)(r11+0x10);
    rsi = *(void**)(r11+0x18);
    rdi = *(void**)(r11+0x20);
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm7 = xmmword ptr [r11-0x20];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    xmm11 = xmmword ptr [r11-0x60];  // SIMD move
    xmm12 = xmmword ptr [r11-0x70];  // SIMD move
    xmm13 = xmmword ptr [r11-0x80];  // SIMD move
    rsp = r11;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 180008F70
    // [SUB_180008F70] endp


    // =============== S U B R O U T I N E =======================================


    // sub_180009334+108↓p ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    // [MOVSS] xmm1, dword ptr [rcx+4]
    // [MOVSS] xmm0, dword ptr [rcx]
    // [MOVSS] xmm2, dword ptr [rcx+8]
    rbx = rdx;
    rdi = rcx;
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm0=_mm_add_ss(xmm0,xmm1);
    xmm0=_mm_add_ss(xmm0,xmm2);  // X
    sqrtf();
    // ucomiss: compare xmm0 vs cs:dword_180005e70 (sets ZF/CF/PF)
    if(!ZF)           goto loc_1800092F8;
    *(class="type">uint32_t*)(rbx) &= 0;
    *(class="type">uint32_t*)(rbx+4) &= 0;
    *(class="type">uint32_t*)(rbx+8) = 0x3F800000;
    goto loc_180009326;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800092F8:
    // [MOVSS] xmm2, cs:dword_180005DA8
    xmm2=_mm_div_ss(xmm2,xmm0);
    xmm1 = xmm2;  // SIMD move
    xmm0 = xmm2;  // SIMD move
    xmm2=_mm_mul_ss(xmm2,*(class="type">uint32_t*)(rdi));
    xmm1=_mm_mul_ss(xmm1,*(class="type">uint32_t*)(rdi+8));
    xmm0=_mm_mul_ss(xmm0,*(class="type">uint32_t*)(rdi+4));
    // [MOVSS] dword ptr [rbx], xmm2
    // [MOVSS] dword ptr [rbx+4], xmm0
    // [MOVSS] dword ptr [rbx+8], xmm1

class="lbl">loc_180009326:
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_1800092A8] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180009331:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame fpd=40h

    // DATA XREF: .pdata:000000018002B108↓o


    rax = rsp;
    *(void**)(rax+0x18) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rbp = &(rax-0x48);  // effective address
    rsp -= 0x140;
    // [MOVSS] xmm0, dword ptr [rcx+0x14]
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    xmm6=_mm_xor_ps(xmm6,xmm6);
    xmmword ptr [rax-0x28] = xmm7;  // SIMD move
    xmmword ptr [rax-0x38] = xmm8;  // SIMD move
    xmmword ptr [rax-0x48] = xmm9;  // SIMD move
    rbx = rcx;
    r9 = &(rbp+0x40+var_B0);  // effective address
    r8 = &(rbp+0x40+var_C0);  // effective address
    rdx = &(rsp+0x140+var_100);  // effective address
    // [MOVSS] xmm9, dword ptr [rcx+0x24]
    // [MOVSS] xmm7, dword ptr [rcx+0x1C]
    // [MOVSS] xmm8, dword ptr [rcx+0x20]
    rcx = &(rsp+0x140+var_120);  // effective address
    xmmword ptr [rax-0x58] = xmm10;  // SIMD move
    xmmword ptr [rax-0x68] = xmm11;  // SIMD move
    xmmword ptr [rax-0x78] = xmm12;  // SIMD move
    // [MOVSS] [rsp+0x140+var_120], xmm6
    // [MOVSS] [rsp+0x140+var_11C], xmm0
    // [MOVSS] [rsp+0x140+var_118], xmm6
    xmmword ptr [rax-0x88] = xmm13;  // SIMD move
    xmmword ptr [rax-0x98] = xmm14;  // SIMD move
    xmmword ptr [rax-0x0a8] = xmm15;  // SIMD move
    sub_180006B00();
    rand();
    r9 = &(rsp+0x140+var_D0);  // effective address
    // [MOVSS] [rsp+0x140+var_120], xmm6
    // [MOVSS] [rsp+0x140+var_118], xmm6
    class="type">uint32_t r11d;
    r11d = eax;
    eax = 0x0B40B40B5;
    r8 = &(rsp+0x140+var_E0);  // effective address
    rax = (class="type">int64_t)rax * (class="type">int64_t)r11d;
    edx += r11d;
    edx = (class="type">int64_t)edx >> 6;  // arithmetic
    ecx = edx;
    ecx >>= 0x1F;  // logical
    edx += ecx;
    rcx = &(rsp+0x140+var_120);  // effective address
    edx *= (class="type">int64_t)0x5B;  // '['
    r11d -= edx;
    rdx = &(rsp+0x140+var_F0);  // effective address
    r11d -= 0x2D;  // '-'
    // [MOVD] xmm0, r11d
    // [CVTDQ2PS] xmm0, xmm0
    // [MOVSS] dword ptr [rbx+0x14], xmm0
    // [MOVSS] [rsp+0x140+var_11C], xmm0
    sub_180006B00();
    rdx = &(rsp+0x140+var_120);  // effective address
    rcx = &(rsp+0x140+var_100);  // effective address
    sub_1800092A8();
    rdx = &(rsp+0x140+var_110);  // effective address
    rcx = &(rbp+0x40+var_C0);  // effective address
    sub_1800092A8();
    rdx = &(rsp+0x140+var_100);  // effective address
    rcx = &(rbp+0x40+var_B0);  // effective address
    sub_1800092A8();
    // [MOVSS] xmm0, [rsp+0x140+var_10C]
    // [MOVSS] xmm11, [rsp+0x140+var_110]
    // [MOVSS] xmm3, [rsp+0x140+var_120]
    xmm0=_mm_mul_ss(xmm0,xmm8);
    xmm3=_mm_mul_ss(xmm3,xmm7);
    xmm11=_mm_mul_ss(xmm11,xmm8);
    // [MOVSS] xmm10, [rsp+0x140+var_108]
    // [MOVSS] xmm14, [rsp+0x140+var_11C]
    // [MOVSS] xmm15, [rsp+0x140+var_118]
    xmm10=_mm_mul_ss(xmm10,xmm8);
    xmm14=_mm_mul_ss(xmm14,xmm7);
    xmm15=_mm_mul_ss(xmm15,xmm7);
    xmm7 = xmm0;  // SIMD move
    // [MOVSS] xmm12, [rsp+0x140+var_100]
    // [MOVSS] xmm13, [rsp+0x140+var_FC]
    // [MOVSS] xmm8, [rsp+0x140+var_F8]
    xmm12=_mm_mul_ss(xmm12,xmm9);
    xmm13=_mm_mul_ss(xmm13,xmm9);
    xmm8=_mm_mul_ss(xmm8,xmm9);
    // [MOVSS] xmm6, [rsp+0x140+var_EC]
    // [MOVSS] xmm5, [rsp+0x140+var_F0]
    // [MOVSS] [rbp+0x40+arg_0], xmm0
    xmm0 = xmm11;  // SIMD move
    // [MOVSS] [rbp+0x40+arg_8], xmm3
    xmm7=_mm_mul_ss(xmm7,xmm6);
    // [MOVSS] xmm4, [rsp+0x140+var_E8]
    // [MOVSS] xmm9, [rbp+0x40+arg_8]
    xmm0=_mm_mul_ss(xmm0,xmm5);
    xmm1 = xmm10;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm4);
    xmm2 = xmm6;  // SIMD move
    r11 = &(rsp+0x140+var_s0);  // effective address
    xmm7=_mm_add_ss(xmm7,xmm0);
    xmm2=_mm_mul_ss(xmm2,xmm14);
    xmm0 = xmm3;  // SIMD move
    xmm3 = xmm13;  // SIMD move
    xmm7=_mm_add_ss(xmm7,xmm1);
    xmm1 = xmm4;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,xmm5);
    xmm3=_mm_mul_ss(xmm3,xmm6);
    // [MOVSS] xmm6, [rsp+0x140+var_DC]
    xmm2=_mm_add_ss(xmm2,xmm0);
    xmm1=_mm_mul_ss(xmm1,xmm15);
    xmm0 = xmm12;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,xmm5);
    // [MOVSS] xmm5, [rsp+0x140+var_E0]
    xmm2=_mm_add_ss(xmm2,xmm1);
    xmm1 = xmm8;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm4);
    // [MOVSS] xmm4, [rsp+0x140+var_D8]
    xmm3=_mm_add_ss(xmm3,xmm0);
    xmm7=_mm_add_ss(xmm7,xmm2);
    xmm0 = xmm11;  // SIMD move
    xmm2 = xmm6;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,xmm5);
    xmm2=_mm_mul_ss(xmm2,xmm14);
    xmm3=_mm_add_ss(xmm3,xmm1);
    xmm1 = xmm10;  // SIMD move
    xmm7=_mm_add_ss(xmm7,xmm3);
    xmm1=_mm_mul_ss(xmm1,xmm4);
    xmm3 = xmm13;  // SIMD move
    xmm3=_mm_mul_ss(xmm3,xmm6);
    // [MOVSS] dword ptr [rbx+0x1C], xmm7
    // [MOVSS] xmm7, [rbp+0x40+arg_0]
    xmm7=_mm_mul_ss(xmm7,xmm6);
    xmm7=_mm_add_ss(xmm7,xmm0);
    xmm0 = xmm9;  // SIMD move
    xmm7=_mm_add_ss(xmm7,xmm1);
    xmm0=_mm_mul_ss(xmm0,xmm5);
    xmm1 = xmm4;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm15);
    xmm2=_mm_add_ss(xmm2,xmm0);
    xmm0 = xmm12;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,xmm5);
    // [MOVSS] xmm5, [rbp+0x40+arg_0]
    xmm2=_mm_add_ss(xmm2,xmm1);
    xmm1 = xmm8;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm4);
    // [MOVSS] xmm4, [rsp+0x140+var_CC]
    xmm3=_mm_add_ss(xmm3,xmm0);
    xmm7=_mm_add_ss(xmm7,xmm2);
    xmm5=_mm_mul_ss(xmm5,xmm4);
    xmm13=_mm_mul_ss(xmm13,xmm4);
    // [MOVSS] xmm2, [rsp+0x140+var_C8]
    xmm3=_mm_add_ss(xmm3,xmm1);
    xmm1 = xmm4;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm14);
    xmm0 = xmm2;  // SIMD move
    xmm10=_mm_mul_ss(xmm10,xmm2);
    xmm0=_mm_mul_ss(xmm0,xmm15);
    xmm7=_mm_add_ss(xmm7,xmm3);
    // [MOVSS] xmm3, [rsp+0x140+var_D0]
    xmm11=_mm_mul_ss(xmm11,xmm3);
    xmm9=_mm_mul_ss(xmm9,xmm3);
    xmm12=_mm_mul_ss(xmm12,xmm3);
    // [MOVSS] dword ptr [rbx+0x20], xmm7
    xmm5=_mm_add_ss(xmm5,xmm11);
    xmm1=_mm_add_ss(xmm1,xmm9);
    xmm13=_mm_add_ss(xmm13,xmm12);
    xmm8=_mm_mul_ss(xmm8,xmm2);
    xmm5=_mm_add_ss(xmm5,xmm10);
    xmm1=_mm_add_ss(xmm1,xmm0);
    xmm13=_mm_add_ss(xmm13,xmm8);
    xmm5=_mm_add_ss(xmm5,xmm1);
    xmm5=_mm_add_ss(xmm5,xmm13);
    // [MOVSS] dword ptr [rbx+0x24], xmm5
    rbx = *(void**)(r11+0x20);
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm7 = xmmword ptr [r11-0x20];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    xmm11 = xmmword ptr [r11-0x60];  // SIMD move
    xmm12 = xmmword ptr [r11-0x70];  // SIMD move
    xmm13 = xmmword ptr [r11-0x80];  // SIMD move
    xmm14 = xmmword ptr [r11-0x90];  // SIMD move
    xmm15 = xmmword ptr [r11-0x0a0];  // SIMD move
    rsp = r11;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180009334] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180009682:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_18000977C+1B3↓p
    // DATA XREF: ...


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x18) = rsi;
    *(void**)(rax+0x20) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp -= 0x20;
    rsi = ecx;
    r12 = &(byte_180027170);  // effective address
    rbp = r9;
    rdi = rsi;
    rbx = r8;
    rdi <<= 6;
    rcx = &(rdi+r12+0x24);  // effective address  // Destination
    strcpy();
    eax = *(void**)(rsp+0x28+arg_20);
    *(class="type">uint32_t*)(rdi+r12+0x18) &= 0;
    *(void**)(rdi+r12+0x1C) = eax;
    *(void**)(rdi+r12+0x10) = rbx;
    rbx = *(void**)(rsp+0x28+arg_0);
    *(void**)(rdi+r12+0x48) = rbp;
    rbp = *(void**)(rsp+0x28+arg_8);
    eax = &(rsi+1);  // effective address
    rsi = *(void**)(rsp+0x28+arg_10);
    *(class="type">uint32_t*)(rdi+r12+0x20) = 1;
    rdi = *(void**)(rsp+0x28+arg_18);
    rsp += 0x20;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180009684] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_1800096FE:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // sub_18000977C+5B↓p ...


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x18) = rsi;
    *(void**)(rax+0x20) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp -= 0x20;
    rbp = ecx;
    r12 = &(byte_180027170);  // effective address
    edi = r9d;
    rsi = rbp;
    rbx = r8;
    rsi <<= 6;
    rcx = &(rsi+r12+0x24);  // effective address  // Destination
    strcpy();
    eax = *(void**)(rsp+0x28+arg_20);
    *(class="type">uint64_t*)(rsi+r12+0x48) &= 0;
    *(void**)(rsi+r12+0x1C) = eax;
    eax = *(void**)(rsp+0x28+arg_28);
    *(void**)(rsi+r12+0x10) = rbx;
    rbx = *(void**)(rsp+0x28+arg_0);
    *(void**)(rsi+r12+0x20) = eax;
    *(void**)(rsi+r12+0x18) = edi;
    rsi = *(void**)(rsp+0x28+arg_10);
    rdi = *(void**)(rsp+0x28+arg_18);
    eax = &(rbp+1);  // effective address
    rbp = *(void**)(rsp+0x28+arg_8);
    rsp += 0x20;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180009700] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000977A:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B12C↓o


    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_10) &= 0;
    *(void**)(rsp+0x38+var_18) &= 0;
    rdx = (const char*)aAim;  // "[+] AIM"
    r9d = 0;  // xor self
    r8d = 0;  // xor self
    ecx = 0;  // xor self
    cs:dword_1800294f0 = 0x0FFFFFF00;
    cs:dword_1800294f4 = 0x0FF0000;
    sub_180009700();
    class="type">uint32_t r12d;
    r12d = 1;
    r8 = &(dword_180029160);  // effective address
    rdx = (const char*)aAimBot;  // "Aim Bot"
    ecx = eax;
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r9 = &(off_180025AF0);  // effective address  // "OFF"
    r8 = &(dword_180029168);  // effective address
    rdx = (const char*)aAimKey;  // "Aim Key"
    ecx = eax;
    *(void**)(rsp+0x38+var_18) = 5;
    sub_180009684();
    r8 = &(dword_180029174);  // effective address
    rdx = (const char*)aAutoShoot;  // "Auto Shoot"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_18002919C);  // effective address
    rdx = (const char*)aPreserveTarget;  // "Preserve Target"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291A0);  // effective address
    rdx = (const char*)aSilentAim;  // "Silent Aim"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291A4);  // effective address
    rdx = (const char*)aAimSentry;  // "Aim Sentry"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291A8);  // effective address
    rdx = (const char*)aAimStickies;  // "Aim Stickies"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029180);  // effective address
    rdx = (const char*)aIgnoreDeadring;  // "Ignore DeadRinger"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029188);  // effective address
    rdx = (const char*)aIgnoreCloakDis;  // "Ignore Cloak/Disguse"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029184);  // effective address
    rdx = (const char*)aNpcOnly;  // "NPC only"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    *(void**)(rsp+0x38+var_18) = 2;
    r9 = &(off_180025B20);  // effective address  // "OFF"
    r8 = &(dword_180029198);  // effective address
    rdx = (const char*)aMeleeAim;  // "Melee Aim"
    ecx = eax;
    sub_180009684();
    *(void**)(rsp+0x38+var_10) &= 0;
    *(void**)(rsp+0x38+var_18) &= 0;
    rdx = (const char*)aStuff;  // "[+] STUFF"
    ecx = eax;
    r9d = 0;  // xor self
    r8d = 0;  // xor self
    sub_180009700();
    r8 = &(dword_1800291BC);  // effective address
    rdx = (const char*)aBigHeads;  // "Big Heads"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_18002922C);  // effective address
    rdx = (const char*)aSpinbot;  // "SpinBot"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029190);  // effective address
    rdx = (const char*)aTriggerBot;  // "Trigger Bot"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    *(void**)(rsp+0x38+var_10) &= 0;
    *(void**)(rsp+0x38+var_18) &= 0;
    rdx = (const char*)aEsp;  // "[+] ESP"
    ecx = eax;
    r9d = 0;  // xor self
    r8d = 0;  // xor self
    sub_180009700();
    r8 = &(dword_1800291B0);  // effective address
    rdx = (const char*)aEnemyOnly;  // "Enemy Only"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291C0);  // effective address
    rdx = (const char*)aName;  // "Name"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291D0);  // effective address
    rdx = (const char*)aHealth;  // "Health"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = 2;
    sub_180009700();
    r8 = &(dword_1800291C8);  // effective address
    rdx = (const char*)aWeapon;  // "Weapon"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291E8);  // effective address
    rdx = (const char*)aUbercharge;  // "UberCharge"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291C4);  // effective address
    rdx = (const char*)aDistance;  // "Distance"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291DC);  // effective address
    rdx = (const char*)aClass;  // "Class"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291E0);  // effective address
    rdx = (const char*)aWorldEsp;  // "World ESP"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_1800291EC);  // effective address
    rdx = (const char*)aRadar;  // "Radar"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r9d = &(r12+0x13);  // effective address
    r8 = &(dword_1800291F0);  // effective address
    rdx = (const char*)aRadarX;  // "Radar X"
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = 0x0A;
    *(void**)(rsp+0x38+var_18) = 0x2710;
    sub_180009700();
    r9d = &(r12+0x13);  // effective address
    r8 = &(dword_1800291F4);  // effective address
    rdx = (const char*)aRadarY;  // "Radar Y"
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = 0x0A;
    *(void**)(rsp+0x38+var_18) = 0x2710;
    sub_180009700();
    r9d = &(r12+0x13);  // effective address
    r8 = &(dword_1800291F8);  // effective address
    rdx = (const char*)aRadarW;  // "Radar W"
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = 0x0A;
    *(void**)(rsp+0x38+var_18) = 0x3E8;
    sub_180009700();
    *(void**)(rsp+0x38+var_10) &= 0;
    *(void**)(rsp+0x38+var_18) &= 0;
    rdx = (const char*)aMisc;  // "[+] MISC"
    ecx = eax;
    r9d = 0;  // xor self
    r8d = 0;  // xor self
    sub_180009700();
    r8 = &(dword_18002925C);  // effective address
    rdx = (const char*)aAutoBackstab;  // "Auto Backstab"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029264);  // effective address
    rdx = (const char*)aAntiCloakDisgu;  // "Anti-Cloak/Disguse"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029214);  // effective address
    rdx = (const char*)aBunnyHop;  // "Bunny Hop"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    r8 = &(dword_180029210);  // effective address
    rdx = (const char*)aChatSpam;  // "Chat Spam"
    r9d = 0;  // xor self
    ecx = eax;
    *(void**)(rsp+0x38+var_10) = r12d;
    *(void**)(rsp+0x38+var_18) = r12d;
    sub_180009700();
    cs:dword_180027178 = eax;
    rsp += 0x30;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000977C] endp


    // =============== S U B R O U T I N E =======================================


    // sub_18000A5FC+1F↓p
    // DATA XREF: ...
    rsp -= 0x28;
    r8 = rcx;
    // cmp: set flags = edx - 0x48  // 'H'
    if(ZF)            goto loc_180009D73;
    // cmp: set flags = edx - 0x66  // 'f'
    if(ZF)            goto loc_180009D73;
    // cmp: set flags = *(uint8_t*)(rcx) - 0
    if(ZF)            goto loc_180009D6F;
    // cmp: set flags = edx - 0x58  // 'X'
    if(ZF)            goto loc_180009D56;
    // cmp: set flags = edx - 0x70  // 'p'
    if(ZF)            goto loc_180009D56;
    // cmp: set flags = edx - 0x5A  // 'Z'
    if(ZF)            goto loc_180009D1F;
    // cmp: set flags = edx - 0x71  // 'q'
    if(ZF)            goto loc_180009D1F;
    // cmp: set flags = edx - 0x59  // 'Y'
    if(ZF)            goto loc_180009CDE;
    // cmp: set flags = edx - 0x6B  // 'k'
    if(ZF)            goto loc_180009CDE;
    // cmp: set flags = edx - 0x5B  // '['
    if(ZF)            goto loc_180009C9A;
    // cmp: set flags = edx - 0x6C  // 'l'
    if(!ZF)           goto loc_180009D6F;

class="lbl">loc_180009C9A:
    rax = *(class="type">uint32_t*)(rcx+4);
    rax <<= 6;
    rdx = *(void**)(rax+rcx+0x10);
    // test: set flags = rdx & rdx
    if(ZF)            goto loc_180009D80;
    ecx = *(void**)(rax+rcx+0x20);
    ecx += *(void**)(rdx);
    *(void**)(rdx) = ecx;
    rcx = *(class="type">uint32_t*)(r8+4);
    rcx <<= 6;
    rdx = *(void**)(rcx+r8+0x10);
    eax = *(void**)(rcx+r8+0x1C);
    // cmp: set flags = *(void**)(rdx) - eax
    if(ZF||SF!=OF)    goto loc_180009D80;
    eax = *(void**)(rcx+r8+0x18);

class="lbl">loc_180009CD7:
    *(void**)(rdx) = eax;
    goto loc_180009D80;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009CDE:
    // sub_180009C3C+4E↑j
    rax = *(class="type">uint32_t*)(rcx+4);
    rax <<= 6;
    rcx = *(void**)(rax+rcx+0x10);
    // test: set flags = rcx & rcx
    if(ZF)            goto loc_180009D80;
    ecx = *(void**)(rcx);
    ecx -= *(void**)(rax+r8+0x20);
    rax = *(void**)(rax+r8+0x10);
    *(void**)(rax) = ecx;
    rcx = *(class="type">uint32_t*)(r8+4);
    rcx <<= 6;
    rdx = *(void**)(rcx+r8+0x10);
    eax = *(void**)(rcx+r8+0x18);
    // cmp: set flags = *(void**)(rdx) - eax
    if(SF==OF)        goto loc_180009D80;
    eax = *(void**)(rcx+r8+0x1C);
    goto loc_180009CD7;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009D1F:
    // sub_180009C3C+40↑j
    eax = *(void**)(r8+8);
    ecx = *(void**)(rcx+4);
    eax--;
    // cmp: set flags = ecx - eax
    if(SF==OF)        goto loc_180009D4C;
    eax = &(rcx+1);  // effective address
    *(void**)(r8+4) = eax;

class="lbl">loc_180009D33:
    rcx = eax;
    rcx <<= 6;
    // cmp: set flags = *(uint64_t*)(rcx+r8+0x10) - 0
    if(!ZF)           goto loc_180009D80;
    rcx = r8;
    sub_180009C3C();
    goto loc_180009D80;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009D4C:
    *(class="type">uint32_t*)(r8+4) = 1;
    goto loc_180009D80;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009D56:
    // sub_180009C3C+2E↑j
    eax = *(void**)(rcx+4);
    // cmp: set flags = eax - 1
    if(ZF||SF!=OF)    goto loc_180009D65;
    eax--;
    *(void**)(rcx+4) = eax;
    goto loc_180009D33;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009D65:
    eax = *(void**)(rcx+8);
    eax--;
    *(void**)(rcx+4) = eax;
    goto loc_180009D80;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009D6F:
    // sub_180009C3C+58↑j
    al = 0;  // xor self
    goto loc_180009D82;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009D73:
    // sub_180009C3C+13↑j
    // cmp: set flags = *(uint8_t*)(rcx) - 0
    al=ZF?1:0;
    *(void**)(rcx) = al;
    sub_18000B00C();

class="lbl">loc_180009D80:
    // sub_180009C3C+90↑j ...
    al = 1;

class="lbl">loc_180009D82:
    rsp += 0x28;
    return rax;
    // [SUB_180009C3C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180009D87:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B144↓o

    // [FORMAT] = qword ptr -0x0B0
    // [BUFFER] = byte ptr -0x0A8

    *(void**)(rsp+arg_8) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rsp -= 0x0A0;
    r15d = cs:dword_180029208;
    esi = cs:dword_1800297f0;
    r13d = cs:dword_180029204;
    esi += 2;
    rbp = rcx;
    r12d = 5;
    edi = r15d;
    ecx = r12d;
    class="type">uint32_t r14d;
    r14d = edx;
    *(void**)(rsp+0x0D8+arg_0) = esi;
    edi -= esi;
    sub_18000A6B4();
    r9d = *(void**)(rbp+8);
    edx = &(rdi-4);  // effective address
    r8d = 0x0C3;
    ecx = r13d;
    *(void**)(rsp+0x0D8+var_B8) = eax;
    r9d *= (class="type">int64_t)0x0B;
    r9d += 0x15;
    sub_18000BF0C();
    ecx = r12d;
    sub_18000A6B4();
    r9d = &(rsi+4);  // effective address
    esi = 0x0C3;
    edx = &(rdi-4);  // effective address
    r8d = esi;
    ecx = r13d;
    *(void**)(rsp+0x0D8+var_B8) = eax;
    sub_18000BF90();
    r9d = *(void**)(rbp+8);
    r9d *= (class="type">int64_t)0x0B;
    edx = &(rdi-4);  // effective address
    r8d = esi;
    r9d += 0x15;
    ecx = r13d;
    *(void**)(rsp+0x0D8+var_B8) = r14d;
    sub_18000BF90();
    rax = (const char*)aLmaoboxHack141;  // "LMAOBOX HACK 1.4.15"
    ebx = &(r12-4);  // effective address
    *(void**)(rsp+0x0D8+Format) = rax;  // Format
    r9d = &(rdi-2);  // effective address  // int
    r8d = &(r13+0x0C);  // effective address  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    edx = ebx;  // int
    *(void**)(rsp+0x0D8+var_B8) = r14d;  // int
    sub_18000C420();
    r12d = 0;  // xor self
    // cmp: set flags = *(void**)(rbp+8) - r12d
    if(ZF||SF!=OF)    goto loc_18000A006;
    esi = r15d;
    rdi = &(rbp+0x10);  // effective address

class="lbl">loc_180009E79:
    rax = *(void**)(rdi);
    // test: set flags = rax & rax
    if(ZF)            goto loc_180009FC7;
    // cmp: set flags = *(uint32_t*)(rdi+0x0C) - 2
    r8 = *(class="type">uint32_t*)(rax);
    rcx = &(rsp+0x0D8+Buffer);  // effective address  // Destination
    if(SF==OF)        goto loc_180009EAF;
    rax = &(Source);  // effective address  // "ON"
    // test: set flags = r8d & r8d
    rdx = (const char*)aOff;  // "OFF"
    if(!ZF) rdx=rax;  // Source
    strcpy();
    goto loc_180009ED6;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009EAF:
    rax = *(void**)(rdi+0x38);
    // test: set flags = rax & rax
    if(ZF)            goto loc_180009ECA;
    r8 = *(void**)(rax+r8*8);
    rdx = (const char*)Format;  // "%s"
    sprintf();
    goto loc_180009ED6;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009ECA:
    rdx = (const char*)aD;  // "%d"
    sprintf();

class="lbl">loc_180009ED6:
    // sub_180009D88+140↑j
    // cmp: set flags = r12d - *(void**)(rbp+4)
    if(!ZF)           goto loc_180009F3E;
    r9d = *(void**)(rsp+0x0D8+arg_0);
    ecx = &(r13+1);  // effective address
    r8d = 0x0C1;
    edx = esi;
    *(void**)(rsp+0x0D8+var_B8) = 0x0FFFFFF50;
    sub_18000BF0C();
    r11 = r12d;
    r8d = &(r13+0x0F);  // effective address  // int
    r11 <<= 6;
    rcx = &(dword_1800297F0);  // effective address  // int
    r9d = esi;  // int
    rax = &(r11+rbp+0x24);  // effective address
    edx = ebx;  // int
    *(void**)(rsp+0x0D8+Format) = rax;  // Format
    *(void**)(rsp+0x0D8+var_B8) = r14d;  // int
    sub_18000C420();
    r11 = &(rsp+0x0D8+Buffer);  // effective address
    r8d = &(r13+0x96);  // effective address
    *(void**)(rsp+0x0D8+Format) = r11;
    goto loc_180009FDC;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009F3E:
    rax = *(void**)(rdi);
    ecx = *(void**)(rax);
    eax = 4;
    ecx = -ecx;
    ebx = ebx-ebx-CF;
    ebx &= 0x0FFFFFFFA;
    ebx += 0x15;
    // cmp: set flags = *(uint32_t*)(rdi+0x0C) - 0
    if(ZF) ebx=eax;
    // test: set flags = ebx & ebx
    if(SF)            goto loc_180009F69;
    ecx = ebx;
    sub_18000A6B4();
    r9d = eax;
    goto loc_180009F6D;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009F69:
    r9d |= 0x0FFFFFFFF;

class="lbl">loc_180009F6D:
    rax = r12d;
    r8d = &(r13+0x0F);  // effective address  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    rax <<= 6;
    rdx = &(rax+rbp+0x24);  // effective address
    *(void**)(rsp+0x0D8+Format) = rdx;  // Format
    *(void**)(rsp+0x0D8+var_B8) = r9d;  // int
    r9d = esi;  // int
    edx = 1;  // int
    sub_18000C420();
    // test: set flags = ebx & ebx
    if(SF)            goto loc_180009FA8;
    ecx = ebx;
    sub_18000A6B4();
    goto loc_180009FAB;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009FA8:
    eax |= 0x0FFFFFFFF;

class="lbl">loc_180009FAB:
    rcx = &(rsp+0x0D8+Buffer);  // effective address
    r8d = &(r13+0x96);  // effective address
    ebx = 1;
    *(void**)(rsp+0x0D8+Format) = rcx;
    *(void**)(rsp+0x0D8+var_B8) = eax;
    goto loc_180009FE1;
    // ---------------------------------------------------------------------------

class="lbl">loc_180009FC7:
    rax = r12d;
    r8d = &(r13+5);  // effective address  // int
    rax <<= 6;
    rcx = &(rax+rbp+0x24);  // effective address
    *(void**)(rsp+0x0D8+Format) = rcx;  // Format

class="lbl">loc_180009FDC:
    *(void**)(rsp+0x0D8+var_B8) = r14d;  // int

class="lbl">loc_180009FE1:
    rcx = &(dword_1800297F0);  // effective address  // int
    r9d = esi;  // int
    edx = ebx;  // int
    sub_18000C420();
    r12d += ebx;
    esi += 0x0B;
    rdi += 0x40;  // '@'
    // cmp: set flags = r12d - *(void**)(rbp+8)
    if(SF!=OF)        goto loc_180009E79;

class="lbl">loc_18000A006:
    eax = *(void**)(rbp+8);
    r8d = &(r13+0x0F);  // effective address  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    edx = ebx;  // int
    eax *= (class="type">int64_t)0x0B;
    r9d = &(rax+r15+5);  // effective address  // int
    rax = (const char*)aFreeVersion;  // "** Free version **"
    *(void**)(rsp+0x0D8+Format) = rax;  // Format
    *(void**)(rsp+0x0D8+var_B8) = r14d;  // int
    sub_18000C420();
    rbx = *(void**)(rsp+0x0D8+arg_8);
    rsp += 0x0A0;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180009D88] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000A04F:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_1800223A0↓o ...


    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    r8 = &(qword_1800293A0);  // effective address
    rdx = &(qword_1800293A0+4);  // effective address
    *(class="type">uint64_t*)(rax+0x28)();
    ebx = 0x104;
    r8d = ebx;  // nSize
    rdx = &(Destination);  // effective address  // lpBuffer
    rcx = (const char*)Name;  // "LOCALAPPDATA"
    cs:getenvironmentvariablea();
    rdx = (const char*)asc_180005D40;  // "\\"
    rcx = &(Destination);  // effective address  // Destination
    strcat();
    r11d = cs:dword_1800298d8;
    // test: set flags = r11b & 1
    if(!ZF)           goto loc_18000A0D1;
    r11d |= 1;
    cs:dword_1800298d8 = r11d;

class="lbl">loc_18000A0C1:
    //   try {                               ; Size
    ecx = ebx;
    malloc();
    cs:str = rax;
    //   } // starts at 18000A0C1

class="lbl">loc_18000A0CF:
    goto loc_18000A0D8;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A0D1:
    rax = cs:str;

class="lbl">loc_18000A0D8:
    rdx = &(Destination);  // effective address  // Source
    rcx = rax;  // Destination
    strcpy();
    rdx = (const char*)aSettingsIni;  // "_settings.ini"
    rcx = cs:str;  // Destination
    strcat();
    rbx = cs:str;
    edx = 0;  // xor self  // Val
    r8d = 0x0FF;  // Size
    rcx = &(FileName);  // effective address  // void *
    memset();
    rcx = rbx;  // Str
    strlen();
    r8 = rax;  // Size
    rdx = rbx;  // Src
    rcx = &(FileName);  // effective address  // void *
    memmove();
    edx |= 0x0FFFFFFFF;
    rcx = (const char*)aObjectives;  // "objectives"
    sub_18000A6FC();
    edx = 0x80FFFF;
    rcx = (const char*)aTeamone;  // "teamone"
    sub_18000A6FC();
    edx = 0x0EB3C3CFF;
    rcx = (const char*)aTeamtwo;  // "teamtwo"
    sub_18000A6FC();
    edx = 0x80EBFF;
    rcx = (const char*)aTeamthree;  // "teamthree"
    sub_18000A6FC();
    edx = 0x505050FF;
    rcx = (const char*)aTeamfour;  // "teamfour"
    sub_18000A6FC();
    edx = 0x1E1E1EBE;
    rcx = (const char*)aBackground;  // "background"
    sub_18000A6FC();
    edx = 0x0FF7800FF;
    rcx = (const char*)aLines;  // "lines"
    sub_18000A6FC();
    ebx = 0x0FF6400FF;
    edx = ebx;
    rcx = (const char*)aOutlines;  // "outlines"
    sub_18000A6FC();
    edx = ebx;
    rcx = (const char*)aSelected;  // "selected"
    sub_18000A6FC();
    edx |= 0x0FFFFFFFF;
    rcx = (const char*)aHudText;  // "hud_text"
    sub_18000A6FC();
    edx |= 0x0FFFFFFFF;
    rcx = (const char*)aCross;  // "cross"
    sub_18000A6FC();
    edx = 0x0FF0000FF;
    rcx = (const char*)aCrossSec;  // "cross_sec"
    sub_18000A6FC();
    edx = 0x6EB4FFFF;
    rcx = (const char*)aInvisTeam2;  // "invis_team2"
    sub_18000A6FC();
    edx = 0x0FF0000FF;
    rcx = (const char*)aInvisTeam3;  // "invis_team3"
    sub_18000A6FC();
    edx = 0x80FFFF;
    rcx = (const char*)aMenuOn;  // "menu_on"
    sub_18000A6FC();
    edx |= 0x0FFFFFFFF;
    rcx = (const char*)aMenuOff;  // "menu_off"
    sub_18000A6FC();
    ebx = 0x0FF00FF;
    edx = ebx;
    rcx = (const char*)aAimTarget;  // "aim_target"
    sub_18000A6FC();
    edx = 0x0FF;
    rcx = (const char*)aBlack;  // "black"
    sub_18000A6FC();
    edx = ebx;
    rcx = (const char*)aHpGreen;  // "hp_green"
    sub_18000A6FC();
    edx = 0x0FFFF00FF;
    rcx = (const char*)aHpYellow;  // "hp_yellow"
    sub_18000A6FC();
    edx = 0x0FF0000FF;
    rcx = (const char*)aHpRed;  // "hp_red"
    sub_18000A6FC();
    edx = 0x969696FF;
    rcx = (const char*)aGray;  // "gray"
    sub_18000A6FC();
    edx = 0x0CC99FF;
    rcx = (const char*)aFriend;  // "friend"
    sub_18000A6FC();
    edx = 0x32D732FF;
    rcx = (const char*)aMerasmus;  // "merasmus"
    sub_18000A6FC();
    cs:dword_180029204 = 0x12C;
    cs:dword_180029208 = 0x28;  // '('
    cs:dword_18002920c = 0x0BE;
    sub_18000B3DC();
    sub_18000977C();
    sub_180006E10();
    sub_18000C29C();
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    rdx = (const char*)aPlayVoHeavyMvm;  // "play vo/heavy_mvm_say_ready02.mp3"
    rsp += 0x30;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    goto *(class="type">uint64_t*)(rax+0x350);
    // } // starts at 18000A050
    // [SUB_18000A050] endp


    // =============== S U B R O U T I N E =======================================


    // X:stru_180022640↓o ...


    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp -= 0x30;
    *(void**)(rsp+0x48+var_28) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x48+arg_0) = rbx;
    *(void**)(rsp+0x48+arg_8) = rsi;
    *(void**)(rsp+0x48+arg_10) = rdi;
    r13d = edx;

class="lbl">loc_18000A331:
    class="type">uint8_t r8b;
    r8b = r9b;
    xmm1 = xmm2;  // SIMD move
    ecx = edx;
    cs:qword_180029028();
    r11 = cs:qword_180029518;
    rbx = *(void**)(r11);
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    edx = eax;
    rcx = cs:qword_180029518;
    *(class="type">uint64_t*)(rbx+0x18)();
    r12 = rax;
    r14d = 0;  // xor self
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000A5E1;
    eax = cs:dword_1800270f8;
    // cmp: set flags = *(void**)(rax+r12) - r14b
    class="type">uint8_t dil;
    dil=ZF?1:0;
    rcx = r12;
    sub_18000C174();
    rsi = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000A5E1;
    rcx = cs:qword_180029520;
    rax = *(void**)(rcx);
    edx = r13d;
    *(class="type">uint64_t*)(rax+0x40)();
    rbx = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000A5E1;
    // cmp: set flags = cs:dword_180029160 - r14d
    if(ZF)            goto loc_18000A3CF;
    // test: set flags = dil & dil
    if(ZF)            goto loc_18000A3CF;
    r8 = rsi;
    rdx = rax;
    rcx = &(unk_180025BD0);  // effective address
    sub_180008810();

class="lbl">loc_18000A3CF:
    // sub_18000A30C+AF↑j
    // cmp: set flags = cs:dword_18002925c - r14d
    if(ZF)            goto loc_18000A414;
    rcx = rsi;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x0E2
    if(!ZF)           goto loc_18000A414;
    eax = cs:dword_1800270e8;
    // cmp: set flags = *(void**)(rax+rsi) - r14b
    if(ZF)            goto loc_18000A414;
    edi = 1;
    *(void**)(rbx+0x28) |= edi;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    rdx = (const char*)aLastdisguise;  // "lastdisguise"
    *(class="type">uint64_t*)(rax+0x330)();
    goto loc_18000A419;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A414:
    // sub_18000A30C+D9↑j ...
    edi = 1;

class="lbl">loc_18000A419:
    // cmp: set flags = cs:dword_180029190 - r14d
    if(ZF)            goto loc_18000A434;
    rdx = rsi;
    rcx = r12;
    sub_180008F70();
    // test: set flags = al & al
    if(ZF)            goto loc_18000A434;
    *(void**)(rbx+0x28) |= edi;

class="lbl">loc_18000A434:
    // sub_18000A30C+123↑j
    // cmp: set flags = cs:dword_180029214 - r14d
    if(ZF)            goto loc_18000A47B;
    // test: set flags = *(uint8_t*)(rbx+0x28) & 2
    if(ZF)            goto loc_18000A467;
    // cmp: set flags = cs:byte_180029a28 - r14b
    if(!ZF)           goto loc_18000A45E;
    eax = cs:dword_1800270f0;
    // test: set flags = *(void**)(rax+r12) & dil
    if(!ZF)           goto loc_18000A47B;
    *(class="type">uint32_t*)(rbx+0x28) &= 0x0FFFFFFFD;
    goto loc_18000A47B;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A45E:
    cs:byte_180029a28 = r14b;
    goto loc_18000A47B;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A467:
    eax = cs:byte_180029a28;
    ecx = eax;
    // test: set flags = al & al
    if(ZF) ecx=edi;
    cs:byte_180029a28 = cl;

class="lbl">loc_18000A47B:
    // sub_18000A30C+14A↑j ...
    rax = cs:qword_180029540;
    // [MOVSS] xmm1, dword ptr [rax+0x0C]
    xmm0 = xmm1;  // SIMD move
    // [MOVSS] xmm2, cs:dword_180029A24
    xmm0=_mm_sub_ss(xmm0,xmm2);
    // comiss: compare xmm0 vs cs:dword_1800061b8
    if(CF||ZF)        goto loc_18000A4F6;
    // cmp: set flags = cs:dword_180029210 - r14d
    if(ZF)            goto loc_18000A4F6;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    // cmp: set flags = cs:byte_180029a20 - r14b
    rdx = (const char*)aSayWwwLmaoboxN;  // "say WWW.LMAOBOX.NET - THE BEST TF2 HACK"...
    if(!ZF)           goto loc_18000A4C9;
    rdx = (const char*)aSayGetGoodGetL;  // "say GET GOOD. GET LMAOBOX."

class="lbl">loc_18000A4C9:
    *(class="type">uint64_t*)(rax+0x330)();
    // cmp: set flags = cs:byte_180029a20 - r14b
    al=ZF?1:0;
    cs:byte_180029a20 = al;
    rax = cs:qword_180029540;
    // [MOVSS] xmm1, dword ptr [rax+0x0C]
    xmm2 = xmm1;  // SIMD move
    // [MOVSS] cs:dword_180029A24, xmm2

class="lbl">loc_18000A4F6:
    // sub_18000A30C+19A↑j
    // comiss: compare xmm1 vs xmm2
    if(!CF)          goto loc_18000A503;
    // [MOVSS] cs:dword_180029A24, xmm1

class="lbl">loc_18000A503:
    // cmp: set flags = cs:dword_18002922c - r14d
    if(ZF)            goto loc_18000A51D;
    // test: set flags = *(uint32_t*)(rbx+0x28) & 0x801
    if(!ZF)           goto loc_18000A51D;
    rcx = rbx;
    sub_180009334();

class="lbl">loc_18000A51D:
    // sub_18000A30C+207↑j
    eax = 0x0B60B60B7;
    rax = (class="type">int64_t)rax * (class="type">int64_t)r13d;
    edx += r13d;
    edx = (class="type">int64_t)edx >> 6;  // arithmetic
    eax = edx;
    eax >>= 0x1F;  // logical
    edx += eax;
    edx *= (class="type">int64_t)0x5A;  // 'Z'
    r13d -= edx;
    rax = r13d;
    rcx = &(rax+rax*4);  // effective address
    rcx <<= 4;
    rax = cs:qword_180029520;
    rcx += *(void**)(rax+0x110);
    // cmp: set flags = rcx - rbx
    if(ZF)            goto loc_18000A5BA;
    eax = *(void**)(rbx+8);
    *(void**)(rcx+8) = eax;
    eax = *(void**)(rbx+0x0C);
    *(void**)(rcx+0x0C) = eax;
    eax = *(void**)(rbx+0x10);
    *(void**)(rcx+0x10) = eax;
    eax = *(void**)(rbx+0x14);
    *(void**)(rcx+0x14) = eax;
    eax = *(void**)(rbx+0x18);
    *(void**)(rcx+0x18) = eax;
    eax = *(void**)(rbx+0x1C);
    *(void**)(rcx+0x1C) = eax;
    eax = *(void**)(rbx+0x20);
    *(void**)(rcx+0x20) = eax;
    eax = *(void**)(rbx+0x24);
    *(void**)(rcx+0x24) = eax;
    eax = *(void**)(rbx+0x28);
    *(void**)(rcx+0x28) = eax;
    al = *(void**)(rbx+0x2C);
    *(void**)(rcx+0x2C) = al;
    eax = *(void**)(rbx+0x30);
    *(void**)(rcx+0x30) = eax;
    eax = *(void**)(rbx+0x34);
    *(void**)(rcx+0x34) = eax;
    eax = *(void**)(rbx+0x38);
    *(void**)(rcx+0x38) = eax;
    eax = *(class="type">uint16_t*)(rbx+0x3C);
    *(void**)(rcx+0x3C) = ax;
    eax = *(class="type">uint16_t*)(rbx+0x3E);
    *(void**)(rcx+0x3E) = ax;
    al = *(void**)(rbx+0x40);
    *(void**)(rcx+0x40) = al;

class="lbl">loc_18000A5BA:
    // [MOVSS] xmm0, dword ptr [rbx+0x10]
    // [MOVSS] cs:dword_180025C24, xmm0
    // [MOVSS] xmm1, dword ptr [rbx+0x14]
    // [MOVSS] cs:dword_180025C28, xmm1
    // [MOVSS] xmm0, dword ptr [rbx+0x18]
    // [MOVSS] cs:dword_180025C2C, xmm0

class="lbl">loc_18000A5E1:
    // sub_18000A30C+81↑j ...
    rbx = *(void**)(rsp+0x48+arg_0);
    rsi = *(void**)(rsp+0x48+arg_8);
    rdi = *(void**)(rsp+0x48+arg_10);
    rsp += 0x30;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [ALIGN] 4
    // } // starts at 18000A30C
    // [SUB_18000A30C] endp


    // =============== S U B R O U T I N E =======================================


    // .pdata:000000018002B15C↓o ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    // cmp: set flags = *(uint32_t*)(rdx) - 1
    rbx = rdx;
    rdi = rcx;
    if(ZF)            goto loc_18000A628;
    edx = *(void**)(rdx+8);
    rcx = &(byte_180027170);  // effective address
    sub_180009C3C();
    // test: set flags = al & al
    if(ZF)            goto loc_18000A628;
    al = 1;
    goto loc_18000A634;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A628:
    // sub_18000A5FC+26↑j
    rdx = rbx;
    rcx = rdi;
    cs:qword_180027168();

class="lbl">loc_18000A634:
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000A5FC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000A63F:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // .pdata:000000018002B174↓o


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_0) = rcx;
    rsp -= 0x38;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    rax = &(off_180002128);  // effective address
    *(void**)(rcx) = rax;
    rsp += 0x38;
    goto sub_18000FD10;
    // } // starts at 18000A640
    // [SUB_18000A640] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000A665:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000A668(void *Block)
    // X:stru_180021CFC↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_0) = rcx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x38+arg_8) = rbx;
    ebx = edx;
    rdi = rcx;
    rax = &(off_180002128);  // effective address
    *(void**)(rcx) = rax;
    sub_18000FD10();
    // test: set flags = bl & 1
    if(ZF)            goto loc_18000A6A1;
    rcx = rdi;  // Block
    j_free();

class="lbl">loc_18000A6A1:
    rax = rdi;
    rbx = *(void**)(rsp+0x38+arg_8);
    rsp += 0x30;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000A668
    // [SUB_18000A668] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000A6AF:
    // [ALIGN] 0x10
    // [00000003 BYTES: COLLAPSED FUNCTION nullsub_2. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_180009D88+72↑p ...
    rdx = cs:qword_180029778;
    r8 = cs:block;
    rax = 0x2AAAAAAAAAAAAAAB;
    rdx -= r8;
    rax = (class="type">int64_t)rax * (class="type">int64_t)rdx;
    rdx = (class="type">int64_t)rdx >> 3;  // arithmetic
    rax = rdx;
    rax >>= 0x3F;  // logical
    rdx += rax;
    eax = ecx;
    // cmp: set flags = rax - rdx
    if(CF)           goto loc_18000A6EB;
    eax |= 0x0FFFFFFFF;
    return rax;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A6EB:
    rcx = ecx;
    rax = &(rcx+rcx*2);  // effective address
    rax += rax;
    eax = *(void**)(r8+rax*8);
    return rax;
    // [SUB_18000A6B4] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // __int64 __fastcall sub_18000A6FC(void *Src)
    // sub_18000A050+FA↑p ...

    // [BLOCK] = qword ptr -0x30

    // __unwind { // __CxxFrameHandler3
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rbp = rsp;
    rsp -= 0x60;
    *(void**)(rbp+var_40) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rax+0x10) = rbx;
    rdi = rcx;
    r12d = 0x0F;
    *(void**)(rbp+var_18) = r12;
    *(void**)(rbp+var_20) &= 0;
    *(class="type">uint8_t*)(rbp+Block) = 0;

class="lbl">loc_18000A72C:
    //   try {
    *(void**)(rbp+var_38) = edx;
    strlen();
    rbx = rax;
    rdx = *(void**)(rbp+var_18);
    r9 = *(void**)(rbp+var_20);
    r8 = *(void**)(rbp+Block);
    // test: set flags = rdi & rdi
    if(ZF)            goto loc_18000A791;
    rcx = &(rbp+Block);  // effective address
    // cmp: set flags = rdx - 0x10
    if(!CF) rcx=r8;
    // cmp: set flags = rdi - rcx
    if(CF)           goto loc_18000A791;
    rax = &(rbp+Block);  // effective address
    // cmp: set flags = rdx - 0x10
    if(!CF) rax=r8;
    rax += r9;
    // cmp: set flags = rax - rdi
    if(CF||ZF)        goto loc_18000A791;
    rax = &(rbp+Block);  // effective address
    // cmp: set flags = rdx - 0x10
    if(!CF) rax=r8;
    rdi -= rax;
    r9 = rbx;
    r8 = rdi;
    rdx = &(rbp+Block);  // effective address
    rcx = &(rbp+Block);  // effective address  // void *
    ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z();  // std::string::assign(std::string const &,unsigned __int64,unsigned __int64)
    goto loc_18000A810;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A791:
    // sub_18000A6FC+5B↑j ...
    // cmp: set flags = rbx - 0x0FFFFFFFFFFFFFFFE
    if(CF||ZF)        goto loc_18000A7A4;
    rcx = (const char*)aStringTooLong;  // "string too long"
    sub_18001DEAC();
    // ---------------------------------------------------------------------------
    // [ALIGN] 4

class="lbl">loc_18000A7A4:
    // cmp: set flags = rdx - rbx
    if(!CF)          goto loc_18000A7BA;
    r8 = r9;
    rdx = rbx;
    rcx = &(rbp+Block);  // effective address  // Src
    sub_18000AE10();
    goto loc_18000A7D1;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A7BA:
    // test: set flags = rbx & rbx
    if(!ZF)           goto loc_18000A7DC;
    *(void**)(rbp+var_20) &= rbx;
    rax = &(rbp+Block);  // effective address
    // cmp: set flags = rdx - 0x10
    if(!CF) rax=r8;
    *(void**)(rax) = bl;

class="lbl">loc_18000A7D1:
    r8 = *(void**)(rbp+Block);
    rdx = *(void**)(rbp+var_18);
    // test: set flags = rbx & rbx

class="lbl">loc_18000A7DC:
    al=!ZF?1:0;
    // test: set flags = al & al
    if(ZF)            goto loc_18000A810;
    rcx = &(rbp+Block);  // effective address
    // cmp: set flags = rdx - 0x10
    if(!CF) rcx=r8;  // void *
    r8 = rbx;  // Size
    rdx = rdi;  // Src
    memmove();
    *(void**)(rbp+var_20) = rbx;
    rax = &(rbp+Block);  // effective address
    // cmp: set flags = *(void**)(rbp+var_18) - 0x10
    if(!CF) rax=*(void**)(rbp+Block);
    *(class="type">uint8_t*)(rax+rbx) = 0;

class="lbl">loc_18000A810:
    // sub_18000A6FC+E5↑j
    rax = &(rbp+var_38);  // effective address
    r8 = cs:qword_180029778;
    // cmp: set flags = rax - r8
    if(!CF)          goto loc_18000A8B9;
    rax = &(rbp+var_38);  // effective address
    r9 = cs:block;
    // cmp: set flags = r9 - rax
    if(!CF&&!ZF)      goto loc_18000A8B9;
    rcx = &(rbp+var_38);  // effective address
    rcx -= r9;
    rax = 0x2AAAAAAAAAAAAAAB;
    rax = (class="type">int64_t)rax * (class="type">int64_t)rcx;
    rbx = rdx;
    rbx = (class="type">int64_t)rbx >> 3;  // arithmetic
    rax = rbx;
    rax >>= 0x3F;  // logical
    rbx += rax;
    // cmp: set flags = r8 - cs:qword_180029780
    if(!ZF)           goto loc_18000A879;
    sub_18000AA3C();
    r8 = cs:qword_180029778;
    r9 = cs:block;

class="lbl">loc_18000A879:
    rdx = &(rbx+rbx*2);  // effective address
    rdx <<= 4;
    rdx += r9;
    *(void**)(rbp+arg_0) = r8;
    *(void**)(rbp+arg_10) = r8;
    //   } // starts at 18000A72C

class="lbl">loc_18000A88C:
    //   try {
    // test: set flags = r8 & r8
    if(ZF)            goto loc_18000A8B7;
    eax = *(void**)(rdx);
    *(void**)(r8) = eax;
    rcx = &(r8+8);  // effective address  // void *
    *(void**)(rcx+0x18) = r12;
    *(class="type">uint64_t*)(rcx+0x10) &= 0;
    *(class="type">uint8_t*)(rcx) = 0;
    rdx += 8;
    r9 |= 0x0FFFFFFFFFFFFFFFF;
    r8d = 0;  // xor self
    ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z();  // std::string::assign(std::string const &,unsigned __int64,unsigned __int64)
    // nop
    //   } // starts at 18000A88C

class="lbl">loc_18000A8B7:
    // DATA XREF: X:0000000180022360↓o
    //   try {
    goto loc_18000A902;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000A8B9:
    // sub_18000A6FC+136↑j
    // cmp: set flags = r8 - cs:qword_180029780
    if(!ZF)           goto loc_18000A8CE;
    sub_18000AA3C();
    r8 = cs:qword_180029778;

class="lbl">loc_18000A8CE:
    *(void**)(rbp+arg_0) = r8;
    *(void**)(rbp+arg_10) = r8;
    //   } // starts at 18000A8B7

class="lbl">loc_18000A8D6:
    //   try {
    // test: set flags = r8 & r8
    if(ZF)            goto loc_18000A902;
    eax = *(void**)(rbp+var_38);
    *(void**)(r8) = eax;
    rcx = &(r8+8);  // effective address  // void *
    *(void**)(rcx+0x18) = r12;
    *(class="type">uint64_t*)(rcx+0x10) &= 0;
    *(class="type">uint8_t*)(rcx) = 0;
    r9 |= 0x0FFFFFFFFFFFFFFFF;
    r8d = 0;  // xor self
    rdx = &(rbp+Block);  // effective address
    ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z();  // std::string::assign(std::string const &,unsigned __int64,unsigned __int64)
    // nop
    //   } // starts at 18000A8D6

class="lbl">loc_18000A902:
    // sub_18000A6FC+1DD↑j
    // DATA XREF: ...
    //   try {
    cs:qword_180029778 += 0x30;  // '0'
    //   } // starts at 18000A902

class="lbl">loc_18000A90A:
    // cmp: set flags = *(void**)(rbp+var_18) - 0x10
    if(CF)           goto loc_18000A91A;
    rcx = *(void**)(rbp+Block);  // Block
    j_free();

class="lbl">loc_18000A91A:
    *(void**)(rbp+var_18) = r12;
    *(void**)(rbp+var_20) &= 0;
    *(class="type">uint8_t*)(rbp+Block) = 0;
    rbx = *(void**)(rsp+0x60+arg_8);
    rsp += 0x60;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000A6FC
    // [SUB_18000A6FC] endp


    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_180021CE0↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_0) = rcx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    rbx = rcx;
    // cmp: set flags = *(uint64_t*)(rcx+0x20) - 0x10
    if(CF)           goto loc_18000A95E;
    rcx = *(void**)(rcx+8);  // Block
    j_free();

class="lbl">loc_18000A95E:
    *(class="type">uint64_t*)(rbx+0x20) = 0x0F;
    *(class="type">uint64_t*)(rbx+0x18) &= 0;
    *(class="type">uint8_t*)(rbx+8) = 0;
    rsp += 0x30;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000A938
    // [SUB_18000A938] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000A975:
    // [ALIGN] 8
    // [0000002E BYTES: COLLAPSED FUNCTION std::string::~string(void). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000A9A6:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // sub_180020FF4+11↓j
    // DATA XREF: ...


    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x38+arg_8) = rbx;
    rbx = cs:block;
    // test: set flags = rbx & rbx
    if(ZF)            goto loc_18000AA17;
    rdi = cs:qword_180029778;
    *(void**)(rsp+0x38+arg_0) = rbx;
    // cmp: set flags = rbx - rdi
    if(ZF)            goto loc_18000AA0F;

class="lbl">loc_18000A9D9:
    // cmp: set flags = *(uint64_t*)(rbx+0x20) - 0x10
    if(CF)           goto loc_18000A9E9;
    rcx = *(void**)(rbx+8);  // Block
    j_free();

class="lbl">loc_18000A9E9:
    *(class="type">uint64_t*)(rbx+0x20) = 0x0F;
    *(class="type">uint64_t*)(rbx+0x18) &= 0;
    *(class="type">uint8_t*)(rbx+8) = 0;
    rbx += 0x30;  // '0'
    *(void**)(rsp+0x38+arg_0) = rbx;
    // cmp: set flags = rbx - rdi
    if(!ZF)           goto loc_18000A9D9;
    rbx = cs:block;

class="lbl">loc_18000AA0F:
    rcx = rbx;  // Block
    j_free();

class="lbl">loc_18000AA17:
    cs:block &= 0;
    cs:qword_180029778 &= 0;
    cs:qword_180029780 &= 0;
    rbx = *(void**)(rsp+0x38+arg_8);
    rsp += 0x30;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000A9A8
    // [SUB_18000A9A8] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000AA3A:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_18000A6FC+1C6↑p
    // DATA XREF: ...
    rsp -= 0x28;
    rcx = cs:qword_180029778;
    r9 = cs:block;
    r10 = 0x2AAAAAAAAAAAAAAB;
    rcx -= r9;
    rax = r10;
    rax = (class="type">int64_t)rax * (class="type">int64_t)rcx;
    r8 = rdx;
    r8 = (class="type">int64_t)r8 >> 3;  // arithmetic
    rax = r8;
    rax >>= 0x3F;  // logical
    r8 += rax;
    rax = 0x555555555555554;
    // cmp: set flags = r8 - rax
    if(CF||ZF)        goto loc_18000AA8E;
    rcx = (const char*)aVectorTTooLong;  // "vector<T> too long"
    sub_18001DEAC();
    // ---------------------------------------------------------------------------
    // [ALIGN] 2

class="lbl">loc_18000AA8E:
    rcx = cs:qword_180029780;
    rax = r10;
    r8++;
    rcx -= r9;
    rax = (class="type">int64_t)rax * (class="type">int64_t)rcx;
    rdx = (class="type">int64_t)rdx >> 3;  // arithmetic
    rax = rdx;
    rax >>= 0x3F;  // logical
    rdx += rax;
    // cmp: set flags = r8 - rdx
    if(CF||ZF)        goto loc_18000AAE2;
    rcx = rdx;
    rax = 0x555555555555555;
    rcx >>= 1;  // logical
    rax -= rcx;
    // cmp: set flags = rax - rdx
    if(!CF)          goto loc_18000AAD0;
    edx = 0;  // xor self
    goto loc_18000AAD3;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000AAD0:
    rdx += rcx;

class="lbl">loc_18000AAD3:
    // cmp: set flags = rdx - r8
    if(CF) rdx=r8;
    rcx = rdx;
    sub_18000AAE8();

class="lbl">loc_18000AAE2:
    rsp += 0x28;
    return rax;
    // [SUB_18000AA3C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000AAE7:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_1800222C0↓o ...

    // [PEXCEPTIONOBJECT=] qword ptr -0x30

    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp -= 0x40;
    *(void**)(rsp+0x58+var_38) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x58+arg_8) = rbx;
    *(void**)(rsp+0x58+arg_10) = rsi;
    rsi = rcx;
    rax = 0x555555555555555;
    // cmp: set flags = rcx - rax
    if(CF||ZF)        goto loc_18000AB24;
    rcx = (const char*)aVectorTTooLong;  // "vector<T> too long"
    sub_18001DEAC();
    // ---------------------------------------------------------------------------
    // [ALIGN] 4

class="lbl">loc_18000AB24:
    rcx = cs:qword_180029780;
    rcx -= cs:block;
    r13 = 0x2AAAAAAAAAAAAAAB;
    rax = r13;
    rax = (class="type">int64_t)rax * (class="type">int64_t)rcx;
    rdx = (class="type">int64_t)rdx >> 3;  // arithmetic
    rax = rdx;
    rax >>= 0x3F;  // logical
    rdx += rax;
    // cmp: set flags = rdx - rsi
    if(!CF)          goto loc_18000AC6D;
    edi = 0;  // xor self
    *(void**)(rsp+0x58+arg_0) = rdi;
    // test: set flags = rsi & rsi
    if(ZF)            goto loc_18000ABB2;
    rcx = &(rsi+rsi*2);  // effective address
    rcx <<= 4;  // Size
    ??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    rdi = rax;
    *(void**)(rsp+0x58+arg_0) = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000ABB2;
    *(void**)(rsp+0x58+arg_0) &= rax;
    rdx = &(rsp+0x58+arg_0);  // effective address  // char **
    rcx = &(rsp+0x58+pExceptionObject);  // effective address  // this
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    // nop

class="lbl">loc_18000AB94:
    //   try {
    rax = &(off_180002128);  // effective address
    *(void**)(rsp+0x58+pExceptionObject) = rax;
    //   } // starts at 18000AB94

class="lbl">loc_18000ABA0:
    rdx = &(pThrowInfo);  // effective address  // pThrowInfo
    rcx = &(rsp+0x58+pExceptionObject);  // effective address  // pExceptionObject
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [ALIGN] 2

class="lbl">loc_18000ABB2:
    // sub_18000AAE8+95↑j
    // DATA XREF: ...
    //   try {
    r8 = rdi;
    rdx = cs:qword_180029778;
    rcx = cs:block;
    sub_18000AF80();
    // nop
    //   } // starts at 18000ABB2

class="lbl">loc_18000ABC9:
    r12 = cs:qword_180029778;
    rcx = r12;
    rbx = cs:block;
    rcx -= rbx;
    rax = r13;
    rax = (class="type">int64_t)rax * (class="type">int64_t)rcx;
    r13 = rdx;
    r13 = (class="type">int64_t)r13 >> 3;  // arithmetic
    rax = r13;
    rax >>= 0x3F;  // logical
    r13 += rax;
    // test: set flags = rbx & rbx
    if(ZF)            goto loc_18000AC41;
    *(void**)(rsp+0x58+arg_0) = rbx;
    // cmp: set flags = rbx - r12
    if(ZF)            goto loc_18000AC39;

class="lbl">loc_18000AC03:
    // cmp: set flags = *(uint64_t*)(rbx+0x20) - 0x10
    if(CF)           goto loc_18000AC13;
    rcx = *(void**)(rbx+8);  // Block
    j_free();

class="lbl">loc_18000AC13:
    *(class="type">uint64_t*)(rbx+0x20) = 0x0F;
    *(class="type">uint64_t*)(rbx+0x18) &= 0;
    *(class="type">uint8_t*)(rbx+8) = 0;
    rbx += 0x30;  // '0'
    *(void**)(rsp+0x58+arg_0) = rbx;
    // cmp: set flags = rbx - r12
    if(!ZF)           goto loc_18000AC03;
    rbx = cs:block;

class="lbl">loc_18000AC39:
    rcx = rbx;  // Block
    j_free();

class="lbl">loc_18000AC41:
    rax = &(rsi+rsi*2);  // effective address
    rax <<= 4;
    rax += rdi;
    cs:qword_180029780 = rax;
    rax = &(r13+r13*2+0);  // effective address
    rax <<= 4;
    rax += rdi;
    cs:qword_180029778 = rax;
    cs:block = rdi;

class="lbl">loc_18000AC6D:
    rbx = *(void**)(rsp+0x58+arg_8);
    rsi = *(void**)(rsp+0x58+arg_10);
    rsp += 0x40;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000AAE8
    // [SUB_18000AAE8] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000AC81:
    // [ALIGN] 4
    // [000000FC BYTES: COLLAPSED FUNCTION std::string::assign(std::string const &,unsigned __int64,unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000008F BYTES: COLLAPSED FUNCTION std::string::erase(unsigned __int64,unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000AE0F:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000AE10(void *Src)
    // std::string::assign(std::string const &,unsigned __int64,unsigned __int64)+81↑p
    // DATA XREF: ...

    // [PEXCEPTIONOBJECT=] qword ptr -0x58

    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_10) = r8;
    *(void**)(rsp+arg_8) = rdx;
    *(void**)(rsp+arg_0) = rcx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp -= 0x68;
    *(void**)(rsp+0x88+var_60) = 0x0FFFFFFFFFFFFFFFE;
    r12 = r8;
    rdi = rcx;
    rbx = rdx;
    rbx |= 0x0F;
    r9 = 0x0FFFFFFFFFFFFFFFE;
    // cmp: set flags = rbx - r9
    if(CF||ZF)        goto loc_18000AE4F;
    rbx = rdx;
    goto loc_18000AE80;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000AE4F:
    r8 = *(void**)(rcx+0x18);
    rcx = r8;
    rcx >>= 1;  // logical
    rax = 0x0AAAAAAAAAAAAAAAB;
    rax = rax * rbx;  // unsigned; high in rdx
    rdx >>= 1;  // logical
    // cmp: set flags = rcx - rdx
    if(CF||ZF)        goto loc_18000AE80;
    rax = r9;
    rax -= rcx;
    // cmp: set flags = r8 - rax
    rbx = &(rcx+r8);  // effective address
    if(CF||ZF)        goto loc_18000AE80;
    rbx = r9;

class="lbl">loc_18000AE80:
    // sub_18000AE10+5C↑j ...
    //   try {                               ; Size
    rcx = &(rbx+1);  // effective address
    esi = 0;  // xor self
    // test: set flags = rcx & rcx
    if(ZF)            goto loc_18000AED7;
    // cmp: set flags = rcx - 0x0FFFFFFFFFFFFFFFF
    if(!CF&&!ZF)      goto loc_18000AE9E;
    ??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    rsi = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000AED7;

class="lbl">loc_18000AE9E:
    *(void**)(rsp+0x88+arg_18) &= 0;
    rdx = &(rsp+0x88+arg_18);  // effective address  // char **
    rcx = &(rsp+0x88+pExceptionObject);  // effective address  // this
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    // nop
    //   } // starts at 18000AE80

class="lbl">loc_18000AEBA:
    //   try {
    rax = &(off_180002128);  // effective address
    *(void**)(rsp+0x88+pExceptionObject) = rax;
    //   } // starts at 18000AEBA

class="lbl">loc_18000AEC6:
    //   try {                               ; pThrowInfo
    rdx = &(pThrowInfo);  // effective address
    rcx = &(rsp+0x88+pExceptionObject);  // effective address  // pExceptionObject
    _CxxThrowException();
    // ---------------------------------------------------------------------------

class="lbl">loc_18000AED7:
    // sub_18000AE10+8C↑j
    *(void**)(rsp+0x88+var_68) = rsi;
    //   } // starts at 18000AEC6

class="lbl">loc_18000AEDC:
    goto loc_18000AEFB;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000AEDE:
    rdi = *(void**)(rsp+0x88+arg_0);
    r12 = *(void**)(rsp+0x88+arg_10);
    rbx = *(void**)(rsp+0x88+arg_8);
    rsi = *(void**)(rsp+0x88+var_68);

class="lbl">loc_18000AEFB:
    // test: set flags = r12 & r12
    if(ZF)            goto loc_18000AF1A;
    // cmp: set flags = *(uint64_t*)(rdi+0x18) - 0x10
    if(CF)           goto loc_18000AF0C;
    rdx = *(void**)(rdi);
    goto loc_18000AF0F;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000AF0C:
    rdx = rdi;  // Src

class="lbl">loc_18000AF0F:
    r8 = r12;  // Size
    rcx = rsi;  // void *
    memmove();

class="lbl">loc_18000AF1A:
    // cmp: set flags = *(uint64_t*)(rdi+0x18) - 0x10
    if(CF)           goto loc_18000AF29;
    rcx = *(void**)(rdi);  // Block
    j_free();

class="lbl">loc_18000AF29:
    *(class="type">uint8_t*)(rdi) = 0;
    *(void**)(rdi) = rsi;
    *(void**)(rdi+0x18) = rbx;
    *(void**)(rdi+0x10) = r12;
    // cmp: set flags = rbx - 0x10
    if(!CF) rdi=rsi;
    *(class="type">uint8_t*)(rdi+r12) = 0;
    rsp += 0x68;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000AE10
    // [SUB_18000AE10] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000AF4E:
    // [ALIGN] 0x10
    // [0000002F BYTES: COLLAPSED FUNCTION Concurrency::details::ThreadScheduler::ThreadScheduler(Concurrency::SchedulerPolicy const &). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000AF7F:
    // [ALIGN] 0x20
    // [00000089 BYTES: COLLAPSED FUNCTION sub_18000AF80. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000B009:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B210↓o
    rsp -= 0x28;
    // [MOVD] xmm1, cs:dword_180029160
    rcx = (const char*)aAimBot_0;  // "aim_bot"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029168
    rcx = (const char*)aAimKey_0;  // "aim_key"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029170
    rcx = (const char*)aAimSafe;  // "aim_safe"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029178
    rcx = (const char*)aAimTeam;  // "aim_team"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_18002919C
    rcx = (const char*)aAimLock;  // "aim_lock"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291BC
    rcx = &(KeyName);  // effective address  // "bigheadss"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291A0
    rcx = (const char*)aAimSilent;  // "aim_silent"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_18002917C
    rcx = (const char*)aAimIgnoreFrien;  // "aim_ignore_friends"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029180
    rcx = (const char*)aAimIgnoreDr;  // "aim_ignore_dr"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291A4
    rcx = (const char*)aAimSentry_0;  // "aim_sentry"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291A8
    rcx = (const char*)aAimSticky;  // "aim_sticky"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029174
    rcx = (const char*)aAimShoot;  // "aim_shoot"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029198
    rcx = (const char*)aAimMelee;  // "aim_melee"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029194
    rcx = (const char*)aAimConstcrits;  // "aim_constcrits"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_18002918C
    rcx = (const char*)aAimSmooth;  // "aim_smooth"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029190
    rcx = (const char*)aAimTriggerbot;  // "aim_triggerbot"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291C0
    rcx = (const char*)aEspName;  // "esp_name"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291D0
    rcx = (const char*)aEspHealth;  // "esp_health"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291C8
    rcx = (const char*)aEspWeapon;  // "esp_weapon"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291C4
    rcx = (const char*)aEspDistance;  // "esp_distance"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291B4
    // [CVTDQ2PS] xmm1, xmm1
    rcx = (const char*)aEspFriends;  // "esp_friends"
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291DC
    rcx = (const char*)aEspClass;  // "esp_class"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291E0
    rcx = (const char*)aEspStructure;  // "esp_structure"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291E4
    rcx = (const char*)aEspGlow;  // "esp_glow"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291E8
    rcx = (const char*)aEspUber;  // "esp_uber"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291EC
    rcx = (const char*)aEspRadar;  // "esp_radar"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291F0
    rcx = (const char*)aEspRadarX;  // "esp_radar_x"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291F4
    rcx = (const char*)aEspRadarY;  // "esp_radar_y"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291F8
    rcx = (const char*)aEspRadarW;  // "esp_radar_w"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029218
    rcx = (const char*)aTaunt;  // "taunt"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029214
    rcx = (const char*)aMiscBunnyhop;  // "misc_bunnyhop"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_18002921C
    rcx = (const char*)aMiscSpeedOn;  // "misc_speed_on"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029224
    rcx = (const char*)aMiscSpeedKey;  // "misc_speed_key"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029220
    rcx = (const char*)aMiscSpeed;  // "misc_speed"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029244
    rcx = (const char*)aMiscAntiss;  // "misc_antiss"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_18002922C
    rcx = (const char*)aMiscSpinbot;  // "misc_spinbot"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029174
    rcx = (const char*)aAimShoot;  // "aim_shoot"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029188
    rcx = (const char*)aAimIgnoreCloak;  // "aim_ignore_cloak"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_1800291B0
    rcx = (const char*)aEspEnemyOnly;  // "esp_enemy_only"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029210
    rcx = (const char*)aMiscChatspam;  // "misc_chatspam"
    // [CVTDQ2PS] xmm1, xmm1
    sub_18000C24C();
    // [MOVD] xmm1, cs:dword_180029264
    // [CVTDQ2PS] xmm1, xmm1
    rcx = (const char*)aCloakRemoval;  // "cloak_removal"
    sub_18000C24C();
    rcx = (const char*)aAutoBackstab_0;  // "auto_backstab"
    // [MOVD] xmm1, cs:dword_18002925C
    // [CVTDQ2PS] xmm1, xmm1
    rsp += 0x28;
    goto sub_18000C24C;
    // [SUB_18000B00C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000B3DA:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B21C↓o
    rsp -= 0x28;
    // [MOVD] xmm1, cs:dword_1800291BC
    cs:dword_180029210 &= 0;
    ecx = 1;
    eax = 0x96;
    cs:dword_1800291c0 = ecx;
    cs:dword_1800291d0 = ecx;
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291e8 = ecx;
    cs:dword_1800291ec = ecx;
    cs:dword_180029244 = ecx;
    cs:dword_180029214 = ecx;
    cs:dword_18002925c = ecx;
    cs:dword_180029160 = ecx;
    rcx = &(KeyName);  // effective address  // "bigheadss"
    cs:dword_1800291f0 = eax;
    cs:dword_1800291f4 = eax;
    cs:dword_1800291f8 = 0x64;  // 'd'
    sub_18000C220();
    rcx = (const char*)aAimBot_0;  // "aim_bot"
    // [MOVD] xmm1, cs:dword_180029160
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291bc = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029168
    rcx = (const char*)aAimKey_0;  // "aim_key"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029160 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029170
    rcx = (const char*)aAimSafe;  // "aim_safe"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029168 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029178
    rcx = (const char*)aAimTeam;  // "aim_team"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029170 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002919C
    rcx = (const char*)aAimLock;  // "aim_lock"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029178 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291A0
    rcx = (const char*)aAimSilent;  // "aim_silent"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002919c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002917C
    rcx = (const char*)aAimIgnoreFrien;  // "aim_ignore_friends"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291a0 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029180
    rcx = (const char*)aAimIgnoreDr;  // "aim_ignore_dr"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002917c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291A4
    rcx = (const char*)aAimSentry_0;  // "aim_sentry"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029180 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291A8
    rcx = (const char*)aAimSticky;  // "aim_sticky"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291a4 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029174
    // [CVTTSS2SI] eax, xmm0
    cs:dword_1800291a8 = eax;
    // [CVTDQ2PS] xmm1, xmm1
    rcx = (const char*)aAimShoot;  // "aim_shoot"
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029198
    rcx = (const char*)aAimMelee;  // "aim_melee"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029174 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029194
    rcx = (const char*)aAimConstcrits;  // "aim_constcrits"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029198 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002918C
    rcx = (const char*)aAimSmooth;  // "aim_smooth"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029194 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029190
    rcx = (const char*)aAimTriggerbot;  // "aim_triggerbot"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002918c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291C0
    rcx = (const char*)aEspName;  // "esp_name"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029190 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291D0
    rcx = (const char*)aEspHealth;  // "esp_health"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291c0 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291C8
    rcx = (const char*)aEspWeapon;  // "esp_weapon"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291d0 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291C4
    rcx = (const char*)aEspDistance;  // "esp_distance"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291c8 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291D8
    rcx = (const char*)aEspBox;  // "esp_box"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291c4 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291B4
    rcx = (const char*)aEspFriends;  // "esp_friends"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291d8 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291DC
    rcx = (const char*)aEspClass;  // "esp_class"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291b4 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291E0
    rcx = (const char*)aEspStructure;  // "esp_structure"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291dc = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291CC
    rcx = (const char*)aEspOptical;  // "esp_optical"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291e0 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291E4
    // [CVTTSS2SI] eax, xmm0
    rcx = (const char*)aEspGlow;  // "esp_glow"
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291cc = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291E8
    rcx = (const char*)aEspUber;  // "esp_uber"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291e4 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291EC
    rcx = (const char*)aEspRadar;  // "esp_radar"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291e8 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291F0
    rcx = (const char*)aEspRadarX;  // "esp_radar_x"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291ec = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291F4
    rcx = (const char*)aEspRadarY;  // "esp_radar_y"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291f0 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291F8
    rcx = (const char*)aEspRadarW;  // "esp_radar_w"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291f4 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029200
    rcx = (const char*)aEspRadarAltitu;  // "esp_radar_altitude"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291f8 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029214
    rcx = (const char*)aMiscBunnyhop;  // "misc_bunnyhop"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029200 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029218
    rcx = (const char*)aTaunt;  // "taunt"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029214 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002921C
    rcx = (const char*)aMiscSpeedOn;  // "misc_speed_on"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029218 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029224
    rcx = (const char*)aMiscSpeedKey;  // "misc_speed_key"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002921c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029220
    rcx = (const char*)aMiscSpeed;  // "misc_speed"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029224 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029228
    rcx = (const char*)aMiscSpeedMode;  // "misc_speed_mode"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029220 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002923C
    // [CVTTSS2SI] eax, xmm0
    cs:dword_180029228 = eax;
    // [CVTDQ2PS] xmm1, xmm1
    rcx = (const char*)aMiscSniper;  // "misc_sniper"
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029244
    rcx = (const char*)aMiscAntiss;  // "misc_antiss"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002923c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002924C
    rcx = (const char*)aMiscModelhack;  // "misc_modelhack"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029244 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002922C
    rcx = (const char*)aMiscSpinbot;  // "misc_spinbot"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002924c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029174
    rcx = (const char*)aAimShoot;  // "aim_shoot"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_18002922c = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029188
    rcx = (const char*)aAimIgnoreCloak;  // "aim_ignore_cloak"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029174 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_1800291B0
    rcx = (const char*)aEspEnemyOnly;  // "esp_enemy_only"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029188 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029210
    rcx = (const char*)aMiscChatspam;  // "misc_chatspam"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_1800291b0 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_180029264
    rcx = (const char*)aCloakRemoval;  // "cloak_removal"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029210 = eax;
    sub_18000C220();
    // [MOVD] xmm1, cs:dword_18002925C
    rcx = (const char*)aAutoBackstab_0;  // "auto_backstab"
    // [CVTTSS2SI] eax, xmm0
    // [CVTDQ2PS] xmm1, xmm1
    cs:dword_180029264 = eax;
    sub_18000C220();
    // [CVTTSS2SI] eax, xmm0
    cs:dword_18002925c = eax;
    rsp += 0x28;
    return rax;
    // [SUB_18000B3DC] endp


    // =============== S U B R O U T I N E =======================================


    // StartAddress+316↓p
    // DATA XREF: ...

    // [FLOLDPROTECT] = dword ptr 0x18

    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x20) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rbx = *(void**)(rcx);
    *(class="type">uint32_t*)(rax+0x18) &= 0;
    rdi = r8d;
    rax = *(void**)(rbx);
    rbp = rdx;
    edx = 8;  // dwSize
    rsi = &(rax+rdi*8);  // effective address
    r9 = &(rsp+0x28+flOldProtect);  // effective address  // lpflOldProtect
    r8d = &(rdx+0x38);  // effective address  // flNewProtect
    rcx = rsi;  // lpAddress
    cs:virtualprotect();
    r11 = *(void**)(rbx);
    r9 = &(rsp+0x28+flOldProtect);  // effective address  // lpflOldProtect
    rbx = *(void**)(r11+rdi*8);
    *(void**)(r11+rdi*8) = rbp;
    r8d = *(void**)(rsp+0x28+flOldProtect);  // flNewProtect
    edx = 8;  // dwSize
    rcx = rsi;  // lpAddress
    cs:virtualprotect();
    rbp = *(void**)(rsp+0x28+arg_8);
    rsi = *(void**)(rsp+0x28+arg_18);
    rax = rbx;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000BA6C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000BAE6:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DWORD __stdcall StartAddress(LPVOID lpThreadParameter)
    // X:stru_1800227A4↓o ...


    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp -= 0x40;
    *(void**)(rsp+0x58+var_38) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x58+arg_0) = rbx;
    *(void**)(rsp+0x58+arg_10) = rsi;
    rcx = (const char*)aGameuiDll;  // "gameui.dll"
    sub_18000E624();
    rcx = (const char*)aClientDll;  // "client.dll"
    sub_18000E624();
    r13 = rax;
    rcx = (const char*)aEngineDll;  // "engine.dll"
    sub_18000E624();
    rbx = rax;
    rcx = (const char*)aTier0Dll;  // "tier0.dll"
    sub_18000E624();
    // nop

class="lbl">loc_18000BB3C:
    //   try {
    rdx = &(ProcName);  // effective address  // "CreateInterface"
    rcx = r13;  // hModule
    cs:getprocaddress();
    rsi = rax;
    *(void**)(rsp+0x58+var_30) = rax;
    r8 = (const char*)aXxxxxXxXx;  // "xxxxx????xx????xx"
    rdx = &(qword_1800056C8);  // effective address
    rcx = rbx;
    sub_18000C874();
    ecx = *(void**)(rax+0x0B);
    ecx += 6;
    rcx = ecx;
    r12 = *(void**)(rcx+rax+9);
    *(void**)(rsp+0x58+var_28) = r12;
    // cmp: set flags = cs:qword_180029508 - 0
    if(!ZF)           goto loc_18000BBBC;
    edx = 0;  // xor self
    rcx = (const char*)aVengineclient0;  // "VEngineClient013"
    r12();
    cs:qword_180029508 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BBBC;
    ebx = &(rax+0x10);  // effective address
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdi = (const char*)aPleaseGetANewV;  // "Please get a new version."
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    goto loc_18000BBC8;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000BBBC:
    // StartAddress+B5↑j
    ebx = 0x10;
    rdi = (const char*)aPleaseGetANewV;  // "Please get a new version."
    //   } // starts at 18000BB3C

class="lbl">loc_18000BBC8:
    // DATA XREF: X:00000001800227B4↓o
    //   try {
    // cmp: set flags = cs:qword_1800294f8 - 0
    if(!ZF)           goto loc_18000BCBD;
    edx = 0;  // xor self
    rcx = (const char*)aVclient017;  // "VClient017"
    rsi();
    cs:qword_1800294f8 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BC0E;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    rax = cs:qword_1800294f8;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000BCBD;

class="lbl">loc_18000BC0E:
    r8d = 0x1E0;  // Size
    rdx = *(void**)(rax);  // Src
    rcx = &(unk_180028F80);  // effective address  // void *
    memmove();
    ecx = 8;  // Size
    ??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    rcx = rax;
    *(void**)(rsp+0x58+arg_8) = rax;
    //   } // starts at 18000BBC8

class="lbl">loc_18000BC35:
    //   try {
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000BC46;
    rax = cs:qword_1800294f8;
    *(void**)(rcx) = rax;
    goto loc_18000BC48;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000BC46:
    ecx = 0;  // xor self
    //   } // starts at 18000BC35

class="lbl">loc_18000BC48:
    // DATA XREF: X:00000001800227C4↓o
    //   try {
    cs:qword_180029550 = rcx;
    r8d = 0x15;
    rdx = &(sub_18000A30C);  // effective address
    sub_18000BA6C();
    // cmp: set flags = cs:qword_180029518 - 0
    if(!ZF)           goto loc_18000BC93;
    edx = 0;  // xor self
    rcx = (const char*)aVcliententityl;  // "VClientEntityList003"
    rsi();
    cs:qword_180029518 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BC93;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();

class="lbl">loc_18000BC93:
    // StartAddress+198↑j
    r8 = (const char*)aXxxXxxxxxX;  // "xxx????xxxxxx????x"
    rdx = &(qword_1800057C8);  // effective address
    rcx = r13;
    sub_18000C874();
    ecx = *(void**)(rax+3);
    ecx += 7;
    rcx = ecx;
    rax = *(void**)(rcx+rax);
    cs:qword_180029520 = rax;
    //   } // starts at 18000BC48

class="lbl">loc_18000BCBD:
    // StartAddress+120↑j
    // DATA XREF: ...
    //   try {
    // cmp: set flags = cs:qword_180029538 - 0
    if(!ZF)           goto loc_18000BCF0;
    edx = 0;  // xor self
    rcx = (const char*)aVmodelinfoclie;  // "VModelInfoClient006"
    r12();
    cs:qword_180029538 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BCF0;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();

class="lbl">loc_18000BCF0:
    // StartAddress+1F5↑j
    // cmp: set flags = cs:qword_180029500 - 0
    if(!ZF)           goto loc_18000BD23;
    edx = 0;  // xor self
    rcx = (const char*)aVguiSurface030;  // "VGUI_Surface030"
    r12();
    cs:qword_180029500 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BD23;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();

class="lbl">loc_18000BD23:
    // StartAddress+228↑j
    // cmp: set flags = cs:qword_180029548 - 0
    if(!ZF)           goto loc_18000BD5B;
    edx = 0;  // xor self
    rcx = (const char*)aVguiPanel009;  // "VGUI_Panel009"
    r12();
    cs:qword_180029548 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BD56;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();

class="lbl">loc_18000BD56:
    sub_18000CA54();

class="lbl">loc_18000BD5B:
    // cmp: set flags = cs:qword_180029530 - 0
    if(!ZF)           goto loc_18000BD8E;
    edx = 0;  // xor self
    rcx = (const char*)aEnginetracecli;  // "EngineTraceClient003"
    r12();
    cs:qword_180029530 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BD8E;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();

class="lbl">loc_18000BD8E:
    // StartAddress+293↑j
    // cmp: set flags = cs:qword_180029510 - 0
    if(!ZF)           goto loc_18000BE26;
    edx = 0;  // xor self
    rcx = (const char*)aVenginevgui002;  // "VEngineVGui002"
    r12();
    cs:qword_180029510 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BDC5;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();

class="lbl">loc_18000BDC5:
    ecx = 8;  // Size
    ??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    rcx = rax;
    *(void**)(rsp+0x58+arg_8) = rax;
    //   } // starts at 18000BCBD

class="lbl">loc_18000BDD7:
    //   try {
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000BDE8;
    rax = cs:qword_180029510;
    *(void**)(rcx) = rax;
    goto loc_18000BDEA;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000BDE8:
    ecx = 0;  // xor self
    //   } // starts at 18000BDD7

class="lbl">loc_18000BDEA:
    // DATA XREF: X:00000001800227DC↓o
    //   try {
    cs:qword_180029558 = rcx;
    r8d = 0x0A;
    rdx = &(sub_18000A5FC);  // effective address
    sub_18000BA6C();
    cs:qword_180027168 = rax;
    // cmp: set flags = cs:qword_180029510 - 0
    if(!ZF)           goto loc_18000BE26;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop
    //   } // starts at 18000BDEA

class="lbl">loc_18000BE26:
    // StartAddress+32A↑j
    // DATA XREF: ...
    //   try {
    edx = 0;  // xor self
    rcx = (const char*)aEngineclientre;  // "EngineClientReplay001"
    r12();
    r8 = (const char*)aXxxXxxx;  // "xxx????xxxx"
    rdx = &(qword_180005920);  // effective address
    rcx = r13;
    sub_18000C874();
    ecx = *(void**)(rax+3);
    ecx += 7;
    r8 = ecx;
    r8 += rax;
    cs:qword_180029540 = r8;
    edx = 0;  // xor self
    rcx = (const char*)aVenginecvar004;  // "VEngineCvar004"
    r12();
    cs:qword_180029528 = rax;
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000BE85;
    r9d = ebx;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = rdi;  // lpText
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop
    //   } // starts at 18000BE26

class="lbl">loc_18000BE85:
    // sub_18002077A+32↓j ...
    eax = 0;  // xor self
    rbx = *(void**)(rsp+0x58+arg_0);
    rsi = *(void**)(rsp+0x58+arg_10);
    rsp += 0x40;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000BAE8
    // [STARTADDRESS] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000BE9B:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
    // __DllMainCRTStartup+96↓p
    // DATA XREF: ...


    rsp -= 0x38;
    // cmp: set flags = edx - 1
    if(!ZF)           goto loc_18000BEC6;
    *(void**)(rsp+0x38+var_10) &= 0;
    *(void**)(rsp+0x38+var_18) &= 0;
    r8 = &(StartAddress);  // effective address  // lpStartAddress
    r9d = 0;  // xor self  // lpParameter
    edx = 0;  // xor self  // dwStackSize
    ecx = 0;  // xor self  // lpThreadAttributes
    cs:createthread();
    goto loc_18000BEFF;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000BEC6:
    // test: set flags = edx & edx
    if(!ZF)           goto loc_18000BEFF;
    ecx = 0;  // xor self  // Time
    _time64();
    rcx = rax;  // Seed
    srand();
    rand();
    eax &= 0x80000003;
    if(SF==OF)        goto loc_18000BEEC;
    eax--;
    eax |= 0x0FFFFFFFC;
    eax++;

class="lbl">loc_18000BEEC:
    eax++;
    // cmp: set flags = eax - 2
    if(!ZF)           goto loc_18000BEFF;
    rcx = &(Command);  // effective address  // "start https://lmaobox.net"
    system();

class="lbl">loc_18000BEFF:
    // DllMain+2C↑j ...
    eax = 1;
    rsp += 0x38;
    return rax;
    // [DLLMAIN] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000BF09:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_180009D88+170↑p ...


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rbp;
    *(void**)(rsp+arg_10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x30;
    esi = edx;
    edx = *(void**)(rsp+0x38+arg_20);
    ebp = ecx;
    rcx = cs:qword_180029500;
    eax = edx;
    class="type">uint32_t r10d;
    r10d = dl;
    r11 = *(void**)(rcx);
    eax >>= 8;  // logical
    ebx = r9d;
    r9d = al;
    eax = edx;
    edi = r8d;
    eax >>= 0x10;  // logical
    edx >>= 0x18;  // logical
    *(void**)(rsp+0x38+var_18) = r10d;
    r8d = al;
    *(class="type">uint64_t*)(r11+0x58)();
    rcx = cs:qword_180029500;
    eax = &(rsi+rbx);  // effective address
    r10 = *(void**)(rcx);
    r9d = &(rbp+rdi+0);  // effective address
    r8d = esi;
    edx = ebp;
    *(void**)(rsp+0x38+var_18) = eax;
    *(class="type">uint64_t*)(r10+0x60)();
    rbx = *(void**)(rsp+0x38+arg_0);
    rbp = *(void**)(rsp+0x38+arg_8);
    rsi = *(void**)(rsp+0x38+arg_10);
    rsp += 0x30;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000BF0C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000BF8E:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // sub_180009D88+AC↑p ...


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rbp;
    *(void**)(rsp+arg_10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x30;
    esi = edx;
    edx = *(void**)(rsp+0x38+arg_20);
    ebp = ecx;
    rcx = cs:qword_180029500;
    eax = edx;
    r10d = dl;
    r11 = *(void**)(rcx);
    eax >>= 8;  // logical
    ebx = r9d;
    r9d = al;
    eax = edx;
    edi = r8d;
    eax >>= 0x10;  // logical
    edx >>= 0x18;  // logical
    *(void**)(rsp+0x38+var_18) = r10d;
    r8d = al;
    *(class="type">uint64_t*)(r11+0x58)();
    rcx = cs:qword_180029500;
    eax = &(rsi+rbx);  // effective address
    r10 = *(void**)(rcx);
    r9d = &(rbp+rdi+0);  // effective address
    r8d = esi;
    edx = ebp;
    *(void**)(rsp+0x38+var_18) = eax;
    *(class="type">uint64_t*)(r10+0x70)();
    rbx = *(void**)(rsp+0x38+arg_0);
    rbp = *(void**)(rsp+0x38+arg_8);
    rsi = *(void**)(rsp+0x38+arg_10);
    rsp += 0x30;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000BF90] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C012:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_18000D624+77↓p
    // DATA XREF: ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rbx = rcx;
    rcx = cs:qword_180029508;
    rdi = rdx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x120)();
    r11 = rax;
    // [MOVSS] xmm0, dword ptr [rax+0x34]
    // [MOVSS] xmm2, dword ptr [rax+0x30]
    // [MOVSS] xmm1, dword ptr [rax+0x38]
    xmm2=_mm_mul_ss(xmm2,*(class="type">uint32_t*)(rbx));
    xmm0=_mm_mul_ss(xmm0,*(class="type">uint32_t*)(rbx+4));
    xmm1=_mm_mul_ss(xmm1,*(class="type">uint32_t*)(rbx+8));
    xmm2=_mm_add_ss(xmm2,xmm0);
    xmm2=_mm_add_ss(xmm2,xmm1);
    xmm2=_mm_add_ss(xmm2,*(class="type">uint32_t*)(rax+0x3C));
    // [UNPCKLPS] xmm2, xmm2
    xmm0=_mm_cvtps_pd(xmm2);
    // [COMISD] xmm0, cs:qword_180005DE0
    if(CF||ZF)        goto loc_18000C164;
    // [MOVSS] xmm0, dword ptr [rax]
    // [MOVSS] xmm1, dword ptr [rax+8]
    // [MOVSS] xmm4, cs:dword_180005DD8
    xmm0=_mm_mul_ss(xmm0,*(class="type">uint32_t*)(rbx));
    xmm1=_mm_mul_ss(xmm1,*(class="type">uint32_t*)(rbx+8));
    // [MOVSS] xmm5, cs:dword_180005DA8
    xmm5=_mm_div_ss(xmm5,xmm2);
    // [MOVSS] xmm2, dword ptr [rax+4]
    xmm2=_mm_mul_ss(xmm2,*(class="type">uint32_t*)(rbx+4));
    xmm2=_mm_add_ss(xmm2,xmm0);
    xmm2=_mm_add_ss(xmm2,xmm1);
    xmm2=_mm_add_ss(xmm2,*(class="type">uint32_t*)(rax+0x0C));
    eax = dword ptr cs:qword_1800293a0+4;
    // [MOVD] xmm0, eax
    edx=(eax>>31)?0xFFFFFFFF:0;
    eax -= edx;
    xmm2=_mm_mul_ss(xmm2,xmm5);
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    xmm2=_mm_mul_ss(xmm2,xmm4);
    // [CVTDQ2PS] xmm0, xmm0
    xmm2=_mm_mul_ss(xmm2,xmm0);
    // [MOVD] xmm0, eax
    xmm2=_mm_add_ss(xmm2,xmm4);
    // [CVTDQ2PD] xmm0, xmm0
    // [UNPCKLPS] xmm2, xmm2
    xmm1=_mm_cvtps_pd(xmm2);
    xmm1=_mm_add_sd(xmm1,xmm0);
    // [CVTSD2SS] xmm1, xmm1
    // [MOVSS] dword ptr [rdi], xmm1
    // [MOVSS] xmm0, dword ptr [r11+0x14]
    // [MOVSS] xmm2, dword ptr [r11+0x10]
    rcx = cs:qword_1800293a0;
    eax = ecx;
    edx=(eax>>31)?0xFFFFFFFF:0;
    eax -= edx;
    xmm2=_mm_mul_ss(xmm2,*(class="type">uint32_t*)(rbx));
    xmm0=_mm_mul_ss(xmm0,*(class="type">uint32_t*)(rbx+4));
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    // [MOVSS] xmm1, dword ptr [r11+0x18]
    xmm2=_mm_add_ss(xmm2,xmm0);
    // [MOVD] xmm0, ecx
    xmm1=_mm_mul_ss(xmm1,*(class="type">uint32_t*)(rbx+8));
    // [MOVD] xmm3, eax
    // [CVTDQ2PS] xmm0, xmm0
    al = 1;
    xmm2=_mm_add_ss(xmm2,xmm1);
    xmm2=_mm_add_ss(xmm2,*(class="type">uint32_t*)(r11+0x1C));
    // [CVTDQ2PD] xmm3, xmm3
    *(class="type">uint32_t*)(rdi+8) &= 0;
    xmm2=_mm_mul_ss(xmm2,xmm5);
    xmm2=_mm_mul_ss(xmm2,xmm4);
    xmm2=_mm_mul_ss(xmm2,xmm0);
    xmm2=_mm_add_ss(xmm2,xmm4);
    // [UNPCKLPS] xmm2, xmm2
    xmm0=_mm_cvtps_pd(xmm2);
    // [SUBSD] xmm3, xmm0
    // [CVTSD2SS] xmm1, xmm3
    // [MOVSS] dword ptr [rdi+4], xmm1
    goto loc_18000C166;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000C164:
    al = 0;  // xor self

class="lbl">loc_18000C166:
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C014] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C171:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_180007628+B5↑p ...


    rsp -= 0x38;
    eax = cs:dword_180027124;
    rdx = &(rsp+0x38+arg_0);  // effective address
    ecx = *(void**)(rax+rcx);
    *(void**)(rsp+0x38+arg_0) = ecx;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x20)();
    *(void**)(rsp+0x38+var_18) &= 0;
    r9 = &(off_180025F78);  // effective address
    r8 = &(off_180025F50);  // effective address
    rcx = rax;
    edx = 0;  // xor self
    __RTDynamicCast();
    rsp += 0x38;
    return rax;
    // [SUB_18000C174] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C1B9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_180007628+EB↑p ...
    rsp -= 0x28;
    // test: set flags = rcx & rcx
    if(!ZF)           goto loc_18000C1C9;
    eax = 0;  // xor self
    goto loc_18000C1D6;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000C1C9:
    rcx += 0x10;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    eax = *(void**)(rax+0x28);

class="lbl">loc_18000C1D6:
    rsp += 0x28;
    return rax;
    // [SUB_18000C1BC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C1DB:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_18000D624+476↓p
    // DATA XREF: ...
    rsp -= 0x28;
    // [MOVSS] xmm0, dword ptr [rcx]
    // [MOVSS] xmm1, dword ptr [rcx+4]
    // [MOVSS] xmm2, dword ptr [rcx+8]
    xmm0=_mm_sub_ss(xmm0,*(class="type">uint32_t*)(rdx));
    xmm1=_mm_sub_ss(xmm1,*(class="type">uint32_t*)(rdx+4));
    xmm2=_mm_sub_ss(xmm2,*(class="type">uint32_t*)(rdx+8));
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm0=_mm_add_ss(xmm0,xmm1);
    xmm0=_mm_add_ss(xmm0,xmm2);  // X
    sqrtf();
    rsp += 0x28;
    goto sqrtf;
    // [SUB_18000C1DC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C21E:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000C220(LPCSTR lpKeyName)
    // sub_18000B3DC+8E↑p ...
    rsp -= 0x28;
    rdx = rcx;  // lpKeyName
    // [CVTTSS2SI] r8d, xmm1  // nDefault
    r9 = &(FileName);  // effective address  // lpFileName
    rcx = (const char*)AppName;  // "\"Cvars\""
    cs:getprivateprofileinta();
    // [MOVD] xmm0, eax
    // [CVTDQ2PS] xmm0, xmm0
    rsp += 0x28;
    return rax;
    // [SUB_18000C220] endp


    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000C24C(LPCSTR lpKeyName)
    // sub_18000B00C+2D↑p ...

    // [STRING] = byte ptr -0x3F8

    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x410;
    // [UNPCKLPS] xmm1, xmm1
    rbx = rcx;
    rdx = (const char*)asc_180005A10;  // "%f"
    rcx = &(rsp+0x418+String);  // effective address  // Buffer
    xmm2=_mm_cvtps_pd(xmm1);
    r8 = (class="type">uint64_t)xmm2;
    sprintf();
    r9 = &(FileName);  // effective address  // lpFileName
    r8 = &(rsp+0x418+String);  // effective address  // lpString
    rcx = (const char*)AppName;  // "\"Cvars\""
    rdx = rbx;  // lpKeyName
    cs:writeprivateprofilestringa();
    rsp += 0x410;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C24C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C299:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_18000C8E8+120↓p ...


    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x50;
    rcx = cs:qword_180029500;
    ebp = 0;  // xor self
    // test: set flags = rcx & rcx
    if(ZF)            goto loc_18000C417;
    cs:dword_1800297f0 = 0x0C;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x210)();
    rcx = cs:qword_180029500;
    r9d = cs:dword_1800297f0;
    *(void**)(rsp+0x58+var_10) = ebp;
    *(void**)(rsp+0x58+var_18) = ebp;
    *(void**)(rsp+0x58+var_20) = 0x200;
    cs:dword_1800297f8 = eax;
    r10 = *(void**)(rcx);
    *(void**)(rsp+0x58+var_28) = ebp;
    r8 = (const char*)aTf2Build;  // "TF2 Build"
    edx = eax;
    *(void**)(rsp+0x58+var_30) = ebp;
    *(void**)(rsp+0x58+var_38) = 0x64;  // 'd'
    *(class="type">uint64_t*)(r10+0x218)();
    rcx = cs:qword_180029500;
    cs:dword_1800297f4 = 0x0C;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x210)();
    rcx = cs:qword_180029500;
    r9d = cs:dword_1800297f4;
    *(void**)(rsp+0x58+var_10) = ebp;
    *(void**)(rsp+0x58+var_18) = ebp;
    *(void**)(rsp+0x58+var_20) = 0x200;
    cs:dword_1800297fc = eax;
    r10 = *(void**)(rcx);
    *(void**)(rsp+0x58+var_28) = ebp;
    r8 = (const char*)aTf2Build;  // "TF2 Build"
    edx = eax;
    *(void**)(rsp+0x58+var_30) = ebp;
    *(void**)(rsp+0x58+var_38) = 0x190;
    *(class="type">uint64_t*)(r10+0x218)();
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x210)();
    rcx = cs:qword_180029500;
    *(void**)(rsp+0x58+var_10) = ebp;
    *(void**)(rsp+0x58+var_18) = ebp;
    *(void**)(rsp+0x58+var_20) = 0x200;
    cs:dword_180029800 = eax;
    r10 = *(void**)(rcx);
    *(void**)(rsp+0x58+var_28) = ebp;
    r9d = &(rbp+0x14);  // effective address
    r8 = (const char*)aTf2Build;  // "TF2 Build"
    edx = eax;
    *(void**)(rsp+0x58+var_30) = ebp;
    *(void**)(rsp+0x58+var_38) = 0x190;
    *(class="type">uint64_t*)(r10+0x218)();
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x210)();
    rcx = cs:qword_180029500;
    *(void**)(rsp+0x58+var_10) = ebp;
    *(void**)(rsp+0x58+var_18) = ebp;
    *(void**)(rsp+0x58+var_20) = 0x200;
    cs:dword_180029804 = eax;
    r10 = *(void**)(rcx);
    *(void**)(rsp+0x58+var_28) = ebp;
    r9d = &(rbp+0x1C);  // effective address
    r8 = (const char*)aTf2Build;  // "TF2 Build"
    edx = eax;
    *(void**)(rsp+0x58+var_30) = ebp;
    *(void**)(rsp+0x58+var_38) = 0x190;
    *(class="type">uint64_t*)(r10+0x218)();

class="lbl">loc_18000C417:
    rsp += 0x50;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C29C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C41D:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000C420(int, int, int, int, int, char *Format, char ArgList)
    // sub_180009D88+19B↑p ...

    // [BUFFER] = byte ptr -0x0C28
    // [STRING] = word ptr -0x828
    // [FORMAT] = qword ptr 0x30
    // [ARGLIST] = byte ptr 0x38

    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp -= 0x0C30;
    r13d = 0;  // xor self
    esi = r9d;
    ebp = r8d;
    r12b = dl;
    rbx = rcx;
    // cmp: set flags = *(void**)(rax+0x30) - r13
    if(ZF)            goto loc_18000C54E;
    rcx = &(rsp+0x0C58+var_C27);  // effective address  // void *
    edx = 0;  // xor self  // Val
    r8d = 0x3FF;  // Size
    *(void**)(rsp+0x0C58+Buffer) = r13b;
    memset();
    rcx = &(rsp+0x0C58+var_826);  // effective address  // void *
    edx = 0;  // xor self  // Val
    r8d = 0x7FE;  // Size
    *(void**)(rsp+0x0C58+String) = r13w;
    memset();
    rdx = *(void**)(rsp+0x0C58+Format);  // Format
    r8 = &(rsp+0x0C58+ArgList);  // effective address  // ArgList
    rcx = &(rsp+0x0C58+Buffer);  // effective address  // Buffer
    vsprintf();
    r8 = &(rsp+0x0C58+Buffer);  // effective address
    rdx = (const char*)aS;  // "%S"
    rcx = &(rsp+0x0C58+String);  // effective address  // LPWSTR
    cs:wsprintfw();
    rcx = cs:qword_180029500;
    r8d = esi;
    rax = *(void**)(rcx);
    edx = ebp;
    *(class="type">uint64_t*)(rax+0x0A0)();
    // cmp: set flags = r12b - 1
    if(!ZF)           goto loc_18000C4D3;
    edx = *(void**)(rbx+8);
    goto loc_18000C4D6;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000C4D3:
    edx = *(void**)(rbx+0x0C);

class="lbl">loc_18000C4D6:
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x88)();
    edx = *(void**)(rsp+0x0C58+arg_20);
    rcx = cs:qword_180029500;
    r11 = *(void**)(rcx);
    eax = edx;
    r10d = dl;
    eax >>= 8;  // logical
    *(void**)(rsp+0x0C58+var_C38) = r10d;
    r9d = al;
    eax = edx;
    edx >>= 0x18;  // logical
    eax >>= 0x10;  // logical
    r8d = al;
    *(class="type">uint64_t*)(r11+0x98)();
    r11 = cs:qword_180029500;
    rcx = &(rsp+0x0C58+String);  // effective address  // String
    rbx = *(void**)(r11);
    wcslen();
    rcx = cs:qword_180029500;
    rdx = &(rsp+0x0C58+String);  // effective address
    r8 = rax;
    r9d = 0;  // xor self
    *(class="type">uint64_t*)(rbx+0x0B0)();

class="lbl">loc_18000C54E:
    rsp += 0x0C30;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C420] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C55D:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // sub_18000CB04+266↓p ...

    // [STRING] = word ptr -0x818

    *(void**)(rsp+arg_8) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x830;
    esi = ecx;
    ebp = r8d;
    edi = edx;
    eax = 0;  // xor self
    rcx = &(rsp+0x848+var_816);  // effective address  // void *
    edx = 0;  // xor self  // Val
    r8d = 0x7FE;  // Size
    rbx = r9;
    *(void**)(rsp+0x848+String) = ax;
    memset();
    rdx = (const char*)aS;  // "%S"
    rcx = &(rsp+0x848+String);  // effective address  // LPWSTR
    r8 = rbx;
    cs:wsprintfw();
    rcx = cs:qword_180029500;
    ebx = cs:dword_180029804;
    rax = *(void**)(rcx);
    rdx = &(rsp+0x848+arg_10);  // effective address
    r9 = &(rsp+0x848+arg_0);  // effective address
    *(void**)(rsp+0x848+var_828) = rdx;
    r8 = &(rsp+0x848+String);  // effective address
    edx = ebx;
    *(class="type">uint64_t*)(rax+0x258)();
    eax = *(void**)(rsp+0x848+arg_0);
    rcx = cs:qword_180029500;
    r9 = *(void**)(rcx);
    edx=(eax>>31)?0xFFFFFFFF:0;
    r8d = edi;
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    esi -= eax;
    edx = esi;
    *(class="type">uint64_t*)(r9+0x0A0)();
    rcx = cs:qword_180029500;
    edx = ebx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x88)();
    rcx = cs:qword_180029500;
    edx = bpl;
    r10 = *(void**)(rcx);
    eax = ebp;
    *(class="type">uint32_t*)(rsp+0x848+var_828) = edx;
    eax >>= 8;  // logical
    r9d = al;
    eax = ebp;
    ebp >>= 0x18;  // logical
    eax >>= 0x10;  // logical
    edx = ebp;
    r8d = al;
    *(class="type">uint64_t*)(r10+0x98)();
    r11 = cs:qword_180029500;
    rcx = &(rsp+0x848+String);  // effective address  // String
    rbx = *(void**)(r11);
    wcslen();
    rcx = cs:qword_180029500;
    rdx = &(rsp+0x848+String);  // effective address
    r8 = rax;
    r9d = 0;  // xor self
    *(class="type">uint64_t*)(rbx+0x0B0)();
    rbx = *(void**)(rsp+0x848+arg_8);
    rsp += 0x830;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C560] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C67E:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame fpd=0B70h

    // __int64 __fastcall sub_18000C680(int, int, int, int, int, char *Format, char ArgList)
    // sub_18000D624+E6↓p ...

    // [BUFFER] = byte ptr -0x0C30
    // [STRING] = word ptr -0x830
    // [FORMAT] = qword ptr 0x38
    // [ARGLIST] = byte ptr 0x40

    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rbp = &(rsp-0x0B48);  // effective address
    rsp -= 0x0C48;
    r14d = 0;  // xor self
    r13d = r9d;
    r12d = r8d;
    class="type">uint8_t sil;
    sil = dl;
    rbx = rcx;
    // cmp: set flags = *(void**)(rbp+0x0B70+Format) - r14
    if(ZF)            goto loc_18000C7E9;
    rcx = &(rsp+0x0C70+var_C2F);  // effective address  // void *
    edx = 0;  // xor self  // Val
    r8d = 0x3FF;  // Size
    *(void**)(rsp+0x0C70+Buffer) = r14b;
    memset();
    rcx = &(rbp+0x0B70+var_82E);  // effective address  // void *
    edx = 0;  // xor self  // Val
    r8d = 0x7FE;  // Size
    *(void**)(rbp+0x0B70+String) = r14w;
    memset();
    rdx = *(void**)(rbp+0x0B70+Format);  // Format
    r8 = &(rbp+0x0B70+ArgList);  // effective address  // ArgList
    rcx = &(rsp+0x0C70+Buffer);  // effective address  // Buffer
    vsprintf();
    r8 = &(rsp+0x0C70+Buffer);  // effective address
    rdx = (const char*)aS;  // "%S"
    rcx = &(rbp+0x0B70+String);  // effective address  // LPWSTR
    cs:wsprintfw();
    // cmp: set flags = sil - 1
    if(!ZF)           goto loc_18000C724;
    ebx = *(void**)(rbx+0x10);
    goto loc_18000C727;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000C724:
    ebx = *(void**)(rbx+0x0C);

class="lbl">loc_18000C727:
    rcx = cs:qword_180029500;
    rdx = &(rsp+0x0C70+var_C3C);  // effective address
    r9 = &(rsp+0x0C70+var_C40);  // effective address
    rax = *(void**)(rcx);
    *(void**)(rsp+0x0C70+var_C50) = rdx;
    r8 = &(rbp+0x0B70+String);  // effective address
    edx = ebx;
    *(class="type">uint64_t*)(rax+0x258)();
    eax = *(void**)(rsp+0x0C70+var_C40);
    rcx = cs:qword_180029500;
    r9 = *(void**)(rcx);
    edx=(eax>>31)?0xFFFFFFFF:0;
    r8d = r13d;
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    r12d -= eax;
    edx = r12d;
    *(class="type">uint64_t*)(r9+0x0A0)();
    rcx = cs:qword_180029500;
    edx = ebx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x88)();
    edx = *(void**)(rbp+0x0B70+arg_20);
    rcx = cs:qword_180029500;
    r11 = *(void**)(rcx);
    eax = edx;
    r10d = dl;
    eax >>= 8;  // logical
    *(class="type">uint32_t*)(rsp+0x0C70+var_C50) = r10d;
    r9d = al;
    eax = edx;
    edx >>= 0x18;  // logical
    eax >>= 0x10;  // logical
    r8d = al;
    *(class="type">uint64_t*)(r11+0x98)();
    r11 = cs:qword_180029500;
    rcx = &(rbp+0x0B70+String);  // effective address  // String
    rbx = *(void**)(r11);
    wcslen();
    rcx = cs:qword_180029500;
    rdx = &(rbp+0x0B70+String);  // effective address
    r8 = rax;
    r9d = 0;  // xor self
    *(class="type">uint64_t*)(rbx+0x0B0)();

class="lbl">loc_18000C7E9:
    rsp += 0x0C48;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C680] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C7FA:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // sub_18000CB04+137↓p ...


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rbp;
    *(void**)(rsp+arg_10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    ebx = edx;
    edx = 0;  // xor self  // Val
    rdi = r8;
    esi = ecx;
    rbp = &(unk_180029890);  // effective address
    r8d = &(rdx+0x40);  // effective address  // Size
    rcx = rbp;  // void *
    memset();
    r11d = &(rbx-1);  // effective address
    // test: set flags = r11d & r11d
    if(ZF)            goto loc_18000C856;
    r9 = rbp;
    rdi -= rbp;
    edx = r11d;

class="lbl">loc_18000C83E:
    cl = *(void**)(rdi+r9);
    cl ^= sil;
    *(void**)(r9) = cl;
    ecx = &(rsi+1);  // effective address
    r9++;
    rdx--;
    esi = cl;
    if(!ZF)           goto loc_18000C83E;

class="lbl">loc_18000C856:
    rsi = *(void**)(rsp+0x28+arg_10);
    *(class="type">uint8_t*)(rbx+rbp) = 0;
    rbx = *(void**)(rsp+0x28+arg_0);
    rax = rbp;
    rbp = *(void**)(rsp+0x28+arg_8);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C7FC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C872:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // StartAddress+1BC↑p ...


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rdi;
    rbx = rdx;
    r9d = 0x0B;

class="lbl">loc_18000C887:
    // cmp: set flags = *(uint8_t*)(r8) - 0
    r10 = r8;
    r11 = rbx;
    if(ZF)            goto loc_18000C8BA;
    class="type">uint8_t dl;
    dl = *(void**)(r8);
    edi = r9d;
    rdi -= rbx;
    rdi += rcx;

class="lbl">loc_18000C89F:
    // cmp: set flags = dl - 0x78  // 'x'
    if(!ZF)           goto loc_18000C8AD;
    al = *(void**)(r11);
    // cmp: set flags = *(void**)(rdi+r11) - al
    if(!ZF)           goto loc_18000C8C5;

class="lbl">loc_18000C8AD:
    r10++;
    r11++;
    dl = *(void**)(r10);
    // test: set flags = dl & dl
    if(!ZF)           goto loc_18000C89F;

class="lbl">loc_18000C8BA:
    // cmp: set flags = *(uint8_t*)(r10) - 0
    al=ZF?1:0;
    // test: set flags = al & al
    if(!ZF)           goto loc_18000C8D5;

class="lbl">loc_18000C8C5:
    r9d++;
    // cmp: set flags = r9d - 0x0FF7400
    if(CF)           goto loc_18000C887;
    eax = 0;  // xor self
    goto loc_18000C8DB;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000C8D5:
    eax = r9d;
    rax += rcx;

class="lbl">loc_18000C8DB:
    rbx = *(void**)(rsp+arg_0);
    rdi = *(void**)(rsp+arg_8);
    return rax;
    // [SUB_18000C874] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000C8E6:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // .pdata:000000018002B2F4↓o


    *(void**)(rsp+arg_0) = rbx;
    *(void**)(rsp+arg_8) = rbp;
    *(void**)(rsp+arg_10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rdi = rcx;
    rcx = cs:qword_180029508;
    class="type">uint8_t bpl;
    bpl = r9b;
    rax = *(void**)(rcx);
    sil = r8b;
    rbx = rdx;
    *(class="type">uint64_t*)(rax+0x0D0)();
    // test: set flags = al & al
    if(ZF)            goto loc_18000C968;
    rax = *(void**)(rdi);
    rdx = rbx;
    rcx = rdi;
    *(class="type">uint64_t*)(rax+0x120)();
    rdx = (const char*)aNewmatchfound;  // "NewMatchFound"
    rcx = rax;  // Str1
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_18000CA3C;
    rax = *(void**)(rdi);
    rdx = rbx;
    rcx = rdi;
    *(class="type">uint64_t*)(rax+0x120)();
    rdx = (const char*)aNotificationto;  // "NotificationToastContainer"
    rcx = rax;  // Str1
    strcmp();
    // test: set flags = eax & eax
    if(ZF)            goto loc_18000CA3C;

class="lbl">loc_18000C968:
    class="type">uint8_t r9b;
    r9b = bpl;
    r8b = sil;
    rdx = rbx;
    rcx = rdi;
    cs:qword_1800293a8();
    r11 = cs:qword_180029a18;
    // test: set flags = r11 & r11
    if(!ZF)           goto loc_18000C9B8;
    rax = *(void**)(rdi);
    rdx = rbx;
    rcx = rdi;
    *(class="type">uint64_t*)(rax+0x120)();
    rdx = (const char*)aFocusoverlaypa;  // "FocusOverlayPanel"
    rcx = rax;  // Str1
    strcmp();
    r11 = cs:qword_180029a18;
    // test: set flags = eax & eax
    if(ZF) r11=rbx;
    cs:qword_180029a18 = r11;

class="lbl">loc_18000C9B8:
    // test: set flags = sil & sil
    if(ZF)            goto loc_18000CA3C;
    // cmp: set flags = r11 - rbx
    if(!ZF)           goto loc_18000CA3C;
    rcx = cs:qword_180029508;
    r8 = &(qword_1800293A0);  // effective address
    rdx = &(qword_1800293A0+4);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x28)();
    eax = dword ptr cs:qword_1800293a0+4;
    r11 = cs:qword_1800293a0;
    // cmp: set flags = eax - cs:dword_180029a10
    if(!ZF)           goto loc_18000C9FB;
    // cmp: set flags = r11d - cs:dword_180029a0c
    if(ZF)            goto loc_18000CA0D;

class="lbl">loc_18000C9FB:
    cs:dword_180029a10 = eax;
    cs:dword_180029a0c = r11d;
    sub_18000C29C();

class="lbl">loc_18000CA0D:
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x0D0)();
    // test: set flags = al & al
    if(!ZF)           goto loc_18000CA37;
    rcx = cs:qword_180029548;
    r8b = 1;
    rdx = rbx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x1D8)();

class="lbl">loc_18000CA37:
    sub_18000CB04();

class="lbl">loc_18000CA3C:
    // sub_18000C8E8+7A↑j ...
    rbx = *(void**)(rsp+0x28+arg_0);
    rbp = *(void**)(rsp+0x28+arg_8);
    rsi = *(void**)(rsp+0x28+arg_10);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000C8E8] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000CA51:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_1800225B8↓o ...

    // [FLOLDPROTECT] = dword ptr 8

    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x30;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x38+arg_8) = rbx;
    *(void**)(rsp+0x38+arg_10) = rsi;
    esi = 8;
    ecx = esi;  // Size
    ??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    *(class="type">uint64_t*)(rsp+0x38+flOldProtect) = rax;

class="lbl">loc_18000CA7E:
    //   try {
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000CA8D;
    rcx = cs:qword_180029548;
    *(void**)(rax) = rcx;
    //   } // starts at 18000CA7E

class="lbl">loc_18000CA8D:
    // DATA XREF: X:00000001800225C8↓o
    cs:qword_180029560 = rax;
    rbx = *(void**)(rax);
    *(void**)(rsp+0x38+flOldProtect) &= 0;
    rdi = *(void**)(rbx);
    r9 = &(rsp+0x38+flOldProtect);  // effective address  // lpflOldProtect
    r8d = 0x40;  // '@'  ; flNewProtect
    rdx = rsi;  // dwSize
    rcx = &(rdi+0x148);  // effective address  // lpAddress
    cs:virtualprotect();
    r11 = *(void**)(rbx);
    rbx = *(void**)(r11+0x148);
    rax = &(sub_18000C8E8);  // effective address
    *(void**)(r11+0x148) = rax;
    r9 = &(rsp+0x38+flOldProtect);  // effective address  // lpflOldProtect
    r8d = *(void**)(rsp+0x38+flOldProtect);  // flNewProtect
    rdx = rsi;  // dwSize
    rcx = &(rdi+0x148);  // effective address  // lpAddress
    cs:virtualprotect();
    cs:qword_1800293a8 = rbx;
    rbx = *(void**)(rsp+0x38+arg_8);
    rsi = *(void**)(rsp+0x38+arg_10);
    rsp += 0x30;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18000CA54
    // [SUB_18000CA54] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000CB03:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_180022548↓o ...

    // [FORMAT] = qword ptr -0x20

    // __unwind { // __CxxFrameHandler3
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp -= 0x40;
    *(void**)(rsp+0x48+var_10) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rsp+0x48+arg_0) = rbx;
    *(void**)(rsp+0x48+arg_8) = rsi;
    *(void**)(rsp+0x48+arg_10) = rdi;

class="lbl">loc_18000CB22:
    //   try {
    r13d = 0;  // xor self
    // cmp: set flags = cs:byte_180025fa1 - r13b
    if(ZF)            goto loc_18000CB3F;
    cs:byte_180025fa1 = r13b;
    sub_18000A050();
    sub_18000E46C();

class="lbl">loc_18000CB3F:
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    r8d = 0x57;  // 'W'
    edx = cs:dword_1800297f8;
    *(class="type">uint64_t*)(rax+0x250)();
    // test: set flags = eax & eax
    if(!ZF)           goto loc_18000CB64;
    sub_18000C29C();

class="lbl">loc_18000CB64:
    // cmp: set flags = cs:dword_180029244 - r13d
    if(ZF)            goto loc_18000CB96;
    ecx = 0x7B;  // '{'  ; vKey
    cs:getasynckeystate();
    // test: set flags = ax & ax
    if(!ZF)           goto loc_18000CB91;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x2A8)();
    // test: set flags = al & al
    if(ZF)            goto loc_18000CB96;

class="lbl">loc_18000CB91:
    goto loc_18000CE58;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CB96:
    // sub_18000CB04+8B↑j
    ecx = 0;  // xor self
    sub_18000A6B4();
    esi = eax;
    rcx = cs:qword_180029518;
    rbx = *(void**)(rcx);
    rcx = cs:qword_180029508;
    rdx = *(void**)(rcx);
    *(class="type">uint64_t*)(rdx+0x60)();
    edx = eax;
    rcx = cs:qword_180029518;
    *(class="type">uint64_t*)(rbx+0x18)();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000CC84;
    ecx = cs:dword_1800270fc;
    ecx = *(void**)(rcx+rax);
    // test: set flags = ecx & ecx
    if(SF)            goto loc_18000CBE1;
    sub_18000A6B4();
    esi = eax;
    goto loc_18000CBE4;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CBE1:
    esi |= 0x0FFFFFFFF;

class="lbl">loc_18000CBE4:
    r8 = (const char*)aLlclfjHi;  // "llclfj~\a`hi`"
    edx = 0x0D;
    ecx = &(rdx+0x13);  // effective address
    sub_18000C7FC();
    r9 = rax;
    edi = 0x2AAAAAAB;
    eax = edi;
    rax = (class="type">int64_t)rax * (class="type">int64_t)dword ptr cs:qword_1800293a0;
    r10d = edx;
    r10d >>= 0x1F;  // logical
    r10d += edx;
    eax = dword ptr cs:qword_1800293a0+4;
    edx=(eax>>31)?0xFFFFFFFF:0;
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    ecx = eax;
    r8d = esi;
    edx = r10d;
    sub_18000C560();
    r8 = &(qword_180005A88);  // effective address
    edx = 0x10;
    ecx = 0x0E0;
    sub_18000C7FC();
    r11 = rax;
    eax = edi;
    rax = (class="type">int64_t)rax * (class="type">int64_t)dword ptr cs:qword_1800293a0;
    ecx = edx;
    ecx >>= 0x1F;  // logical
    r9d = &(rdx+rcx+0x23);  // effective address  // int
    eax = dword ptr cs:qword_1800293a0+4;
    edx=(eax>>31)?0xFFFFFFFF:0;
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    r8d = eax;  // int
    *(void**)(rsp+0x48+Format) = r11;  // Format
    *(void**)(rsp+0x48+var_28) = esi;  // int
    edi = 1;
    edx = edi;  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000CDA5;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CC84:
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x70)();
    // [CVTTSS2SI] rcx, xmm0  // Seed
    srand();
    rand();
    ebx = eax;
    eax = 0x94F2095;
    rax = (class="type">int64_t)rax * (class="type">int64_t)ebx;
    edx = (class="type">int64_t)edx >> 3;  // arithmetic
    ecx = edx;
    ecx >>= 0x1F;  // logical
    edx += ecx;
    edx *= (class="type">int64_t)0x0DC;
    ebx -= edx;
    ebx += 0x14;
    ebx <<= 0x10;
    ebx &= 0x0FF0000;
    rand();
    edi = eax;
    eax = 0x94F2095;
    rax = (class="type">int64_t)rax * (class="type">int64_t)edi;
    edx = (class="type">int64_t)edx >> 3;  // arithmetic
    ecx = edx;
    ecx >>= 0x1F;  // logical
    edx += ecx;
    edx *= (class="type">int64_t)0x0DC;
    edi -= edx;
    edi += 0x14;
    edi <<= 0x18;
    edi &= 0x0FF0000FF;
    edi |= ebx;
    rand();
    ebx = eax;
    eax = 0x94F2095;
    rax = (class="type">int64_t)rax * (class="type">int64_t)ebx;
    edx = (class="type">int64_t)edx >> 3;  // arithmetic
    eax = edx;
    eax >>= 0x1F;  // logical
    edx += eax;
    edx *= (class="type">int64_t)0x0DC;
    ebx -= edx;
    ebx += 0x14;
    ebx <<= 8;
    ebx &= 0x0FF00;
    ebx |= edi;
    ebx |= 0x0FF;
    r8 = (const char*)aLlclfjHi;  // "llclfj~\a`hi`"
    edx = 0x0D;
    ecx = &(rdx+0x13);  // effective address
    sub_18000C7FC();
    r9 = rax;
    edi = 0x2AAAAAAB;
    eax = edi;
    rax = (class="type">int64_t)rax * (class="type">int64_t)dword ptr cs:qword_1800293a0;
    r10d = edx;
    r10d >>= 0x1F;  // logical
    r10d += edx;
    eax = dword ptr cs:qword_1800293a0+4;
    edx=(eax>>31)?0xFFFFFFFF:0;
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    ecx = eax;
    r8d = ebx;
    edx = r10d;
    sub_18000C560();
    eax = edi;
    rax = (class="type">int64_t)rax * (class="type">int64_t)dword ptr cs:qword_1800293a0;
    eax = edx;
    eax >>= 0x1F;  // logical
    r10d = &(rdx+rax+0x32);  // effective address
    eax = dword ptr cs:qword_1800293a0+4;
    edx=(eax>>31)?0xFFFFFFFF:0;
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    ecx = eax;
    r9 = (const char*)aVisitWwwLmaobo;  // "VISIT WWW.LMAOBOX.NET FOR PREMIUM VERSI"...
    r8d = esi;
    edx = r10d;
    sub_18000C560();
    edi = 1;

class="lbl">loc_18000CDA5:
    // cmp: set flags = cs:byte_180027170 - r13b
    if(ZF)            goto loc_18000CDBC;
    edx = esi;
    rcx = &(byte_180027170);  // effective address
    sub_180009D88();

class="lbl">loc_18000CDBC:
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x0D0)();
    // test: set flags = al & al
    if(ZF)            goto loc_18000CE58;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x0D8)();
    // test: set flags = al & al
    if(ZF)            goto loc_18000CE58;
    // cmp: set flags = cs:dword_1800291ec - r13d
    if(ZF)            goto loc_18000CDF8;
    ecx = esi;
    sub_18000E3A8();

class="lbl">loc_18000CDF8:
    ebx = edi;

class="lbl">loc_18000CDFA:
    *(void**)(rsp+0x48+var_18) = ebx;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x0A8)();
    // cmp: set flags = ebx - eax
    if(!ZF&&SF==OF)   goto loc_18000CE1D;
    ecx = ebx;
    sub_18000CE70();
    ebx += edi;
    goto loc_18000CDFA;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CE1D:
    // cmp: set flags = cs:dword_1800291bc - r13d
    cs:byte_180029568=!ZF?1:0;
    // cmp: set flags = cs:dword_1800291e0 - r13d
    if(ZF)            goto loc_18000CE56;
    ebx = edi;

class="lbl">loc_18000CE36:
    *(void**)(rsp+0x48+var_14) = ebx;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x30)();
    // cmp: set flags = ebx - eax
    if(!ZF&&SF==OF)   goto loc_18000CE56;
    ecx = ebx;
    sub_18000D624();
    ebx += edi;
    goto loc_18000CE36;
    //   } // starts at 18000CB22
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CE56:
    // sub_18000CB04+345↑j
    // DATA XREF: ...
    goto $+2;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CE58:
    // sub_18000CB04+2CA↑j ...
    rbx = *(void**)(rsp+0x48+arg_0);
    rsi = *(void**)(rsp+0x48+arg_8);
    rdi = *(void**)(rsp+0x48+arg_10);
    rsp += 0x40;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 18000CB04
    // [SUB_18000CB04] endp

class="lbl">algn_18000CE6F:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_18002217C↓o ...

    // [FORMAT] = qword ptr -0x180
    // [ARGLIST] = byte ptr -0x178
    = byte ptr -0x0E8=__str();

    // __unwind { // __CxxFrameHandler3
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rsp -= 0x180;
    *(void**)(rsp+0x1A8+var_F8) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x20) = rsi;
    xmmword ptr [rax-0x38] = xmm6;  // SIMD move
    xmmword ptr [rax-0x48] = xmm7;  // SIMD move
    xmmword ptr [rax-0x58] = xmm8;  // SIMD move
    ebx = ecx;

class="lbl">loc_18000CEA6:
    //   try {
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    esi = eax;
    // cmp: set flags = ebx - eax
    if(ZF)            goto loc_18000D5F4;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = ebx;
    *(class="type">uint64_t*)(rax+0x18)();
    rdi = rax;
    r13d = 0;  // xor self
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000D5F4;
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    r8 = &(rsp+0x1A8+Str);  // effective address
    edx = ebx;
    *(class="type">uint64_t*)(rax+0x40)();
    // test: set flags = al & al
    if(ZF)            goto loc_18000D5F4;
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    edx = esi;
    *(class="type">uint64_t*)(rax+0x18)();
    rsi = rax;
    *(void**)(rsp+0x1A8+arg_10) = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000D5F4;
    eax = cs:dword_1800270fc;
    r15d = *(void**)(rax+rdi);
    *(void**)(rsp+0x1A8+arg_8) = r15d;
    // cmp: set flags = *(void**)(rax+rsi) - r15d
    bl=ZF?1:0;
    // cmp: set flags = cs:dword_1800291bc - r13d
    if(ZF)            goto loc_18000CF4E;
    eax = cs:dword_180027108;
    *(class="type">uint32_t*)(rax+rdi) = 0x40200000;
    goto loc_18000CF64;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CF4E:
    // cmp: set flags = cs:byte_180029568 - r13b
    if(ZF)            goto loc_18000CF64;
    eax = cs:dword_180027108;
    *(class="type">uint32_t*)(rax+rdi) = 0x3F800000;

class="lbl">loc_18000CF64:
    // sub_18000CE70+E5↑j
    eax = cs:dword_1800270f8;
    // cmp: set flags = *(void**)(rax+rdi) - r13b
    if(!ZF)           goto loc_18000D5F4;
    rcx = &(rdi+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x40)();
    // test: set flags = al & al
    if(!ZF)           goto loc_18000D5F4;
    // cmp: set flags = cs:dword_1800291b0 - r13d
    if(ZF)            goto loc_18000CF97;
    // test: set flags = bl & bl
    if(!ZF)           goto loc_18000D5F4;

class="lbl">loc_18000CF97:
    rdx = &(SubStr);  // effective address  // SubStr
    rcx = &(rsp+0x1A8+Str);  // effective address  // Str
    strstr();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000D5F2;
    rdx = &(nullsub_1);  // effective address  // SubStr
    rcx = &(rsp+0x1A8+Str);  // effective address  // Str
    strstr();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000D5F2;
    // test: set flags = r15d & r15d
    if(SF)            goto loc_18000CFE6;
    ecx = r15d;
    sub_18000A6B4();
    ebx = eax;
    r14d |= 0x0FFFFFFFF;
    goto loc_18000CFED;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000CFE6:
    r14d |= 0x0FFFFFFFF;
    ebx = r14d;

class="lbl">loc_18000CFED:
    rcx = &(rdi+8);  // effective address
    rax = *(void**)(rcx);
    r8 = &(rsp+0x1A8+var_158);  // effective address
    rdx = &(rsp+0x1A8+var_148);  // effective address
    *(class="type">uint64_t*)(rax+0x0A0)();
    r11 = *(void**)(rdi);
    rcx = rdi;
    *(class="type">uint64_t*)(r11+0x48)();
    // [MOVSS] xmm0, dword ptr [rax]
    // [MOVSS] [rsp+0x1A8+var_128], xmm0
    // [MOVSS] xmm1, dword ptr [rax+4]
    // [MOVSS] [rsp+0x1A8+var_124], xmm1
    // [MOVSS] xmm0, [rsp+0x1A8+var_150]
    xmm0=_mm_add_ss(xmm0,*(void**)(rsp+0x1A8+var_140));
    xmm0=_mm_mul_ss(xmm0,cs:dword_180005dd8);
    xmm0=_mm_add_ss(xmm0,*(class="type">uint32_t*)(rax+8));
    // [MOVSS] [rsp+0x1A8+var_120], xmm0
    rdx = &(rsp+0x1A8+var_168);  // effective address
    rcx = &(rsp+0x1A8+var_128);  // effective address
    sub_18000C014();
    // test: set flags = al & al
    if(ZF)            goto loc_18000D5F4;
    // [MOVSS] xmm8, [rsp+0x1A8+var_168]
    xmm8=_mm_add_ss(xmm8,cs:dword_180005f0c);
    // [MOVSS] [rsp+0x1A8+var_168], xmm8
    // [MOVSS] xmm7, [rsp+0x1A8+var_164]
    r12 = &(dword_1800297F0);  // effective address
    // cmp: set flags = cs:dword_1800291c0 - r13d
    if(ZF)            goto loc_18000D0FC;
    rcx = (const char*)ArgList;  // "[bot] "
    rax = &(byte_180005AD3);  // effective address
    // cmp: set flags = *(void**)(rsp+0x1A8+var_7C) - r13b
    if(!ZF) rax=rcx;
    // [CVTTSS2SI] r9d, xmm7  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    rcx = &(rsp+0x1A8+Str);  // effective address
    *(void**)(rsp+0x1A8+var_170) = rcx;
    *(class="type">uint64_t*)(rsp+0x1A8+ArgList) = rax;  // ArgList
    rax = (const char*)aSS;  // "%s%s"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D0FC:
    // cmp: set flags = cs:dword_1800291c4 - r13d
    if(ZF)            goto loc_18000D1A8;
    rax = *(void**)(rsi);
    rcx = rsi;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x1A8+var_118) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x1A8+var_114) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x1A8+var_110) = eax;
    rax = *(void**)(rdi);
    rcx = rdi;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x1A8+var_138) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x1A8+var_134) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x1A8+var_130) = eax;
    rdx = &(rsp+0x1A8+var_118);  // effective address
    rcx = &(rsp+0x1A8+var_138);  // effective address
    sub_18000C1DC();
    // [UNPCKLPS] xmm0, xmm0
    xmm1=_mm_cvtps_pd(xmm0);
    // [CVTTSS2SI] r9d, xmm7  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    *(class="type">uint32_t*)rdi=*(class="type">uint32_t*)rsi; rsi+=4; rdi+=4;  // ArgList
    rax = &(a0fm);  // effective address  // "[%.0fm]"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D1A8:
    esi = cs:dword_180027164;
    rsi += rdi;
    eax = *(void**)(rsi);
    // test: set flags = eax & eax
    if(ZF||SF!=OF)    goto loc_18000D1DF;
    // cmp: set flags = cs:dword_180029264 - r13d
    if(ZF)            goto loc_18000D1DF;
    // test: set flags = al & 0x10
    if(ZF)            goto loc_18000D1C9;
    eax &= 0x0FFFFFFEF;
    *(void**)(rsi) = eax;

class="lbl">loc_18000D1C9:
    eax = *(void**)(rsi);
    // test: set flags = al & 8
    if(ZF)            goto loc_18000D1D4;
    eax &= 0x0FFFFFFF7;
    *(void**)(rsi) = eax;

class="lbl">loc_18000D1D4:
    eax = *(void**)(rsi);
    // test: set flags = al & 4
    if(ZF)            goto loc_18000D1DF;
    eax &= 0x0FFFFFFFB;
    *(void**)(rsi) = eax;

class="lbl">loc_18000D1DF:
    // sub_18000CE70+34E↑j ...
    eax = cs:dword_180027100;
    r13d = *(void**)(rax+rdi);
    // cmp: set flags = cs:dword_1800291e8 - 0
    if(ZF)            goto loc_18000D2BB;
    // test: set flags = *(uint8_t*)(rsi) & 0x20
    if(ZF)            goto loc_18000D239;
    // [CVTTSS2SI] r9d, xmm7  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    rax = (const char*)aUbercharge_0;  // "UBERCHARGE"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D239:
    // cmp: set flags = r13d - 5
    if(!ZF)           goto loc_18000D2BB;
    rcx = rdi;
    sub_18000C174();
    r15 = rax;
    rcx = rax;
    sub_18000C1BC();
    // cmp: set flags = eax - 0x160
    if(!ZF)           goto loc_18000D2B3;
    ecx = cs:dword_18002713c;
    // [MOVSS] xmm0, dword ptr [rcx+r15]
    xmm0=_mm_mul_ss(xmm0,cs:dword_180006008);
    // [CVTTSS2SI] eax, xmm0
    // [CVTTSS2SI] r9d, xmm7  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    *(class="type">uint32_t*)(rsp+0x1A8+ArgList) = eax;  // ArgList
    rax = (const char*)aUberchargeD;  // "UberCharge %d%%"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D2B3:
    r15d = *(void**)(rsp+0x1A8+arg_8);

class="lbl">loc_18000D2BB:
    // sub_18000CE70+3CD↑j
    // cmp: set flags = cs:dword_1800291dc - 0
    if(ZF)            goto loc_18000D3C7;
    ecx = r13d;
    ecx--;
    if(ZF)            goto loc_18000D340;
    ecx--;
    if(ZF)            goto loc_18000D337;
    ecx--;
    if(ZF)            goto loc_18000D32E;
    ecx--;
    if(ZF)            goto loc_18000D325;
    ecx--;
    if(ZF)            goto loc_18000D31C;
    ecx--;
    if(ZF)            goto loc_18000D313;
    ecx--;
    if(ZF)            goto loc_18000D30A;
    ecx--;
    if(ZF)            goto loc_18000D301;
    ecx--;
    if(ZF)            goto loc_18000D2F8;
    rax = (const char*)aUnk;  // "-unk-"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D2F8:
    rax = (const char*)aEngineer;  // "Engineer"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D301:
    rax = (const char*)aSpy;  // "Spy"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D30A:
    rax = (const char*)aPyro;  // "Pyro"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D313:
    rax = (const char*)aHeavy;  // "Heavy"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D31C:
    rax = (const char*)aMedic;  // "Medic"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D325:
    rax = (const char*)aDemo;  // "Demo"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D32E:
    rax = (const char*)aSoldier;  // "Soldier"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D337:
    rax = (const char*)aSniper;  // "Sniper"
    goto loc_18000D347;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D340:
    rax = (const char*)aScout;  // "Scout"

class="lbl">loc_18000D347:
    // sub_18000CE70+48F↑j ...
    // [CVTTSS2SI] r8d, xmm8  // int
    // [CVTTSS2SI] r9d, xmm7  // int
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7
    // cmp: set flags = r13d - 2
    if(!ZF)           goto loc_18000D3C7;
    // test: set flags = *(void**)(rsi) & r13b
    if(ZF)            goto loc_18000D3C7;
    // [CVTTSS2SI] r9d, xmm7  // int
    rax = (const char*)aZoomed;  // "(Zoomed)"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D3C7:
    // sub_18000CE70+512↑j ...
    // cmp: set flags = cs:dword_1800291c8 - 0
    if(ZF)            goto loc_18000D42C;
    rcx = rdi;
    sub_18000C174();
    rcx = &(rax+0x10);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    rcx = *(void**)(rax+0x10);
    rcx++;
    // [CVTTSS2SI] r9d, xmm7  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    *(class="type">uint64_t*)(rsp+0x1A8+ArgList) = rcx;  // ArgList
    rax = (const char*)Format;  // "%s"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    sub_18000C420();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D42C:
    // cmp: set flags = cs:dword_1800291d0 - 0
    if(ZF)            goto loc_18000D533;
    *(void**)(rsp+0x1A8+var_188) &= 0;
    r9 = &(off_180025FA8);  // effective address
    r8 = &(off_180025F50);  // effective address
    edx = 0;  // xor self
    rcx = rdi;
    __RTDynamicCast();
    rbx = rax;
    rdx = *(void**)(rax);
    rcx = rax;
    *(class="type">uint64_t*)(rdx+0x350)();
    r13d = eax;
    // [MOVD] xmm6, r13d
    // [CVTDQ2PD] xmm6, xmm6
    rdx = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rdx+0x358)();
    // [MOVD] xmm0, eax
    // [CVTDQ2PD] xmm0, xmm0
    // [DIVSD] xmm6, xmm0
    // [MULSD] xmm6, cs:qword_180005FC8
    // [CVTTSD2SI] r10d, xmm6
    // cmp: set flags = r10d - 0x3C  // '<'
    if(SF!=OF)        goto loc_18000D4A3;
    ecx = 0x12;
    goto loc_18000D4AF;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D4A3:
    ecx = 0;  // xor self
    // cmp: set flags = r10d - 0x1E
    cl=(SF!=OF)?1:0;
    ecx += 0x13;

class="lbl">loc_18000D4AF:
    // test: set flags = *(uint32_t*)(rsi) & 0x6020
    if(!ZF) ecx=r15d;
    // test: set flags = ecx & ecx
    if(SF)            goto loc_18000D4C5;
    sub_18000A6B4();
    r14d = eax;

class="lbl">loc_18000D4C5:
    // [CVTTSS2SI] r9d, xmm7  // int
    // [CVTTSS2SI] r8d, xmm8  // int
    edx = 0;  // xor self  // int
    rcx = r12;  // int
    // cmp: set flags = cs:dword_1800291d0 - 1
    if(ZF||SF!=OF)    goto loc_18000D4FF;
    *(class="type">uint32_t*)(rsp+0x1A8+var_170) = r10d;
    *(class="type">uint32_t*)(rsp+0x1A8+ArgList) = r13d;  // ArgList
    rax = (const char*)aIHp;  // "%i hp"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = r14d;  // int
    sub_18000C420();
    goto loc_18000D51A;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D4FF:
    *(class="type">uint32_t*)(rsp+0x1A8+ArgList) = r10d;  // ArgList
    rax = (const char*)aIHp_0;  // "%i%% hp"
    *(void**)(rsp+0x1A8+Format) = rax;  // Format
    *(void**)(rsp+0x1A8+var_188) = r14d;  // int
    sub_18000C420();

class="lbl">loc_18000D51A:
    eax = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,rax);
    xmm7=_mm_add_ss(xmm7,xmm0);
    // [MOVSS] [rsp+0x1A8+var_164], xmm7

class="lbl">loc_18000D533:
    // cmp: set flags = cs:dword_1800291ec - 0
    if(ZF)            goto loc_18000D5F0;
    rbx = *(void**)(rsp+0x1A8+arg_10);
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x50)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x1A8+var_108) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x1A8+var_104) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x1A8+var_100) = eax;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x1A8+var_148) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x1A8+var_144) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x1A8+var_140) = eax;
    rax = *(void**)(rdi);
    rcx = rdi;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x1A8+var_158) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x1A8+var_154) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x1A8+var_150) = eax;
    rax = cs:qword_180029518;
    rbx = *(void**)(rax);
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    edx = eax;
    rcx = cs:qword_180029518;
    *(class="type">uint64_t*)(rbx+0x18)();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000D5F0;
    *(class="type">uint64_t*)(rsp+0x1A8+var_188) = rax;
    r9 = rdi;
    r8 = &(rsp+0x1A8+var_108);  // effective address
    rdx = &(rsp+0x1A8+var_148);  // effective address
    rcx = &(rsp+0x1A8+var_158);  // effective address
    sub_18000DE7C();
    // nop
    //   } // starts at 18000CEA6

class="lbl">loc_18000D5F0:
    // sub_18000CE70+75E↑j
    // DATA XREF: ...
    goto loc_18000D5F4;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D5F2:
    // sub_18000CE70+15B↑j
    // DATA XREF: ...
    goto $+2;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D5F4:
    // sub_18000CE70+65↑j ...
    r11 = &(rsp+0x1A8+var_28);  // effective address
    rbx = *(void**)(r11+0x30);
    rsi = *(void**)(r11+0x48);
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm7 = xmmword ptr [r11-0x20];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    rsp = r11;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 18000CE70
    // [SUB_18000CE70] endp

class="lbl">algn_18000D621:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: X:stru_1800220F4↓o ...

    // [FORMAT] = qword ptr -0x100
    // [ARGLIST] = byte ptr -0x0F8

    // __unwind { // __CxxFrameHandler3
    rax = rsp;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rsp -= 0x110;
    *(void**)(rsp+0x128+var_58) = 0x0FFFFFFFFFFFFFFFE;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    *(void**)(rax+0x18) = rdi;
    *(void**)(rax+0x20) = r12;
    xmmword ptr [rax-0x28] = xmm6;  // SIMD move
    xmmword ptr [rax-0x38] = xmm7;  // SIMD move
    edx = ecx;

class="lbl">loc_18000D65A:
    //   try {
    rcx = cs:qword_180029518;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x18)();
    r12 = rax;
    r15d = 0;  // xor self
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000DE4C;
    rdx = *(void**)(rax+0x10);
    rcx = &(rax+0x10);  // effective address
    *(class="type">uint64_t*)(rdx+0x40)();
    // test: set flags = al & al
    if(!ZF)           goto loc_18000DE4C;
    rdx = *(void**)(r12);
    rcx = r12;
    *(class="type">uint64_t*)(rdx+0x48)();
    rcx = rax;
    rdx = &(rsp+0x128+var_E8);  // effective address
    sub_18000C014();
    // test: set flags = al & al
    if(ZF)            goto loc_18000DE4C;
    eax = cs:dword_1800270fc;
    r14d = *(void**)(rax+r12);
    // test: set flags = r14d & r14d
    if(SF)            goto loc_18000D6C3;
    ecx = r14d;
    sub_18000A6B4();
    esi = eax;
    goto loc_18000D6C6;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D6C3:
    esi |= 0x0FFFFFFFF;

class="lbl">loc_18000D6C6:
    rax = *(void**)(r12+0x10);
    rcx = &(r12+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x10)();
    edi = *(void**)(rax+0x28);
    // cmp: set flags = edi - 0x52  // 'R'
    if(!ZF)           goto loc_18000D714;
    ecx = &(rdi-0x3B);  // effective address
    sub_18000A6B4();
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rcx = (const char*)aMerasmus_0;  // "Merasmus!"
    *(void**)(rsp+0x128+Format) = rcx;  // Format
    *(void**)(rsp+0x128+var_108) = eax;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D714:
    // cmp: set flags = edi - 0x30  // '0'
    if(!ZF)           goto loc_18000D752;
    ecx = &(rdi-0x19);  // effective address
    sub_18000A6B4();
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rcx = (const char*)aMonoculus;  // "MONOCULUS!"
    *(void**)(rsp+0x128+Format) = rcx;  // Format
    *(void**)(rsp+0x128+var_108) = eax;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D752:
    // cmp: set flags = edi - 0x13C
    if(!ZF)           goto loc_18000D795;
    ecx = 0x17;
    sub_18000A6B4();
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rcx = (const char*)aTank;  // "TANK!"
    *(void**)(rsp+0x128+Format) = rcx;  // Format
    *(void**)(rsp+0x128+var_108) = eax;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D795:
    // cmp: set flags = edi - 0x0B5
    if(!ZF)           goto loc_18000D7CE;
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)aAmmo;  // "ammo"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D7CE:
    rax = cs:qword_180029518;
    rbx = *(void**)(rax);
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    edx = eax;
    rcx = cs:qword_180029518;
    *(class="type">uint64_t*)(rbx+0x18)();
    rbx = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000DE4C;
    // cmp: set flags = edi - 1
    if(!ZF)           goto loc_18000D92E;
    // test: set flags = r14d & r14d
    if(!ZF)           goto loc_18000DE4C;
    rcx = &(r12+8);  // effective address
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x48)();
    rdi = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000DE4C;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x48)();
    rbx = rax;
    rdx = *(void**)(r12);
    rcx = r12;
    *(class="type">uint64_t*)(rdx+0x48)();
    // [MOVSS] xmm2, dword ptr [rax]
    xmm2=_mm_sub_ss(xmm2,*(class="type">uint32_t*)(rbx));
    // [MOVSS] [rsp+0x128+var_50], xmm2
    // [MOVSS] xmm0, dword ptr [rax+4]
    xmm0=_mm_sub_ss(xmm0,*(class="type">uint32_t*)(rbx+4));
    // [MOVSS] xmm1, dword ptr [rax+8]
    xmm1=_mm_sub_ss(xmm1,*(class="type">uint32_t*)(rbx+8));
    xmm0=_mm_mul_ss(xmm0,xmm0);
    xmm2=_mm_mul_ss(xmm2,xmm2);
    xmm0=_mm_add_ss(xmm0,xmm2);
    xmm1=_mm_mul_ss(xmm1,xmm1);
    xmm0=_mm_add_ss(xmm0,xmm1);  // X
    sqrtf();
    // comiss: compare xmm0 vs cs:dword_180005fd4
    if(!CF&&!ZF)      goto loc_18000DE4C;
    rcx = cs:qword_180029538;
    rax = *(void**)(rcx);
    rdx = rdi;
    *(class="type">uint64_t*)(rax+0x18)();
    rbx = rax;
    rdx = (const char*)aMedkitSmall;  // "medkit_small"
    rcx = rax;  // Str
    strstr();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000D8BC;
    rax = (const char*)aPills;  // "pills"

class="lbl">loc_18000D8B5:
    *(void**)(rsp+0x128+Format) = rax;
    goto loc_18000D909;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D8BC:
    rdi = (const char*)aMedkit;  // "medkit"
    rdx = rdi;  // SubStr
    rcx = rbx;  // Str
    strstr();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000D904;
    rdx = (const char*)aMeat;  // "_meat"
    rcx = rbx;  // Str
    strstr();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000D904;
    rdx = (const char*)aAmmo_0;  // "/ammo"
    rcx = rbx;  // Str
    strstr();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000D929;
    rax = (const char*)aAmmo;  // "ammo"
    goto loc_18000D8B5;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D904:
    // sub_18000D624+2C1↑j
    *(void**)(rsp+0x128+Format) = rdi;  // Format

class="lbl">loc_18000D909:
    *(void**)(rsp+0x128+var_108) = esi;  // int
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();

class="lbl">loc_18000D929:
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D92E:
    // test: set flags = r14d & r14d
    if(ZF)            goto loc_18000DE4C;
    eax = cs:dword_1800270fc;
    // cmp: set flags = *(void**)(rax+rbx) - r14d
    class="type">uint8_t r14b;
    r14b=ZF?1:0;
    // cmp: set flags = cs:dword_1800291b0 - r15d
    if(ZF)            goto loc_18000D957;
    // test: set flags = r14b & r14b
    if(!ZF)           goto loc_18000DE4C;

class="lbl">loc_18000D957:
    // cmp: set flags = edi - 0x58  // 'X'
    if(ZF)            goto loc_18000DBFC;
    // cmp: set flags = edi - 0x59  // 'Y'
    if(ZF)            goto loc_18000DBF0;
    // cmp: set flags = edi - 0x56  // 'V'
    if(ZF)            goto loc_18000DBD6;
    rax = *(void**)(r12+0x10);
    rcx = &(r12+0x10);  // effective address
    *(class="type">uint64_t*)(rax+0x40)();
    // test: set flags = al & al
    if(!ZF)           goto loc_18000DE4C;
    // cmp: set flags = edi - 0x1A
    if(!ZF)           goto loc_18000D9BD;
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)aCapture;  // "**Capture**"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D9BD:
    // test: set flags = r14b & r14b
    if(!ZF)           goto loc_18000DE4C;
    // cmp: set flags = edi - 0x139
    if(!ZF)           goto loc_18000D9FF;
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)asc_180005BE4;  // "(#)"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000D9FF:
    // cmp: set flags = edi - 0x0D9
    if(!ZF)           goto loc_18000DB57;
    eax = cs:dword_180027154;
    // cmp: set flags = *(uint32_t*)(rax+r12) - 1
    if(!ZF)           goto loc_18000DA49;
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)asc_180005BE8;  // "-X-"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DB52;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DA49:
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_B8) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_B4) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_B0) = eax;
    rax = *(void**)(r12);
    rcx = r12;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_78) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_74) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_70) = eax;
    rdx = &(rsp+0x128+var_B8);  // effective address
    rcx = &(rsp+0x128+var_78);  // effective address
    sub_18000C1DC();
    xmm6 = xmm0;  // SIMD move
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)asc_180005BEC;  // "<->"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    // comiss: compare xmm6 vs cs:dword_180005fd0
    if(!CF)          goto loc_18000DB52;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x50)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_98) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_94) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_90) = eax;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_D8) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_D4) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_D0) = eax;
    rax = *(void**)(r12);
    rcx = r12;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_C8) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_C4) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_C0) = eax;
    r9d = esi;
    r8 = &(rsp+0x128+var_98);  // effective address
    rdx = &(rsp+0x128+var_D8);  // effective address
    rcx = &(rsp+0x128+var_C8);  // effective address
    sub_18000E21C();

class="lbl">loc_18000DB52:
    // sub_18000D624+4B1↑j
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DB57:
    // cmp: set flags = edi - 0x108
    if(ZF)            goto loc_18000DBA5;
    // cmp: set flags = edi - 0x109
    if(ZF)            goto loc_18000DBA5;
    // cmp: set flags = edi - 0x0CF
    if(!ZF)           goto loc_18000DBA0;
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)asc_180005BF4;  // "\\\\"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    //   } // starts at 18000D65A
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DBA0:
    // DATA XREF: X:0000000180022104↓o
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DBA5:
    // sub_18000D624+541↑j
    // DATA XREF: ...
    // [CVTTSS2SI] r9d, [rsp+0x128+var_E4]  // int
    // [CVTTSS2SI] r8d, [rsp+0x128+var_E8]  // int
    rax = (const char*)asc_180005BF0;  // "[&]"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    goto loc_18000DE4C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DBD6:
    r13 = (const char*)aDispenser;  // "Dispenser"
    rax = (const char*)aZomhwtf;  // "zomhwtf"
    // cmp: set flags = edi - 0x56  // 'V'
    if(!ZF) r13=rax;
    goto loc_18000DCD9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DBF0:
    r13 = (const char*)aTeleporter;  // "Teleporter"
    goto loc_18000DCD9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DBFC:
    // test: set flags = r14b & r14b
    if(!ZF)           goto loc_18000DCD2;
    // cmp: set flags = cs:dword_1800291ec - r15d
    if(ZF)            goto loc_18000DCD2;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x50)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_A8) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_A4) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_A0) = eax;
    rax = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_88) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_84) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_80) = eax;
    rax = *(void**)(r12);
    rcx = r12;
    *(class="type">uint64_t*)(rax+0x48)();
    ecx = *(void**)(rax);
    *(void**)(rsp+0x128+var_68) = ecx;
    ecx = *(void**)(rax+4);
    *(void**)(rsp+0x128+var_64) = ecx;
    eax = *(void**)(rax+8);
    *(void**)(rsp+0x128+var_60) = eax;
    rax = cs:qword_180029518;
    rbx = *(void**)(rax);
    rcx = cs:qword_180029508;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x60)();
    edx = eax;
    rcx = cs:qword_180029518;
    *(class="type">uint64_t*)(rbx+0x18)();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18000DCD2;
    *(class="type">uint64_t*)(rsp+0x128+var_108) = rax;
    r9 = r12;
    r8 = &(rsp+0x128+var_A8);  // effective address
    rdx = &(rsp+0x128+var_88);  // effective address
    rcx = &(rsp+0x128+var_68);  // effective address
    sub_18000DE7C();

class="lbl">loc_18000DCD2:
    // sub_18000D624+5E8↑j ...
    r13 = (const char*)aSentry;  // "Sentry"

class="lbl">loc_18000DCD9:
    // sub_18000D624+5D3↑j
    *(void**)(rsp+0x128+var_108) = r15d;
    r9 = &(off_180025FA8);  // effective address
    r8 = &(off_180025F50);  // effective address
    edx = 0;  // xor self
    rcx = r12;
    __RTDynamicCast();
    rbx = rax;
    ecx = cs:dword_18002710c;
    r14b = *(void**)(rcx+r12);
    ecx = cs:dword_180027114;
    r15d = *(void**)(rcx+r12);
    rdx = *(void**)(rax);
    rcx = rax;
    *(class="type">uint64_t*)(rdx+0x350)();
    // [MOVD] xmm6, eax
    // [CVTDQ2PD] xmm6, xmm6
    rdx = *(void**)(rbx);
    rcx = rbx;
    *(class="type">uint64_t*)(rdx+0x358)();
    // [MOVD] xmm0, eax
    // [CVTDQ2PD] xmm0, xmm0
    // [DIVSD] xmm6, xmm0
    // [MULSD] xmm6, cs:qword_180005FC8
    // [CVTTSD2SI] edi, xmm6
    // cmp: set flags = edi - 0x3C  // '<'
    if(SF!=OF)        goto loc_18000DD51;
    ecx = 0x12;
    goto loc_18000DD5C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DD51:
    ecx = 0;  // xor self
    // cmp: set flags = edi - 0x1E
    cl=(SF!=OF)?1:0;
    ecx += 0x13;

class="lbl">loc_18000DD5C:
    sub_18000A6B4();
    r12d = eax;
    // [MOVSS] xmm6, [rsp+0x128+var_E4]
    // [MOVSS] xmm7, [rsp+0x128+var_E8]
    // test: set flags = r14b & r14b
    if(ZF)            goto loc_18000DDB7;
    // [CVTTSS2SI] r9d, xmm6  // int
    // [CVTTSS2SI] r8d, xmm7  // int
    rax = (const char*)aSapped;  // "** SAPPED **"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm6=_mm_add_ss(xmm6,xmm0);
    // [MOVSS] [rsp+0x128+var_E4], xmm6

class="lbl">loc_18000DDB7:
    // [CVTTSS2SI] ebx, xmm7
    // [CVTTSS2SI] r9d, xmm6  // int
    *(void**)(rsp+0x128+var_F0) = r15d;
    *(class="type">uint64_t*)(rsp+0x128+ArgList) = r13;  // ArgList
    rax = (const char*)aSI;  // "%s: %i"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = esi;  // int
    r8d = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm6=_mm_add_ss(xmm6,xmm0);
    // [MOVSS] [rsp+0x128+var_E4], xmm6
    // [CVTTSS2SI] r9d, xmm6  // int
    *(class="type">uint32_t*)(rsp+0x128+ArgList) = edi;  // ArgList
    rax = (const char*)aIHp_0;  // "%i%% hp"
    *(void**)(rsp+0x128+Format) = rax;  // Format
    *(void**)(rsp+0x128+var_108) = r12d;  // int
    r8d = ebx;  // int
    edx = 0;  // xor self  // int
    rcx = &(dword_1800297F0);  // effective address  // int
    sub_18000C680();
    r11d = cs:dword_1800297f4;
    xmm0=_mm_xor_si128(xmm0,xmm0);
    xmm0=_mm_cvtsi32_ss(xmm0,r11);
    xmm6=_mm_add_ss(xmm6,xmm0);
    // [MOVSS] [rsp+0x128+var_E4], xmm6
    goto $+2;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DE4C:
    // sub_18000D624+5F↑j ...
    r11 = &(rsp+0x128+var_18);  // effective address
    rbx = *(void**)(r11+0x20);
    rsi = *(void**)(r11+0x28);
    rdi = *(void**)(r11+0x30);
    r12 = *(void**)(r11+0x38);
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm7 = xmmword ptr [r11-0x20];  // SIMD move
    rsp = r11;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 18000D624
    // [SUB_18000D624] endp

class="lbl">algn_18000DE79:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // sub_18000D624+6A9↑p
    // DATA XREF: ...


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    *(void**)(rax+0x18) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rbp = rsp;
    rsp -= 0x80;
    r11d = cs:dword_1800270fc;
    xmmword ptr [rax-0x38] = xmm6;  // SIMD move
    xmmword ptr [rax-0x48] = xmm7;  // SIMD move
    rsi = r9;
    rbx = r8;
    rdi = rdx;
    r10d = *(void**)(r11+r9);
    r12 = rcx;
    xmmword ptr [rax-0x58] = xmm8;  // SIMD move
    xmmword ptr [rax-0x68] = xmm9;  // SIMD move
    xmmword ptr [rax-0x78] = xmm10;  // SIMD move
    rax = *(void**)(rbp+arg_20);
    // cmp: set flags = *(void**)(r11+rax) - r10d
    if(ZF)            goto loc_18000E1E2;
    rcx = cs:qword_180029508;
    rdx = rbx;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x98)();
    // [MOVD] xmm0, dword ptr [rbx+4]
    // [MOVSS] xmm8, dword ptr [r12]
    // [MOVSS] xmm7, dword ptr [r12+4]
    xmm8=_mm_sub_ss(xmm8,*(class="type">uint32_t*)(rdi));
    xmm7=_mm_sub_ss(xmm7,*(class="type">uint32_t*)(rdi+4));
    xmm0=_mm_cvtps_pd(xmm0);
    // [MULSD] xmm0, cs:qword_180005DD0
    // [CVTSD2SS] xmm6, xmm0
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    xmm9 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    sinf();
    // [MOVSS] xmm10, dword ptr cs:xmmword_180005DC0
    xmm9=_mm_xor_ps(xmm9,xmm10);
    xmm1 = xmm0;  // SIMD move
    xmm0=_mm_mul_ss(xmm0,xmm7);
    xmm1=_mm_mul_ss(xmm1,xmm8);
    xmm6 = xmm9;  // SIMD move
    xmm6=_mm_mul_ss(xmm6,xmm7);
    xmm9=_mm_mul_ss(xmm9,xmm8);
    xmm6=_mm_add_ss(xmm6,xmm1);
    xmm9=_mm_sub_ss(xmm9,xmm0);
    // [UNPCKLPS] xmm6, xmm6
    xmm0=_mm_cvtps_pd(xmm6);  // X
    fabs();
    // [MOVSS] xmm7, cs:dword_180005E98
    // [CVTSD2SS] xmm1, xmm0
    // comiss: compare xmm1 vs xmm7
    if(!CF&&!ZF)      goto loc_18000DF8D;
    // [UNPCKLPS] xmm9, xmm9
    xmm0=_mm_cvtps_pd(xmm9);  // X
    fabs();
    // [CVTSD2SS] xmm1, xmm0
    // comiss: compare xmm1 vs xmm7
    if(CF||ZF)        goto loc_18000DFF0;

class="lbl">loc_18000DF8D:
    // comiss: compare xmm9 vs xmm6
    xmm0 = xmm6;  // SIMD move
    xmm0=_mm_xor_ps(xmm0,xmm10);
    if(CF||ZF)        goto loc_18000DFC6;
    // comiss: compare xmm9 vs xmm0
    if(CF||ZF)        goto loc_18000DFAF;
    xmm6=_mm_mul_ss(xmm6,xmm7);
    xmm6=_mm_div_ss(xmm6,xmm9);
    xmm9 = xmm7;  // SIMD move
    goto loc_18000DFF0;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DFAF:
    // [MOVSS] xmm0, cs:dword_180005E94
    xmm9=_mm_mul_ss(xmm9,xmm0);
    xmm9=_mm_div_ss(xmm9,xmm6);
    xmm6 = xmm0;  // SIMD move
    goto loc_18000DFF0;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DFC6:
    // comiss: compare xmm9 vs xmm0
    if(CF||ZF)        goto loc_18000DFDB;
    xmm9=_mm_mul_ss(xmm9,xmm7);
    xmm9=_mm_div_ss(xmm9,xmm6);
    xmm6 = xmm7;  // SIMD move
    goto loc_18000DFF0;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000DFDB:
    // [MOVSS] xmm0, cs:dword_180005E94
    xmm6=_mm_mul_ss(xmm6,xmm0);
    xmm6=_mm_div_ss(xmm6,xmm9);
    xmm9 = xmm0;  // SIMD move

class="lbl">loc_18000DFF0:
    // sub_18000DE7C+131↑j ...
    // [MOVD] xmm1, cs:dword_1800291F8
    r12d = cs:dword_1800291f0;
    r13d = cs:dword_1800291f4;
    xmm6=_mm_mul_ss(xmm6,cs:dword_180005e90);
    xmm9=_mm_mul_ss(xmm9,cs:dword_180005e90);
    rcx = &(rsi+0x10);  // effective address
    // [CVTDQ2PS] xmm1, xmm1
    xmm6=_mm_mul_ss(xmm6,xmm1);
    xmm9=_mm_mul_ss(xmm9,xmm1);
    // [CVTTSS2SI] eax, xmm6
    r12d -= eax;
    // [CVTTSS2SI] eax, xmm9
    r13d -= eax;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x10)();
    rcx = cs:qword_180029500;
    edi = 0x0FF;
    // cmp: set flags = *(uint32_t*)(rax+0x28) - 0x58  // 'X'
    *(void**)(rsp+0x80+var_60) = edi;
    r9d = edi;
    r8d = edi;
    edx = edi;
    if(!ZF)           goto loc_18000E078;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x58)();
    rcx = cs:qword_180029500;
    edx = cs:dword_18002926c;
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x100)();
    goto loc_18000E0A4;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000E078:
    eax = cs:dword_180027100;
    rbx = *(class="type">uint32_t*)(rax+rsi);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x58)();
    rcx = cs:qword_180029500;
    rdx = &(dword_1800293B0);  // effective address
    r8 = *(void**)(rcx);
    edx = *(void**)(rdx+rbx*4-4);
    *(class="type">uint64_t*)(r8+0x100)();

class="lbl">loc_18000E0A4:
    rcx = cs:qword_180029500;
    r14d = &(r13+0x0B);  // effective address
    edx = &(r12-0x0B);  // effective address
    rax = *(void**)(rcx);
    r8d = &(r13-0x0B);  // effective address
    r9d = &(r12+0x0B);  // effective address
    *(void**)(rsp+0x80+var_60) = r14d;
    *(class="type">uint64_t*)(rax+0x110)();
    *(void**)(rsp+0x80+var_60) &= 0;
    r9 = &(off_180025FA8);  // effective address
    r8 = &(off_180025F50);  // effective address
    edx = 0;  // xor self
    rcx = rsi;
    __RTDynamicCast();
    rcx = rax;
    rbx = rax;
    rdx = *(void**)(rax);
    *(class="type">uint64_t*)(rdx+0x350)();
    rdx = *(void**)(rbx);
    rcx = rbx;
    // [MOVD] xmm6, eax
    // [CVTDQ2PS] xmm6, xmm6
    *(class="type">uint64_t*)(rdx+0x358)();
    // [MOVSS] xmm1, cs:dword_180005DA8
    // [MOVD] xmm0, eax
    // [CVTDQ2PS] xmm0, xmm0
    xmm6=_mm_div_ss(xmm6,xmm0);
    // comiss: compare xmm6 vs xmm1
    if(CF||ZF)        goto loc_18000E125;
    xmm6 = xmm1;  // SIMD move

class="lbl">loc_18000E125:
    eax = 0;  // xor self
    // [UNPCKLPS] xmm6, xmm6
    *(class="type">uint32_t*)(rbp+arg_20) = eax;
    xmm0=_mm_cvtps_pd(xmm6);
    // [COMISD] xmm0, cs:qword_180005E88
    if(CF)           goto loc_18000E143;
    *(class="type">uint32_t*)(rbp+arg_20) = 0x0FF00FF00;
    goto loc_18000E161;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000E143:
    // [UNPCKLPS] xmm6, xmm6
    *(class="type">uint32_t*)(rbp+arg_20) = 0x0FF00FFFF;
    xmm0=_mm_cvtps_pd(xmm6);
    // [COMISD] xmm0, cs:qword_180005E80
    if(!CF)          goto loc_18000E161;
    *(class="type">uint32_t*)(rbp+arg_20) = 0x0FF0000FF;

class="lbl">loc_18000E161:
    // sub_18000DE7C+2DC↑j
    rcx = cs:qword_180029500;
    r9d = 0;  // xor self
    r8d = 0;  // xor self
    rax = *(void**)(rcx);
    edx = 0;  // xor self
    *(void**)(rsp+0x80+var_60) = edi;
    *(class="type">uint64_t*)(rax+0x58)();
    rcx = cs:qword_180029500;
    eax = &(r13+0x0E);  // effective address
    r10 = *(void**)(rcx);
    r9d = &(r12+0x0B);  // effective address
    edx = &(r12-0x0B);  // effective address
    r8d = r14d;
    *(void**)(rsp+0x80+var_60) = eax;
    *(class="type">uint64_t*)(r10+0x60)();
    rcx = cs:qword_180029500;
    edx = *(class="type">uint32_t*)(rbp+arg_20);
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x50)();
    rcx = cs:qword_180029500;
    xmm6=_mm_mul_ss(xmm6,cs:dword_180005e7c);
    r11 = *(void**)(rcx);
    r9d = r12d;
    r10d = &(r13+0x0D);  // effective address
    // [CVTTSS2SI] eax, xmm6
    r9d -= eax;
    edx = &(r12-0x0A);  // effective address
    r8d = r14d;
    r9d -= 0x0C;
    *(void**)(rsp+0x80+var_60) = r10d;
    *(class="type">uint64_t*)(r11+0x60)();

class="lbl">loc_18000E1E2:
    xmm6 = *(void**)(rsp+0x80+var_10);  // SIMD move
    xmm7 = *(void**)(rsp+0x80+var_20);  // SIMD move
    r11 = &(rsp+0x80+var_s0);  // effective address
    rbx = *(void**)(r11+0x30);
    rsi = *(void**)(r11+0x38);
    rdi = *(void**)(r11+0x40);
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    rsp = r11;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000DE7C] endp


    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B330↓o ...


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x90;
    xmmword ptr [rax-0x18] = xmm6;  // SIMD move
    xmmword ptr [rax-0x28] = xmm7;  // SIMD move
    xmmword ptr [rax-0x38] = xmm8;  // SIMD move
    esi = r9d;
    rbx = r8;
    xmmword ptr [rax-0x48] = xmm9;  // SIMD move
    xmmword ptr [rax-0x58] = xmm10;  // SIMD move
    xmmword ptr [rax-0x68] = xmm11;  // SIMD move
    // [MOVSS] xmm11, dword ptr [rcx]
    // [MOVSS] xmm10, dword ptr [rcx+4]
    rcx = cs:qword_180029508;
    xmm11=_mm_sub_ss(xmm11,*(class="type">uint32_t*)(rdx));
    xmm10=_mm_sub_ss(xmm10,*(class="type">uint32_t*)(rdx+4));
    rax = *(void**)(rcx);
    rdx = r8;
    *(class="type">uint64_t*)(rax+0x98)();
    // [MOVD] xmm5, dword ptr [rbx+4]
    xmm5=_mm_cvtps_pd(xmm5);
    // [MULSD] xmm5, cs:qword_180005DD0
    // [CVTSD2SS] xmm6, xmm5
    xmm0 = xmm6;  // SIMD move  // X
    cosf();
    xmm9 = xmm0;  // SIMD move
    xmm0 = xmm6;  // SIMD move  // X
    sinf();
    xmm9=_mm_xor_ps(xmm9,cs:xmmword_180005dc0);
    // [MOVSS] xmm6, cs:Y
    xmm8 = xmm0;  // SIMD move
    xmm1 = xmm8;  // SIMD move
    xmm0 = xmm9;  // SIMD move
    xmm1=_mm_mul_ss(xmm1,xmm11);
    xmm0=_mm_mul_ss(xmm0,xmm10);
    xmm0=_mm_add_ss(xmm0,xmm1);  // X
    xmm1 = xmm6;  // SIMD move  // Y
    fmodf();
    xmm9=_mm_mul_ss(xmm9,xmm11);
    xmm8=_mm_mul_ss(xmm8,xmm10);
    xmm1 = xmm6;  // SIMD move  // Y
    xmm7 = xmm0;  // SIMD move
    xmm9=_mm_sub_ss(xmm9,xmm8);
    xmm0 = xmm9;  // SIMD move  // X
    fmodf();
    eax = dword ptr cs:qword_1800293a0+4;
    xmm7=_mm_mul_ss(xmm7,cs:dword_180005db0);
    edx=(eax>>31)?0xFFFFFFFF:0;
    xmm7=_mm_mul_ss(xmm7,cs:dword_180005dac);
    xmm0=_mm_mul_ss(xmm0,cs:dword_180005db0);
    eax -= edx;
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    edi = eax;
    eax = dword ptr cs:qword_1800293a0;
    // [CVTTSS2SI] ecx, xmm7
    edx=(eax>>31)?0xFFFFFFFF:0;
    edi -= ecx;
    eax -= edx;
    xmm0=_mm_mul_ss(xmm0,cs:dword_180005dac);
    eax = (class="type">int64_t)eax >> 1;  // arithmetic
    ebx = eax;
    // [CVTTSS2SI] ecx, xmm0
    ebx -= ecx;
    ecx = 0x11;
    sub_18000A6B4();
    r8d = 0x10;
    edx = &(rbx-8);  // effective address
    ecx = &(rdi-8);  // effective address
    r9d = r8d;
    *(void**)(rsp+0x98+var_78) = eax;
    sub_18000BF0C();
    r8d = 0x0E;
    edx = &(rbx-7);  // effective address
    ecx = &(rdi-7);  // effective address
    r9d = r8d;
    *(void**)(rsp+0x98+var_78) = esi;
    sub_18000BF0C();
    r11 = &(rsp+0x98+var_8);  // effective address
    rbx = *(void**)(r11+0x10);
    rsi = *(void**)(r11+0x18);
    xmm7 = *(void**)(rsp+0x98+var_28);  // SIMD move
    xmm6 = xmmword ptr [r11-0x10];  // SIMD move
    xmm8 = xmmword ptr [r11-0x30];  // SIMD move
    xmm9 = xmmword ptr [r11-0x40];  // SIMD move
    xmm10 = xmmword ptr [r11-0x50];  // SIMD move
    xmm11 = xmmword ptr [r11-0x60];  // SIMD move
    rsp = r11;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000E21C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000E3A5:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B348↓o


    rax = rsp;
    *(void**)(rax+8) = rbx;
    *(void**)(rax+0x10) = rbp;
    *(void**)(rax+0x18) = rsi;
    *(void**)(rax+0x20) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp -= 0x30;
    edi = cs:dword_1800291f8;
    r12d = cs:dword_1800291f0;
    r14d = cs:dword_1800291f4;
    r13d = ecx;
    r8d = &(rdi+rdi);  // effective address
    edx = r14d;
    ecx = r12d;
    r9d = r8d;
    edx -= edi;
    ecx -= edi;
    *(void**)(rax-0x28) = r13d;
    sub_18000BF90();
    edi--;
    ebx = r14d;
    ebp = &(rdi+rdi);  // effective address
    esi = r12d;
    ebx -= edi;
    esi -= edi;
    r9d = ebp;
    r8d = ebp;
    edx = ebx;
    ecx = esi;
    *(void**)(rsp+0x48+var_28) = 0x1E1E1EC8;
    sub_18000BF0C();
    r9d = ebp;
    r8d = 1;
    edx = ebx;
    ecx = r12d;
    *(void**)(rsp+0x48+var_28) = r13d;
    sub_18000BF0C();
    r9d = 1;
    r8d = ebp;
    edx = r14d;
    ecx = esi;
    *(void**)(rsp+0x48+var_28) = r13d;
    sub_18000BF0C();
    rbx = *(void**)(rsp+0x48+arg_0);
    rbp = *(void**)(rsp+0x48+arg_8);
    rsi = *(void**)(rsp+0x48+arg_10);
    rdi = *(void**)(rsp+0x48+arg_18);
    rsp += 0x30;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000E3A8] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000E46B:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B354↓o


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x30;
    rbx = &(dword_1800293B0);  // effective address

class="lbl">loc_18000E479:
    rcx = cs:qword_180029500;
    edx = 0;  // xor self
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x128)();
    *(void**)(rbx) = eax;
    rax = &(unk_1800293D4);  // effective address
    rbx += 4;
    // cmp: set flags = rbx - rax
    if(SF!=OF)        goto loc_18000E479;
    rcx = cs:qword_180029500;
    edx = 0;  // xor self
    rax = *(void**)(rcx);
    *(class="type">uint64_t*)(rax+0x128)();
    rcx = cs:qword_180029500;
    r8 = (const char*)aHudEngBuildSen;  // "HUD/eng_build_sentry"
    r10 = *(void**)(rcx);
    ebx = 0;  // xor self
    r9d = 0;  // xor self
    edx = eax;
    cs:dword_18002926c = eax;
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(r10+0x0F0)();
    rcx = cs:qword_180029500;
    edx = cs:dword_1800293b0;
    rax = *(void**)(rcx);
    r8 = (const char*)aHudLeaderboard;  // "HUD/leaderboard_class_scout"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    edx = cs:dword_1800293b4;
    r8 = (const char*)aHudLeaderboard_0;  // "HUD/leaderboard_class_sniper"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    edx = cs:dword_1800293b8;
    rax = *(void**)(rcx);
    r8 = (const char*)aHudLeaderboard_1;  // "HUD/leaderboard_class_soldier"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    edx = cs:dword_1800293bc;
    r8 = (const char*)aHudLeaderboard_2;  // "HUD/leaderboard_class_demo"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    edx = cs:dword_1800293c0;
    rax = *(void**)(rcx);
    r8 = (const char*)aHudLeaderboard_3;  // "HUD/leaderboard_class_medic"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    edx = cs:dword_1800293c4;
    r8 = (const char*)aHudLeaderboard_4;  // "HUD/leaderboard_class_heavy"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    edx = cs:dword_1800293c8;
    rax = *(void**)(rcx);
    r8 = (const char*)aHudLeaderboard_5;  // "HUD/leaderboard_class_pyro"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    rax = *(void**)(rcx);
    edx = cs:dword_1800293cc;
    r8 = (const char*)aHudLeaderboard_6;  // "HUD/leaderboard_class_spy"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rcx = cs:qword_180029500;
    edx = cs:dword_1800293d0;
    rax = *(void**)(rcx);
    r8 = (const char*)aHudLeaderboard_7;  // "HUD/leaderboard_class_engineer"
    r9d = 0;  // xor self
    *(void**)(rsp+0x38+var_18) = bl;
    *(class="type">uint64_t*)(rax+0x0F0)();
    rsp += 0x30;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000E46C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000E622:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000E624(LPCSTR lpModuleName)
    // StartAddress+30↑p ...
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;

class="lbl">loc_18000E62D:
    rcx = rbx;  // lpModuleName
    cs:getmodulehandlea();
    // test: set flags = rax & rax
    if(!ZF)           goto loc_18000E648;
    ecx = 0x3E8;  // dwMilliseconds
    cs:sleep();
    goto loc_18000E62D;
    // ---------------------------------------------------------------------------

class="lbl">loc_18000E648:
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000E624] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000E64E:
    // [ALIGN] 0x10
    // [00000005 BYTES: COLLAPSED FUNCTION j_j_free. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000005 BYTES: COLLAPSED FUNCTION j_free. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [000000E0 BYTES: COLLAPSED FUNCTION sqrtf. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000004C6 BYTES: COLLAPSED FUNCTION atan2f. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000EC06:
    // [ALIGN] 0x10
    // [000000C6 BYTES: COLLAPSED FUNCTION fmodf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000ECD6:
    // [ALIGN] 8
    // [000000E8 BYTES: COLLAPSED FUNCTION fabs. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_18000EDC0] db 6 dup(0x0CC)  // DATA XREF: .pdata:000000018002B390↓o
    // [ALIGN] 0x10
    // [000000A8 BYTES: COLLAPSED FUNCTION strcmp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------

class="lbl">_qword_not_equal:
    rax = rax-rax-CF;
    rax = rax-0x0FFFFFFFFFFFFFFFF-CF;
    return rax;
    // [00000299 BYTES: COLLAPSED FUNCTION acosf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F119:
    // [ALIGN] 4
    // [0000010A BYTES: COLLAPSED FUNCTION sqrt. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F226:
    // [ALIGN] 8
    // [00000058 BYTES: COLLAPSED FUNCTION strstr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000016 BYTES: COLLAPSED FUNCTION srand. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F296:
    // [ALIGN] 8
    // [0000002B BYTES: COLLAPSED FUNCTION rand. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F2C3:
    // [ALIGN] 4
    // [00000037 BYTES: COLLAPSED FUNCTION _purecall. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F2FB:
    // [ALIGN] 4
    // [0000002B BYTES: COLLAPSED FUNCTION _isnan. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [0000026A BYTES: COLLAPSED FUNCTION atan. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F592:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000F594(void *Block)
    // .pdata:000000018002B3F0↓o


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rax = &(off_1800020A0);  // effective address
    ebx = edx;
    rdi = rcx;
    *(void**)(rcx) = rax;
    unknown_libname_27();  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // test: set flags = bl & 1
    if(ZF)            goto loc_18000F5BF;
    rcx = rdi;  // Block
    j_free();

class="lbl">loc_18000F5BF:
    rax = rdi;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000F594] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000F5CD:
    // [ALIGN] 0x10
    // [0000001E BYTES: COLLAPSED FUNCTION type_info::operator==(type_info const &). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F5EE:
    // [ALIGN] 0x10
    // [000000A0 BYTES: COLLAPSED FUNCTION sprintf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F690:
    // [ALIGN] 0x20
    // [00000090 BYTES: COLLAPSED FUNCTION strcat. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000F730:
    // [ALIGN] 0x20
    // [000000B7 BYTES: COLLAPSED FUNCTION strcpy. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_18000F7F7] db 0x0F dup(0x0CC)  // DATA XREF: .pdata:000000018002B420↓o
    // [ALIGN] 0x10
    // [00000334 BYTES: COLLAPSED FUNCTION memmove. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000A1 BYTES: COLLAPSED FUNCTION _LocaleUpdate::_LocaleUpdate(localeinfo_struct *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000FBE5:
    // [ALIGN] 8
    // [00000019 BYTES: COLLAPSED FUNCTION std::exception::exception(char const * const &,int). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [00000012 BYTES: COLLAPSED FUNCTION unknown_libname_25. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [0000005A BYTES: COLLAPSED FUNCTION std::exception::_Copy_str(char const *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000FC72:
    // [ALIGN] 4
    // [00000027 BYTES: COLLAPSED FUNCTION std::exception::_Tidy(void). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000FC9B:
    // [ALIGN] 4
    // [0000002D BYTES: COLLAPSED FUNCTION std::exception::exception(char const * const &). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000FCC9:
    // [ALIGN] 4
    // [00000044 BYTES: COLLAPSED FUNCTION std::exception::operator=(std::exception const &). PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================


    // sub_18000A668+27↑p ...
    rax = &(off_1800020B0);  // effective address
    *(void**)(rcx) = rax;
    goto ?_Tidy@exception@std@@AEAAXXZ;  // std::exception::_Tidy(void)
    // [SUB_18000FD10] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B474↓o


    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rdx = &(rsp+0x28+arg_8);  // effective address  // char **
    rbx = rcx;
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    r11 = &(off_1800020E0);  // effective address
    rax = rbx;
    *(void**)(rbx) = r11;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FD20] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FD4A:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B480↓o


    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rdx = &(rsp+0x28+arg_8);  // effective address  // char **
    rbx = rcx;
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    r11 = &(off_1800020F8);  // effective address
    rax = rbx;
    *(void**)(rbx) = r11;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FD4C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FD76:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B48C↓o
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    sub_18000FD4C();
    r11 = &(off_180002110);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FD78] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FD99:
    // [ALIGN] 4
    // [0000002A BYTES: COLLAPSED FUNCTION std::exception::exception(std::exception const &). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000FDC6:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_1800020E0);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FDC8] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FDE9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18000FDEC(void *Block)
    // X:off_1800020E0↑o ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rax = &(off_1800020B0);  // effective address
    ebx = edx;
    rdi = rcx;
    *(void**)(rcx) = rax;
    ?_Tidy@exception@std@@AEAAXXZ();  // std::exception::_Tidy(void)
    // test: set flags = bl & 1
    if(ZF)            goto loc_18000FE17;
    rcx = rdi;  // Block
    j_free();

class="lbl">loc_18000FE17:
    rax = rdi;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FDEC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FE25:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_1800020F8);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FE28] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FE49:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_180002110);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18000FE4C] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18000FE6D:
    // [ALIGN] 0x20
    // [000000A8 BYTES: COLLAPSED FUNCTION strlen. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000043 BYTES: COLLAPSED FUNCTION __onexitinit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18000FF6B:
    // [ALIGN] 4
    // [0000010A BYTES: COLLAPSED FUNCTION _onexit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010076:
    // [ALIGN] 8
    // [00000017 BYTES: COLLAPSED FUNCTION atexit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001008F:
    // [ALIGN] 0x10
    // [000000A3 BYTES: COLLAPSED FUNCTION operator new(unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010133:
    // [ALIGN] 4
    // [00000108 BYTES: COLLAPSED FUNCTION system. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000005D BYTES: COLLAPSED FUNCTION _time64. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010299:
    // [ALIGN] 4
    // [00000005 BYTES: COLLAPSED FUNCTION operator new(unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [000000B6 BYTES: COLLAPSED FUNCTION malloc. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_18001035A] db 0x0C dup(0x0CC)  // DATA XREF: .pdata:000000018002B528↓o
    // [ALIGN] 0x10
    // [000000EA BYTES: COLLAPSED FUNCTION memset. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001045A:
    // [ALIGN] 4
    // [000000B5 BYTES: COLLAPSED FUNCTION _vsprintf_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010511:
    // [ALIGN] 4
    // [0000000B BYTES: COLLAPSED FUNCTION vsprintf. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [00000019 BYTES: COLLAPSED FUNCTION wcslen. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [00000152 BYTES: COLLAPSED FUNCTION _CRT_INIT. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001068E:
    // [ALIGN] 0x10
    // [0000011B BYTES: COLLAPSED FUNCTION __DllMainCRTStartup. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800107AB:
    // [ALIGN] 4
    // [0000003D BYTES: COLLAPSED FUNCTION DllEntryPoint. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800107E9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // cosf+2B2↓p
    // DATA XREF: ...


    // __unwind { // __GSHandlerCheck
    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp -= 0x70;
    rax = cs:qword_180024eb8;
    rax ^= rsp;
    *(void**)(rsp+0x98+var_38) = rax;
    *(void**)(rsp+0x98+var_68) &= 0;
    rdi = rdx;
    r11 = rcx;
    r10 = rcx;
    r11 >>= 0x34;  // logical
    rsi = &(unk_1800240D0);  // effective address
    rax = 0x0FFFFFE0000000;
    r11d &= 0x7FF;
    r12 = 0x0FFFFFFFFF;
    r10 &= rax;
    r11d -= 0x3FF;
    eax = 0x38E38E39;
    rbx = r8;
    r13 = 0x10000000000000;
    ebp = 1;
    rax = (class="type">int64_t)rax * (class="type">int64_t)r11d;
    r9d = edx;
    r10 |= r13;
    r10 >>= 0x1D;  // logical
    r9d = (class="type">int64_t)r9d >> 3;  // arithmetic
    eax = r9d;
    rcx = r10;
    eax >>= 0x1F;  // logical
    r9d += eax;
    eax = &(r9+r9*8);  // effective address
    eax <<= 2;
    r11d -= eax;
    eax = &(r9+3);  // effective address
    r8 = eax;
    rcx *= (class="type">int64_t)*(void**)(rsi+r8*8);
    rdx = *(void**)(rsi+r8*8-8);
    rdx *= (class="type">int64_t)r10;
    rax = rcx;
    rcx >>= 0x24;  // logical
    rax &= r12;
    rdx += rcx;
    rcx = *(void**)(rsi+r8*8-0x10);
    *(void**)(rsp+0x98+var_70) = rax;
    rax = rdx;
    rdx >>= 0x24;  // logical
    rcx *= (class="type">int64_t)r10;
    rcx += rdx;
    rax &= r12;
    r8 = rcx;
    rcx >>= 0x24;  // logical
    *(void**)(rsp+0x98+var_78) = rax;
    r8 &= r12;
    rax = r9d;
    r9d = ebp;
    rdx = *(void**)(rsi+rax*8);
    *(void**)(rsp+0x98+var_80) = r8;
    rdx *= (class="type">int64_t)r10;
    rdx += rcx;
    ecx = 0x23;  // '#'
    rdx &= r12;
    ecx -= r11d;
    *(void**)(rsp+0x98+var_88) = rdx;
    rdx <<= 0x24;
    rdx |= r8;
    rdx >>= cl;  // logical
    edx &= 7;
    esi = edx;
    esi &= ebp;
    if(ZF)            goto loc_18001096E;
    edx = (class="type">int64_t)edx >> 1;  // arithmetic
    r8 = ~r8;
    edx += ebp;
    edx &= 3;
    *(void**)(rbx) = edx;
    ebx = &(rbp+0x23);  // effective address
    edx = ebp;
    ecx = ebx;
    ecx -= r11d;
    rdx <<= cl;
    rdx -= rbp;
    rdx &= r8;
    r8d = 0x10000;
    // cmp: set flags = rdx - r8
    if(!CF)          goto loc_18001095E;
    r10 = &(rsp+0x98+var_80);  // effective address

class="lbl">loc_18001093C:
    rax = rdx;
    r10 += 8;
    r9d += ebp;
    rcx = *(void**)(r10);
    rax <<= 0x24;
    rcx = ~rcx;
    rcx &= r12;
    rdx = rcx;
    rdx |= rax;
    // cmp: set flags = rdx - r8
    if(CF)           goto loc_18001093C;

class="lbl">loc_18001095E:
    rax = r9d;
    r8 = *(void**)(rsp+rax*8+0x98+var_80);
    r8 = ~r8;
    r8 &= r12;
    goto loc_1800109B3;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001096E:
    edx = (class="type">int64_t)edx >> 1;  // arithmetic
    *(void**)(rbx) = edx;
    ebx = 0x24;  // '$'
    rdx = rbp;
    ecx = ebx;
    ecx -= r11d;
    rdx <<= cl;
    rdx -= rbp;
    rdx &= r8;
    r8d = 0x10000;
    // cmp: set flags = rdx - r8
    if(!CF)          goto loc_1800109AB;
    rax = &(rsp+0x98+var_80);  // effective address

class="lbl">loc_180010998:
    rax += 8;
    rdx <<= 0x24;
    r9d += ebp;
    rdx |= *(void**)(rax);
    // cmp: set flags = rdx - r8
    if(CF)           goto loc_180010998;

class="lbl">loc_1800109AB:
    rax = r9d;
    r8 = *(void**)(rsp+rax*8+0x98+var_80);

class="lbl">loc_1800109B3:
    r10d = 0;  // xor self
    rax = 0x400000000000;
    goto loc_1800109CA;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800109C2:
    r10d += 6;
    rdx <<= 6;

class="lbl">loc_1800109CA:
    // cmp: set flags = rdx - rax
    if(CF)           goto loc_1800109C2;
    goto loc_1800109D7;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800109D1:
    r10d += ebp;
    rdx += rdx;

class="lbl">loc_1800109D7:
    // cmp: set flags = rdx - r13
    if(CF)           goto loc_1800109D1;
    eax = &(r9+r9*8);  // effective address
    ebx -= r10d;
    eax <<= 2;
    cl = bl;
    r11d -= eax;
    r8 >>= cl;  // logical
    rcx = 0x0FFFFFFFFFFFFF;
    r11d -= r10d;
    r8 |= rdx;
    r8 &= rcx;
    eax = &(r11+0x34);  // effective address
    rax=(class="type">int64_t)(class="type">int32_t)eax;
    rax += 0x3FF;
    rax <<= 0x34;
    rax |= r8;
    // test: set flags = esi & esi
    if(ZF)            goto loc_180010A25;
    rcx = 0x8000000000000000;
    rax |= rcx;

class="lbl">loc_180010A25:
    *(void**)(rsp+0x98+var_98) = rax;
    *(class="type">uint32_t*)rdi=*(class="type">uint32_t*)rsi; rsi+=4; rdi+=4;
    // [MULSD] xmm0, cs:qword_180002168
    *(class="type">uint32_t*)rdi=*(class="type">uint32_t*)rsi; rsi+=4; rdi+=4;
    rcx = *(void**)(rsp+0x98+var_38);
    rcx ^= rsp;  // StackCookie
    __security_check_cookie();
    rbx = *(void**)(rsp+0x98+arg_0);
    rsp += 0x70;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 1800107EC
    // [SUB_1800107EC] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180010A5B:
    // [ALIGN] 4
    // [00000097 BYTES: COLLAPSED FUNCTION _sincosf_special. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010AF3:
    // [ALIGN] 4
    // [00000012 BYTES: COLLAPSED FUNCTION _sinf_special. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000012 BYTES: COLLAPSED FUNCTION _cosf_special. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [00000023 BYTES: COLLAPSED FUNCTION terminate(void). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010B3F:
    // [ALIGN] 0x20
    // [00000025 BYTES: COLLAPSED FUNCTION _inconsistency(void). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010B65:
    // [ALIGN] 8
    // [0000001D BYTES: COLLAPSED FUNCTION _initp_eh_hooks. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010B85:
    // [ALIGN] 8
    // [000001FD BYTES: COLLAPSED FUNCTION __C_specific_handler. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010D85:
    // [ALIGN] 8
    // [0000003D BYTES: COLLAPSED FUNCTION free. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010DC5:
    // [ALIGN] 8
    // [000000B9 BYTES: COLLAPSED FUNCTION _exception_enabled. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010E81:
    // [ALIGN] 4
    // [0000015B BYTES: COLLAPSED FUNCTION _handle_errorf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180010FDF:
    // [ALIGN] 0x20
    // [00000150 BYTES: COLLAPSED FUNCTION _handle_error. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000086 BYTES: COLLAPSED FUNCTION unknown_libname_26. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000005 BYTES: COLLAPSED FUNCTION j_unknown_libname_2. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [00000011 BYTES: COLLAPSED FUNCTION _statfp. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800111D1:
    // [ALIGN] 4
    // [0000001D BYTES: COLLAPSED FUNCTION _clrfp. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800111F1:
    // [ALIGN] 4
    // [0000007C BYTES: COLLAPSED FUNCTION _ctrlfp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001F BYTES: COLLAPSED FUNCTION _set_statfp. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001128F:
    // [ALIGN] 0x10
    // [0000030C BYTES: COLLAPSED FUNCTION _raise_exc_ex. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000027 BYTES: COLLAPSED FUNCTION _raise_exc. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800115C3:
    // [ALIGN] 4
    // [0000002A BYTES: COLLAPSED FUNCTION _raise_excf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800115EE:
    // [ALIGN] 0x10
    // [0000026A BYTES: COLLAPSED FUNCTION _handle_exc. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001185A:
    // [ALIGN] 4
    // [0000002D BYTES: COLLAPSED FUNCTION _set_errno_from_matherr. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011889:
    // [ALIGN] 4
    // [00000043 BYTES: COLLAPSED FUNCTION _errcode. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x10
    // [000000D4 BYTES: COLLAPSED FUNCTION _umatherr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000063 BYTES: COLLAPSED FUNCTION _handle_qnan1. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011A07:
    // [ALIGN] 8
    // [000000F2 BYTES: COLLAPSED FUNCTION _except1. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011AFA:
    // [ALIGN] 4
    // [00000074 BYTES: COLLAPSED FUNCTION _sptype. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000013F BYTES: COLLAPSED FUNCTION _decomp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // doexit+A6↓p ...
    ecx = 0;  // xor self
    goto cs:encodepointer;
    // [SUB_180011CB0] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4
    // [00000025 BYTES: COLLAPSED FUNCTION _mtterm. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011CE1:
    // [ALIGN] 4
    // [000000B5 BYTES: COLLAPSED FUNCTION _initptd. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011D99:
    // [ALIGN] 4
    // [00000084 BYTES: COLLAPSED FUNCTION _getptd_noexit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000024 BYTES: COLLAPSED FUNCTION _getptd. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000133 BYTES: COLLAPSED FUNCTION _freefls. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011F77:
    // [ALIGN] 8
    // [0000003E BYTES: COLLAPSED FUNCTION _freeptd. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180011FB6:
    // [ALIGN] 8
    // [00000081 BYTES: COLLAPSED FUNCTION _mtinit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180012039:
    // [ALIGN] 4
    // [00000040 BYTES: COLLAPSED FUNCTION abort. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001C BYTES: COLLAPSED FUNCTION _set_abort_behavior. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000029 BYTES: COLLAPSED FUNCTION _GET_RTERRMSG. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [0000025D BYTES: COLLAPSED FUNCTION _NMSG_WRITE. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180012321:
    // [ALIGN] 4
    // [00000043 BYTES: COLLAPSED FUNCTION _FF_MSGBANNER. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180012367:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:ptr = rcx;
    return rax;
    // [SUB_180012368] endp

    // [0000006C BYTES: COLLAPSED FUNCTION unknown_libname_27. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000018D BYTES: COLLAPSED FUNCTION _flsbuf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180012569:
    // [ALIGN] 4
    // [00000046 BYTES: COLLAPSED FUNCTION write_char. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800125B2:
    // [ALIGN] 4
    // [00000051 BYTES: COLLAPSED FUNCTION write_multi_char. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180012605:
    // [ALIGN] 8
    // [00000095 BYTES: COLLAPSED FUNCTION write_string. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001269D:
    // [ALIGN] 0x20
    // [00000AAC BYTES: COLLAPSED FUNCTION _output_l. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B72C↓o
    cs:qword_180026690 = rcx;
    return rax;
    // [SUB_18001314C] endp

    // [0000014B BYTES: COLLAPSED FUNCTION _call_reportfault. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001329F:
    // [ALIGN] 0x20
    // [00000031 BYTES: COLLAPSED FUNCTION _invoke_watson. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800132D1:
    // [ALIGN] 4
    // [0000006F BYTES: COLLAPSED FUNCTION _invalid_parameter. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013343:
    // [ALIGN] 4
    // [0000001E BYTES: COLLAPSED FUNCTION _invalid_parameter_noinfo. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013362:
    // [ALIGN] 4
    // [00000047 BYTES: COLLAPSED FUNCTION _get_errno_from_oserr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [00000020 BYTES: COLLAPSED FUNCTION _errno. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000020 BYTES: COLLAPSED FUNCTION __doserrno. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000046 BYTES: COLLAPSED FUNCTION _dosmaperr. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013432:
    // [ALIGN] 4
    // [0000008C BYTES: COLLAPSED FUNCTION setSBCS(threadmbcinfostruct *). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000001F0 BYTES: COLLAPSED FUNCTION setSBUpLow(threadmbcinfostruct *). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000BA BYTES: COLLAPSED FUNCTION __updatetmbcinfo. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001376A:
    // [ALIGN] 4
    // [00000090 BYTES: COLLAPSED FUNCTION getSystemCP(int). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000275 BYTES: COLLAPSED FUNCTION _setmbcp_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013A71:
    // [ALIGN] 4
    // [000001DE BYTES: COLLAPSED FUNCTION _setmbcp. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013C52:
    // [ALIGN] 4
    // [00000028 BYTES: COLLAPSED FUNCTION __initmbctable. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000008C BYTES: COLLAPSED FUNCTION __addlocaleref. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000A4 BYTES: COLLAPSED FUNCTION __removelocaleref. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000179 BYTES: COLLAPSED FUNCTION __freetlocinfo. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013F25:
    // [ALIGN] 8
    // [00000057 BYTES: COLLAPSED FUNCTION _updatetlocinfoEx_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013F7F:
    // [ALIGN] 0x20
    // [00000075 BYTES: COLLAPSED FUNCTION __updatetlocinfo. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180013FF5:
    // [ALIGN] 8
    // [0000014E BYTES: COLLAPSED FUNCTION _tolower_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014146:
    // [ALIGN] 8
    // [0000001E BYTES: COLLAPSED FUNCTION tolower. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000061 BYTES: COLLAPSED FUNCTION strcpy_s. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800141C9:
    // [ALIGN] 4
    // [0000007E BYTES: COLLAPSED FUNCTION _malloc_crt. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001424A:
    // [ALIGN] 4
    // [00000083 BYTES: COLLAPSED FUNCTION _calloc_crt. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800142CF:
    // [ALIGN] 0x10
    // [00000085 BYTES: COLLAPSED FUNCTION _realloc_crt. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014355:
    // [ALIGN] 8
    // [00000088 BYTES: COLLAPSED FUNCTION _recalloc_crt. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000039 BYTES: COLLAPSED FUNCTION _msize. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014419:
    // [ALIGN] 4
    // [00000039 BYTES: COLLAPSED FUNCTION __crtCorExitProcess. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014455:
    // [ALIGN] 8
    // [00000016 BYTES: COLLAPSED FUNCTION __crtExitProcess. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001446E:
    // [ALIGN] 0x10
    // [0000000A BYTES: COLLAPSED FUNCTION _lockexit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [0000000A BYTES: COLLAPSED FUNCTION _unlockexit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000043 BYTES: COLLAPSED FUNCTION _init_pointers. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800144CB:
    // [ALIGN] 4
    // [00000033 BYTES: COLLAPSED FUNCTION _initterm. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800144FF:
    // [ALIGN] 0x20
    // [00000039 BYTES: COLLAPSED FUNCTION _initterm_e. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014539:
    // [ALIGN] 4
    // [000000AF BYTES: COLLAPSED FUNCTION _cinit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800145EB:
    // [ALIGN] 4
    // [0000018F BYTES: COLLAPSED FUNCTION doexit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001477B:
    // [ALIGN] 4
    // [0000000C BYTES: COLLAPSED FUNCTION _exit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000000D BYTES: COLLAPSED FUNCTION _cexit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000026 BYTES: COLLAPSED FUNCTION _amsg_exit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800147BE:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    cs:qword_180026718 = rcx;
    return rax;
    // [SUB_1800147C0] endp

    // [00000033 BYTES: COLLAPSED FUNCTION _callnewh. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800147FB:
    // [ALIGN] 4
    // [00000093 BYTES: COLLAPSED FUNCTION _CxxThrowException. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001488F:
    // [ALIGN] 0x10
    // [000002CE BYTES: COLLAPSED FUNCTION _spawnvpe. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014B5E:
    // [ALIGN] 0x20
    // [0000008D BYTES: COLLAPSED FUNCTION comexecmd. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014BED:
    // [ALIGN] 0x10
    // [00000286 BYTES: COLLAPSED FUNCTION _spawnve. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014E76:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // _spawnve+15E↑p ...
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    ebx = edx;
    // test: set flags = rcx & rcx
    if(!ZF)           goto loc_180014EA2;

class="lbl">loc_180014E85:
    __doserrno();
    *(class="type">uint32_t*)(rax) &= 0;
    _errno();
    ebx = 0x16;
    *(void**)(rax) = ebx;
    _invalid_parameter_noinfo();
    eax = ebx;
    goto loc_180014EF2;
    // ---------------------------------------------------------------------------

class="lbl">loc_180014EA2:
    // test: set flags = edx & 0x0FFFFFFF9
    if(!ZF)           goto loc_180014E85;
    cs:getfileattributesa();
    // cmp: set flags = eax - 0x0FFFFFFFF
    if(!ZF)           goto loc_180014ECB;
    cs:getlasterror();
    ecx = eax;
    _dosmaperr();

class="lbl">loc_180014EC2:
    _errno();
    eax = *(void**)(rax);
    goto loc_180014EF2;
    // ---------------------------------------------------------------------------

class="lbl">loc_180014ECB:
    // test: set flags = al & 0x10
    if(!ZF)           goto loc_180014EF0;
    // test: set flags = al & 1
    if(ZF)            goto loc_180014EF0;
    // test: set flags = bl & 2
    if(ZF)            goto loc_180014EF0;
    __doserrno();
    *(class="type">uint32_t*)(rax) = 5;
    _errno();
    *(class="type">uint32_t*)(rax) = 0x0D;
    goto loc_180014EC2;
    // ---------------------------------------------------------------------------

class="lbl">loc_180014EF0:
    // sub_180014E78+59↑j ...
    eax = 0;  // xor self

class="lbl">loc_180014EF2:
    // sub_180014E78+51↑j
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180014E78] endp

    // [000000A1 BYTES: COLLAPSED FUNCTION _getenv_helper_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180014F99:
    // [ALIGN] 4
    // [00000102 BYTES: COLLAPSED FUNCTION _dupenv_s. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001509E:
    // [ALIGN] 0x20
    // [00000056 BYTES: COLLAPSED FUNCTION _heap_init. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800150F6:
    // [ALIGN] 8
    // [0000001E BYTES: COLLAPSED FUNCTION _heap_term. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015116:
    // [ALIGN] 8
    // [000002D2 BYTES: COLLAPSED FUNCTION _ioinit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800153EA:
    // [ALIGN] 4
    // [00000073 BYTES: COLLAPSED FUNCTION _ioterm. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001545F:
    // [ALIGN] 0x20
    // [00000130 BYTES: COLLAPSED FUNCTION _setenvp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000001CF BYTES: COLLAPSED FUNCTION parse_cmdline. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001575F:
    // [ALIGN] 0x20
    // [000000F6 BYTES: COLLAPSED FUNCTION _setargv. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015856:
    // [ALIGN] 8
    // [000000F4 BYTES: COLLAPSED FUNCTION __crtGetEnvironmentStringsA. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002B96C↓o ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rbx = &(qword_180006990);  // effective address
    rdi = &(qword_180006990);  // effective address
    goto loc_180015974;
    // ---------------------------------------------------------------------------

class="lbl">loc_180015966:
    rax = *(void**)(rbx);
    // test: set flags = rax & rax
    if(ZF)            goto loc_180015970;
    rax();

class="lbl">loc_180015970:
    rbx += 8;

class="lbl">loc_180015974:
    // cmp: set flags = rbx - rdi
    if(CF)           goto loc_180015966;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001594C] endp


    // =============== S U B R O U T I N E =======================================


    // void __cdecl sub_180015984()
    // .pdata:000000018002B978↓o ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rbx = &(qword_1800069A0);  // effective address
    rdi = &(qword_1800069A0);  // effective address
    goto loc_1800159AC;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001599E:
    rax = *(void**)(rbx);
    // test: set flags = rax & rax
    if(ZF)            goto loc_1800159A8;
    rax();

class="lbl">loc_1800159A8:
    rbx += 8;

class="lbl">loc_1800159AC:
    // cmp: set flags = rbx - rdi
    if(CF)           goto loc_18001599E;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_180015984] endp

    // [000001D0 BYTES: COLLAPSED FUNCTION _XcptFilter. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000013 BYTES: COLLAPSED FUNCTION __CppXcptFilter. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [000000B3 BYTES: COLLAPSED FUNCTION __security_init_cookie. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015C53:
    // [ALIGN] 4
    // [00000063 BYTES: COLLAPSED FUNCTION __GSHandlerCheckCommon. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015CB7:
    // [ALIGN] 8
    // [0000001D BYTES: COLLAPSED FUNCTION __GSHandlerCheck. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180015CD5] db 0x11 dup(0x0CC)  // DATA XREF: .pdata:000000018002B9B4↓o
    // [ALIGN] 0x10
    // [0000001F BYTES: COLLAPSED FUNCTION __security_check_cookie. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015D0F:
    // [ALIGN] 0x20
    // [00000024 BYTES: COLLAPSED FUNCTION _local_unwind. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015D44:
    // [ALIGN] 0x10
    // [00000021 BYTES: COLLAPSED FUNCTION _NLG_Notify. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015D71:
    // [ALIGN] 0x20
    // [00000001 BYTES: COLLAPSED FUNCTION __NLG_Return2. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015D81:
    // [ALIGN] 0x10
    // [0000002F BYTES: COLLAPSED FUNCTION _ValidateImageBase. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [00000046 BYTES: COLLAPSED FUNCTION _FindPESection. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x10
    // [00000041 BYTES: COLLAPSED FUNCTION _IsNonwritableInCurrentImage. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015E51:
    // [ALIGN] 4
    // [0000007F BYTES: COLLAPSED FUNCTION _forcdecpt_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015ED3:
    // [ALIGN] 4
    // [0000009D BYTES: COLLAPSED FUNCTION _cropzeros_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015F71:
    // [ALIGN] 4
    // [00000017 BYTES: COLLAPSED FUNCTION _positive. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [00000042 BYTES: COLLAPSED FUNCTION _fassign_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180015FCE:
    // [ALIGN] 0x10
    // [00000008 BYTES: COLLAPSED FUNCTION _fassign. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000007 BYTES: COLLAPSED FUNCTION _forcdecpt. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [00000007 BYTES: COLLAPSED FUNCTION _cropzeros. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000231 BYTES: COLLAPSED FUNCTION _cftoe2_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016219:
    // [ALIGN] 4
    // [000000F7 BYTES: COLLAPSED FUNCTION _cftoe_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016313:
    // [ALIGN] 4
    // [000003E0 BYTES: COLLAPSED FUNCTION _cftoa_l. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000199 BYTES: COLLAPSED FUNCTION _cftof2_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001688D:
    // [ALIGN] 0x10
    // [000000D1 BYTES: COLLAPSED FUNCTION _cftof_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016961:
    // [ALIGN] 4
    // [00000134 BYTES: COLLAPSED FUNCTION _cftog_l. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000095 BYTES: COLLAPSED FUNCTION _cfltcvt_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016B2D:
    // [ALIGN] 0x10
    // [00000024 BYTES: COLLAPSED FUNCTION _cfltcvt. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000036 BYTES: COLLAPSED FUNCTION _initp_misc_cfltcvt_tab. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016B8A:
    // [ALIGN] 0x20
    // [00000010 BYTES: COLLAPSED FUNCTION _get_fpsr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000000A BYTES: COLLAPSED FUNCTION _set_fpsr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000014 BYTES: COLLAPSED FUNCTION _fclrf. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------

class="lbl">_frnd:
    // ucomisd: compare xmm0 vs cs:qword_180003350
    if(!CF)          goto _return;
    // ucomisd: compare xmm0 vs cs:qword_180003350+8
    if(CF||ZF)        goto _return;
    rcx=_mm_cvtsd_si32(xmm0);
    xmm0=_mm_cvtsi32_sd(xmm0,rcx);
    // [00000001 BYTES: COLLAPSED FUNCTION _return. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x10
    // [00000084 BYTES: COLLAPSED FUNCTION _mtinitlocks. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000087 BYTES: COLLAPSED FUNCTION _mtdeletelocks. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016CFB:
    // [ALIGN] 4
    // [00000018 BYTES: COLLAPSED FUNCTION _unlock. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000E6 BYTES: COLLAPSED FUNCTION _mtinitlocknum. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180016DFA:
    // [ALIGN] 4
    // [00000044 BYTES: COLLAPSED FUNCTION _lock. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001D BYTES: COLLAPSED FUNCTION _initp_misc_winsig. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    rcx = cs:qword_180026a80;
    goto cs:decodepointer;
    // [SUB_180016E60] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10
    // [00000232 BYTES: COLLAPSED FUNCTION raise. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800170A2:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // DATA XREF: .pdata:000000018002BAE0↓o


    // __unwind { // __GSHandlerCheck
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp -= 0x50;
    rax = cs:qword_180024eb8;
    rax ^= rsp;
    *(void**)(rsp+0x88+var_40) = rax;
    ebp = r8d;
    r14 = rdx;
    r13 = rcx;
    sub_180011CB0();
    ebx = 0;  // xor self
    // cmp: set flags = cs:qword_180026a98 - rbx
    rdi = rax;
    if(!ZF)           goto loc_1800171B7;
    rcx = &(LibFileName);  // effective address  // "USER32.DLL"
    cs:loadlibraryw();
    rsi = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001728E;
    rdx = (const char*)aMessageboxw;  // "MessageBoxW"
    rcx = rax;  // hModule
    cs:getprocaddress();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001728E;
    rcx = rax;  // Ptr
    cs:encodepointer();
    rdx = (const char*)aGetactivewindo;  // "GetActiveWindow"
    rcx = rsi;  // hModule
    cs:qword_180026a98 = rax;
    cs:getprocaddress();
    rcx = rax;  // Ptr
    cs:encodepointer();
    rdx = (const char*)aGetlastactivep;  // "GetLastActivePopup"
    rcx = rsi;  // hModule
    cs:qword_180026aa0 = rax;
    cs:getprocaddress();
    rcx = rax;  // Ptr
    cs:encodepointer();
    rdx = (const char*)aGetuserobjecti;  // "GetUserObjectInformationW"
    rcx = rsi;  // hModule
    cs:qword_180026aa8 = rax;
    cs:getprocaddress();
    rcx = rax;  // Ptr
    cs:encodepointer();
    r11 = rax;
    cs:qword_180026ab8 = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_1800171AE;
    rdx = (const char*)aGetprocesswind;  // "GetProcessWindowStation"
    rcx = rsi;  // hModule
    cs:getprocaddress();
    rcx = rax;  // Ptr
    cs:encodepointer();
    cs:qword_180026ab0 = rax;
    goto loc_1800171BE;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800171AE:
    rax = cs:qword_180026ab0;
    goto loc_1800171C5;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800171B7:
    rax = cs:qword_180026ab0;

class="lbl">loc_1800171BE:
    r11 = cs:qword_180026ab8;

class="lbl">loc_1800171C5:
    // cmp: set flags = rax - rdi
    if(ZF)            goto loc_18001722C;
    // cmp: set flags = r11 - rdi
    if(ZF)            goto loc_18001722C;
    rcx = rax;  // Ptr
    cs:decodepointer();
    rcx = cs:qword_180026ab8;  // Ptr
    rsi = rax;
    cs:decodepointer();
    r12 = rax;
    // test: set flags = rsi & rsi
    if(ZF)            goto loc_18001722C;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001722C;
    rsi();
    // test: set flags = rax & rax
    if(ZF)            goto loc_180017226;
    rcx = &(rsp+0x88+var_58);  // effective address
    r9d = 0x0C;
    r8 = &(rsp+0x88+var_50);  // effective address
    *(void**)(rsp+0x88+var_68) = rcx;
    edx = &(r9-0x0B);  // effective address
    rcx = rax;
    r12();
    // test: set flags = eax & eax
    if(ZF)            goto loc_180017226;
    // test: set flags = *(void**)(rsp+0x88+var_48) & 1
    if(!ZF)           goto loc_18001722C;

class="lbl">loc_180017226:
    // sub_1800170A4+179↑j
    CF=(ebp>>0x15)&1; ebp|=(1ULL<<0x15);
    goto loc_18001726C;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001722C:
    // sub_1800170A4+129↑j ...
    rcx = cs:qword_180026aa0;  // Ptr
    // cmp: set flags = rcx - rdi
    if(ZF)            goto loc_18001726C;
    cs:decodepointer();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001726C;
    rax();
    rbx = rax;
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001726C;
    rcx = cs:qword_180026aa8;  // Ptr
    // cmp: set flags = rcx - rdi
    if(ZF)            goto loc_18001726C;
    cs:decodepointer();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001726C;
    rcx = rbx;
    rax();
    rbx = rax;

class="lbl">loc_18001726C:
    // sub_1800170A4+192↑j ...
    rcx = cs:qword_180026a98;  // Ptr
    cs:decodepointer();
    // test: set flags = rax & rax
    if(ZF)            goto loc_18001728E;
    r9d = ebp;
    r8 = r14;
    rdx = r13;
    rcx = rbx;
    rax();
    goto loc_180017290;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001728E:
    // sub_1800170A4+6A↑j ...
    eax = 0;  // xor self

class="lbl">loc_180017290:
    rcx = *(void**)(rsp+0x88+var_40);
    rcx ^= rsp;  // StackCookie
    __security_check_cookie();
    rsp += 0x50;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 1800170A4
    // [SUB_1800170A4] endp

    // [00000085 BYTES: COLLAPSED FUNCTION wcscat_s. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180017331:
    // [ALIGN] 4
    // [000000CF BYTES: COLLAPSED FUNCTION wcsncpy_s. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180017403:
    // [ALIGN] 4
    // [0000006B BYTES: COLLAPSED FUNCTION wcscpy_s. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001746F:
    // [ALIGN] 0x10
    // [00000040 BYTES: COLLAPSED FUNCTION _set_error_mode. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000095 BYTES: COLLAPSED FUNCTION _lseeki64_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180017545:
    // [ALIGN] 8
    // [000000E3 BYTES: COLLAPSED FUNCTION _lseeki64. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001762B:
    // [ALIGN] 4
    // [00000760 BYTES: COLLAPSED FUNCTION _write_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000DF BYTES: COLLAPSED FUNCTION _write. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180017E6B:
    // [ALIGN] 4
    // [00000053 BYTES: COLLAPSED FUNCTION _getbuf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180017EBF:
    // [ALIGN] 0x20
    // [0000005F BYTES: COLLAPSED FUNCTION _isatty. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180017F1F:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    // _flsbuf+9A↑p
    rax = &(off_180025170);  // effective address
    return rax;
    // [SUB_180017F20] endp

    // [000000E0 BYTES: COLLAPSED FUNCTION __initstdio. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000027 BYTES: COLLAPSED FUNCTION __endstdio. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001802F:
    // [ALIGN] 0x10
    // [00000063 BYTES: COLLAPSED FUNCTION _lock_file. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180018093:
    // [ALIGN] 4
    // [00000031 BYTES: COLLAPSED FUNCTION _lock_file2. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800180C5:
    // [ALIGN] 8
    // [0000004C BYTES: COLLAPSED FUNCTION _unlock_file. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001D BYTES: COLLAPSED FUNCTION _unlock_file2. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [00000026 BYTES: COLLAPSED FUNCTION _fileno. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001815A:
    // [ALIGN] 4
    // [00000045 BYTES: COLLAPSED FUNCTION _isleadbyte_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800181A1:
    // [ALIGN] 4
    // [00000047 BYTES: COLLAPSED FUNCTION isleadbyte. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800181EB:
    // [ALIGN] 4
    // [00000018 BYTES: COLLAPSED FUNCTION _get_printf_count_output. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000001C4 BYTES: COLLAPSED FUNCTION _wctomb_s_l. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000014 BYTES: COLLAPSED FUNCTION wctomb_s. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================


    // _call_reportfault+11F↑p ...
    cs:dword_180029a2c &= 0;
    return rax;
    // [SUB_1800183DC] endp

    // [000002CA BYTES: COLLAPSED FUNCTION __crtLCMapStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char *,int,int,int). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800186AE:
    // [ALIGN] 0x10
    // [00000096 BYTES: COLLAPSED FUNCTION __crtLCMapStringA. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180018746:
    // [ALIGN] 8
    // [0000015E BYTES: COLLAPSED FUNCTION __crtGetStringTypeA_stat(localeinfo_struct *,ulong,char const *,int,ushort *,int,int,int). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800188A6:
    // [ALIGN] 8
    // [0000007E BYTES: COLLAPSED FUNCTION __crtGetStringTypeA. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180018926:
    // [ALIGN] 8
    // [000003EE BYTES: COLLAPSED FUNCTION __free_lc_time. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180018D16:
    // [ALIGN] 8
    // [0000006C BYTES: COLLAPSED FUNCTION __free_lconv_num. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000010A BYTES: COLLAPSED FUNCTION __free_lconv_mon. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180018E8E:
    // [ALIGN] 0x10
    // [000000E8 BYTES: COLLAPSED FUNCTION _isctype_l. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000007C BYTES: COLLAPSED FUNCTION strcat_s. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180018FF4] db 0x12 dup(0x0CC)  // DATA XREF: .pdata:000000018002BC30↓o
    // [ALIGN] 0x10
    // [000000C7 BYTES: COLLAPSED FUNCTION memcmp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_1800190D7] db 0x0F dup(0x0CC)  // DATA XREF: .pdata:000000018002BC3C↓o
    // [ALIGN] 0x10
    // [000000B5 BYTES: COLLAPSED FUNCTION strncmp. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800191A5:
    // [ALIGN] 8
    // [0000009A BYTES: COLLAPSED FUNCTION _calloc_impl. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019242:
    // [ALIGN] 4
    // [000000D3 BYTES: COLLAPSED FUNCTION realloc. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019317:
    // [ALIGN] 8
    // [00000086 BYTES: COLLAPSED FUNCTION _recalloc. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001939E:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    cs:qword_180026b40 = rcx;
    return rax;
    // [SUB_1800193A0] endp

    // [000000DD BYTES: COLLAPSED FUNCTION _mbsrchr_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019485:
    // [ALIGN] 8
    // [00000008 BYTES: COLLAPSED FUNCTION _mbsrchr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000B8 BYTES: COLLAPSED FUNCTION _getpath. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000EC BYTES: COLLAPSED FUNCTION _mbschr_l. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000008 BYTES: COLLAPSED FUNCTION _mbschr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000296 BYTES: COLLAPSED FUNCTION _dospawn. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800198D2:
    // [ALIGN] 4
    // [000004D3 BYTES: COLLAPSED FUNCTION _cenvarg. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019DA7:
    // [ALIGN] 8
    // [00000102 BYTES: COLLAPSED FUNCTION _mbsnbicoll_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019EAA:
    // [ALIGN] 4
    // [00000008 BYTES: COLLAPSED FUNCTION _mbsnbicoll. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000F2 BYTES: COLLAPSED FUNCTION __wtomb_environ. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019FA6:
    // [ALIGN] 8
    // [00000041 BYTES: COLLAPSED FUNCTION calloc. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180019FE9:
    // [ALIGN] 4
    // [0000007B BYTES: COLLAPSED FUNCTION x_ismbbtype_l(localeinfo_struct *,uint,int,int). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A067:
    // [ALIGN] 8
    // [00000012 BYTES: COLLAPSED FUNCTION _ismbblead. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 4
    // [0000014A BYTES: COLLAPSED FUNCTION __report_gsfailure. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A1C6:
    // [ALIGN] 8
    // [00000025 BYTES: COLLAPSED FUNCTION strrchr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x10
    // [0000007E BYTES: COLLAPSED FUNCTION isdigit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A26E:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // DATA XREF: .pdata:000000018002BCFC↓o


    // __unwind { // __GSHandlerCheck
    *(void**)(rsp-8+arg_10) = rbx;
    *(void**)(rsp-8+arg_18) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rbp = rsp;
    rsp -= 0x80;
    rax = cs:qword_180024eb8;
    rax ^= rsp;
    *(void**)(rbp+var_8) = rax;
    rdi = rcx;
    rbx = rdx;
    rcx = &(rbp+var_40);  // effective address  // this
    rdx = r8;  // struct localeinfo_struct *
    ??0_LocaleUpdate@@QEAA@PEAUlocaleinfo_struct@@@Z();  // _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
    r11 = &(rbp+var_40);  // effective address
    rdx = &(rbp+var_20);  // effective address
    *(void**)(rsp+0x80+var_48) = r11;
    *(void**)(rsp+0x80+var_50) &= 0;
    *(void**)(rsp+0x80+var_58) &= 0;
    *(void**)(rsp+0x80+var_60) &= 0;
    rcx = &(rbp+var_18);  // effective address
    r9d = 0;  // xor self
    r8 = rbx;
    __strgtold12_l();
    rcx = &(rbp+var_18);  // effective address
    rdx = rdi;
    ebx = eax;
    sub_18001B954();
    edx = 3;
    // test: set flags = dl & bl
    if(!ZF)           goto loc_18001A31E;
    // cmp: set flags = eax - 1
    if(!ZF)           goto loc_18001A301;
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A2FD;
    rcx = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rcx+0x0C8) &= 0x0FFFFFFFD;

class="lbl">loc_18001A2FD:
    // sub_18001A270+BC↓j ...
    eax = edx;
    goto loc_18001A34E;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001A301:
    // cmp: set flags = eax - 2
    if(!ZF)           goto loc_18001A33B;

class="lbl">loc_18001A306:
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A317;
    rax = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rax+0x0C8) &= 0x0FFFFFFFD;

class="lbl">loc_18001A317:
    eax = 4;
    goto loc_18001A34E;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001A31E:
    // test: set flags = bl & 1
    if(!ZF)           goto loc_18001A306;
    // test: set flags = bl & 2
    if(ZF)            goto loc_18001A33B;
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A2FD;
    rax = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rax+0x0C8) &= 0x0FFFFFFFD;
    goto loc_18001A2FD;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001A33B:
    // sub_18001A270+B6↑j
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A34C;
    rax = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rax+0x0C8) &= 0x0FFFFFFFD;

class="lbl">loc_18001A34C:
    eax = 0;  // xor self

class="lbl">loc_18001A34E:
    // sub_18001A270+AC↑j
    rcx = *(void**)(rbp+var_8);
    rcx ^= rsp;  // StackCookie
    __security_check_cookie();
    r11 = &(rsp+0x80+var_s0);  // effective address
    rbx = *(void**)(r11+0x20);
    rdi = *(void**)(r11+0x28);
    rsp = r11;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18001A270
    // [SUB_18001A270] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001A36F:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // DATA XREF: .pdata:000000018002BD08↓o


    // __unwind { // __GSHandlerCheck
    *(void**)(rsp-8+arg_10) = rbx;
    *(void**)(rsp-8+arg_18) = rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rbp = rsp;
    rsp -= 0x80;
    rax = cs:qword_180024eb8;
    rax ^= rsp;
    *(void**)(rbp+var_8) = rax;
    rdi = rcx;
    rbx = rdx;
    rcx = &(rbp+var_40);  // effective address  // this
    rdx = r8;  // struct localeinfo_struct *
    ??0_LocaleUpdate@@QEAA@PEAUlocaleinfo_struct@@@Z();  // _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
    r11 = &(rbp+var_40);  // effective address
    rdx = &(rbp+var_20);  // effective address
    *(void**)(rsp+0x80+var_48) = r11;
    *(void**)(rsp+0x80+var_50) &= 0;
    *(void**)(rsp+0x80+var_58) &= 0;
    *(void**)(rsp+0x80+var_60) &= 0;
    rcx = &(rbp+var_18);  // effective address
    r9d = 0;  // xor self
    r8 = rbx;
    __strgtold12_l();
    rcx = &(rbp+var_18);  // effective address
    rdx = rdi;
    ebx = eax;
    sub_18001BF20();
    edx = 3;
    // test: set flags = dl & bl
    if(!ZF)           goto loc_18001A41E;
    // cmp: set flags = eax - 1
    if(!ZF)           goto loc_18001A401;
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A3FD;
    rcx = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rcx+0x0C8) &= 0x0FFFFFFFD;

class="lbl">loc_18001A3FD:
    // sub_18001A370+BC↓j ...
    eax = edx;
    goto loc_18001A44E;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001A401:
    // cmp: set flags = eax - 2
    if(!ZF)           goto loc_18001A43B;

class="lbl">loc_18001A406:
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A417;
    rax = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rax+0x0C8) &= 0x0FFFFFFFD;

class="lbl">loc_18001A417:
    eax = 4;
    goto loc_18001A44E;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001A41E:
    // test: set flags = bl & 1
    if(!ZF)           goto loc_18001A406;
    // test: set flags = bl & 2
    if(ZF)            goto loc_18001A43B;
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A3FD;
    rax = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rax+0x0C8) &= 0x0FFFFFFFD;
    goto loc_18001A3FD;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001A43B:
    // sub_18001A370+B6↑j
    // cmp: set flags = *(void**)(rbp+var_28) - 0
    if(ZF)            goto loc_18001A44C;
    rax = *(void**)(rbp+var_30);
    *(class="type">uint32_t*)(rax+0x0C8) &= 0x0FFFFFFFD;

class="lbl">loc_18001A44C:
    eax = 0;  // xor self

class="lbl">loc_18001A44E:
    // sub_18001A370+AC↑j
    rcx = *(void**)(rbp+var_8);
    rcx ^= rsp;  // StackCookie
    __security_check_cookie();
    r11 = &(rsp+0x80+var_s0);  // effective address
    rbx = *(void**)(r11+0x20);
    rdi = *(void**)(r11+0x28);
    rsp = r11;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18001A370
    // [SUB_18001A370] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001A46F:
    // [ALIGN] 0x10
    // [000000CC BYTES: COLLAPSED FUNCTION _fptostr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000C6 BYTES: COLLAPSED FUNCTION __dtold. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A602:
    // [ALIGN] 4
    // [000000B5 BYTES: COLLAPSED FUNCTION _fltout2. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A6B9:
    // [ALIGN] 4
    // [0000000A BYTES: COLLAPSED FUNCTION _fptrap. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [0000004E BYTES: COLLAPSED FUNCTION __alloca_probe. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A72E:
    // [ALIGN] 0x10
    // [000000AA BYTES: COLLAPSED FUNCTION _free_osfhnd. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A7DA:
    // [ALIGN] 4
    // [00000074 BYTES: COLLAPSED FUNCTION _get_osfhandle. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000A5 BYTES: COLLAPSED FUNCTION __lock_fhandle. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A8F5:
    // [ALIGN] 8
    // [00000028 BYTES: COLLAPSED FUNCTION _unlock_fhandle. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000059 BYTES: COLLAPSED FUNCTION _putwch_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001A979:
    // [ALIGN] 4
    // [00000175 BYTES: COLLAPSED FUNCTION _mbtowc_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001AAF1:
    // [ALIGN] 4
    // [00000008 BYTES: COLLAPSED FUNCTION mbtowc. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000AA BYTES: COLLAPSED FUNCTION _fcloseall. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001ABA6:
    // [ALIGN] 8
    // [00000079 BYTES: COLLAPSED FUNCTION _flush. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001AC21:
    // [ALIGN] 4
    // [0000004C BYTES: COLLAPSED FUNCTION _fflush_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000EC BYTES: COLLAPSED FUNCTION flsall. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000000A BYTES: COLLAPSED FUNCTION _flushall. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [00000046 BYTES: COLLAPSED FUNCTION __ascii_strnicmp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x10
    // [00000103 BYTES: COLLAPSED FUNCTION _strnicmp_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001AEB3:
    // [ALIGN] 4
    // [0000004F BYTES: COLLAPSED FUNCTION _strnicmp. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001AF03:
    // [ALIGN] 4
    // [0000001A BYTES: COLLAPSED FUNCTION strchr. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [000001BB BYTES: COLLAPSED FUNCTION _mbsnicmp_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001B0DB:
    // [ALIGN] 4
    // [00000008 BYTES: COLLAPSED FUNCTION _mbsnicmp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000344 BYTES: COLLAPSED FUNCTION __crtCompareStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char const *,int,int). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000089 BYTES: COLLAPSED FUNCTION __crtCompareStringA. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001B4B1:
    // [ALIGN] 4
    // [00000103 BYTES: COLLAPSED FUNCTION _strnicoll_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001B5B7:
    // [ALIGN] 8
    // [0000039C BYTES: COLLAPSED FUNCTION __crtsetenv. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // DATA XREF: .pdata:000000018002BDF8↓o ...


    // __unwind { // __GSHandlerCheck
    *(void**)(rsp-0x38+arg_10) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rbp = rsp;
    rsp -= 0x60;
    rax = cs:qword_180024eb8;
    rax ^= rsp;
    *(void**)(rbp+var_10) = rax;
    eax = *(class="type">uint16_t*)(rcx+0x0A);
    ebx = 0;  // xor self
    r15d = 0x1F;
    edi = eax;
    eax &= 0x8000;
    *(void**)(rbp+var_38) = rdx;
    *(void**)(rbp+var_3C) = eax;
    eax = *(void**)(rcx+6);
    edi &= 0x7FFF;
    *(class="type">uint32_t*)(rbp+var_30) = eax;
    eax = *(void**)(rcx+2);
    edi -= 0x3FFF;
    *(class="type">uint32_t*)(rbp+var_30+4) = eax;
    eax = *(class="type">uint16_t*)(rcx);
    esi = &(rbx+1);  // effective address
    eax <<= 0x10;
    r12d = &(r15-0x1C);  // effective address
    *(void**)(rbp+var_28) = eax;
    // cmp: set flags = edi - 0x0FFFFC001
    if(!ZF)           goto loc_18001B9EC;
    r8d = ebx;
    eax = ebx;

class="lbl">loc_18001B9C8:
    // cmp: set flags = *(uint32_t*)(rbp+rax*4+var_30) - ebx
    if(!ZF)           goto loc_18001B9DB;
    rax += rsi;
    // cmp: set flags = rax - r12
    if(SF!=OF)        goto loc_18001B9C8;
    goto loc_18001BEBD;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001B9DB:
    *(void**)(rbp+var_30) = rbx;
    *(void**)(rbp+var_28) = ebx;
    ebx = 2;
    goto loc_18001BEBD;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001B9EC:
    r9d = cs:dword_180025618;
    rcx = &(rbp+var_30);  // effective address
    r11d = r15d;
    rax = *(void**)(rcx);
    r14d |= 0x0FFFFFFFF;
    *(void**)(rbp+var_40) = edi;
    *(void**)(rbp+var_20) = rax;
    eax = *(void**)(rcx+8);
    r13d = ebx;
    *(void**)(rbp+var_18) = eax;
    eax = r9d;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    r10d = eax;
    eax &= r15d;
    eax -= edx;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    r11d -= eax;
    rax = r10d;
    ecx = *(class="type">uint32_t*)(rbp+rax*4+var_30);
    CF = (ecx>>r11d)&1;
    if(!CF)          goto loc_18001BACF;
    ecx = r11d;
    eax = r14d;
    r8 = r10d;
    eax <<= cl;
    eax = ~eax;
    // test: set flags = *(uint32_t*)(rbp+r8*4+var_30) & eax
    if(!ZF)           goto loc_18001BA66;
    eax = &(rsi+r8);  // effective address
    rax=(class="type">int64_t)(class="type">int32_t)eax;
    goto loc_18001BA5F;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BA56:
    // cmp: set flags = *(uint32_t*)(rbp+rax*4+var_30) - ebx
    if(!ZF)           goto loc_18001BA66;
    rax += rsi;

class="lbl">loc_18001BA5F:
    // cmp: set flags = rax - r12
    if(SF!=OF)        goto loc_18001BA56;
    goto loc_18001BACF;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BA66:
    // sub_18001B954+106↑j
    eax = &(r9-1);  // effective address
    ecx = r15d;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    r8d = eax;
    eax &= r15d;
    eax -= edx;
    r8d = (class="type">int64_t)r8d >> 5;  // arithmetic
    edx = esi;
    ecx -= eax;
    r9 = r8d;
    eax = *(class="type">uint32_t*)(rbp+r9*4+var_30);
    edx <<= cl;
    ecx = &(rax+rdx);  // effective address
    // cmp: set flags = ecx - eax
    if(CF)           goto loc_18001BA98;
    // cmp: set flags = ecx - edx
    if(!CF)          goto loc_18001BA9B;

class="lbl">loc_18001BA98:
    r13d = esi;

class="lbl">loc_18001BA9B:
    r8d -= esi;
    *(class="type">uint32_t*)(rbp+r9*4+var_30) = ecx;
    rdx = r8d;
    if(SF)            goto loc_18001BACF;

class="lbl">loc_18001BAA8:
    // test: set flags = r13d & r13d
    if(ZF)            goto loc_18001BACF;
    eax = *(class="type">uint32_t*)(rbp+rdx*4+var_30);
    r13d = ebx;
    r8d = &(rax+1);  // effective address
    // cmp: set flags = r8d - eax
    if(CF)           goto loc_18001BAC2;
    // cmp: set flags = r8d - esi
    if(!CF)          goto loc_18001BAC5;

class="lbl">loc_18001BAC2:
    r13d = esi;

class="lbl">loc_18001BAC5:
    *(class="type">uint32_t*)(rbp+rdx*4+var_30) = r8d;
    rdx -= rsi;
    if(!SF)           goto loc_18001BAA8;

class="lbl">loc_18001BACF:
    // sub_18001B954+110↑j ...
    ecx = r11d;
    eax = r14d;
    eax <<= cl;
    rcx = r10d;
    *(class="type">uint32_t*)(rbp+rcx*4+var_30) &= eax;
    eax = &(r10+1);  // effective address
    rdx = eax;
    // cmp: set flags = rdx - r12
    if(SF==OF)        goto loc_18001BB00;
    rcx = &(rbp+rdx*4+var_30);  // effective address  // void *
    r8 = r12;
    r8 -= rdx;
    edx = 0;  // xor self  // Val
    r8 <<= 2;  // Size
    memset();

class="lbl">loc_18001BB00:
    // test: set flags = r13d & r13d
    if(ZF)            goto loc_18001BB07;
    edi += esi;

class="lbl">loc_18001BB07:
    edx = cs:dword_180025614;
    eax = edx;
    eax -= cs:dword_180025618;
    // cmp: set flags = edi - eax
    if(SF==OF)        goto loc_18001BB2D;
    *(void**)(rbp+var_30) = rbx;
    *(void**)(rbp+var_28) = ebx;
    r8d = ebx;
    ebx = 2;
    goto loc_18001BEB9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BB2D:
    // cmp: set flags = edi - edx
    if(!ZF&&SF==OF)   goto loc_18001BD74;
    edx -= *(void**)(rbp+var_40);
    rax = &(rbp+var_20);  // effective address
    edi = r14d;
    rcx = *(void**)(rax);
    r9d = ebx;
    r8 = &(rbp+var_30);  // effective address
    *(void**)(rbp+var_30) = rcx;
    ecx = *(void**)(rax+8);
    eax = edx;
    edx=(eax>>31)?0xFFFFFFFF:0;
    *(void**)(rbp+var_28) = ecx;
    r10 = r12;
    edx &= r15d;
    eax += edx;
    r11d = eax;
    eax &= r15d;
    r15d = 0x20;  // ' '
    eax -= edx;
    r11d = (class="type">int64_t)r11d >> 5;  // arithmetic
    ecx = eax;
    r13d = eax;
    edi <<= cl;
    r15d -= eax;
    edi = ~edi;

class="lbl">loc_18001BB7C:
    edx = *(void**)(r8);
    ecx = r13d;
    eax = edx;
    edx >>= cl;  // logical
    ecx = r15d;
    edx |= r9d;
    eax &= edi;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r8) = edx;
    r8 += 4;
    r9d = *(void**)(rbp+var_40);
    r9d <<= cl;
    r10 -= rsi;
    if(!ZF)           goto loc_18001BB7C;
    edi = &(r10+2);  // effective address
    r10 = r11d;
    r9 = r10;
    r8d = edi;
    r9 = -r9;

class="lbl">loc_18001BBB4:
    // cmp: set flags = r8 - r10
    if(SF!=OF)        goto loc_18001BBCE;
    rdx = r8;
    rdx <<= 2;
    rax = &(rdx+r9*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001BBD3;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BBCE:
    *(class="type">uint32_t*)(rbp+r8*4+var_30) = ebx;

class="lbl">loc_18001BBD3:
    r8 -= rsi;
    if(!SF)           goto loc_18001BBB4;
    r9d = cs:dword_180025618;
    r13d = 0x1F;
    eax = r9d;
    r11d = r13d;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r13d;
    eax += edx;
    r10d = eax;
    eax &= r13d;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    eax -= edx;
    r15 = r10d;
    r11d -= eax;
    ecx = *(class="type">uint32_t*)(rbp+r15*4+var_30);
    CF = (ecx>>r11d)&1;
    if(!CF)          goto loc_18001BCA9;
    ecx = r11d;
    eax = r14d;
    r8 = r10d;
    eax <<= cl;
    eax = ~eax;
    // test: set flags = *(uint32_t*)(rbp+r8*4+var_30) & eax
    if(!ZF)           goto loc_18001BC3E;
    eax = &(rsi+r8);  // effective address
    rax=(class="type">int64_t)(class="type">int32_t)eax;
    goto loc_18001BC37;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BC2E:
    // cmp: set flags = *(uint32_t*)(rbp+rax*4+var_30) - ebx
    if(!ZF)           goto loc_18001BC3E;
    rax += rsi;

class="lbl">loc_18001BC37:
    // cmp: set flags = rax - r12
    if(SF!=OF)        goto loc_18001BC2E;
    goto loc_18001BCA9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BC3E:
    // sub_18001B954+2DE↑j
    eax = &(r9-1);  // effective address
    ecx = r13d;
    r9d = esi;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r13d;
    eax += edx;
    r8d = eax;
    eax &= r13d;
    eax -= edx;
    r8d = (class="type">int64_t)r8d >> 5;  // arithmetic
    ecx -= eax;
    r13 = r8d;
    eax = *(class="type">uint32_t*)(rbp+r13*4+var_30);
    r9d <<= cl;
    ecx = ebx;
    edx = &(rax+r9);  // effective address
    // cmp: set flags = edx - eax
    if(CF)           goto loc_18001BC76;
    // cmp: set flags = edx - r9d
    if(!CF)          goto loc_18001BC78;

class="lbl">loc_18001BC76:
    ecx = esi;

class="lbl">loc_18001BC78:
    r8d -= esi;
    *(class="type">uint32_t*)(rbp+r13*4+var_30) = edx;
    rdx = r8d;
    if(SF)            goto loc_18001BCA9;

class="lbl">loc_18001BC85:
    // test: set flags = ecx & ecx
    if(ZF)            goto loc_18001BCA9;
    eax = *(class="type">uint32_t*)(rbp+rdx*4+var_30);
    ecx = ebx;
    r8d = &(rax+1);  // effective address
    // cmp: set flags = r8d - eax
    if(CF)           goto loc_18001BC9D;
    // cmp: set flags = r8d - esi
    if(!CF)          goto loc_18001BC9F;

class="lbl">loc_18001BC9D:
    ecx = esi;

class="lbl">loc_18001BC9F:
    *(class="type">uint32_t*)(rbp+rdx*4+var_30) = r8d;
    rdx -= rsi;
    if(!SF)           goto loc_18001BC85;

class="lbl">loc_18001BCA9:
    // sub_18001B954+2E8↑j ...
    ecx = r11d;
    eax = r14d;
    eax <<= cl;
    *(class="type">uint32_t*)(rbp+r15*4+var_30) &= eax;
    eax = &(r10+1);  // effective address
    rdx = eax;
    // cmp: set flags = rdx - r12
    if(SF==OF)        goto loc_18001BCD8;
    rcx = &(rbp+rdx*4+var_30);  // effective address  // void *
    r8 = r12;
    r8 -= rdx;
    edx = 0;  // xor self  // Val
    r8 <<= 2;  // Size
    memset();

class="lbl">loc_18001BCD8:
    eax = cs:dword_18002561c;
    r15d = 0x1F;
    r9d = ebx;
    eax++;
    r13d = &(r15+1);  // effective address
    r8 = &(rbp+var_30);  // effective address
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    r10d = eax;
    eax &= r15d;
    eax -= edx;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    ecx = eax;
    r11d = eax;
    r14d <<= cl;
    r13d -= eax;
    r14d = ~r14d;

class="lbl">loc_18001BD11:
    edx = *(void**)(r8);
    ecx = r11d;
    eax = edx;
    edx >>= cl;  // logical
    ecx = r13d;
    edx |= r9d;
    eax &= r14d;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r8) = edx;
    r8 += 4;
    r9d = *(void**)(rbp+var_40);
    r9d <<= cl;
    r12 -= rsi;
    if(!ZF)           goto loc_18001BD11;
    r10 = r10d;
    r8 = rdi;
    r9 = r10;
    r9 = -r9;

class="lbl">loc_18001BD46:
    // cmp: set flags = r8 - r10
    if(SF!=OF)        goto loc_18001BD60;
    rdx = r8;
    rdx <<= 2;
    rax = &(rdx+r9*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001BD65;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BD60:
    *(class="type">uint32_t*)(rbp+r8*4+var_30) = ebx;

class="lbl">loc_18001BD65:
    r8 -= rsi;
    if(!SF)           goto loc_18001BD46;
    r8d = ebx;
    ebx = edi;
    goto loc_18001BEB9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BD74:
    eax = cs:dword_18002561c;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    // cmp: set flags = edi - cs:dword_180025610
    if(SF!=OF)        goto loc_18001BE2B;
    r10d = eax;
    eax &= r15d;
    edi = 0x20;  // ' '
    eax -= edx;
    *(void**)(rbp+var_30) = rbx;
    CF=(*(class="type">uint32_t*)(rbp+var_30)>>0x1F)&1; *(class="type">uint32_t*)(rbp+var_30)|=(1ULL<<0x1F);
    ecx = eax;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    *(void**)(rbp+var_28) = ebx;
    r14d <<= cl;
    r11d = eax;
    r9d = ebx;
    r14d = ~r14d;
    edi -= eax;
    r8 = &(rbp+var_30);  // effective address

class="lbl">loc_18001BDBD:
    edx = *(void**)(r8);
    ecx = r11d;
    eax = edx;
    edx >>= cl;  // logical
    ecx = edi;
    edx |= r9d;
    eax &= r14d;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r8) = edx;
    r8 += 4;
    r9d = *(void**)(rbp+var_40);
    r9d <<= cl;
    r12 -= rsi;
    if(!ZF)           goto loc_18001BDBD;
    r9 = r10d;
    edi = &(r12+2);  // effective address
    r8 = r9;
    r8 = -r8;

class="lbl">loc_18001BDF3:
    // cmp: set flags = rdi - r9
    if(SF!=OF)        goto loc_18001BE0D;
    rdx = rdi;
    rdx <<= 2;
    rax = &(rdx+r8*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001BE11;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BE0D:
    *(class="type">uint32_t*)(rbp+rdi*4+var_30) = ebx;

class="lbl">loc_18001BE11:
    rdi -= rsi;
    if(!SF)           goto loc_18001BDF3;
    r8d = cs:dword_180025624;
    ebx = esi;
    r8d += cs:dword_180025610;
    goto loc_18001BEB9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BE2B:
    r8d = cs:dword_180025624;
    CF=(*(class="type">uint32_t*)(rbp+var_30)>>0x1F)&1; *(class="type">uint32_t*)(rbp+var_30)&=~(1ULL<<0x1F);
    r11d = eax;
    eax &= r15d;
    r8d += edi;
    r13d = 0x20;  // ' '
    eax -= edx;
    r11d = (class="type">int64_t)r11d >> 5;  // arithmetic
    r10d = ebx;
    ecx = eax;
    edi = eax;
    r9 = &(rbp+var_30);  // effective address
    r14d <<= cl;
    r13d -= eax;
    r14d = ~r14d;

class="lbl">loc_18001BE60:
    edx = *(void**)(r9);
    ecx = edi;
    eax = edx;
    edx >>= cl;  // logical
    ecx = r13d;
    edx |= r10d;
    eax &= r14d;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r9) = edx;
    r9 += 4;
    r10d = *(void**)(rbp+var_40);
    r10d <<= cl;
    r12 -= rsi;
    if(!ZF)           goto loc_18001BE60;
    r10 = r11d;
    edi = &(r12+2);  // effective address
    r9 = r10;
    r9 = -r9;

class="lbl">loc_18001BE96:
    // cmp: set flags = rdi - r10
    if(SF!=OF)        goto loc_18001BEB0;
    rdx = rdi;
    rdx <<= 2;
    rax = &(rdx+r9*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001BEB4;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BEB0:
    *(class="type">uint32_t*)(rbp+rdi*4+var_30) = ebx;

class="lbl">loc_18001BEB4:
    rdi -= rsi;
    if(!SF)           goto loc_18001BE96;

class="lbl">loc_18001BEB9:
    // sub_18001B954+41B↑j ...
    rdx = *(void**)(rbp+var_38);

class="lbl">loc_18001BEBD:
    // sub_18001B954+93↑j
    r15d -= cs:dword_18002561c;
    cl = r15b;
    r8d <<= cl;
    *(void**)(rbp+var_3C) = -*(void**)(rbp+var_3C);
    eax = eax-eax-CF;
    eax &= 0x80000000;
    r8d |= eax;
    eax = cs:dword_180025620;
    r8d |= *(class="type">uint32_t*)(rbp+var_30);
    // cmp: set flags = eax - 0x40  // '@'
    if(!ZF)           goto loc_18001BEF1;
    eax = *(class="type">uint32_t*)(rbp+var_30+4);
    *(void**)(rdx+4) = r8d;
    *(void**)(rdx) = eax;
    goto loc_18001BEF9;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BEF1:
    // cmp: set flags = eax - 0x20  // ' '
    if(!ZF)           goto loc_18001BEF9;
    *(void**)(rdx) = r8d;

class="lbl">loc_18001BEF9:
    // sub_18001B954+5A0↑j
    eax = ebx;
    rcx = *(void**)(rbp+var_10);
    rcx ^= rsp;  // StackCookie
    __security_check_cookie();
    rbx = *(void**)(rsp+0x60+arg_10);
    rsp += 0x60;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18001B954
    // [SUB_18001B954] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001BF1F:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================

    // Attributes: bp-based frame

    // DATA XREF: .pdata:000000018002BE10↓o


    // __unwind { // __GSHandlerCheck
    *(void**)(rsp-0x38+arg_10) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp-=8; *(class="type">uint64_t*)rsp=rsi;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp-=8; *(class="type">uint64_t*)rsp=r12;
    rsp-=8; *(class="type">uint64_t*)rsp=r13;
    rsp-=8; *(class="type">uint64_t*)rsp=r14;
    rsp-=8; *(class="type">uint64_t*)rsp=r15;
    rbp = rsp;
    rsp -= 0x60;
    rax = cs:qword_180024eb8;
    rax ^= rsp;
    *(void**)(rbp+var_10) = rax;
    eax = *(class="type">uint16_t*)(rcx+0x0A);
    ebx = 0;  // xor self
    r15d = 0x1F;
    edi = eax;
    eax &= 0x8000;
    *(void**)(rbp+var_38) = rdx;
    *(void**)(rbp+var_3C) = eax;
    eax = *(void**)(rcx+6);
    edi &= 0x7FFF;
    *(class="type">uint32_t*)(rbp+var_30) = eax;
    eax = *(void**)(rcx+2);
    edi -= 0x3FFF;
    *(class="type">uint32_t*)(rbp+var_30+4) = eax;
    eax = *(class="type">uint16_t*)(rcx);
    esi = &(rbx+1);  // effective address
    eax <<= 0x10;
    r12d = &(r15-0x1C);  // effective address
    *(void**)(rbp+var_28) = eax;
    // cmp: set flags = edi - 0x0FFFFC001
    if(!ZF)           goto loc_18001BFB8;
    r8d = ebx;
    eax = ebx;

class="lbl">loc_18001BF94:
    // cmp: set flags = *(uint32_t*)(rbp+rax*4+var_30) - ebx
    if(!ZF)           goto loc_18001BFA7;
    rax += rsi;
    // cmp: set flags = rax - r12
    if(SF!=OF)        goto loc_18001BF94;
    goto loc_18001C489;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BFA7:
    *(void**)(rbp+var_30) = rbx;
    *(void**)(rbp+var_28) = ebx;
    ebx = 2;
    goto loc_18001C489;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001BFB8:
    r9d = cs:dword_180025630;
    rcx = &(rbp+var_30);  // effective address
    r11d = r15d;
    rax = *(void**)(rcx);
    r14d |= 0x0FFFFFFFF;
    *(void**)(rbp+var_40) = edi;
    *(void**)(rbp+var_20) = rax;
    eax = *(void**)(rcx+8);
    r13d = ebx;
    *(void**)(rbp+var_18) = eax;
    eax = r9d;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    r10d = eax;
    eax &= r15d;
    eax -= edx;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    r11d -= eax;
    rax = r10d;
    ecx = *(class="type">uint32_t*)(rbp+rax*4+var_30);
    CF = (ecx>>r11d)&1;
    if(!CF)          goto loc_18001C09B;
    ecx = r11d;
    eax = r14d;
    r8 = r10d;
    eax <<= cl;
    eax = ~eax;
    // test: set flags = *(uint32_t*)(rbp+r8*4+var_30) & eax
    if(!ZF)           goto loc_18001C032;
    eax = &(rsi+r8);  // effective address
    rax=(class="type">int64_t)(class="type">int32_t)eax;
    goto loc_18001C02B;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C022:
    // cmp: set flags = *(uint32_t*)(rbp+rax*4+var_30) - ebx
    if(!ZF)           goto loc_18001C032;
    rax += rsi;

class="lbl">loc_18001C02B:
    // cmp: set flags = rax - r12
    if(SF!=OF)        goto loc_18001C022;
    goto loc_18001C09B;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C032:
    // sub_18001BF20+106↑j
    eax = &(r9-1);  // effective address
    ecx = r15d;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    r8d = eax;
    eax &= r15d;
    eax -= edx;
    r8d = (class="type">int64_t)r8d >> 5;  // arithmetic
    edx = esi;
    ecx -= eax;
    r9 = r8d;
    eax = *(class="type">uint32_t*)(rbp+r9*4+var_30);
    edx <<= cl;
    ecx = &(rax+rdx);  // effective address
    // cmp: set flags = ecx - eax
    if(CF)           goto loc_18001C064;
    // cmp: set flags = ecx - edx
    if(!CF)          goto loc_18001C067;

class="lbl">loc_18001C064:
    r13d = esi;

class="lbl">loc_18001C067:
    r8d -= esi;
    *(class="type">uint32_t*)(rbp+r9*4+var_30) = ecx;
    rdx = r8d;
    if(SF)            goto loc_18001C09B;

class="lbl">loc_18001C074:
    // test: set flags = r13d & r13d
    if(ZF)            goto loc_18001C09B;
    eax = *(class="type">uint32_t*)(rbp+rdx*4+var_30);
    r13d = ebx;
    r8d = &(rax+1);  // effective address
    // cmp: set flags = r8d - eax
    if(CF)           goto loc_18001C08E;
    // cmp: set flags = r8d - esi
    if(!CF)          goto loc_18001C091;

class="lbl">loc_18001C08E:
    r13d = esi;

class="lbl">loc_18001C091:
    *(class="type">uint32_t*)(rbp+rdx*4+var_30) = r8d;
    rdx -= rsi;
    if(!SF)           goto loc_18001C074;

class="lbl">loc_18001C09B:
    // sub_18001BF20+110↑j ...
    ecx = r11d;
    eax = r14d;
    eax <<= cl;
    rcx = r10d;
    *(class="type">uint32_t*)(rbp+rcx*4+var_30) &= eax;
    eax = &(r10+1);  // effective address
    rdx = eax;
    // cmp: set flags = rdx - r12
    if(SF==OF)        goto loc_18001C0CC;
    rcx = &(rbp+rdx*4+var_30);  // effective address  // void *
    r8 = r12;
    r8 -= rdx;
    edx = 0;  // xor self  // Val
    r8 <<= 2;  // Size
    memset();

class="lbl">loc_18001C0CC:
    // test: set flags = r13d & r13d
    if(ZF)            goto loc_18001C0D3;
    edi += esi;

class="lbl">loc_18001C0D3:
    edx = cs:dword_18002562c;
    eax = edx;
    eax -= cs:dword_180025630;
    // cmp: set flags = edi - eax
    if(SF==OF)        goto loc_18001C0F9;
    *(void**)(rbp+var_30) = rbx;
    *(void**)(rbp+var_28) = ebx;
    r8d = ebx;
    ebx = 2;
    goto loc_18001C485;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C0F9:
    // cmp: set flags = edi - edx
    if(!ZF&&SF==OF)   goto loc_18001C340;
    edx -= *(void**)(rbp+var_40);
    rax = &(rbp+var_20);  // effective address
    edi = r14d;
    rcx = *(void**)(rax);
    r9d = ebx;
    r8 = &(rbp+var_30);  // effective address
    *(void**)(rbp+var_30) = rcx;
    ecx = *(void**)(rax+8);
    eax = edx;
    edx=(eax>>31)?0xFFFFFFFF:0;
    *(void**)(rbp+var_28) = ecx;
    r10 = r12;
    edx &= r15d;
    eax += edx;
    r11d = eax;
    eax &= r15d;
    r15d = 0x20;  // ' '
    eax -= edx;
    r11d = (class="type">int64_t)r11d >> 5;  // arithmetic
    ecx = eax;
    r13d = eax;
    edi <<= cl;
    r15d -= eax;
    edi = ~edi;

class="lbl">loc_18001C148:
    edx = *(void**)(r8);
    ecx = r13d;
    eax = edx;
    edx >>= cl;  // logical
    ecx = r15d;
    edx |= r9d;
    eax &= edi;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r8) = edx;
    r8 += 4;
    r9d = *(void**)(rbp+var_40);
    r9d <<= cl;
    r10 -= rsi;
    if(!ZF)           goto loc_18001C148;
    edi = &(r10+2);  // effective address
    r10 = r11d;
    r9 = r10;
    r8d = edi;
    r9 = -r9;

class="lbl">loc_18001C180:
    // cmp: set flags = r8 - r10
    if(SF!=OF)        goto loc_18001C19A;
    rdx = r8;
    rdx <<= 2;
    rax = &(rdx+r9*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001C19F;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C19A:
    *(class="type">uint32_t*)(rbp+r8*4+var_30) = ebx;

class="lbl">loc_18001C19F:
    r8 -= rsi;
    if(!SF)           goto loc_18001C180;
    r9d = cs:dword_180025630;
    r13d = 0x1F;
    eax = r9d;
    r11d = r13d;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r13d;
    eax += edx;
    r10d = eax;
    eax &= r13d;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    eax -= edx;
    r15 = r10d;
    r11d -= eax;
    ecx = *(class="type">uint32_t*)(rbp+r15*4+var_30);
    CF = (ecx>>r11d)&1;
    if(!CF)          goto loc_18001C275;
    ecx = r11d;
    eax = r14d;
    r8 = r10d;
    eax <<= cl;
    eax = ~eax;
    // test: set flags = *(uint32_t*)(rbp+r8*4+var_30) & eax
    if(!ZF)           goto loc_18001C20A;
    eax = &(rsi+r8);  // effective address
    rax=(class="type">int64_t)(class="type">int32_t)eax;
    goto loc_18001C203;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C1FA:
    // cmp: set flags = *(uint32_t*)(rbp+rax*4+var_30) - ebx
    if(!ZF)           goto loc_18001C20A;
    rax += rsi;

class="lbl">loc_18001C203:
    // cmp: set flags = rax - r12
    if(SF!=OF)        goto loc_18001C1FA;
    goto loc_18001C275;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C20A:
    // sub_18001BF20+2DE↑j
    eax = &(r9-1);  // effective address
    ecx = r13d;
    r9d = esi;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r13d;
    eax += edx;
    r8d = eax;
    eax &= r13d;
    eax -= edx;
    r8d = (class="type">int64_t)r8d >> 5;  // arithmetic
    ecx -= eax;
    r13 = r8d;
    eax = *(class="type">uint32_t*)(rbp+r13*4+var_30);
    r9d <<= cl;
    ecx = ebx;
    edx = &(rax+r9);  // effective address
    // cmp: set flags = edx - eax
    if(CF)           goto loc_18001C242;
    // cmp: set flags = edx - r9d
    if(!CF)          goto loc_18001C244;

class="lbl">loc_18001C242:
    ecx = esi;

class="lbl">loc_18001C244:
    r8d -= esi;
    *(class="type">uint32_t*)(rbp+r13*4+var_30) = edx;
    rdx = r8d;
    if(SF)            goto loc_18001C275;

class="lbl">loc_18001C251:
    // test: set flags = ecx & ecx
    if(ZF)            goto loc_18001C275;
    eax = *(class="type">uint32_t*)(rbp+rdx*4+var_30);
    ecx = ebx;
    r8d = &(rax+1);  // effective address
    // cmp: set flags = r8d - eax
    if(CF)           goto loc_18001C269;
    // cmp: set flags = r8d - esi
    if(!CF)          goto loc_18001C26B;

class="lbl">loc_18001C269:
    ecx = esi;

class="lbl">loc_18001C26B:
    *(class="type">uint32_t*)(rbp+rdx*4+var_30) = r8d;
    rdx -= rsi;
    if(!SF)           goto loc_18001C251;

class="lbl">loc_18001C275:
    // sub_18001BF20+2E8↑j ...
    ecx = r11d;
    eax = r14d;
    eax <<= cl;
    *(class="type">uint32_t*)(rbp+r15*4+var_30) &= eax;
    eax = &(r10+1);  // effective address
    rdx = eax;
    // cmp: set flags = rdx - r12
    if(SF==OF)        goto loc_18001C2A4;
    rcx = &(rbp+rdx*4+var_30);  // effective address  // void *
    r8 = r12;
    r8 -= rdx;
    edx = 0;  // xor self  // Val
    r8 <<= 2;  // Size
    memset();

class="lbl">loc_18001C2A4:
    eax = cs:dword_180025634;
    r15d = 0x1F;
    r9d = ebx;
    eax++;
    r13d = &(r15+1);  // effective address
    r8 = &(rbp+var_30);  // effective address
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    r10d = eax;
    eax &= r15d;
    eax -= edx;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    ecx = eax;
    r11d = eax;
    r14d <<= cl;
    r13d -= eax;
    r14d = ~r14d;

class="lbl">loc_18001C2DD:
    edx = *(void**)(r8);
    ecx = r11d;
    eax = edx;
    edx >>= cl;  // logical
    ecx = r13d;
    edx |= r9d;
    eax &= r14d;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r8) = edx;
    r8 += 4;
    r9d = *(void**)(rbp+var_40);
    r9d <<= cl;
    r12 -= rsi;
    if(!ZF)           goto loc_18001C2DD;
    r10 = r10d;
    r8 = rdi;
    r9 = r10;
    r9 = -r9;

class="lbl">loc_18001C312:
    // cmp: set flags = r8 - r10
    if(SF!=OF)        goto loc_18001C32C;
    rdx = r8;
    rdx <<= 2;
    rax = &(rdx+r9*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001C331;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C32C:
    *(class="type">uint32_t*)(rbp+r8*4+var_30) = ebx;

class="lbl">loc_18001C331:
    r8 -= rsi;
    if(!SF)           goto loc_18001C312;
    r8d = ebx;
    ebx = edi;
    goto loc_18001C485;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C340:
    eax = cs:dword_180025634;
    edx=(eax>>31)?0xFFFFFFFF:0;
    edx &= r15d;
    eax += edx;
    // cmp: set flags = edi - cs:dword_180025628
    if(SF!=OF)        goto loc_18001C3F7;
    r10d = eax;
    eax &= r15d;
    edi = 0x20;  // ' '
    eax -= edx;
    *(void**)(rbp+var_30) = rbx;
    CF=(*(class="type">uint32_t*)(rbp+var_30)>>0x1F)&1; *(class="type">uint32_t*)(rbp+var_30)|=(1ULL<<0x1F);
    ecx = eax;
    r10d = (class="type">int64_t)r10d >> 5;  // arithmetic
    *(void**)(rbp+var_28) = ebx;
    r14d <<= cl;
    r11d = eax;
    r9d = ebx;
    r14d = ~r14d;
    edi -= eax;
    r8 = &(rbp+var_30);  // effective address

class="lbl">loc_18001C389:
    edx = *(void**)(r8);
    ecx = r11d;
    eax = edx;
    edx >>= cl;  // logical
    ecx = edi;
    edx |= r9d;
    eax &= r14d;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r8) = edx;
    r8 += 4;
    r9d = *(void**)(rbp+var_40);
    r9d <<= cl;
    r12 -= rsi;
    if(!ZF)           goto loc_18001C389;
    r9 = r10d;
    edi = &(r12+2);  // effective address
    r8 = r9;
    r8 = -r8;

class="lbl">loc_18001C3BF:
    // cmp: set flags = rdi - r9
    if(SF!=OF)        goto loc_18001C3D9;
    rdx = rdi;
    rdx <<= 2;
    rax = &(rdx+r8*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001C3DD;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C3D9:
    *(class="type">uint32_t*)(rbp+rdi*4+var_30) = ebx;

class="lbl">loc_18001C3DD:
    rdi -= rsi;
    if(!SF)           goto loc_18001C3BF;
    r8d = cs:dword_18002563c;
    ebx = esi;
    r8d += cs:dword_180025628;
    goto loc_18001C485;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C3F7:
    r8d = cs:dword_18002563c;
    CF=(*(class="type">uint32_t*)(rbp+var_30)>>0x1F)&1; *(class="type">uint32_t*)(rbp+var_30)&=~(1ULL<<0x1F);
    r11d = eax;
    eax &= r15d;
    r8d += edi;
    r13d = 0x20;  // ' '
    eax -= edx;
    r11d = (class="type">int64_t)r11d >> 5;  // arithmetic
    r10d = ebx;
    ecx = eax;
    edi = eax;
    r9 = &(rbp+var_30);  // effective address
    r14d <<= cl;
    r13d -= eax;
    r14d = ~r14d;

class="lbl">loc_18001C42C:
    edx = *(void**)(r9);
    ecx = edi;
    eax = edx;
    edx >>= cl;  // logical
    ecx = r13d;
    edx |= r10d;
    eax &= r14d;
    *(void**)(rbp+var_40) = eax;
    *(void**)(r9) = edx;
    r9 += 4;
    r10d = *(void**)(rbp+var_40);
    r10d <<= cl;
    r12 -= rsi;
    if(!ZF)           goto loc_18001C42C;
    r10 = r11d;
    edi = &(r12+2);  // effective address
    r9 = r10;
    r9 = -r9;

class="lbl">loc_18001C462:
    // cmp: set flags = rdi - r10
    if(SF!=OF)        goto loc_18001C47C;
    rdx = rdi;
    rdx <<= 2;
    rax = &(rdx+r9*4);  // effective address
    ecx = *(class="type">uint32_t*)(rbp+rax+var_30);
    *(class="type">uint32_t*)(rbp+rdx+var_30) = ecx;
    goto loc_18001C480;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C47C:
    *(class="type">uint32_t*)(rbp+rdi*4+var_30) = ebx;

class="lbl">loc_18001C480:
    rdi -= rsi;
    if(!SF)           goto loc_18001C462;

class="lbl">loc_18001C485:
    // sub_18001BF20+41B↑j ...
    rdx = *(void**)(rbp+var_38);

class="lbl">loc_18001C489:
    // sub_18001BF20+93↑j
    r15d -= cs:dword_180025634;
    cl = r15b;
    r8d <<= cl;
    *(void**)(rbp+var_3C) = -*(void**)(rbp+var_3C);
    eax = eax-eax-CF;
    eax &= 0x80000000;
    r8d |= eax;
    eax = cs:dword_180025638;
    r8d |= *(class="type">uint32_t*)(rbp+var_30);
    // cmp: set flags = eax - 0x40  // '@'
    if(!ZF)           goto loc_18001C4BD;
    eax = *(class="type">uint32_t*)(rbp+var_30+4);
    *(void**)(rdx+4) = r8d;
    *(void**)(rdx) = eax;
    goto loc_18001C4C5;
    // ---------------------------------------------------------------------------

class="lbl">loc_18001C4BD:
    // cmp: set flags = eax - 0x20  // ' '
    if(!ZF)           goto loc_18001C4C5;
    *(void**)(rdx) = r8d;

class="lbl">loc_18001C4C5:
    // sub_18001BF20+5A0↑j
    eax = ebx;
    rcx = *(void**)(rbp+var_10);
    rcx ^= rsp;  // StackCookie
    __security_check_cookie();
    rbx = *(void**)(rsp+0x60+arg_10);
    rsp += 0x60;
    r15=*(class="type">uint64_t*)rsp; rsp+=8;
    r14=*(class="type">uint64_t*)rsp; rsp+=8;
    r13=*(class="type">uint64_t*)rsp; rsp+=8;
    r12=*(class="type">uint64_t*)rsp; rsp+=8;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    rsi=*(class="type">uint64_t*)rsp; rsp+=8;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // } // starts at 18001BF20
    // [SUB_18001BF20] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001C4EB:
    // [ALIGN] 4
    // [00000861 BYTES: COLLAPSED FUNCTION __strgtold12_l. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001CD4D:
    // [ALIGN] 0x10
    // [00000AAA BYTES: COLLAPSED FUNCTION $I10_OUTPUT. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001D7FA:
    // [ALIGN] 4
    // [0000003B BYTES: COLLAPSED FUNCTION __initconout. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001D837:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    // .pdata:000000018002BE40↓o
    rsp -= 0x28;
    rcx = cs:hobject;  // hObject
    // cmp: set flags = rcx - 0x0FFFFFFFFFFFFFFFF
    if(ZF)            goto loc_18001D855;
    // cmp: set flags = rcx - 0x0FFFFFFFFFFFFFFFE
    if(ZF)            goto loc_18001D855;
    cs:closehandle();

class="lbl">loc_18001D855:
    // sub_18001D838+15↑j
    rsp += 0x28;
    return rax;
    // [SUB_18001D838] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001D85A:
    // [ALIGN] 4
    // [0000007A BYTES: COLLAPSED FUNCTION _fclose_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001D8D6:
    // [ALIGN] 8
    // [00000066 BYTES: COLLAPSED FUNCTION fclose. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001D93E:
    // [ALIGN] 0x20
    // [000000D7 BYTES: COLLAPSED FUNCTION _commit. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001DA17:
    // [ALIGN] 8
    // [00000070 BYTES: COLLAPSED FUNCTION _strdup. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000227 BYTES: COLLAPSED FUNCTION __mtold12. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001DCAF:
    // [ALIGN] 0x10
    // [000000BC BYTES: COLLAPSED FUNCTION _close_nolock. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000C3 BYTES: COLLAPSED FUNCTION _close. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001DE2F:
    // [ALIGN] 0x10
    // [00000037 BYTES: COLLAPSED FUNCTION _freebuf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001DE67:
    // [ALIGN] 8
    // [00000006 BYTES: COLLAPSED FUNCTION RtlUnwindEx. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000006 BYTES: COLLAPSED FUNCTION RtlVirtualUnwind. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000006 BYTES: COLLAPSED FUNCTION RtlLookupFunctionEntry. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000006 BYTES: COLLAPSED FUNCTION RtlPcToFileHeader. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================

    // Attributes: thunk

    goto sub_18000FD10;
    // [SUB_18001DE80] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_1800045E8);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001DE88] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001DEA9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================

    // Attributes: noreturn

    // sub_18000AA3C+4C↑p ...

    // [PEXCEPTIONOBJECT=] qword ptr -0x28

    rsp -= 0x48;
    *(void**)(rsp+0x48+arg_0) = rcx;
    rdx = &(rsp+0x48+arg_0);  // effective address  // char **
    rcx = &(rsp+0x48+pExceptionObject);  // effective address  // this
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    r11 = &(off_180004600);  // effective address
    rdx = (const char*)stru_180022B68;  // pThrowInfo
    rcx = &(rsp+0x48+pExceptionObject);  // effective address  // pExceptionObject
    *(void**)(rsp+0x48+pExceptionObject) = r11;
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // [SUB_18001DEAC] endp

class="lbl">algn_18001DEE2:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_180004600);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001DEE4] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001DF05:
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================

    // Attributes: noreturn

    // std::string::erase(unsigned __int64,unsigned __int64)+23↑p
    // DATA XREF: ...

    // [PEXCEPTIONOBJECT=] qword ptr -0x28

    rsp -= 0x48;
    *(void**)(rsp+0x48+arg_0) = rcx;
    rdx = &(rsp+0x48+arg_0);  // effective address  // char **
    rcx = &(rsp+0x48+pExceptionObject);  // effective address  // this
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    r11 = &(off_180004618);  // effective address
    rdx = (const char*)stru_180022BD0;  // pThrowInfo
    rcx = &(rsp+0x48+pExceptionObject);  // effective address  // pExceptionObject
    *(void**)(rsp+0x48+pExceptionObject) = r11;
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // [SUB_18001DF08] endp

class="lbl">algn_18001DF3E:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_180004618);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001DF40] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001DF61:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18001DF64(void *Block)
    // X:off_180004600↑o ...


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    ebx = edx;
    rdi = rcx;
    sub_18000FD10();
    // test: set flags = bl & 1
    if(ZF)            goto loc_18001DF85;
    rcx = rdi;  // Block
    j_free();

class="lbl">loc_18001DF85:
    rax = rdi;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001DF64] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001DF93:
    // [ALIGN] 4
    // [000000EA BYTES: COLLAPSED FUNCTION _GetEstablisherFrame(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,unsigned __int64 *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E07E:
    // [ALIGN] 0x20
    // [00000015 BYTES: COLLAPSED FUNCTION _GetImageBase. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E095:
    // [ALIGN] 8
    // [00000015 BYTES: COLLAPSED FUNCTION _GetThrowImageBase. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E0AD:
    // [ALIGN] 0x10
    // [0000001B BYTES: COLLAPSED FUNCTION _SetImageBase. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E0CB:
    // [ALIGN] 4
    // [0000001B BYTES: COLLAPSED FUNCTION _SetThrowImageBase. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E0E7:
    // [ALIGN] 8
    // [000000AB BYTES: COLLAPSED FUNCTION __FrameUnwindToEmptyState(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E193:
    // [ALIGN] 4
    // [00000087 BYTES: COLLAPSED FUNCTION __CxxFrameHandler3. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E21B:
    // [ALIGN] 4
    // [000000A1 BYTES: COLLAPSED FUNCTION __SehTransFilter(_EXCEPTION_POINTERS *,EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E2BD:
    // [ALIGN] 0x20
    // [00000051 BYTES: COLLAPSED FUNCTION _CallSETranslator. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E311:
    // [ALIGN] 4
    // [00000129 BYTES: COLLAPSED FUNCTION _GetRangeOfTrysToCheck(unsigned __int64 *,_s_FuncInfo const *,int,int,uint *,uint *,_xDISPATCHER_CONTEXT *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E43D:
    // [ALIGN] 0x20
    // [00000043 BYTES: COLLAPSED FUNCTION _CreateFrameInfo. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E483:
    // [ALIGN] 4
    // [00000032 BYTES: COLLAPSED FUNCTION _IsExceptionObjectToBeDestroyed. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E4B6:
    // [ALIGN] 8
    // [0000005E BYTES: COLLAPSED FUNCTION _FindAndUnlinkFrame. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E516:
    // [ALIGN] 8
    // [000000F0 BYTES: COLLAPSED FUNCTION _UnwindNestedFrames. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000D4 BYTES: COLLAPSED FUNCTION FindSITargetTypeInstance(_s_RTTICompleteObjectLocator const *,TypeDescriptor *,TypeDescriptor *,unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000179 BYTES: COLLAPSED FUNCTION FindMITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,__int64,TypeDescriptor *,unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001E855:
    // [ALIGN] 8
    // [00000275 BYTES: COLLAPSED FUNCTION FindVITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,__int64,TypeDescriptor *,unsigned __int64). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001EACD:
    // [ALIGN] 0x10
    // [0000017F BYTES: COLLAPSED FUNCTION __RTDynamicCast. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001EC4F:
    // [ALIGN] 0x10
    // [0000008A BYTES: COLLAPSED FUNCTION __StateFromIp(_s_FuncInfo const *,_xDISPATCHER_CONTEXT *,__int64). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001ECDA:
    // [ALIGN] 4
    // [00000008 BYTES: COLLAPSED FUNCTION __StateFromControlPc(_s_FuncInfo const *,_xDISPATCHER_CONTEXT *). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000027 BYTES: COLLAPSED FUNCTION __GetCurrentState(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001ED0B:
    // [ALIGN] 4
    // [0000000C BYTES: COLLAPSED FUNCTION __SetState(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000003B BYTES: COLLAPSED FUNCTION __SetUnwindTryBlock(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001ED53:
    // [ALIGN] 4
    // [00000029 BYTES: COLLAPSED FUNCTION __GetUnwindTryBlock(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001ED7D:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    rax = &(off_180006368);  // effective address
    *(void**)(rcx) = rax;
    goto sub_18000FD10;
    // [SUB_18001ED80] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // __int64 __fastcall sub_18001ED90(void *Block)
    // .pdata:000000018002BFFC↓o


    *(void**)(rsp+arg_0) = rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rdi;
    rsp -= 0x20;
    rax = &(off_180006368);  // effective address
    ebx = edx;
    rdi = rcx;
    *(void**)(rcx) = rax;
    sub_18000FD10();
    // test: set flags = bl & 1
    if(ZF)            goto loc_18001EDBB;
    rcx = rdi;  // Block
    j_free();

class="lbl">loc_18001EDBB:
    rax = rdi;
    rbx = *(void**)(rsp+0x28+arg_0);
    rsp += 0x20;
    rdi=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001ED90] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001EDC9:
    // [ALIGN] 4
    // [00000123 BYTES: COLLAPSED FUNCTION __TypeMatch. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001EEEF:
    // [ALIGN] 0x10
    // [00000051 BYTES: COLLAPSED FUNCTION __FrameUnwindFilter. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001EF41:
    // [ALIGN] 4
    // [00000189 BYTES: COLLAPSED FUNCTION __FrameUnwindToState. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001F0CD:
    // [ALIGN] 0x10
    // [00000042 BYTES: COLLAPSED FUNCTION __DestructExceptionObject. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001F112:
    // [ALIGN] 4
    // [00000023 BYTES: COLLAPSED FUNCTION __AdjustPointer. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 8
    // [000000D3 BYTES: COLLAPSED FUNCTION IsInExceptionSpec(EHExceptionRecord *,_s_ESTypeList const *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001F20B:
    // [ALIGN] 4
    // [00000212 BYTES: COLLAPSED FUNCTION __CxxCallCatchBlock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001F41E:
    // [ALIGN] 0x20
    // [00000202 BYTES: COLLAPSED FUNCTION __BuildCatchObjectHelper. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001F622:
    // [ALIGN] 4
    // [000000B0 BYTES: COLLAPSED FUNCTION __BuildCatchObject. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000000C1 BYTES: COLLAPSED FUNCTION CatchIt(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,_s_HandlerType const *,_s_CatchableType const *,_s_TryBlockMapEntry const *,int,unsigned __int64 *,uchar,uchar). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001F795:
    // [ALIGN] 8
    // [00000238 BYTES: COLLAPSED FUNCTION FindHandlerForForeignException(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int,int,unsigned __int64 *). PRESS CTRL-NUMPAD+ TO EXPAND]
    // [000004CD BYTES: COLLAPSED FUNCTION FindHandler(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,uchar,int,unsigned __int64 *). PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18001FE9D:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp -= 0x20;
    rbx = rcx;
    ??0exception@std@@QEAA@AEBV01@@Z();  // std::exception::exception(std::exception const &)
    r11 = &(off_180006368);  // effective address
    *(void**)(rbx) = r11;
    rax = rbx;
    rsp += 0x20;
    rbx=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18001FEA0] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18001FEC1:
    // [ALIGN] 4
    // [00000225 BYTES: COLLAPSED FUNCTION __InternalCxxFrameHandler. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800200E9:
    // [ALIGN] 0x20
    // [00000040 BYTES: COLLAPSED FUNCTION _CallSettingFrame. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000008 BYTES: COLLAPSED FUNCTION _GetNextInstrOffset. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000009 BYTES: COLLAPSED FUNCTION unknown_libname_28. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [ALIGN] 0x20
    // [00000016 BYTES: COLLAPSED CHUNK OF FUNCTION _onexit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000026 BYTES: COLLAPSED CHUNK OF FUNCTION _CRT_INIT. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001E BYTES: COLLAPSED CHUNK OF FUNCTION __DllMainCRTStartup. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000002C BYTES: COLLAPSED CHUNK OF FUNCTION _ctrlfp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION _freefls. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180020201] db 5 dup(0x0CC)  // DATA XREF: .pdata:000000018002C0E0↓o
    // ---------------------------------------------------------------------------
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION _freefls. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION unknown_libname_27. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION _setmbcp. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION __updatetlocinfo. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000024 BYTES: COLLAPSED CHUNK OF FUNCTION doexit. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION _dupenv_s. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_1800202B1:
    // [ALIGN] 0x20
    // [00000022 BYTES: COLLAPSED CHUNK OF FUNCTION _IsNonwritableInCurrentImage. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001E BYTES: COLLAPSED CHUNK OF FUNCTION _mtinitlocknum. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001E BYTES: COLLAPSED CHUNK OF FUNCTION raise. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000019 BYTES: COLLAPSED CHUNK OF FUNCTION _write. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION __lock_fhandle. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION _fcloseall. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------
    // [00000028 BYTES: COLLAPSED CHUNK OF FUNCTION flsall. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180020395] db 8 dup(0x0CC)  // DATA XREF: .pdata:000000018002C17C↓o
    // ---------------------------------------------------------------------------
    // [0000001B BYTES: COLLAPSED CHUNK OF FUNCTION flsall. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [0000001A BYTES: COLLAPSED CHUNK OF FUNCTION fclose. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000019 BYTES: COLLAPSED CHUNK OF FUNCTION _close. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    // .pdata:000000018002C1A0↓o
    rcx = *(void**)(rdx+0x40);
    goto sub_18000FD10;
    // [SUB_1800203EB] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    //   cleanup() // owned by 180020414
    //   cleanup() // owned by 180020422
    //   cleanup() // owned by 180020448
    //   cleanup() // owned by 18002046C
    rcx = &(rdx+0x30);  // effective address
    goto sub_18000FD10;
    // [SUB_1800203F7] endp

    // ---------------------------------------------------------------------------
    // [DB] 4 dup(0x0CC)

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // X:0000000180021E84↓o ...


    // __unwind { // __CxxFrameHandler3
    //   catch(...) // owned by 18002043F
    //   catch(...) // owned by 18002047D
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;

class="lbl">loc_180020414:
    //   try {
    rcx = *(void**)(rbp+0x98);
    *(void**)(rbp+0x98) = rcx;
    //   } // starts at 180020414

class="lbl">loc_180020422:
    //   try {
    eax = 0;  // xor self
    rcx++;  // Size
    if(!ZF)           goto loc_18002042B;
    goto loc_18002043B;
    // ---------------------------------------------------------------------------

class="lbl">loc_18002042B:
    // cmp: set flags = rcx - 0x0FFFFFFFFFFFFFFFF
    if(!CF&&!ZF)      goto loc_180020448;
    ??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    // test: set flags = rax & rax
    if(ZF)            goto loc_180020448;

class="lbl">loc_18002043B:
    *(void**)(rbp+0x20) = rax;
    //   } // starts at 180020422

class="lbl">loc_18002043F:
    //   try {
            rax = &(loc_18000AEDE);  // effective address
    goto loc_18002047D;
    //   } // starts at 18002043F
    // ---------------------------------------------------------------------------

class="lbl">loc_180020448:
    // sub_180020407+32↑j
    // DATA XREF: ...
    //   try {
    *(class="type">uint64_t*)(rbp+0x98) &= 0;
    rdx = &(rbp+0x98);  // effective address  // char **
    rcx = &(rbp+0x48);  // effective address  // this
    ??0exception@std@@QEAA@AEBQEBD@Z();  // std::exception::exception(char const * const &)
    // nop
    //   } // starts at 180020448

class="lbl">loc_180020461:
    //   try {
    rax = &(off_180002128);  // effective address
    *(void**)(rbp+0x48) = rax;
    //   } // starts at 180020461

class="lbl">loc_18002046C:
    //   try {                               ; pThrowInfo
    rdx = &(pThrowInfo);  // effective address
    rcx = &(rbp+0x48);  // effective address  // pExceptionObject
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [DB] 0x90
    //   } // starts at 18002046C
    // ---------------------------------------------------------------------------

class="lbl">loc_18002047D:
    // DATA XREF: X:0000000180021EBC↓o
    //   try {
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    //   } // starts at 18002047D
    // } // starts at 180020407
    // [SUB_180020407] endp  // sp-analysis failed

    // [BYTE_180020484] db 3 dup(0x0CC)  // DATA XREF: .pdata:000000018002C1AC↓o
    // [0000000C BYTES: COLLAPSED FUNCTION unknown_libname_44. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [DB] 4 dup(0x0CC)

    // =============== S U B R O U T I N E =======================================

    // Attributes: noreturn catch_handler

    // .pdata:000000018002C1B8↓o


    // __unwind { // __CxxFrameHandler3
    //   try {
    //   catch(...) // owned by 180020422
    //   catch(...) // owned by 180020448
    //   catch(...) // owned by 180020461
    //   catch(...) // owned by 18002046C
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x28;
    rbp = rdx;
    //   } // starts at 180020497

class="lbl">loc_1800204A5:
    rbx = *(void**)(rbp+0x90);
    // cmp: set flags = *(uint64_t*)(rbx+0x18) - 0x10
    if(CF)           goto loc_1800204BB;
    rcx = *(void**)(rbx);  // Block
    j_free();

class="lbl">loc_1800204BB:
    *(class="type">uint64_t*)(rbx+0x18) = 0x0F;
    *(class="type">uint64_t*)(rbx+0x10) &= 0;
    *(class="type">uint8_t*)(rbx) = 0;
    edx = 0;  // xor self  // pThrowInfo
    ecx = 0;  // xor self  // pExceptionObject
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [DB] 0x90
    // } // starts at 180020497
    // [SUB_180020497] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    // .pdata:000000018002C1B8↓o
    rcx = *(void**)(rdx+0x40);
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_1800204D5] endp

    // [00000016 BYTES: COLLAPSED FUNCTION int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000016 BYTES: COLLAPSED FUNCTION int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180020511] db 0x0A dup(0x0CC)  // DATA XREF: .pdata:000000018002C1D0↓o

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C1DC↓o


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x30;
    rbp = rdx;
    rax = &(loc_180008537);  // effective address
    rsp += 0x30;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [ALIGN] 2
    // } // starts at 18002051B
    // [SUB_18002051B] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C1DC↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x40;
    rbp = rdx;
    rax = &(loc_18000DE4C);  // effective address
    rsp += 0x40;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 180020536
    // [SUB_180020536] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C1E8↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x40;
    rbp = rdx;
    rax = &(loc_18000D5F4);  // effective address
    rsp += 0x40;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [ALIGN] 4
    // } // starts at 180020551
    // [SUB_180020551] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C1F4↓o ...
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    rdx = *(void**)(rbp+0x60);
    rcx = *(void**)(rbp+0x28);
    nullsub_2();
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18002056C] endp

    // ---------------------------------------------------------------------------
    // [BYTE_180020588] db 4 dup(0x0CC)  // DATA XREF: .pdata:000000018002C200↓o

    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    rcx = *(void**)(rdx+0x28);
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_18002058C] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: noreturn catch_handler

    // X:000000018002223C↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x28;
    rbp = rdx;

class="lbl">loc_1800205AA:
    rbx = *(void**)(rbp+0x68);
    goto loc_1800205D9;
    // ---------------------------------------------------------------------------

class="lbl">loc_1800205B0:
    // cmp: set flags = *(uint64_t*)(rbx+0x20) - 0x10
    if(CF)           goto loc_1800205C0;
    rcx = *(void**)(rbx+8);  // Block
    j_free();

class="lbl">loc_1800205C0:
    *(class="type">uint64_t*)(rbx+0x20) = 0x0F;
    *(class="type">uint64_t*)(rbx+0x18) &= 0;
    *(class="type">uint8_t*)(rbx+8) = 0;
    rbx += 0x30;  // '0'
    *(void**)(rbp+0x68) = rbx;

class="lbl">loc_1800205D9:
    // cmp: set flags = rbx - *(void**)(rbp+0x60)
    if(!ZF)           goto loc_1800205B0;
    edx = 0;  // xor self  // pThrowInfo
    ecx = 0;  // xor self  // pExceptionObject
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [DB] 0x90
    // } // starts at 18002059C
    // [SUB_18002059C] endp

class="lbl">algn_1800205E9:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    rcx = *(void**)(rdx+0x68);
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_1800205EC] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    rcx = &(rdx+0x28);  // effective address
    goto sub_18000FD10;
    // [SUB_1800205FC] endp

    // ---------------------------------------------------------------------------
    // [DB] 4 dup(0x0CC)

    // =============== S U B R O U T I N E =======================================

    // Attributes: noreturn catch_handler

    // X:00000001800222E8↓o ...


    // __unwind { // __CxxFrameHandler3
    //   try {
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    //   } // starts at 18002060C

class="lbl">loc_180020619:
    rcx = *(void**)(rbp+0x60);  // Block
    j_free();
    edx = 0;  // xor self  // pThrowInfo
    ecx = 0;  // xor self  // pExceptionObject
    _CxxThrowException();
    // ---------------------------------------------------------------------------
    // [ALIGN] 4
    // } // starts at 18002060C
    // [SUB_18002060C] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C218↓o
    //   cleanup() // owned by 18002060C
    rcx = *(void**)(rdx+0x60);
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_18002062C] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    rcx = &(rdx+0x28);  // effective address
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_18002063C] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    rcx = &(rdx+0x28);  // effective address
    goto sub_18000A938;
    // [SUB_18002064C] endp

    // ---------------------------------------------------------------------------
    // [DB] 4 dup(0x0CC)

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C224↓o
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    rdx = *(void**)(rbp+0x80);
    rcx = *(void**)(rbp+0x90);
    nullsub_2();
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18002065C] endp

    // ---------------------------------------------------------------------------
    // [BYTE_18002067E] db 0x0E dup(0x0CC)  // DATA XREF: .pdata:000000018002C224↓o

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    rcx = *(void**)(rdx+0x90);
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_18002068C] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C230↓o
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    rdx = *(void**)(rbp+0x80);
    rcx = *(void**)(rbp+0x90);
    nullsub_2();
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // [SUB_18002069C] endp

    // ---------------------------------------------------------------------------
    // [BYTE_1800206BE] db 0x0E dup(0x0CC)  // DATA XREF: .pdata:000000018002C230↓o

    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    rcx = *(void**)(rdx+0x90);
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_1800206CC] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    rcx = &(rdx+0x28);  // effective address
    rcx += 8;
    goto ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ;  // std::string::~string(void)
    // [SUB_1800206DC] endp

    // [00000016 BYTES: COLLAPSED FUNCTION int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // X:0000000180022474↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x30;
    rbp = rdx;
    rax = &(loc_180008F04);  // effective address
    rsp += 0x30;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 180020702
    // [SUB_180020702] endp

    // [0000001B BYTES: COLLAPSED FUNCTION unknown_libname_45. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C254↓o ...


    // __unwind { // __CxxFrameHandler3
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x30;
    rbp = rdx;
    rax = &(loc_18000CE58);  // effective address
    rsp += 0x30;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    // } // starts at 180020738
    // [SUB_180020738] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C260↓o
    rcx = *(void**)(rdx+0x40);  // Block
    goto j_free;
    // [SUB_180020753] endp

    // [0000001B BYTES: COLLAPSED FUNCTION unknown_libname_47. PRESS CTRL-NUMPAD+ TO EXPAND]

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // X:00000001800227F4↓o ...


    // __unwind { // __CxxFrameHandler3
    //   catch(...) // owned by 1800207A0
    //   catch(...) // owned by 1800207BA
    //   catch(...) // owned by 1800207E0
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;

class="lbl">loc_180020787:
    r9d = 0x1010;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = (const char*)aPleaseRestartA;  // "Please restart and try again. Error no."...
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop

class="lbl">loc_1800207A0:
    //   try {
    rax = &(loc_18000BE85);  // effective address
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    //   } // starts at 1800207A0
    // } // starts at 18002077A
    // [SUB_18002077A] endp

    // [BYTE_1800207AE] db 0x0C dup(0x0CC)  // DATA XREF: .pdata:000000018002C278↓o

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C284↓o


    // __unwind { // __CxxFrameHandler3
    //   try {
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    //   } // starts at 1800207BA

class="lbl">loc_1800207C7:
    r9d = 0x1010;  // uType
    r8d = 0;  // xor self  // lpCaption
    rdx = (const char*)aPleaseRestartA_0;  // "Please restart and try again. Error no."...
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop

class="lbl">loc_1800207E0:
    //   try {
    rax = &(loc_18000BE85);  // effective address
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    //   } // starts at 1800207E0
    // } // starts at 1800207BA
    // [SUB_1800207BA] endp

    // [BYTE_1800207EE] db 0x0C dup(0x0CC)  // DATA XREF: .pdata:000000018002C284↓o
    // [0000000C BYTES: COLLAPSED FUNCTION int `Concurrency::details::FairScheduleGroup::AllocateSegment(details::FairScheduleGroup::SchedulingRing *,details::location *)'::`1'::dtor$0. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [DB] 4 dup(0x0CC)

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C290↓o


    // __unwind { // __CxxFrameHandler3
    //   try {
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    //   } // starts at 18002080A

class="lbl">loc_180020817:
    //   try {                               ; uType
    r9d = 0x1010;
    r8d = 0;  // xor self  // lpCaption
    rdx = (const char*)aPleaseRestartA_1;  // "Please restart and try again. Error no."...
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop
    //   } // starts at 180020817

class="lbl">loc_180020830:
    //   try {
    rax = &(loc_18000BE85);  // effective address
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    //   } // starts at 180020830
    // } // starts at 18002080A
    // [SUB_18002080A] endp

    // [BYTE_18002083E] db 0x0C dup(0x0CC)  // DATA XREF: .pdata:000000018002C290↓o
    // [0000000C BYTES: COLLAPSED FUNCTION int `Concurrency::details::FairScheduleGroup::AllocateSegment(details::FairScheduleGroup::SchedulingRing *,details::location *)'::`1'::dtor$0. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [DB] 4 dup(0x0CC)

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C29C↓o


    // __unwind { // __CxxFrameHandler3
    //   try {
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    //   } // starts at 18002085A

class="lbl">loc_180020867:
    //   try {                               ; uType
    r9d = 0x1010;
    r8d = 0;  // xor self  // lpCaption
    rdx = (const char*)aPleaseRestartA_2;  // "Please restart and try again. Error no."...
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop
    //   } // starts at 180020867

class="lbl">loc_180020880:
    //   try {
    rax = &(loc_18000BE85);  // effective address
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [DB] 0x0CC
    //   } // starts at 180020880
    // } // starts at 18002085A
    // [SUB_18002085A] endp

    // [BYTE_18002088E] db 0x0C dup(0x0CC)  // DATA XREF: .pdata:000000018002C29C↓o

    // =============== S U B R O U T I N E =======================================

    // Attributes: catch_handler

    // .pdata:000000018002C2A8↓o


    // __unwind { // __CxxFrameHandler3
    //   try {
    *(void**)(rsp+arg_8) = rdx;
    rsp-=8; *(class="type">uint64_t*)rsp=rbp;
    rsp -= 0x20;
    rbp = rdx;
    //   } // starts at 18002089A

class="lbl">loc_1800208A7:
    //   try {                               ; uType
    r9d = 0x1010;
    r8d = 0;  // xor self  // lpCaption
    rdx = (const char*)aPleaseRestartA_3;  // "Please restart and try again. Generic e"...
    ecx = 0;  // xor self  // hWnd
    cs:messageboxw();
    // nop
    //   } // starts at 1800208A7

class="lbl">loc_1800208C0:
    rax = &(loc_18000BE85);  // effective address
    rsp += 0x20;
    rbp=*(class="type">uint64_t*)rsp; rsp+=8;
    return rax;
    // ---------------------------------------------------------------------------
    // [ALIGN] 2
    // } // starts at 18002089A
    // [SUB_18002089A] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    // .pdata:000000018002C2A8↓o
    rcx = &(Block);  // effective address
    goto sub_18000A9A8;
    // [SUB_1800208CE] endp


    // =============== S U B R O U T I N E =======================================

    // Attributes: unwind_handler

    rcx = *(void**)(rdx+0x40);  // Block
    goto j_j_free;
    // [SUB_1800208DA] endp

    // ---------------------------------------------------------------------------
    // [00000046 BYTES: COLLAPSED CHUNK OF FUNCTION _CallSETranslator. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000022 BYTES: COLLAPSED CHUNK OF FUNCTION __RTDynamicCast. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [00000016 BYTES: COLLAPSED CHUNK OF FUNCTION __FrameUnwindToState. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180020964] db 0x0A dup(0x0CC)  // DATA XREF: .pdata:000000018002C2CC↓o
    // ---------------------------------------------------------------------------
    // [00000029 BYTES: COLLAPSED CHUNK OF FUNCTION __FrameUnwindToState. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------
    // [00000018 BYTES: COLLAPSED CHUNK OF FUNCTION __DestructExceptionObject. PRESS CTRL-NUMPAD+ TO EXPAND]
    // ---------------------------------------------------------------------------
    // [000000F4 BYTES: COLLAPSED CHUNK OF FUNCTION __CxxCallCatchBlock. PRESS CTRL-NUMPAD+ TO EXPAND]
    // [BYTE_180020AA3] db 0x0C dup(0x0CC)  // DATA XREF: .pdata:000000018002C2F0↓o
    // ---------------------------------------------------------------------------
    // [0000008F BYTES: COLLAPSED CHUNK OF FUNCTION __CxxCallCatchBlock. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_180020B3E:
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029724 &= 0x0FFF00000;
    return rax;
    // [SUB_180020B40] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002972c &= 0x0FF000000;
    return rax;
    // [SUB_180020B4C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025b5c &= 0x0FF000000;
    return rax;
    // [SUB_180020B58] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025b64 &= 0x0FF000000;
    return rax;
    // [SUB_180020B64] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029734 &= 0x0FFF00000;
    return rax;
    // [SUB_180020B70] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002973c &= 0x0FF000000;
    return rax;
    // [SUB_180020B7C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025b8c &= 0x0FF000000;
    return rax;
    // [SUB_180020B88] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025b94 &= 0x0FF000000;
    return rax;
    // [SUB_180020B94] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029744 &= 0x0FFF00000;
    return rax;
    // [SUB_180020BA0] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002974c &= 0x0FF000000;
    return rax;
    // [SUB_180020BAC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025bbc &= 0x0FF000000;
    return rax;
    // [SUB_180020BB8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025bc4 &= 0x0FF000000;
    return rax;
    // [SUB_180020BC4] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029754 &= 0x0FFF00000;
    return rax;
    // [SUB_180020BD0] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002975c &= 0x0FF000000;
    return rax;
    // [SUB_180020BDC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025c54 &= 0x0FF000000;
    return rax;
    // [SUB_180020BE8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025c5c &= 0x0FF000000;
    return rax;
    // [SUB_180020BF4] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x20

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029764 &= 0x0FFF00000;
    return rax;
    // [SUB_180020C00] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002976c &= 0x0FF000000;
    return rax;
    // [SUB_180020C0C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025c84 &= 0x0FF000000;
    return rax;
    // [SUB_180020C18] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025c8c &= 0x0FF000000;
    return rax;
    // [SUB_180020C24] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // X:stru_18002285C↓o ...


    // __unwind { // __CxxFrameHandler3
    rsp -= 0x38;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    rcx = &(sub_180020FF4);  // effective address  // void (__cdecl *)()
    rsp += 0x38;
    goto atexit;
    // } // starts at 180020C30
    // [SUB_180020C30] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180020C4D:
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029794 &= 0x0FF0FFFFF;
    byte ptr cs:dword_180029794+3 = 0;
    cs:dword_180029794 &= 0x0FFF00000;
    return rax;
    // [SUB_180020C50] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_18002979c &= 0x0FF000000;
    return rax;
    // [SUB_180020C6C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025cb4 &= 0x0FF000000;
    return rax;
    // [SUB_180020C78] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025cbc &= 0x0FF000000;
    return rax;
    // [SUB_180020C84] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297a4 &= 0x0FF0FFFFF;
    byte ptr cs:dword_1800297a4+3 = 0;
    cs:dword_1800297a4 &= 0x0FFF00000;
    return rax;
    // [SUB_180020C90] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297ac &= 0x0FF000000;
    return rax;
    // [SUB_180020CAC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025ce4 &= 0x0FF000000;
    return rax;
    // [SUB_180020CB8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025cec &= 0x0FF000000;
    return rax;
    // [SUB_180020CC4] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297b4 &= 0x0FF0FFFFF;
    byte ptr cs:dword_1800297b4+3 = 0;
    cs:dword_1800297b4 &= 0x0FFF00000;
    return rax;
    // [SUB_180020CD0] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297bc &= 0x0FF000000;
    return rax;
    // [SUB_180020CEC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025d14 &= 0x0FF000000;
    return rax;
    // [SUB_180020CF8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025d1c &= 0x0FF000000;
    return rax;
    // [SUB_180020D04] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297c4 &= 0x0FF0FFFFF;
    byte ptr cs:dword_1800297c4+3 = 0;
    cs:dword_1800297c4 &= 0x0FFF00000;
    return rax;
    // [SUB_180020D10] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297cc &= 0x0FF000000;
    return rax;
    // [SUB_180020D2C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025d44 &= 0x0FF000000;
    return rax;
    // [SUB_180020D38] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025d4c &= 0x0FF000000;
    return rax;
    // [SUB_180020D44] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297d4 &= 0x0FF0FFFFF;
    byte ptr cs:dword_1800297d4+3 = 0;
    cs:dword_1800297d4 &= 0x0FFF00000;
    return rax;
    // [SUB_180020D50] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297dc &= 0x0FF000000;
    return rax;
    // [SUB_180020D6C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025d74 &= 0x0FF000000;
    return rax;
    // [SUB_180020D78] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025d7c &= 0x0FF000000;
    return rax;
    // [SUB_180020D84] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297e4 &= 0x0FF0FFFFF;
    byte ptr cs:dword_1800297e4+3 = 0;
    cs:dword_1800297e4 &= 0x0FFF00000;
    return rax;
    // [SUB_180020D90] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_1800297ec &= 0x0FF000000;
    return rax;
    // [SUB_180020DAC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025da4 &= 0x0FF000000;
    return rax;
    // [SUB_180020DB8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025dac &= 0x0FF000000;
    return rax;
    // [SUB_180020DC4] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029814 &= 0x0FF0FFFFF;
    byte ptr cs:dword_180029814+3 = 0;
    cs:dword_180029814 &= 0x0FFF00000;
    return rax;
    // [SUB_180020DD0] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_18002981c &= 0x0FF000000;
    return rax;
    // [SUB_180020DEC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025dd4 &= 0x0FF000000;
    return rax;
    // [SUB_180020DF8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025ddc &= 0x0FF000000;
    return rax;
    // [SUB_180020E04] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029824 &= 0x0FF0FFFFF;
    byte ptr cs:dword_180029824+3 = 0;
    cs:dword_180029824 &= 0x0FFF00000;
    return rax;
    // [SUB_180020E10] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_18002982c &= 0x0FF000000;
    return rax;
    // [SUB_180020E2C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e04 &= 0x0FF000000;
    return rax;
    // [SUB_180020E38] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e0c &= 0x0FF000000;
    return rax;
    // [SUB_180020E44] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029834 &= 0x0FF0FFFFF;
    byte ptr cs:dword_180029834+3 = 0;
    cs:dword_180029834 &= 0x0FFF00000;
    return rax;
    // [SUB_180020E50] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_18002983c &= 0x0FF000000;
    return rax;
    // [SUB_180020E6C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e34 &= 0x0FF000000;
    return rax;
    // [SUB_180020E78] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e3c &= 0x0FF000000;
    return rax;
    // [SUB_180020E84] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029844 &= 0x0FF0FFFFF;
    byte ptr cs:dword_180029844+3 = 0;
    cs:dword_180029844 &= 0x0FFF00000;
    return rax;
    // [SUB_180020E90] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_18002984c &= 0x0FF000000;
    return rax;
    // [SUB_180020EAC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e64 &= 0x0FF000000;
    return rax;
    // [SUB_180020EB8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e6c &= 0x0FF000000;
    return rax;
    // [SUB_180020EC4] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    cs:dword_180029854 &= 0x0FF0FFFFF;
    byte ptr cs:dword_180029854+3 = 0;
    cs:dword_180029854 &= 0x0FFF00000;
    return rax;
    // [SUB_180020ED0] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_180029864 &= 0x0FF000000;
    return rax;
    // [SUB_180020EEC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e94 &= 0x0FF000000;
    return rax;
    // [SUB_180020EF8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025e9c &= 0x0FF000000;
    return rax;
    // [SUB_180020F04] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 0x10

    // =============== S U B R O U T I N E =======================================


    // X:stru_18002287C↓o ...


    // __unwind { // __CxxFrameHandler3
    rsp -= 0x38;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    ecx = 0x68000;  // Size
    j_??2@YAPEAX_K@Z();  // operator new(unsigned __int64)
    *(void**)(rsp+0x38+arg_0) = rax;
    cs:qword_180029858 = rax;
    ecx = 0;  // xor self
    edx = ecx;

class="lbl">loc_180020F37:
    *(class="type">uint32_t*)(rdx+rax+0x0C8) = 0x461C3F9A;
    *(void**)(rdx+rax+0x0C4) = ecx;
    ecx++;
    rdx += 0x0D0;
    // cmp: set flags = ecx - 0x800
    if(!CF)          goto loc_180020F63;
    rax = cs:qword_180029858;
    goto loc_180020F37;
    // ---------------------------------------------------------------------------

class="lbl">loc_180020F63:
    rcx = &(sub_18002100C);  // effective address  // void (__cdecl *)()
    rsp += 0x38;
    goto atexit;
    // } // starts at 180020F10
    // [SUB_180020F10] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_180020F73:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002986c &= 0x0FF0FFFFF;
    byte ptr cs:dword_18002986c+3 = 0;
    cs:dword_18002986c &= 0x0FFF00000;
    return rax;
    // [SUB_180020F74] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_180029874 &= 0x0FF000000;
    return rax;
    // [SUB_180020F90] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025ec4 &= 0x0FF000000;
    return rax;
    // [SUB_180020F9C] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025ecc &= 0x0FF000000;
    return rax;
    // [SUB_180020FA8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_18002987c &= 0x0FF0FFFFF;
    byte ptr cs:dword_18002987c+3 = 0;
    cs:dword_18002987c &= 0x0FFF00000;
    return rax;
    // [SUB_180020FB4] endp


    // =============== S U B R O U T I N E =======================================


    cs:dword_180029884 &= 0x0FF000000;
    return rax;
    // [SUB_180020FD0] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025ef4 &= 0x0FF000000;
    return rax;
    // [SUB_180020FDC] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8

    // =============== S U B R O U T I N E =======================================


    cs:dword_180025efc &= 0x0FF000000;
    return rax;
    // [SUB_180020FE8] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // void __cdecl sub_180020FF4()
    // X:stru_18002289C↓o ...


    // __unwind { // __CxxFrameHandler3
    rsp -= 0x38;
    *(void**)(rsp+0x38+var_18) = 0x0FFFFFFFFFFFFFFFE;
    rsp += 0x38;
    goto sub_18000A9A8;
    // } // starts at 180020FF4
    // [SUB_180020FF4] endp

    // ---------------------------------------------------------------------------
class="lbl">algn_18002100A:
    // [ALIGN] 4

    // =============== S U B R O U T I N E =======================================


    // void __cdecl sub_18002100C()
    rcx = cs:qword_180029858;  // Block
    goto j_j_free;
    // [SUB_18002100C] endp


    // =============== S U B R O U T I N E =======================================


    // void __cdecl sub_180021018()
    rax = &(off_180002128);  // effective address
    rcx = &(qword_180026000);  // effective address
    cs:qword_180026000 = rax;
    goto sub_18000FD10;
    // [SUB_180021018] endp

    // ---------------------------------------------------------------------------
    // [ALIGN] 8
    // [STRU_180021038] UNWIND_INFO_HDR <1, 0, 7, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C32C↓o
    // [UNWIND_CODE] <7, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x1F
    // [STRU_180021040] UNWIND_INFO_HDR <1, 0, 7, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C338↓o
    // [UNWIND_CODE] <7, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x1F
    // [STRU_180021048] UNWIND_INFO_HDR <1, 0, 0x44, 0x0E, 0, 0>
    // DATA XREF: .pdata:000000018002B378↓o
    // [UNWIND_CODE] <0x44, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <0x2F, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 6
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x17
    // [UNWIND_CODE] <0x14, 2, 13>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021068] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B384↓o
    // [UNWIND_CODE] <4, 2, 8>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_180021070] UNWIND_INFO_HDR <1, 0, 0x25, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B390↓o
    // [UNWIND_CODE] <0x25, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x10, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x10, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0C, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021080] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B39C↓o
    // [STRU_180021084] UNWIND_INFO_HDR <1, 0, 0x0F, 3, 0, 0>
    // DATA XREF: .pdata:000000018002B3A8↓o
    // [UNWIND_CODE] <0x0F, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <4, 2, 12>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_180021090] UNWIND_INFO_HDR <1, 0, 0x0A, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B36C↓o
    // .pdata:000000018002B3B4↓o
    // [UNWIND_CODE] <0x0A, 2, 10>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_180021098] UNWIND_INFO_HDR <1, 0, 0x19, 3, 0, 0>
    // DATA XREF: .pdata:000000018002B3E4↓o
    // [UNWIND_CODE] <0x19, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <4, 2, 12>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_1800210A4] UNWIND_INFO_HDR <1, 0, 0x19, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B408↓o
    // [UNWIND_CODE] <0x19, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x12, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800210B0] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B414↓o
    // [STRU_1800210B4] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B420↓o
    // [STRU_1800210B8] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B42C↓o
    // [STRU_1800210BC] UNWIND_INFO_HDR <1, 0, 0x14, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B444↓o
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x14, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800210CC] UNWIND_INFO_HDR <1, 0, 0x0A, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B024↓o
    // .pdata:000000018002B030↓o ...
    // [UNWIND_CODE] <0x0A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800210D8] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B4D4↓o
    // [STRU_1800210DC] UNWIND_INFO_HDR <1, 2, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B4EC↓o
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x19, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18000FF8E, rva loc_180010054, \
    // [RVA] _onexit$fin$0, 0>
    // [STRU_18002110C] UNWIND_INFO_HDR <1, 0, 0x12, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B510↓o
    // [UNWIND_CODE] <0x12, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x12, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x12, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 0x20
    // [STRU_180021120] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B534↓o
    // [STRU_180021124] UNWIND_INFO_HDR <1, 0, 0x14, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B540↓o
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x14, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x14, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021138] UNWIND_INFO_HDR <1, 2, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B54C↓o
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_1800105E5, rva loc_180010607, \
    // [RVA] _CRT_INIT$fin$0, 0>
    // [STRU_180021158] UNWIND_INFO_HDR <1, 1, 0x15, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B558↓o
    // [UNWIND_CODE] <0x15, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x15, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x15, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_1800106C5, rva loc_18001078F, \
    // [RVA] __DllMainCRTStartup$filt$0, rva $LN18>
    // [STRU_180021184] UNWIND_INFO_HDR <1, 3, 0x1F, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B570↓o
    // [UNWIND_CODE] <0x10, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x14
    // [UNWIND_CODE] <0x10, 2, 13>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x60
    // [STRU_1800211A0] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B57C↓o
    // [UNWIND_CODE] <4, 2, 10>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_1800211A8] UNWIND_INFO_HDR <1, 1, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B588↓o
    // [UNWIND_CODE] <4, 2, 4>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180010B31, rva loc_180010B35, 1, \
    // [RVA] loc_180010B35>
    // [STRU_1800211C8] UNWIND_INFO_HDR <1, 1, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B594↓o
    // [UNWIND_CODE] <4, 2, 4>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180010B56, rva loc_180010B5A, 1, \
    // [RVA] loc_180010B5A>
    // [STRU_1800211E8] UNWIND_INFO_HDR <1, 0, 0x20, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002B5AC↓o
    // [UNWIND_CODE] <0x20, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x20, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x20, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x20, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x1C, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x1A, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x18, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021204] UNWIND_INFO_HDR <1, 0, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B474↓o
    // .pdata:000000018002B480↓o ...
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_18002120C] UNWIND_INFO_HDR <1, 3, 0x28, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B5D0↓o
    // .pdata:000000018002B5DC↓o
    // [UNWIND_CODE] <0x1A, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x0F
    // [UNWIND_CODE] <0x16, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x21
    // [UNWIND_CODE] <0x0B, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <9, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x0E0
    // [STRU_18002122C] UNWIND_INFO_HDR <1, 1, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B600↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180011236, rva loc_18001123D, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_29, rva loc_18001123D>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021254] UNWIND_INFO_HDR <1, 0, 0x1B, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B618↓o
    // [UNWIND_CODE] <0x1B, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x1B, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021268] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002B63C↓o
    // [UNWIND_CODE] <0x1D, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 2
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x14, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021284] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B138↓o
    // .pdata:000000018002B1BC↓o ...
    // [UNWIND_CODE] <4, 2, 4>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_18002128C] UNWIND_INFO_HDR <1, 0, 0x11, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B654↓o
    // [UNWIND_CODE] <0x11, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0D, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_180021294] UNWIND_INFO_HDR <1, 0, 0x12, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B660↓o
    // [UNWIND_CODE] <0x12, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <6, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_1800212A0] UNWIND_INFO_HDR <1, 3, 0x27, 9, 0, 0>
    // DATA XREF: .pdata:000000018002B66C↓o
    // [UNWIND_CODE] <0x19, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x0D
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x21
    // [UNWIND_CODE] <0x15, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x1C
    // [UNWIND_CODE] <0x0A, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <9, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x0C0
    // [STRU_1800212C0] UNWIND_INFO_HDR <1, 2, 0x0A, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B684↓o
    // [UNWIND_CODE] <0x0A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 2
    // [C_SCOPE_TABLE] <rva loc_180011D3E, rva loc_180011D48, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_30, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [C_SCOPE_TABLE] <rva loc_180011D5D, rva loc_180011D84, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_31, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_1800212F4] UNWIND_INFO_HDR <1, 2, 0x13, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B6A8↓o
    // [UNWIND_CODE] <0x13, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x13, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0F, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 2
    // [C_SCOPE_TABLE] <rva loc_180011EE4, rva loc_180011F11, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_30, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [C_SCOPE_TABLE] <rva loc_180011F23, rva loc_180011F5A, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_31, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021328] UNWIND_INFO_HDR <1, 3, 0x2D, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002B6D8↓o
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x51
    // [UNWIND_CODE] <0x1B, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x50
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x4F
    // [UNWIND_CODE] <0x1B, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x4A
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x240
    // [STRU_18002134C] UNWIND_INFO_HDR <1, 2, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B6F0↓o
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180012384, rva loc_1800123CC, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_32, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_18002136C] UNWIND_INFO_HDR <1, 0, 0x17, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B6FC↓o
    // [UNWIND_CODE] <0x17, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x17, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x17, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x13, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021380] UNWIND_INFO_HDR <1, 0, 0x18, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B714↓o
    // [UNWIND_CODE] <0x18, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x18, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x18, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021394] UNWIND_INFO_HDR <1, 3, 0x30, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002B72C↓o
    // [UNWIND_CODE] <0x1F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x64
    // [UNWIND_CODE] <0x1F, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x5A
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x2C8
    // [STRU_1800213B8] UNWIND_INFO_HDR <1, 3, 0x2E, 9, 0, 0>
    // DATA XREF: .pdata:000000018002B738↓o
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C4
    // [UNWIND_CODE] <0x1D, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C3
    // [UNWIND_CODE] <0x1D, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x0BE
    // [UNWIND_CODE] <0x0E, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x5E0
    // [STRU_1800213D8] UNWIND_INFO_HDR <1, 0, 0x14, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B24C↓o
    // .pdata:000000018002B258↓o ...
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x14, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x14, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800213EC] UNWIND_INFO_HDR <1, 3, 0x2F, 9, 0, 0>
    // DATA XREF: .pdata:000000018002B798↓o
    // [UNWIND_CODE] <0x1E, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B5
    // [UNWIND_CODE] <0x1E, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B4
    // [UNWIND_CODE] <0x1E, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B3
    // [UNWIND_CODE] <0x1E, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x0B0
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x570
    // [STRU_18002140C] UNWIND_INFO_HDR <1, 2, 0x0A, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B7A4↓o
    // [UNWIND_CODE] <0x0A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_1800136EE, rva loc_180013745, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_33, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021430] UNWIND_INFO_HDR <1, 3, 0x1F, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B7BC↓o
    // [UNWIND_CODE] <0x10, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x10, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x38
    // [STRU_18002144C] UNWIND_INFO_HDR <1, 2, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B7C8↓o
    // [UNWIND_CODE] <0x19, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x19, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 13>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180013B54, rva loc_180013C00, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_33, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_18002147C] UNWIND_INFO_HDR <1, 2, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B7F8↓o
    // [UNWIND_CODE] <6, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180013FBF, rva loc_180013FD5, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_34, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_18002149C] UNWIND_INFO_HDR <1, 0, 0x12, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B804↓o
    // [UNWIND_CODE] <0x12, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x13
    // [UNWIND_CODE] <0x12, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x12, 2, 13>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800214AC] UNWIND_INFO_HDR <1, 0, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B114↓o
    // .pdata:000000018002B120↓o ...
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x19, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x19, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_1800214C4] UNWIND_INFO_HDR <1, 0, 0x0F, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B87C↓o
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800214D0] UNWIND_INFO_HDR <1, 2, 0x1C, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B8A0↓o
    // [UNWIND_CODE] <0x1C, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x1C, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x1C, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x18, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001461B, rva loc_180014729, rva doexit$fin$0,\
    // [0>] 
    // [STRU_180021500] UNWIND_INFO_HDR <1, 0, 0x12, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B8C4↓o
    // [UNWIND_CODE] <0x12, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x12, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x12, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021510] UNWIND_INFO_HDR <1, 0, 0x0A, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B8DC↓o
    // [UNWIND_CODE] <0x0A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x0A, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_18002151C] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B8E8↓o
    // [UNWIND_CODE] <0x1D, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x1D, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x19, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021534] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C128↓o
    // .pdata:000000018002C2C0↓o
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_18002153C] UNWIND_INFO_HDR <1, 2, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B90C↓o
    // [UNWIND_CODE] <0x19, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x19, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 13>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 2
    // [C_SCOPE_TABLE] <rva loc_180014FC9, rva loc_180015060, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_35, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [C_SCOPE_TABLE] <rva loc_18001506E, rva loc_180015083, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_35, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_18002157C] UNWIND_INFO_HDR <1, 0, 0x1C, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002B930↓o
    // [UNWIND_CODE] <0x1C, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x18
    // [UNWIND_CODE] <0x1C, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x17
    // [UNWIND_CODE] <0x1C, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x16
    // [UNWIND_CODE] <0x1C, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x12
    // [UNWIND_CODE] <0x15, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021598] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002B954↓o
    // [UNWIND_CODE] <0x1D, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x1D, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x1D, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x1D, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x19, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_1800215B4] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B960↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x0F, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800215C4] UNWIND_INFO_HDR <1, 0, 0x0A, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B99C↓o
    // [UNWIND_CODE] <0x0A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800215D0] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B9C0↓o
    // [ALIGN] 8
    // [STRU_1800215D8] UNWIND_INFO_HDR <1, 0, 7, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B9CC↓o
    // [UNWIND_CODE] <7, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x9B
    // [STRU_1800215E0] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B9D8↓o
    // [STRU_1800215E4] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B9E4↓o
    // [STRU_1800215E8] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002B9F0↓o
    // [STRU_1800215EC] UNWIND_INFO_HDR <1, 1, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B9FC↓o
    // [UNWIND_CODE] <4, 2, 4>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180015E17, rva loc_180015E4A, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_36, rva loc_180015E4A>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_18002160C] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B504↓o
    // .pdata:000000018002B7B0↓o ...
    // [UNWIND_CODE] <6, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_180021614] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B354↓o
    // .pdata:000000018002BA20↓o
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_18002161C] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002BA2C↓o
    // [UNWIND_CODE] <0x1D, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x1D, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x1D, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x1D, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x19, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180021638] UNWIND_INFO_HDR <1, 3, 0x1B, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BA38↓o
    // [UNWIND_CODE] <0x0C, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x11
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x70
    // [STRU_180021650] UNWIND_INFO_HDR <1, 0, 0x1A, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BA44↓o
    // [UNWIND_CODE] <0x1A, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x12
    // [UNWIND_CODE] <0x1A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x1A, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x13, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021668] UNWIND_INFO_HDR <1, 0, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B96C↓o
    // .pdata:000000018002BA50↓o
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x19, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180021680] UNWIND_INFO_HDR <1, 3, 0x18, 5, 0, 0>
    // DATA XREF: .pdata:000000018002BA5C↓o
    // [UNWIND_CODE] <9, 2, 14>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x60
    // [STRU_180021698] UNWIND_INFO_HDR <1, 3, 0x1D, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BA68↓o
    // [UNWIND_CODE] <0x0E, 2, 15>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <7, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x70
    // [STRU_1800216B0] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B240↓o
    // .pdata:000000018002B270↓o ...
    // [UNWIND_CODE] <4, 2, 6>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_1800216B8] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B624↓o
    // .pdata:000000018002B630↓o ...
    // [UNWIND_CODE] <4, 2, 8>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_1800216C0] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002BA98↓o
    // [UNWIND_CODE] <4, 2, 0>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_1800216C8] UNWIND_INFO_HDR <1, 0, 0x15, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BAA4↓o
    // [UNWIND_CODE] <0x15, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x15, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x15, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_1800216DC] UNWIND_INFO_HDR <1, 2, 0x15, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BABC↓o
    // [UNWIND_CODE] <0x15, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x15, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x15, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x11, 0, 13>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180016D97, rva loc_180016DD5, \
    // [RVA] _mtinitlocknum$fin$0, 0>
    // [STRU_180021708] UNWIND_INFO_HDR <1, 2, 0x17, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BAD4↓o
    // [UNWIND_CODE] <0x17, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x17, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x13, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180016FA9, rva loc_180017037, rva raise$fin$0, \
    // [0>] 
    // [STRU_180021738] UNWIND_INFO_HDR <1, 3, 0x1E, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BAE0↓o
    // [UNWIND_CODE] <0x0F, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <9, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x48
    // [STRU_180021754] UNWIND_INFO_HDR <1, 2, 0x15, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BB28↓o
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x15, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x11, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 6>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_1800175BD, rva loc_1800175F1, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_37, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021780] UNWIND_INFO_HDR <1, 3, 0x36, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002BB34↓o
    // [UNWIND_CODE] <0x25, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x371
    // [UNWIND_CODE] <0x25, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x366
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] rva qword_180001B20
    // [STRU_1800217A4] UNWIND_INFO_HDR <1, 2, 0x15, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BB40↓o
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x15, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x11, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 6>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_180017E01, rva loc_180017E33, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_37, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_1800217D0] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B1A4↓o
    // .pdata:000000018002B360↓o ...
    // [UNWIND_CODE] <6, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_1800217D8] UNWIND_INFO_HDR <1, 0, 0x15, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BBB8↓o
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x15, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0E, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800217E8] UNWIND_INFO_HDR <1, 3, 0x2D, 0x0D, 5, 4>
    // DATA XREF: .pdata:000000018002BBD0↓o
    // [UNWIND_CODE] <0x1F, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x12
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x13, 3, 4>  // UWOP_SET_FPREG
    // [UNWIND_CODE] <0x0E, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0A, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x48
    // [STRU_180021810] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BBDC↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x0F, 2, 13>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021820] UNWIND_INFO_HDR <1, 3, 0x2D, 0x0D, 5, 3>
    // DATA XREF: .pdata:000000018002BBE8↓o
    // [UNWIND_CODE] <0x1F, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x13, 3, 3>  // UWOP_SET_FPREG
    // [UNWIND_CODE] <0x0E, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0A, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x30
    // [STRU_180021848] UNWIND_INFO_HDR <1, 0, 0x0E, 2, 0, 0>
    // DATA XREF: .pdata:000000018002BC00↓o
    // .pdata:000000018002BC18↓o
    // [UNWIND_CODE] <0x0E, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0A, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_180021850] UNWIND_INFO_HDR <1, 0, 0x10, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BC24↓o
    // [UNWIND_CODE] <0x10, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x10, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <9, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021860] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002BC3C↓o
    // [ALIGN] 8
    // [STRU_180021868] UNWIND_INFO_HDR <1, 0, 0, 0, 0, 0>
    // DATA XREF: .pdata:000000018002BC48↓o
    // [STRU_18002186C] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B090↓o
    // .pdata:000000018002BC78↓o ...
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x0F, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_18002187C] UNWIND_INFO_HDR <1, 0, 0x15, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BC84↓o
    // [UNWIND_CODE] <0x15, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x15, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x15, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180021890] UNWIND_INFO_HDR <1, 0, 0x17, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BC90↓o
    // [UNWIND_CODE] <0x17, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x17, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x17, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800218A4] UNWIND_INFO_HDR <1, 0, 0x21, 9, 0, 0>
    // DATA XREF: .pdata:000000018002BC9C↓o
    // [UNWIND_CODE] <0x21, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x1C
    // [UNWIND_CODE] <0x15, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_1800218BC] UNWIND_INFO_HDR <1, 3, 0x27, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BCA8↓o
    // [UNWIND_CODE] <0x19, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x11
    // [UNWIND_CODE] <0x0D, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <9, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x78
    // [STRU_1800218DC] UNWIND_INFO_HDR <1, 0, 0x1B, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BCB4↓o
    // [UNWIND_CODE] <0x1B, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x1B, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x1B, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800218F4] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BCC0↓o
    // [UNWIND_CODE] <0x0F, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x0F, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021904] UNWIND_INFO_HDR <1, 0, 0x0C, 2, 0, 0>
    // DATA XREF: .pdata:000000018002BCE4↓o
    // [UNWIND_CODE] <0x0C, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x11
    // [STRU_18002190C] UNWIND_INFO_HDR <1, 3, 0x23, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BCFC↓o
    // .pdata:000000018002BD08↓o
    // [UNWIND_CODE] <0x15, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x15
    // [UNWIND_CODE] <0x15, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x14
    // [UNWIND_CODE] <0x15, 2, 15>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x78
    // [STRU_180021924] UNWIND_INFO_HDR <1, 0, 5, 2, 0, 0>
    // DATA XREF: .pdata:000000018002BD20↓o
    // [UNWIND_CODE] <5, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 1
    // [STRU_18002192C] UNWIND_INFO_HDR <1, 3, 0x1F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BD2C↓o
    // [UNWIND_CODE] <0x11, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x11
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x70
    // [ALIGN] 8
    // [STRU_180021948] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002BD38↓o
    // [UNWIND_CODE] <4, 2, 1>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_180021950] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BD44↓o
    // [UNWIND_CODE] <0x0F, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021960] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C0B0↓o
    // .pdata:000000018002C0BC↓o ...
    // [UNWIND_CODE] <6, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021968] UNWIND_INFO_HDR <1, 2, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BD5C↓o
    // [UNWIND_CODE] <0x19, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x19, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 14>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001A89A, rva loc_18001A8BB, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_38, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021998] UNWIND_INFO_HDR <1, 0, 9, 1, 0, 0>
    // DATA XREF: .pdata:000000018002BD68↓o
    // [UNWIND_CODE] <9, 2, 6>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [STRU_1800219A0] UNWIND_INFO_HDR <1, 0, 0x1B, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BD74↓o
    // [UNWIND_CODE] <0x1B, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x1B, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x1B, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800219B8] UNWIND_INFO_HDR <1, 2, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BD80↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x0F, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001AB16, rva loc_18001AB8A, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_39, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_1800219E0] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B0A8↓o
    // .pdata:000000018002B528↓o ...
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800219F0] UNWIND_INFO_HDR <1, 2, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BDA4↓o
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 2
    // [C_SCOPE_TABLE] <rva loc_18001ACD2, rva loc_18001AD16, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_40, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [C_SCOPE_TABLE] <rva loc_18001AC99, rva loc_18001AD2F, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_41, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021A30] UNWIND_INFO_HDR <1, 0, 0x1B, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BDB0↓o
    // .pdata:000000018002BDC8↓o
    // [UNWIND_CODE] <0x1B, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x1B, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x1B, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021A48] UNWIND_INFO_HDR <1, 3, 0x24, 0x0A, 5, 3>
    // DATA XREF: .pdata:000000018002BDD4↓o
    // [UNWIND_CODE] <0x16, 3, 3>  // UWOP_SET_FPREG
    // [UNWIND_CODE] <0x11, 2, 12>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0D, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <9, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x58
    // [STRU_180021A68] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BBF4↓o
    // .pdata:000000018002BDE0↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x0F, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021A78] UNWIND_INFO_HDR <1, 0, 0x17, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BDEC↓o
    // [UNWIND_CODE] <0x17, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x17, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x17, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021A8C] UNWIND_INFO_HDR <1, 0, 0x18, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B8D0↓o
    // .pdata:000000018002BDF8↓o
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x18, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021AA4] UNWIND_INFO_HDR <1, 3, 0x25, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BE04↓o
    // .pdata:000000018002BE10↓o
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x16
    // [UNWIND_CODE] <0x17, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x50
    // [STRU_180021AC4] UNWIND_INFO_HDR <1, 3, 0x2A, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002BE1C↓o
    // [UNWIND_CODE] <0x1C, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x1E
    // [UNWIND_CODE] <0x1C, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x14
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x98
    // [STRU_180021AE8] UNWIND_INFO_HDR <1, 3, 0x2A, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002BE28↓o
    // [UNWIND_CODE] <0x1C, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x21
    // [UNWIND_CODE] <0x1C, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x18
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __GSHandlerCheck
    // [DD] 0x0B0
    // [STRU_180021B0C] UNWIND_INFO_HDR <1, 2, 0x0F, 4, 0, 0>
    // DATA XREF: .pdata:000000018002BE58↓o
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001D91F, rva loc_18001D929, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_42, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021B30] UNWIND_INFO_HDR <1, 2, 0x11, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BE64↓o
    // [UNWIND_CODE] <0x11, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x11, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 6>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001D9A7, rva $good$29561, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_43, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021B58] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BE70↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x0F, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021B68] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002BE7C↓o
    // [UNWIND_CODE] <0x1D, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x1D, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x1D, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x1D, 2, 1>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x19, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180021B84] UNWIND_INFO_HDR <1, 2, 0x11, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BE94↓o
    // [UNWIND_CODE] <0x11, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x11, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 6>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001DDD7, rva loc_18001DDFB, \  // Microsoft VisualC v7/14 64bit runtime
    // [RVA] unknown_libname_43, 0>  // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180021BAC] UNWIND_INFO_HDR <1, 0, 0x0A, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B2E8↓o
    // [UNWIND_CODE] <0x0A, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 2
    // [UNWIND_CODE] <5, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 1
    // [STRU_180021BB8] UNWIND_INFO_HDR <1, 0, 0x19, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B2D0↓o
    // [UNWIND_CODE] <0x19, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x189
    // [UNWIND_CODE] <0x0A, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021BCC] UNWIND_INFO_HDR <1, 0, 0x0F, 7, 0, 0>
    // DATA XREF: .pdata:000000018002B2C4↓o
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10B
    // [UNWIND_CODE] <0x0F, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x106
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021BE0] UNWIND_INFO_HDR <1, 0, 0x11, 7, 0, 0>
    // DATA XREF: .pdata:000000018002B2B8↓o
    // [UNWIND_CODE] <0x11, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x186
    // [UNWIND_CODE] <0x0A, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021BF4] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B2AC↓o
    // [UNWIND_CODE] <6, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021BFC] UNWIND_INFO_HDR <1, 0, 9, 3, 0, 0>
    // DATA XREF: .pdata:000000018002B2A0↓o
    // [UNWIND_CODE] <9, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x82
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021C08] UNWIND_INFO_HDR <1, 2, 0x13, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B1F8↓o
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005D50
    // [STRU_180021C18] UnwindMapEntry <-1, rva sub_1800203EB>
    // DATA XREF: X:stru_180005D50↑o
    // X:stru_180005D80↑o ...
    // [STRU_180021C20] IPtoStateMap <rva ??0ThreadScheduler@details@Concurrency@@QEAA@AEBVSchedulerPolicy@2@@Z,\
    // DATA XREF: X:stru_180005D50↑o
    // [-1>]   // Concurrency::details::ThreadScheduler::ThreadScheduler(Concurrency::SchedulerPolicy const &)
    // [IPTOSTATEMAP] <rva loc_18000AF6C, 0>
    // [IPTOSTATEMAP] <rva loc_18000AF76, -1>
    // [STRU_180021C38] UNWIND_INFO_HDR <1, 2, 0x12, 1, 0, 0>
    // DATA XREF: .pdata:000000018002B174↓o
    // [UNWIND_CODE] <9, 2, 6>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005D80
    // [STRU_180021C48] IPtoStateMap <rva sub_18000A640, -1>
    // DATA XREF: X:stru_180005D80↑o
    // [STRU_180021C50] UNWIND_INFO_HDR <1, 0, 0x17, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002B144↓o
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x1D
    // [UNWIND_CODE] <0x17, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x14
    // [UNWIND_CODE] <0x10, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0E, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021C6C] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002B348↓o
    // [UNWIND_CODE] <0x1D, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x1D, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x1D, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x1D, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x19, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180021C88] UNWIND_INFO_HDR <1, 0, 0x35, 0x13, 0, 0>
    // DATA XREF: .pdata:000000018002B33C↓o
    // [UNWIND_CODE] <0x35, 8, 11>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x30, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 4
    // [UNWIND_CODE] <0x2B, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <0x20, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 6
    // [UNWIND_CODE] <0x1B, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 7
    // [UNWIND_CODE] <0x17, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 8
    // [UNWIND_CODE] <0x13, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x15
    // [UNWIND_CODE] <0x13, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x14
    // [UNWIND_CODE] <0x13, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x12
    // [UNWIND_CODE] <0x0C, 0, 7>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021CB4] UNWIND_INFO_HDR <1, 0, 0x14, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B228↓o
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x14, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x14, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021CC8] UNWIND_INFO_HDR <1, 2, 0x13, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B198↓o
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005DF0
    // [STRU_180021CD8] UnwindMapEntry <-1, rva sub_1800204D5>
    // DATA XREF: X:stru_180005DF0↑o
    // X:stru_180005ED0↑o
    // [STRU_180021CE0] IPtoStateMap <rva sub_18000A938, -1>
    // DATA XREF: X:stru_180005DF0↑o
    // [STRU_180021CE8] UNWIND_INFO_HDR <1, 2, 0x18, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B180↓o
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005E20
    // [STRU_180021CFC] IPtoStateMap <rva sub_18000A668, -1>
    // DATA XREF: X:stru_180005E20↑o
    // [STRU_180021D04] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B12C↓o
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180021D0C] UNWIND_INFO_HDR <1, 0, 0x1F, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B0C0↓o
    // [UNWIND_CODE] <0x1F, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 2
    // [UNWIND_CODE] <0x19, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x14, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 4
    // [UNWIND_CODE] <6, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_180021D20] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B078↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021D30] UNWIND_INFO_HDR <1, 0, 0x38, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B06C↓o
    // [UNWIND_CODE] <0x38, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 2
    // [UNWIND_CODE] <0x32, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x14, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 4
    // [UNWIND_CODE] <6, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [STRU_180021D44] UNWIND_INFO_HDR <1, 0, 0x66, 0x13, 0, 0>
    // DATA XREF: .pdata:ExceptionDir↓o
    // [UNWIND_CODE] <0x66, 8, 13>  // UWOP_SAVE_XMM128
    // [DW] 2
    // [UNWIND_CODE] <0x4A, 8, 12>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x3F, 8, 11>  // UWOP_SAVE_XMM128
    // [DW] 4
    // [UNWIND_CODE] <0x3A, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <0x2F, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 6
    // [UNWIND_CODE] <0x24, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 7
    // [UNWIND_CODE] <0x18, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 8
    // [UNWIND_CODE] <0x0F, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 9
    // [UNWIND_CODE] <0x0B, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x14
    // [UNWIND_CODE] <4, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021D70] UNWIND_INFO_HDR <1, 0, 0x50, 0x16, 0, 0>
    // DATA XREF: .pdata:000000018002B330↓o
    // [UNWIND_CODE] <0x50, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x4B, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 4
    // [UNWIND_CODE] <0x46, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <0x31, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 6
    // [UNWIND_CODE] <0x2D, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 7
    // [UNWIND_CODE] <0x22, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x18
    // [UNWIND_CODE] <0x22, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x17
    // [UNWIND_CODE] <0x22, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x16
    // [UNWIND_CODE] <0x22, 2, 15>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x18, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021DA0] UNWIND_INFO_HDR <1, 3, 0x0B, 3, 0, 0>
    // DATA XREF: .pdata:000000018002C1B8↓o
    // [UNWIND_CODE] <0x0B, 2, 4>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <7, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005EA0
    // [STRU_180021DB4] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C1AC↓o
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005EA0
    // [STRU_180021DC4] UNWIND_INFO_HDR <1, 3, 0x21, 5, 0, 0>
    // DATA XREF: .pdata:000000018002B1EC↓o
    // [UNWIND_CODE] <0x18, 2, 12>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005EA0
    // [STRU_180021DDC] TryBlockMapEntry <0, 1, 5, 1, rva stru_180021E18>
    // DATA XREF: X:stru_180005EA0↑o
    // [TRYBLOCKMAPENTRY] <3, 4, 5, 1, rva stru_180021E04>
    // [STRU_180021E04] HandlerType <0, 0, 0, rva sub_180020497, 72>
    // DATA XREF: X:0000000180021DF0↑o
    // [STRU_180021E18] HandlerType <0, 0, 0, rva sub_180020407, 56>
    // DATA XREF: X:stru_180021DDC↑o
    // [STRU_180021E2C] UnwindMapEntry <-1, 0>  // DATA XREF: X:stru_180005EA0↑o
    // [UNWINDMAPENTRY] <0, rva sub_1800203F7>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <2, 0>
    // [UNWINDMAPENTRY] <3, rva unknown_libname_44>  // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [UNWINDMAPENTRY] <2, 0>
    // [STRU_180021E5C] IPtoStateMap <rva sub_18000AE10, -1>
    // DATA XREF: X:stru_180005EA0↑o
    // [IPTOSTATEMAP] <rva loc_18000AE80, 0>
    // [IPTOSTATEMAP] <rva loc_18000AEBA, 1>
    // [IPTOSTATEMAP] <rva loc_18000AEC6, 0>
    // [IPTOSTATEMAP] <rva loc_18000AEDC, -1>
    // [IPTOSTATEMAP] <rva sub_180020407, 0>
    // [IPTOSTATEMAP] <rva loc_180020414, 2>
    // [IPTOSTATEMAP] <rva loc_180020422, 3>
    // [IPTOSTATEMAP] <rva loc_18002043F, 0>
    // [IPTOSTATEMAP] <rva loc_180020448, 3>
    // [IPTOSTATEMAP] <rva loc_180020461, 4>
    // [IPTOSTATEMAP] <rva loc_18002046C, 3>
    // [IPTOSTATEMAP] <rva loc_18002047D, 0>
    // [IPTOSTATEMAP] <rva loc_1800204A5, 5>
    // [STRU_180021ECC] UNWIND_INFO_HDR <1, 2, 0x14, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B1B0↓o
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005ED0
    // [STRU_180021EE0] IPtoStateMap <rva sub_18000A9A8, -1>
    // DATA XREF: X:stru_180005ED0↑o
    // [STRU_180021EE8] UNWIND_INFO_HDR <1, 0, 0x1F, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B0CC↓o
    // [UNWIND_CODE] <0x1F, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 2
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x14, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x14, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021F00] UNWIND_INFO_HDR <1, 0, 0x20, 9, 0, 0>
    // DATA XREF: .pdata:000000018002B03C↓o
    // [UNWIND_CODE] <0x20, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x0B
    // [UNWIND_CODE] <0x13, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x1B
    // [UNWIND_CODE] <0x13, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x1A
    // [UNWIND_CODE] <0x13, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x18
    // [UNWIND_CODE] <0x0C, 0, 7>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180021F18] UNWIND_INFO_HDR <1, 0, 0x1E, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B018↓o
    // [UNWIND_CODE] <0x1E, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x1E, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x1A, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x18, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180021F30] UNWIND_INFO_HDR <1, 0, 0x53, 0x14, 0, 0>
    // DATA XREF: .pdata:000000018002B00C↓o
    // [UNWIND_CODE] <0x53, 8, 11>  // UWOP_SAVE_XMM128
    // [DW] 2
    // [UNWIND_CODE] <0x47, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x42, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 4
    // [UNWIND_CODE] <0x3D, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <0x24, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 6
    // [UNWIND_CODE] <0x1B, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 7
    // [UNWIND_CODE] <0x17, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x14
    // [UNWIND_CODE] <0x17, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x13
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x12
    // [UNWIND_CODE] <0x17, 2, 15>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180021F5C] UNWIND_INFO_HDR <1, 2, 0x4F, 0x19, 0, 0>
    // DATA XREF: .pdata:000000018002B0F0↓o
    // [UNWIND_CODE] <0x4F, 8, 13>  // UWOP_SAVE_XMM128
    // [DW] 0x19
    // [UNWIND_CODE] <0x47, 8, 12>  // UWOP_SAVE_XMM128
    // [DW] 0x1A
    // [UNWIND_CODE] <0x42, 8, 11>  // UWOP_SAVE_XMM128
    // [DW] 0x1B
    // [UNWIND_CODE] <0x3D, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 0x1C
    // [UNWIND_CODE] <0x38, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 0x1D
    // [UNWIND_CODE] <0x33, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 0x1E
    // [UNWIND_CODE] <0x2E, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 0x1F
    // [UNWIND_CODE] <0x2A, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x20
    // [UNWIND_CODE] <0x26, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x46
    // [UNWIND_CODE] <0x22, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x45
    // [UNWIND_CODE] <0x1E, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x44
    // [UNWIND_CODE] <0x12, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x42
    // [UNWIND_CODE] <4, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005F30
    // [STRU_180021F9C] UnwindMapEntry <-1, \  // DATA XREF: X:stru_180005F30↑o
    // [RVA] ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA>  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [STRU_180021FA4] IPtoStateMap <rva sub_180008F70, -1>
    // DATA XREF: X:stru_180005F30↑o
    // [IPTOSTATEMAP] <rva loc_180008FD8, 0>
    // [IPTOSTATEMAP] <rva loc_180008FE6, -1>
    // [STRU_180021FBC] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C1DC↓o
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005F60
    // [STRU_180021FCC] UNWIND_INFO_HDR <1, 3, 0x1B, 5, 0, 0>
    // DATA XREF: .pdata:000000018002B0B4↓o
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x22
    // [UNWIND_CODE] <0x0B, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x20
    // [UNWIND_CODE] <4, 0, 7>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005F60
    // [STRU_180021FE4] TryBlockMapEntry <0, 1, 2, 1, rva stru_180021FF8>
    // DATA XREF: X:stru_180005F60↑o
    // [STRU_180021FF8] HandlerType <0, 0, 0, rva sub_18002051B, 72>
    // DATA XREF: X:stru_180021FE4↑o
    // [STRU_18002200C] UnwindMapEntry <-1, 0>  // DATA XREF: X:stru_180005F60↑o
    // [UNWINDMAPENTRY] <0, \  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [RVA] ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA_0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [STRU_180022024] IPtoStateMap <rva sub_18000839C, -1>
    // DATA XREF: X:stru_180005F60↑o
    // [IPTOSTATEMAP] <rva loc_1800083BD, 0>
    // [IPTOSTATEMAP] <rva loc_1800083D0, 1>
    // [IPTOSTATEMAP] <rva loc_1800083EC, 0>
    // [IPTOSTATEMAP] <rva loc_180008537, -1>
    // [IPTOSTATEMAP] <rva loc_180008539, 0>
    // [STRU_180022054] UNWIND_INFO_HDR <1, 0, 0x37, 0x11, 0, 0>
    // DATA XREF: .pdata:000000018002B09C↓o
    // [UNWIND_CODE] <0x37, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 5
    // [UNWIND_CODE] <0x28, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 6
    // [UNWIND_CODE] <0x23, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 7
    // [UNWIND_CODE] <0x1F, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 8
    // [UNWIND_CODE] <0x1B, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x16
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x15
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x14
    // [UNWIND_CODE] <0x1B, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x12
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_18002207C] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C1E8↓o
    // [UNWIND_CODE] <0x0A, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005FA0
    // [STRU_18002208C] UNWIND_INFO_HDR <1, 3, 0x34, 0x11, 0, 0>
    // DATA XREF: .pdata:000000018002B324↓o
    // [UNWIND_CODE] <0x34, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 0x0F
    // [UNWIND_CODE] <0x30, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x10
    // [UNWIND_CODE] <0x2C, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x29
    // [UNWIND_CODE] <0x28, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x28
    // [UNWIND_CODE] <0x24, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x27
    // [UNWIND_CODE] <0x20, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x26
    // [UNWIND_CODE] <0x10, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x22
    // [UNWIND_CODE] <9, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 13>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005FA0
    // [STRU_1800220BC] TryBlockMapEntry <0, 0, 1, 1, rva stru_1800220D0>
    // DATA XREF: X:stru_180005FA0↑o
    // [STRU_1800220D0] HandlerType <0, 0, 0, rva sub_180020536, 88>
    // DATA XREF: X:stru_1800220BC↑o
    // [STRU_1800220E4] UnwindMapEntry <-1, 0>  // DATA XREF: X:stru_180005FA0↑o
    // X:stru_180005FE0↑o ...
    // [UNWINDMAPENTRY] <-1, 0>
    // [STRU_1800220F4] IPtoStateMap <rva sub_18000D624, -1>
    // DATA XREF: X:stru_180005FA0↑o
    // [IPTOSTATEMAP] <rva loc_18000D65A, 0>
    // [IPTOSTATEMAP] <rva loc_18000DBA0, -1>
    // [IPTOSTATEMAP] <rva loc_18000DBA5, 0>
    // [STRU_180022114] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C1F4↓o
    // [UNWIND_CODE] <0x0A, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005FE0
    // [STRU_180022124] UNWIND_INFO_HDR <1, 3, 0x34, 0x11, 0, 0>
    // DATA XREF: .pdata:000000018002B318↓o
    // [UNWIND_CODE] <0x34, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 0x15
    // [UNWIND_CODE] <0x2F, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 0x16
    // [UNWIND_CODE] <0x2B, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x17
    // [UNWIND_CODE] <0x27, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x39
    // [UNWIND_CODE] <0x23, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x36
    // [UNWIND_CODE] <0x13, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x30
    // [UNWIND_CODE] <0x0C, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 7>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180005FE0
    // [STRU_180022154] TryBlockMapEntry <0, 0, 1, 1, rva stru_180022168>
    // DATA XREF: X:stru_180005FE0↑o
    // [STRU_180022168] HandlerType <0, 0, 0, rva sub_180020551, 88>
    // DATA XREF: X:stru_180022154↑o
    // [STRU_18002217C] IPtoStateMap <rva sub_18000CE70, -1>
    // DATA XREF: X:stru_180005FE0↑o
    // [IPTOSTATEMAP] <rva loc_18000CEA6, 0>
    // [IPTOSTATEMAP] <rva loc_18000D5F0, -1>
    // [IPTOSTATEMAP] <rva loc_18000D5F2, 0>
    // [STRU_18002219C] UNWIND_INFO_HDR <1, 3, 0x0B, 3, 0, 0>
    // DATA XREF: .pdata:000000018002C20C↓o
    // [UNWIND_CODE] <0x0B, 2, 4>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <7, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006010
    // [STRU_1800221B0] UNWIND_INFO_HDR <1, 3, 0x15, 4, 0, 0>
    // DATA XREF: .pdata:000000018002B204↓o
    // [UNWIND_CODE] <0x0C, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <8, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006010
    // [STRU_1800221C4] TryBlockMapEntry <0, 2, 4, 1, rva stru_1800221D8>
    // DATA XREF: X:stru_180006010↑o
    // [STRU_1800221D8] HandlerType <0, 0, 0, rva sub_18002059C, 72>
    // DATA XREF: X:stru_1800221C4↑o
    // [STRU_1800221EC] UnwindMapEntry <-1, 0>  // DATA XREF: X:stru_180006010↑o
    // [UNWINDMAPENTRY] <0, rva sub_18002056C>
    // [UNWINDMAPENTRY] <1, rva sub_18002058C>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <3, rva sub_1800205EC>
    // [STRU_180022214] IPtoStateMap <rva sub_18000AF80, -1>
    // DATA XREF: X:stru_180006010↑o
    // [IPTOSTATEMAP] <rva loc_18000AFA3, 0>
    // [IPTOSTATEMAP] <rva loc_18000AFAD, 1>
    // [IPTOSTATEMAP] <rva loc_18000AFEA, 0>
    // [IPTOSTATEMAP] <rva loc_18000AFFE, -1>
    // [IPTOSTATEMAP] <rva sub_18002059C, 0>
    // [IPTOSTATEMAP] <rva loc_1800205AA, 3>
    // [STRU_18002224C] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C218↓o
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006040
    // [STRU_18002225C] UNWIND_INFO_HDR <1, 3, 0x1D, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B1C8↓o
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x0A, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006040
    // [STRU_180022278] TryBlockMapEntry <1, 1, 2, 1, rva stru_18002228C>
    // DATA XREF: X:stru_180006040↑o
    // [STRU_18002228C] HandlerType <0, 0, 0, rva sub_18002060C, 56>
    // DATA XREF: X:stru_180022278↑o
    // [STRU_1800222A0] UnwindMapEntry <-1, rva sub_1800205FC>
    // DATA XREF: X:stru_180006040↑o
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, rva sub_18002062C>
    // [STRU_1800222C0] IPtoStateMap <rva sub_18000AAE8, -1>
    // DATA XREF: X:stru_180006040↑o
    // [IPTOSTATEMAP] <rva loc_18000AB94, 0>
    // [IPTOSTATEMAP] <rva loc_18000ABA0, -1>
    // [IPTOSTATEMAP] <rva loc_18000ABB2, 1>
    // [IPTOSTATEMAP] <rva loc_18000ABC9, -1>
    // [IPTOSTATEMAP] <rva sub_18002060C, 0>
    // [IPTOSTATEMAP] <rva loc_180020619, 2>
    // [STRU_1800222F8] UNWIND_INFO_HDR <1, 2, 0x1A, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B18C↓o
    // [UNWIND_CODE] <0x1A, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x11
    // [UNWIND_CODE] <0x0E, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <7, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006070
    // [STRU_180022310] UnwindMapEntry <-1, rva sub_18002063C>
    // DATA XREF: X:stru_180006070↑o
    // [UNWINDMAPENTRY] <-1, rva sub_18002064C>
    // [UNWINDMAPENTRY] <1, rva sub_18002065C>
    // [UNWINDMAPENTRY] <2, rva sub_18002068C>
    // [UNWINDMAPENTRY] <1, rva sub_18002069C>
    // [UNWINDMAPENTRY] <4, rva sub_1800206CC>
    // [UNWINDMAPENTRY] <-1, rva sub_1800206DC>
    // [STRU_180022348] IPtoStateMap <rva sub_18000A6FC, -1>
    // DATA XREF: X:stru_180006070↑o
    // [IPTOSTATEMAP] <rva loc_18000A72C, 1>
    // [IPTOSTATEMAP] <rva loc_18000A88C, 2>
    // [IPTOSTATEMAP] <rva loc_18000A8B7, 1>
    // [IPTOSTATEMAP] <rva loc_18000A8D6, 4>
    // [IPTOSTATEMAP] <rva loc_18000A902, 1>
    // [IPTOSTATEMAP] <rva loc_18000A90A, -1>
    // [STRU_180022380] UNWIND_INFO_HDR <1, 0, 2, 1, 0, 0>
    // DATA XREF: .pdata:000000018002C1C4↓o
    // .pdata:000000018002C1D0↓o ...
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180022388] UNWIND_INFO_HDR <1, 2, 0x0F, 2, 0, 0>
    // DATA XREF: .pdata:000000018002B150↓o
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_1800060A0
    // [STRU_180022398] UnwindMapEntry <-1, \  // DATA XREF: X:stru_1800060A0↑o
    // [RVA] ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA_1>  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [STRU_1800223A0] IPtoStateMap <rva sub_18000A050, -1>
    // DATA XREF: X:stru_1800060A0↑o
    // [IPTOSTATEMAP] <rva loc_18000A0C1, 0>
    // [IPTOSTATEMAP] <rva loc_18000A0CF, -1>
    // [STRU_1800223B8] UNWIND_INFO_HDR <1, 0, 0x8C, 0x19, 0, 0>
    // DATA XREF: .pdata:000000018002B108↓o
    // [UNWIND_CODE] <0x8C, 8, 15>  // UWOP_SAVE_XMM128
    // [DW] 0x0A
    // [UNWIND_CODE] <0x84, 8, 14>  // UWOP_SAVE_XMM128
    // [DW] 0x0B
    // [UNWIND_CODE] <0x7C, 8, 13>  // UWOP_SAVE_XMM128
    // [DW] 0x0C
    // [UNWIND_CODE] <0x62, 8, 12>  // UWOP_SAVE_XMM128
    // [DW] 0x0D
    // [UNWIND_CODE] <0x5D, 8, 11>  // UWOP_SAVE_XMM128
    // [DW] 0x0E
    // [UNWIND_CODE] <0x58, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 0x0F
    // [UNWIND_CODE] <0x2D, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 0x10
    // [UNWIND_CODE] <0x28, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 0x11
    // [UNWIND_CODE] <0x23, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 0x12
    // [UNWIND_CODE] <0x1C, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x13
    // [UNWIND_CODE] <0x13, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x2C
    // [UNWIND_CODE] <0x13, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x28
    // [UNWIND_CODE] <8, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_1800223F0] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C248↓o
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_1800060D0
    // [STRU_180022400] UNWIND_INFO_HDR <1, 3, 0x5A, 0x13, 0, 0>
    // DATA XREF: .pdata:000000018002B0E4↓o
    // [UNWIND_CODE] <0x5A, 8, 10>  // UWOP_SAVE_XMM128
    // [DW] 0x18A
    // [UNWIND_CODE] <0x51, 8, 9>  // UWOP_SAVE_XMM128
    // [DW] 0x18B
    // [UNWIND_CODE] <0x48, 8, 8>  // UWOP_SAVE_XMM128
    // [DW] 0x18C
    // [UNWIND_CODE] <0x3F, 8, 7>  // UWOP_SAVE_XMM128
    // [DW] 0x18D
    // [UNWIND_CODE] <0x37, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 0x18E
    // [UNWIND_CODE] <0x26, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x31E
    // [UNWIND_CODE] <0x19, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_1800060D0
    // [STRU_180022434] TryBlockMapEntry <0, 0, 1, 1, rva stru_180022448>
    // DATA XREF: X:stru_1800060D0↑o
    // [STRU_180022448] HandlerType <0, 0, 0, rva sub_180020702, 72>
    // DATA XREF: X:stru_180022434↑o
    // [STRU_18002245C] IPtoStateMap <rva sub_180008ABC, -1>
    // DATA XREF: X:stru_1800060D0↑o
    // [IPTOSTATEMAP] <rva loc_180008CD2, 0>
    // [IPTOSTATEMAP] <rva loc_180008F02, -1>
    // [IPTOSTATEMAP] <rva sub_180020702, 0>
    // [STRU_18002247C] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C254↓o
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006100
    // [STRU_18002248C] UNWIND_INFO_HDR <1, 3, 0x22, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B060↓o
    // [UNWIND_CODE] <0x22, 4, 12>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x1E, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x1A, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x16, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <9, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <5, 0, 13>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006100
    // [STRU_1800224AC] TryBlockMapEntry <0, 0, 1, 1, rva stru_1800224C0>
    // DATA XREF: X:stru_180006100↑o
    // [STRU_1800224C0] HandlerType <0, 0, 0, rva unknown_libname_45, 56>
    // DATA XREF: X:stru_1800224AC↑o
    // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [STRU_1800224D4] IPtoStateMap <rva sub_180007628, -1>
    // DATA XREF: X:stru_180006100↑o
    // [IPTOSTATEMAP] <rva loc_18000764F, 0>
    // [IPTOSTATEMAP] <rva loc_18000793F, -1>
    // [IPTOSTATEMAP] <rva loc_180007941, 0>
    // [STRU_1800224F4] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C260↓o
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006130
    // [STRU_180022504] UNWIND_INFO_HDR <1, 3, 0x1E, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B30C↓o
    // [UNWIND_CODE] <0x1E, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <6, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 13>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006130
    // [STRU_180022520] TryBlockMapEntry <0, 0, 1, 1, rva stru_180022534>
    // DATA XREF: X:stru_180006130↑o
    // [STRU_180022534] HandlerType <0, 0, 0, rva sub_180020738, 72>
    // DATA XREF: X:stru_180022520↑o
    // [STRU_180022548] IPtoStateMap <rva sub_18000CB04, -1>
    // DATA XREF: X:stru_180006130↑o
    // [IPTOSTATEMAP] <rva loc_18000CB22, 0>
    // [IPTOSTATEMAP] <rva loc_18000CE56, -1>
    // [IPTOSTATEMAP] <rva loc_18000CE58, 0>
    // [STRU_180022568] UNWIND_INFO_HDR <1, 0, 0x14, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B1D4↓o
    // .pdata:000000018002B2DC↓o ...
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x14, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x14, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_18002257C] UNWIND_INFO_HDR <1, 0, 0x1D, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002B048↓o
    // [UNWIND_CODE] <0x1D, 8, 6>  // UWOP_SAVE_XMM128
    // [DW] 3
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x19, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [STRU_180022598] UNWIND_INFO_HDR <1, 2, 0x19, 6, 0, 0>
    // DATA XREF: .pdata:000000018002B300↓o
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <6, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006160
    // [STRU_1800225B0] UnwindMapEntry <-1, rva sub_180020753>
    // DATA XREF: X:stru_180006160↑o
    // [STRU_1800225B8] IPtoStateMap <rva sub_18000CA54, -1>
    // DATA XREF: X:stru_180006160↑o
    // [IPTOSTATEMAP] <rva loc_18000CA7E, 0>
    // [IPTOSTATEMAP] <rva loc_18000CA8D, -1>
    // [STRU_1800225D0] UNWIND_INFO_HDR <1, 0, 0x1B, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B0D8↓o
    // [UNWIND_CODE] <0x1B, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x1B, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0F
    // [UNWIND_CODE] <0x1B, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x1B, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_1800225E8] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C26C↓o
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006190
    // [STRU_1800225F8] UNWIND_INFO_HDR <1, 3, 0x22, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B15C↓o
    // [UNWIND_CODE] <0x22, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x0A, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 12>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006190
    // [STRU_180022618] TryBlockMapEntry <0, 0, 1, 1, rva stru_18002262C>
    // DATA XREF: X:stru_180006190↑o
    // [STRU_18002262C] HandlerType <0, 0, 0, rva unknown_libname_47, 56>
    // DATA XREF: X:stru_180022618↑o
    // Microsoft VisualC v7/14 64bit runtime
    // Microsoft VisualC v7/14 64bit runtime
    // [STRU_180022640] IPtoStateMap <rva sub_18000A30C, -1>
    // DATA XREF: X:stru_180006190↑o
    // [IPTOSTATEMAP] <rva loc_18000A331, 0>
    // [STRU_180022650] UNWIND_INFO_HDR <1, 3, 0x0A, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C278↓o
    // .pdata:000000018002C284↓o ...
    // [UNWIND_CODE] <0x0A, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_1800061C0
    // [STRU_180022660] UNWIND_INFO_HDR <1, 3, 0x1D, 8, 0, 0>
    // DATA XREF: .pdata:000000018002B234↓o
    // [UNWIND_CODE] <0x1D, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x0A, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <6, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_1800061C0
    // [STRU_18002267C] TryBlockMapEntry <0, 0, 1, 1, rva stru_180022730>
    // DATA XREF: X:stru_1800061C0↑o
    // [TRYBLOCKMAPENTRY] <2, 2, 3, 1, rva stru_18002271C>
    // [TRYBLOCKMAPENTRY] <4, 5, 6, 1, rva stru_180022708>
    // [TRYBLOCKMAPENTRY] <7, 8, 9, 1, rva stru_1800226F4>
    // [TRYBLOCKMAPENTRY] <10, 10, 11, 1, rva stru_1800226E0>
    // [STRU_1800226E0] HandlerType <0, 0, 0, rva sub_18002089A, 56>
    // DATA XREF: X:00000001800226CC↑o
    // [STRU_1800226F4] HandlerType <0, 0, 0, rva sub_18002085A, 56>
    // DATA XREF: X:00000001800226B8↑o
    // [STRU_180022708] HandlerType <0, 0, 0, rva sub_18002080A, 56>
    // DATA XREF: X:00000001800226A4↑o
    // [STRU_18002271C] HandlerType <0, 0, 0, rva sub_1800207BA, 56>
    // DATA XREF: X:0000000180022690↑o
    // [STRU_180022730] HandlerType <0, 0, 0, rva sub_18002077A, 56>
    // DATA XREF: X:stru_18002267C↑o
    // [STRU_180022744] UnwindMapEntry <-1, 0>  // DATA XREF: X:stru_1800061C0↑o
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <4, \  // int `Concurrency::details::FairScheduleGroup::AllocateSegment(details::FairScheduleGroup::SchedulingRing *,details::location *)'::`1'::dtor$0
    // [RVA] ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <7, \  // int `Concurrency::details::FairScheduleGroup::AllocateSegment(details::FairScheduleGroup::SchedulingRing *,details::location *)'::`1'::dtor$0
    // [RVA] ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [UNWINDMAPENTRY] <-1, 0>
    // [STRU_1800227A4] IPtoStateMap <rva StartAddress, -1>
    // DATA XREF: X:stru_1800061C0↑o
    // [IPTOSTATEMAP] <rva loc_18000BB3C, 2>
    // [IPTOSTATEMAP] <rva loc_18000BBC8, 4>
    // [IPTOSTATEMAP] <rva loc_18000BC35, 5>
    // [IPTOSTATEMAP] <rva loc_18000BC48, 4>
    // [IPTOSTATEMAP] <rva loc_18000BCBD, 7>
    // [IPTOSTATEMAP] <rva loc_18000BDD7, 8>
    // [IPTOSTATEMAP] <rva loc_18000BDEA, 7>
    // [IPTOSTATEMAP] <rva loc_18000BE26, 10>
    // [IPTOSTATEMAP] <rva loc_18000BE85, -1>
    // [IPTOSTATEMAP] <rva sub_18002077A, 0>
    // [IPTOSTATEMAP] <rva loc_180020787, 1>
    // [IPTOSTATEMAP] <rva loc_1800207A0, 0>
    // [IPTOSTATEMAP] <rva loc_1800207C7, 3>
    // [IPTOSTATEMAP] <rva loc_1800207E0, 0>
    // [IPTOSTATEMAP] <rva loc_180020817, 6>
    // [IPTOSTATEMAP] <rva loc_180020830, 0>
    // [IPTOSTATEMAP] <rva loc_180020867, 9>
    // [IPTOSTATEMAP] <rva loc_180020880, 0>
    // [IPTOSTATEMAP] <rva loc_1800208A7, 11>
    // [IPTOSTATEMAP] <rva loc_1800208C0, 0>
    // [STRU_18002284C] UNWIND_INFO_HDR <1, 2, 0x0D, 1, 0, 0>
    // DATA XREF: .pdata:000000018002C308↓o
    // [UNWIND_CODE] <4, 2, 6>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_1800061F0
    // [STRU_18002285C] IPtoStateMap <rva sub_180020C30, -1>
    // DATA XREF: X:stru_1800061F0↑o
    // [STRU_180022864] UNWIND_INFO_HDR <1, 2, 0x0D, 1, 0, 0>
    // DATA XREF: .pdata:000000018002C314↓o
    // [UNWIND_CODE] <4, 2, 6>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006220
    // [STRU_180022874] UnwindMapEntry <-1, rva sub_1800208DA>
    // DATA XREF: X:stru_180006220↑o
    // [STRU_18002287C] IPtoStateMap <rva sub_180020F10, -1>
    // DATA XREF: X:stru_180006220↑o
    // [STRU_180022884] UNWIND_INFO_HDR <1, 2, 0x0D, 1, 0, 0>
    // DATA XREF: .pdata:000000018002C320↓o
    // [UNWIND_CODE] <4, 2, 6>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __CxxFrameHandler3
    // [DD] rva stru_180006250
    // [STRU_180022894] UnwindMapEntry <-1, rva sub_1800208CE>
    // DATA XREF: X:stru_1800061F0↑o
    // X:stru_180006250↑o
    // [STRU_18002289C] IPtoStateMap <rva sub_180020FF4, -1>
    // DATA XREF: X:stru_180006250↑o
    // [STRU_1800228A4] UNWIND_INFO_HDR <1, 0, 0x1C, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002BEF4↓o
    // [UNWIND_CODE] <0x1C, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x1C, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x1C, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x1C, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x18, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800228C0] UNWIND_INFO_HDR <1, 0, 0x18, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BF30↓o
    // [UNWIND_CODE] <0x18, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x18, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x18, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800228D8] UNWIND_INFO_HDR <1, 0, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002BF3C↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x0F, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800228E8] UNWIND_INFO_HDR <1, 0, 0x14, 8, 0, 0>
    // DATA XREF: .pdata:000000018002BF48↓o
    // [UNWIND_CODE] <0x14, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x14, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x14, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x14, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_1800228FC] UNWIND_INFO_HDR <1, 0, 6, 2, 0, 0>
    // DATA XREF: .pdata:000000018002C2B4↓o
    // [UNWIND_CODE] <6, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180022904] UNWIND_INFO_HDR <1, 1, 0x18, 2, 0, 0>
    // DATA XREF: .pdata:000000018002BF54↓o
    // [UNWIND_CODE] <0x18, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001E2E7, rva loc_18001E307, \
    // [RVA] _CallSETranslator$filt$0, rva loc_18001E307>
    // [STRU_180022924] UNWIND_INFO_HDR <1, 0, 0x18, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002B720↓o
    // .pdata:000000018002B840↓o ...
    // [UNWIND_CODE] <0x18, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x18, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 9
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 8
    // [UNWIND_CODE] <0x18, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_18002293C] UNWIND_INFO_HDR <1, 3, 0x2D, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BF90↓o
    // [UNWIND_CODE] <0x1C, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x0B7
    // [UNWIND_CODE] <0x0D, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <9, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <7, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <5, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 3>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 5>  // UWOP_PUSH_NONVOL
    // [DD] rva __GSHandlerCheck
    // [DD] 0x5A0
    // [STRU_18002295C] UNWIND_INFO_HDR <1, 0, 0x22, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BFA8↓o
    // [UNWIND_CODE] <0x22, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x22, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x1E, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x1C, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x1A, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x18, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180022974] UNWIND_INFO_HDR <1, 0, 0x1F, 9, 0, 0>
    // DATA XREF: .pdata:000000018002BFB4↓o
    // [UNWIND_CODE] <0x1F, 2, 10>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x1B, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x19, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x17, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_18002298C] UNWIND_INFO_HDR <1, 1, 0x17, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002BFC0↓o
    // [UNWIND_CODE] <0x17, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x14
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x13
    // [UNWIND_CODE] <0x17, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x13, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001EB01, rva loc_18001EC07, \
    // [RVA] __RTDynamicCast$filt$0, rva loc_18001EC0C>
    // [STRU_1800229BC] UNWIND_INFO_HDR <1, 3, 0x22, 8, 0, 0>
    // DATA XREF: .pdata:000000018002C020↓o
    // [UNWIND_CODE] <0x22, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x1E, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x1C, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x1A, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x18, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x15, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 2
    // [C_SCOPE_TABLE] <rva loc_18001EFC6, rva loc_18001F05D, \
    // [RVA] __FrameUnwindToState$filt$0, rva loc_18001F05D>
    // [C_SCOPE_TABLE] <rva loc_18001EF8E, rva loc_18001F084, \
    // [RVA] __FrameUnwindToState$fin$1, 0>
    // [STRU_1800229F8] UNWIND_INFO_HDR <1, 1, 0x0D, 1, 0, 0>
    // DATA XREF: .pdata:000000018002C02C↓o
    // [UNWIND_CODE] <0x0D, 2, 4>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001F0F4, rva loc_18001F107, \
    // [RVA] __DestructExceptionObject$filt$0, \
    // [RVA] loc_18001F107>
    // [STRU_180022A18] UNWIND_INFO_HDR <1, 0, 0x1C, 0x0C, 0, 0>
    // DATA XREF: .pdata:000000018002BF9C↓o
    // .pdata:000000018002C038↓o
    // [UNWIND_CODE] <0x1C, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x1C, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x1C, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x1C, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x18, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180022A34] UNWIND_INFO_HDR <1, 0, 7, 3, 0, 0>
    // DATA XREF: .pdata:000000018002C2FC↓o
    // [UNWIND_CODE] <7, 2, 4>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <3, 0, 5>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180022A40] UNWIND_INFO_HDR <1, 3, 0x13, 8, 0, 0>
    // DATA XREF: .pdata:000000018002C044↓o
    // [UNWIND_CODE] <0x13, 2, 15>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0C, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0A, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <8, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <6, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <4, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <3, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <2, 0, 3>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 2
    // [C_SCOPE_TABLE] <rva loc_18001F2E6, rva loc_18001F311, \
    // [RVA] __CxxCallCatchBlock$filt$0, rva loc_18001F311>
    // [C_SCOPE_TABLE] <rva loc_18001F2E6, rva loc_18001F38E, \
    // [RVA] __CxxCallCatchBlock$fin$1, 0>
    // [STRU_180022A7C] UNWIND_INFO_HDR <1, 1, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002C050↓o
    // [UNWIND_CODE] <0x19, 4, 7>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x19, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0B
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0A
    // [UNWIND_CODE] <0x19, 2, 5>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 12>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001F4B0, rva loc_18001F5FC, 1, \
    // [RVA] loc_18001F600>
    // [STRU_180022AAC] UNWIND_INFO_HDR <1, 1, 0x0F, 6, 0, 0>
    // DATA XREF: .pdata:000000018002C05C↓o
    // [UNWIND_CODE] <0x0F, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 7
    // [UNWIND_CODE] <0x0F, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 6
    // [UNWIND_CODE] <0x0F, 2, 3>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x0B, 0, 7>  // UWOP_PUSH_NONVOL
    // [DD] rva __C_specific_handler
    // [DD] 1
    // [C_SCOPE_TABLE] <rva loc_18001F64E, rva loc_18001F6BE, 1, \
    // [RVA] loc_18001F6BE>
    // [STRU_180022AD4] UNWIND_INFO_HDR <1, 0, 0x17, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002C068↓o
    // [UNWIND_CODE] <0x17, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x12
    // [UNWIND_CODE] <0x17, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x10
    // [UNWIND_CODE] <0x17, 2, 9>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x13, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 6>  // UWOP_PUSH_NONVOL
    // [STRU_180022AEC] UNWIND_INFO_HDR <1, 0, 0x19, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002C074↓o
    // [UNWIND_CODE] <0x19, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x15
    // [UNWIND_CODE] <0x19, 2, 11>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x15, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x13, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0F, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0D, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0C, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x0B, 0, 5>  // UWOP_PUSH_NONVOL
    // [STRU_180022B04] UNWIND_INFO_HDR <1, 0, 0x25, 0x0B, 0, 0>
    // DATA XREF: .pdata:000000018002C080↓o
    // [UNWIND_CODE] <0x25, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x1D
    // [UNWIND_CODE] <0x25, 1, 0>  // UWOP_ALLOC_LARGE
    // [DW] 0x12
    // [UNWIND_CODE] <0x1A, 0, 15>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x18, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x16, 0, 13>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x14, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 7>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x11, 0, 6>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 5>  // UWOP_PUSH_NONVOL
    // [ALIGN] 4
    // [STRU_180022B20] UNWIND_INFO_HDR <1, 0, 0x18, 0x0A, 0, 0>
    // DATA XREF: .pdata:000000018002C098↓o
    // [UNWIND_CODE] <0x18, 4, 6>  // UWOP_SAVE_NONVOL
    // [DW] 0x0E
    // [UNWIND_CODE] <0x18, 4, 5>  // UWOP_SAVE_NONVOL
    // [DW] 0x0D
    // [UNWIND_CODE] <0x18, 4, 3>  // UWOP_SAVE_NONVOL
    // [DW] 0x0C
    // [UNWIND_CODE] <0x18, 2, 7>  // UWOP_ALLOC_SMALL
    // [UNWIND_CODE] <0x14, 0, 14>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x12, 0, 12>  // UWOP_PUSH_NONVOL
    // [UNWIND_CODE] <0x10, 0, 7>  // UWOP_PUSH_NONVOL
    // [STRU_180022B38] UNWIND_INFO_HDR <1, 0, 4, 1, 0, 0>
    // DATA XREF: .pdata:000000018002C0A4↓o
    // [UNWIND_CODE] <4, 2, 4>  // UWOP_ALLOC_SMALL
    // [ALIGN] 4
    // [DQ] 0x2591000000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x1DE88
    // [DQ] 0
    // const _ThrowInfo stru_180022B68
    // [STRU_180022B68] _ThrowInfo <0, 0x1DE80, 0, 0x22B88>
    // DATA XREF: sub_18001DEAC+1F↑o
    // [DQ] 2 dup(0)
    // [DQ] 0x22BA800000003, 0x22C6000022B40, 2 dup(0)
    // [DQ] 0x2593800000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x1DEE4
    // [DQ] 0
    // const _ThrowInfo stru_180022BD0
    // [STRU_180022BD0] _ThrowInfo <0, 0x1DE80, 0, 0x22BF0>
    // DATA XREF: sub_18001DF08+1F↑o
    // [DQ] 2 dup(0)
    // [DQ] 0x22C1000000003, 0x22C6000022B40, 2 dup(0)
    // [DQ] 0x2596000000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x1DF40
    // [DQ] 0
    // [DQ] 0x25F0000000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x0AF50
    // [DQ] 0
    // [DQ] 0x25F2800000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x0FD9C
    // [DQ] 0
    // [DQ] 0x22C3800000002, 0x22C60, 0
    // const _ThrowInfo pThrowInfo
    // [PTHROWINFO] _ThrowInfo <0, 0x0A640, 0, 0x22C88>
    // DATA XREF: sub_18000AAE8:loc_18000ABA0↑o
    // sub_18000AE10:loc_18000AEC6↑o ...
    // [ALIGN] 0x20
    // const _ThrowInfo stru_180022CC0
    // [STRU_180022CC0] _ThrowInfo <0, 0x0FD10, 0, 0x22CE0>
    // DATA XREF: __RTDynamicCast+153↑o
    // [ALIGN] 0x20
    // [DQ] 0x22D0000000003, 0x22C6000022D28, 2 dup(0)
    // [DQ] 0x240A000000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x0FE4C
    // [DQ] 0
    // [DQ] 0x2407800000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x0FE28
    // [DQ] 0
    // const _ThrowInfo stru_180022D50
    // [STRU_180022D50] _ThrowInfo <0, 0x0FD10, 0, 0x22D70>
    // DATA XREF: __RTDynamicCast+125↑o
    // [DQ] 2 dup(0)
    // [DQ] 0x22D8800000002, 0x22C60, 0
    // [DQ] 0x2405000000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x0FDC8
    // [DQ] 0
    // const _ThrowInfo stru_180022DB0
    // [STRU_180022DB0] _ThrowInfo <0, 0x1ED80, 0, 0x22DD0>
    // DATA XREF: FindHandler(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,uchar,int,unsigned __int64 *)+239↑o
    // [DQ] 2 dup(0)
    // [DQ] 0x22DE800000002, 0x22C60, 0
    // [DQ] 0x25FD000000000, 0x0FFFFFFFF00000000, 0x1800000000, 0x1FEA0
    // [DB] 4 dup(0)
    // [__IMPORT_DESCRIPTOR_KERNEL32] dd 0  // Import Name Table
    // [DD] 0  // Time stamp
    // [DD] 0  // Forwarder Chain
    // [DD] rva aKernel32Dll  // DLL Name
    // [DD] rva GetOEMCP  // Import Address Table
    // [__IMPORT_DESCRIPTOR_USER32] dd 0  // Import Name Table
    // [DD] 0  // Time stamp
    // [DD] 0  // Forwarder Chain
    // [DD] rva aUser32Dll  // DLL Name
    // [DD] rva wsprintfW  // Import Address Table
    // [ALIGN] 8
    // [DQ] 2 dup(0)
    // [DQ] 0x233D2, 0x236D6, 0x236C8, 0x236AE, 0x2369C, 0x23122, 0x23136
    // [DQ] 0x2314A, 0x2315C, 0x2316E, 0x23184, 0x23192, 0x231A8, 0x231B8
    // [DQ] 0x231D0, 0x231EE, 0x231F6, 0x23210, 0x23220, 0x23230, 0x2324A
    // [DQ] 0x23256, 0x23264, 0x23276, 0x23284, 0x23294, 0x232A0, 0x232B2
    // [DQ] 0x232C0, 0x232CA, 0x232DA, 0x232E6, 0x232F2, 0x23302, 0x23318
    // [DQ] 0x23334, 0x23352, 0x23366, 0x2337A, 0x23394, 0x233A8, 0x233BC
    // [DQ] 0x233C8, 0x233DE, 0x233F0, 0x233FC, 0x23410, 0x2341E, 0x23432
    // [DQ] 0x23448, 0x2345E, 0x2346C, 0x2347A, 0x23488, 0x2349A, 0x234C2
    // [DQ] 0x234D0, 0x234E2, 0x234FA, 0x23510, 0x2352A, 0x23540, 0x2355A
    // [DQ] 0x23574, 0x23584, 0x2359C, 0x235B4, 0x235C4, 0x235D6, 0x235E6
    // [DQ] 0x235F8, 0x23608, 0x2361E, 0x23630, 0x2363E, 0x23654, 0x2366A
    // [DQ] 0x2367C, 0x2368C, 0
    // [DQ] 0x2310A, 0x230F6, 0x230E8, 0
    // [DW] 0
    // [DB] 'MessageBoxW',0
    // [DW] 0
    // [DB] 'GetAsyncKeyState',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'wsprintfW',0
    // [AUSER32DLL] db 'USER32.dll',0  // DATA XREF: X:0000000180022E2C↑o
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetModuleHandleA',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetCurrentProcess',0
    // [DW] 0
    // [DB] 'GetProcAddress',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'VirtualProtect',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetCurrentThreadId',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'CloseHandle',0
    // [DW] 0
    // [DB] 'GetCurrentProcessId',0
    // [DW] 0
    // [DB] 'CreateThread',0
    // [ALIGN] 8
    // [DW] 0
    // [DB] 'GetPrivateProfileIntA',0
    // [DW] 0
    // [DB] 'WritePrivateProfileStringA',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'Sleep',0
    // [DW] 0
    // [DB] 'GetEnvironmentVariableA',0
    // [DW] 0
    // [DB] 'DecodePointer',0
    // [DW] 0
    // [DB] 'EncodePointer',0
    // [DW] 0
    // [DB] 'GetSystemTimeAsFileTime',0
    // [DW] 0
    // [DB] 'HeapAlloc',0
    // [DW] 0
    // [DB] 'FlsSetValue',0
    // [DW] 0
    // [DB] 'GetCommandLineA',0
    // [DW] 0
    // [DB] 'RtlUnwindEx',0
    // [DW] 0
    // [DB] 'GetLastError',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'HeapFree',0
    // [ALIGN] 0x20
    // [DW] 0
    // [DB] 'RaiseException',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'FlsGetValue',0
    // [DW] 0
    // [DB] 'FlsFree',0
    // [DW] 0
    // [DB] 'SetLastError',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'FlsAlloc',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'WriteFile',0
    // [DW] 0
    // [DB] 'GetStdHandle',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetModuleFileNameW',0
    // [ALIGN] 8
    // [DW] 0
    // [DB] 'UnhandledExceptionFilter',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'SetUnhandledExceptionFilter',0
    // [DW] 0
    // [DB] 'IsDebuggerPresent',0
    // [DW] 0
    // [DB] 'RtlVirtualUnwind',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'RtlLookupFunctionEntry',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'RtlCaptureContext',0
    // [DW] 0
    // [DB] 'TerminateProcess',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'GetCPInfo',0
    // [DW] 0
    // [DB] 'GetACP',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetOEMCP',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'IsValidCodePage',0
    // [DW] 0
    // [DB] 'HeapSize',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'GetModuleHandleW',0
    // [ALIGN] 0x10
    // [DW] 0
    // [DB] 'ExitProcess',0
    // [DW] 0
    // [DB] 'RtlPcToFileHeader',0
    // [DW] 0
    // [DB] 'GetFileAttributesA',0
    // [ALIGN] 8
    // [DW] 0
    // [DB] 'HeapSetInformation',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetVersion',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'HeapCreate',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'HeapDestroy',0
    // [DW] 0
    // [DB] 'SetHandleCount',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'InitializeCriticalSectionAndSpinCount',0
    // [DW] 0
    // [DB] 'GetFileType',0
    // [DW] 0
    // [DB] 'GetStartupInfoW',0
    // [DW] 0
    // [DB] 'DeleteCriticalSection',0
    // [DW] 0
    // [DB] 'GetModuleFileNameA',0
    // [ALIGN] 0x10
    // [DW] 0
    // [DB] 'FreeEnvironmentStringsW',0
    // [DW] 0
    // [DB] 'WideCharToMultiByte',0
    // [DW] 0
    // [DB] 'GetEnvironmentStringsW',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'QueryPerformanceCounter',0
    // [DW] 0
    // [DB] 'GetTickCount',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'LeaveCriticalSection',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'EnterCriticalSection',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'LoadLibraryW',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'SetFilePointer',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetConsoleCP',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'GetConsoleMode',0
    // [ALIGN] 8
    // [DW] 0
    // [DB] 'LCMapStringW',0
    // [ALIGN] 8
    // [DW] 0
    // [DB] 'MultiByteToWideChar',0
    // [DW] 0
    // [DB] 'GetStringTypeW',0
    // [ALIGN] 0x10
    // [DW] 0
    // [DB] 'HeapReAlloc',0
    // [DW] 0
    // [DB] 'GetExitCodeProcess',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'WaitForSingleObject',0
    // [DW] 0
    // [DB] 'CreateProcessA',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'SetStdHandle',0
    // [ALIGN] 4
    // [DW] 0
    // [DB] 'WriteConsoleW',0
    // [DW] 0
    // [DB] 'CompareStringW',0
    // [ALIGN] 2
    // [DW] 0
    // [DB] 'SetEnvironmentVariableA',0
    // [DW] 0
    // [DB] 'CreateFileW',0
    // [DW] 0
    // [DB] 'FlushFileBuffers',0
    // [ALIGN] 2
    // [AKERNEL32DLL] db 'KERNEL32.DLL',0  // DATA XREF: X:0000000180022E18↑o
    // [ALIGN] 0x200
    // [DQ] 0x100 dup(?)
    // [X] ends

    // [.PDATA:000000018002B000]   // Section 3. (virtual address 0002B000)
    // [.PDATA:000000018002B000]   // Virtual size                  : 00001344 (   4932.)
    // [.PDATA:000000018002B000]   // Section size in file          : 00001400 (   5120.)
    // [.PDATA:000000018002B000]   // Offset to raw data for section: 00024C00
    // [.PDATA:000000018002B000]   // Flags 40000040: Data Readable
    // [.PDATA:000000018002B000]   // Alignment     : default
    // [.PDATA:000000018002B000]   // ===========================================================================
    // [.PDATA:000000018002B000] 
    // [.PDATA:000000018002B000]   // Segment type: Pure data
    // [.PDATA:000000018002B000]   // Segment permissions: Read
    // [.PDATA:000000018002B000] _pdata segment para public 'DATA' use64
    // [.PDATA:000000018002B000] assume cs:_pdata
    // [.PDATA:000000018002B000]   // org 18002B000h
    // [.PDATA:000000018002B000] ExceptionDir RUNTIME_FUNCTION <rva sub_1800069B0, rva algn_180006AFF, \
    // [.PDATA:000000018002B000] rva stru_180021D44>
    // [.PDATA:000000018002B00C] RUNTIME_FUNCTION <rva sub_180006B00, rva algn_180006CA9, \
    // [.PDATA:000000018002B00C] rva stru_180021F30>
    // [.PDATA:000000018002B018] RUNTIME_FUNCTION <rva sub_180006CAC, rva algn_180006E0E, \
    // [.PDATA:000000018002B018] rva stru_180021F18>
    // [.PDATA:000000018002B024] RUNTIME_FUNCTION <rva sub_180006E10, rva sub_180007120, \
    // [.PDATA:000000018002B024] rva stru_1800210CC>
    // [.PDATA:000000018002B030] RUNTIME_FUNCTION <rva sub_180007120, rva sub_180007184, \
    // [.PDATA:000000018002B030] rva stru_1800210CC>
    // [.PDATA:000000018002B03C] RUNTIME_FUNCTION <rva sub_180007188, rva algn_1800073D9, \
    // [.PDATA:000000018002B03C] rva stru_180021F00>
    // [.PDATA:000000018002B048] RUNTIME_FUNCTION <rva sub_1800073DC, rva algn_180007579, \
    // [.PDATA:000000018002B048] rva stru_18002257C>
    // [.PDATA:000000018002B054] RUNTIME_FUNCTION <rva sub_18000757C, rva algn_180007627, \
    // [.PDATA:000000018002B054] rva stru_1800210CC>
    // [.PDATA:000000018002B060] RUNTIME_FUNCTION <rva sub_180007628, rva algn_18000795D, \
    // [.PDATA:000000018002B060] rva stru_18002248C>
    // [.PDATA:000000018002B06C] RUNTIME_FUNCTION <rva sub_180007960, rva algn_180007A09, \
    // [.PDATA:000000018002B06C] rva stru_180021D30>
    // [.PDATA:000000018002B078] RUNTIME_FUNCTION <rva sub_180007A0C, rva algn_180007EB1, \
    // [.PDATA:000000018002B078] rva stru_180021D20>
    // [.PDATA:000000018002B084] RUNTIME_FUNCTION <rva sub_180007EB4, rva algn_180007F19, \
    // [.PDATA:000000018002B084] rva stru_1800210CC>
    // [.PDATA:000000018002B090] RUNTIME_FUNCTION <rva sub_180007F1C, rva algn_180008022, \
    // [.PDATA:000000018002B090] rva stru_18002186C>
    // [.PDATA:000000018002B09C] RUNTIME_FUNCTION <rva sub_180008024, rva algn_1800081E3, \
    // [.PDATA:000000018002B09C] rva stru_180022054>
    // [.PDATA:000000018002B0A8] RUNTIME_FUNCTION <rva sub_1800081E4, rva algn_18000839A, \
    // [.PDATA:000000018002B0A8] rva stru_1800219E0>
    // [.PDATA:000000018002B0B4] RUNTIME_FUNCTION <rva sub_18000839C, rva algn_18000854B, \
    // [.PDATA:000000018002B0B4] rva stru_180021FCC>
    // [.PDATA:000000018002B0C0] RUNTIME_FUNCTION <rva sub_18000854C, rva algn_180008621, \
    // [.PDATA:000000018002B0C0] rva stru_180021D0C>
    // [.PDATA:000000018002B0CC] RUNTIME_FUNCTION <rva sub_180008624, rva algn_18000880D, \
    // [.PDATA:000000018002B0CC] rva stru_180021EE8>
    // [.PDATA:000000018002B0D8] RUNTIME_FUNCTION <rva sub_180008810, rva algn_180008ABA, \
    // [.PDATA:000000018002B0D8] rva stru_1800225D0>
    // [.PDATA:000000018002B0E4] RUNTIME_FUNCTION <rva sub_180008ABC, rva algn_180008F6F, \
    // [.PDATA:000000018002B0E4] rva stru_180022400>
    // [.PDATA:000000018002B0F0] RUNTIME_FUNCTION <rva sub_180008F70, rva sub_1800092A8, \
    // [.PDATA:000000018002B0F0] rva stru_180021F5C>
    // [.PDATA:000000018002B0FC] RUNTIME_FUNCTION <rva sub_1800092A8, rva algn_180009331, \
    // [.PDATA:000000018002B0FC] rva stru_1800210CC>
    // [.PDATA:000000018002B108] RUNTIME_FUNCTION <rva sub_180009334, rva algn_180009682, \
    // [.PDATA:000000018002B108] rva stru_1800223B8>
    // [.PDATA:000000018002B114] RUNTIME_FUNCTION <rva sub_180009684, rva algn_1800096FE, \
    // [.PDATA:000000018002B114] rva stru_1800214AC>
    // [.PDATA:000000018002B120] RUNTIME_FUNCTION <rva sub_180009700, rva algn_18000977A, \
    // [.PDATA:000000018002B120] rva stru_1800214AC>
    // [.PDATA:000000018002B12C] RUNTIME_FUNCTION <rva sub_18000977C, rva sub_180009C3C, \
    // [.PDATA:000000018002B12C] rva stru_180021D04>
    // [.PDATA:000000018002B138] RUNTIME_FUNCTION <rva sub_180009C3C, rva algn_180009D87, \
    // [.PDATA:000000018002B138] rva stru_180021284>
    // [.PDATA:000000018002B144] RUNTIME_FUNCTION <rva sub_180009D88, rva algn_18000A04F, \
    // [.PDATA:000000018002B144] rva stru_180021C50>
    // [.PDATA:000000018002B150] RUNTIME_FUNCTION <rva sub_18000A050, rva sub_18000A30C, \
    // [.PDATA:000000018002B150] rva stru_180022388>
    // [.PDATA:000000018002B15C] RUNTIME_FUNCTION <rva sub_18000A30C, rva sub_18000A5FC, \
    // [.PDATA:000000018002B15C] rva stru_1800225F8>
    // [.PDATA:000000018002B168] RUNTIME_FUNCTION <rva sub_18000A5FC, rva algn_18000A63F, \
    // [.PDATA:000000018002B168] rva stru_1800210CC>
    // [.PDATA:000000018002B174] RUNTIME_FUNCTION <rva sub_18000A640, rva algn_18000A665, \
    // [.PDATA:000000018002B174] rva stru_180021C38>
    // [.PDATA:000000018002B180] RUNTIME_FUNCTION <rva sub_18000A668, rva algn_18000A6AF, \
    // [.PDATA:000000018002B180] rva stru_180021CE8>
    // [.PDATA:000000018002B18C] RUNTIME_FUNCTION <rva sub_18000A6FC, rva sub_18000A938, \
    // [.PDATA:000000018002B18C] rva stru_1800222F8>
    // [.PDATA:000000018002B198] RUNTIME_FUNCTION <rva sub_18000A938, rva algn_18000A975, \
    // [.PDATA:000000018002B198] rva stru_180021CC8>
    // [.PDATA:000000018002B1A4] RUNTIME_FUNCTION <rva ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ,\  // std::string::~string(void)
    // [.PDATA:000000018002B1A4] rva algn_18000A9A6, rva stru_1800217D0>
    // [.PDATA:000000018002B1B0] RUNTIME_FUNCTION <rva sub_18000A9A8, rva algn_18000AA3A, \
    // [.PDATA:000000018002B1B0] rva stru_180021ECC>
    // [.PDATA:000000018002B1BC] RUNTIME_FUNCTION <rva sub_18000AA3C, rva algn_18000AAE7, \
    // [.PDATA:000000018002B1BC] rva stru_180021284>
    // [.PDATA:000000018002B1C8] RUNTIME_FUNCTION <rva sub_18000AAE8, rva algn_18000AC81, \
    // [.PDATA:000000018002B1C8] rva stru_18002225C>
    // [.PDATA:000000018002B1D4] RUNTIME_FUNCTION <rva ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z,\  // std::string::assign(std::string const &,unsigned __int64,unsigned __int64)
    // [.PDATA:000000018002B1D4] rva ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z,\  // std::string::erase(unsigned __int64,unsigned __int64)
    // [.PDATA:000000018002B1D4] rva stru_180022568>
    // [.PDATA:000000018002B1E0] RUNTIME_FUNCTION <rva ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z,\  // std::string::erase(unsigned __int64,unsigned __int64)
    // [.PDATA:000000018002B1E0] rva algn_18000AE0F, rva stru_1800210CC>
    // [.PDATA:000000018002B1EC] RUNTIME_FUNCTION <rva sub_18000AE10, rva algn_18000AF4E, \
    // [.PDATA:000000018002B1EC] rva stru_180021DC4>
    // [.PDATA:000000018002B1F8] RUNTIME_FUNCTION <rva ??0ThreadScheduler@details@Concurrency@@QEAA@AEBVSchedulerPolicy@2@@Z,\  // Concurrency::details::ThreadScheduler::ThreadScheduler(Concurrency::SchedulerPolicy const &)
    // [.PDATA:000000018002B1F8] rva algn_18000AF7F, rva stru_180021C08>
    // [.PDATA:000000018002B204] RUNTIME_FUNCTION <rva sub_18000AF80, rva algn_18000B009, \
    // [.PDATA:000000018002B204] rva stru_1800221B0>
    // [.PDATA:000000018002B210] RUNTIME_FUNCTION <rva sub_18000B00C, rva algn_18000B3DA, \
    // [.PDATA:000000018002B210] rva stru_180021284>
    // [.PDATA:000000018002B21C] RUNTIME_FUNCTION <rva sub_18000B3DC, rva sub_18000BA6C, \
    // [.PDATA:000000018002B21C] rva stru_180021284>
    // [.PDATA:000000018002B228] RUNTIME_FUNCTION <rva sub_18000BA6C, rva algn_18000BAE6, \
    // [.PDATA:000000018002B228] rva stru_180021CB4>
    // [.PDATA:000000018002B234] RUNTIME_FUNCTION <rva StartAddress, rva algn_18000BE9B, \
    // [.PDATA:000000018002B234] rva stru_180022660>
    // [.PDATA:000000018002B240] RUNTIME_FUNCTION <rva DllMain, rva algn_18000BF09, rva stru_1800216B0>
    // [.PDATA:000000018002B24C] RUNTIME_FUNCTION <rva sub_18000BF0C, rva algn_18000BF8E, \
    // [.PDATA:000000018002B24C] rva stru_1800213D8>
    // [.PDATA:000000018002B258] RUNTIME_FUNCTION <rva sub_18000BF90, rva algn_18000C012, \
    // [.PDATA:000000018002B258] rva stru_1800213D8>
    // [.PDATA:000000018002B264] RUNTIME_FUNCTION <rva sub_18000C014, rva algn_18000C171, \
    // [.PDATA:000000018002B264] rva stru_1800210CC>
    // [.PDATA:000000018002B270] RUNTIME_FUNCTION <rva sub_18000C174, rva algn_18000C1B9, \
    // [.PDATA:000000018002B270] rva stru_1800216B0>
    // [.PDATA:000000018002B27C] RUNTIME_FUNCTION <rva sub_18000C1BC, rva algn_18000C1DB, \
    // [.PDATA:000000018002B27C] rva stru_180021284>
    // [.PDATA:000000018002B288] RUNTIME_FUNCTION <rva sub_18000C1DC, rva algn_18000C21E, \
    // [.PDATA:000000018002B288] rva stru_180021284>
    // [.PDATA:000000018002B294] RUNTIME_FUNCTION <rva sub_18000C220, rva sub_18000C24C, \
    // [.PDATA:000000018002B294] rva stru_180021284>
    // [.PDATA:000000018002B2A0] RUNTIME_FUNCTION <rva sub_18000C24C, rva algn_18000C299, \
    // [.PDATA:000000018002B2A0] rva stru_180021BFC>
    // [.PDATA:000000018002B2AC] RUNTIME_FUNCTION <rva sub_18000C29C, rva algn_18000C41D, \
    // [.PDATA:000000018002B2AC] rva stru_180021BF4>
    // [.PDATA:000000018002B2B8] RUNTIME_FUNCTION <rva sub_18000C420, rva algn_18000C55D, \
    // [.PDATA:000000018002B2B8] rva stru_180021BE0>
    // [.PDATA:000000018002B2C4] RUNTIME_FUNCTION <rva sub_18000C560, rva algn_18000C67E, \
    // [.PDATA:000000018002B2C4] rva stru_180021BCC>
    // [.PDATA:000000018002B2D0] RUNTIME_FUNCTION <rva sub_18000C680, rva algn_18000C7FA, \
    // [.PDATA:000000018002B2D0] rva stru_180021BB8>
    // [.PDATA:000000018002B2DC] RUNTIME_FUNCTION <rva sub_18000C7FC, rva algn_18000C872, \
    // [.PDATA:000000018002B2DC] rva stru_180022568>
    // [.PDATA:000000018002B2E8] RUNTIME_FUNCTION <rva sub_18000C874, rva algn_18000C8E6, \
    // [.PDATA:000000018002B2E8] rva stru_180021BAC>
    // [.PDATA:000000018002B2F4] RUNTIME_FUNCTION <rva sub_18000C8E8, rva algn_18000CA51, \
    // [.PDATA:000000018002B2F4] rva stru_180022568>
    // [.PDATA:000000018002B300] RUNTIME_FUNCTION <rva sub_18000CA54, rva algn_18000CB03, \
    // [.PDATA:000000018002B300] rva stru_180022598>
    // [.PDATA:000000018002B30C] RUNTIME_FUNCTION <rva sub_18000CB04, rva algn_18000CE6F, \
    // [.PDATA:000000018002B30C] rva stru_180022504>
    // [.PDATA:000000018002B318] RUNTIME_FUNCTION <rva sub_18000CE70, rva algn_18000D621, \
    // [.PDATA:000000018002B318] rva stru_180022124>
    // [.PDATA:000000018002B324] RUNTIME_FUNCTION <rva sub_18000D624, rva algn_18000DE79, \
    // [.PDATA:000000018002B324] rva stru_18002208C>
    // [.PDATA:000000018002B330] RUNTIME_FUNCTION <rva sub_18000DE7C, rva sub_18000E21C, \
    // [.PDATA:000000018002B330] rva stru_180021D70>
    // [.PDATA:000000018002B33C] RUNTIME_FUNCTION <rva sub_18000E21C, rva algn_18000E3A5, \
    // [.PDATA:000000018002B33C] rva stru_180021C88>
    // [.PDATA:000000018002B348] RUNTIME_FUNCTION <rva sub_18000E3A8, rva algn_18000E46B, \
    // [.PDATA:000000018002B348] rva stru_180021C6C>
    // [.PDATA:000000018002B354] RUNTIME_FUNCTION <rva sub_18000E46C, rva algn_18000E622, \
    // [.PDATA:000000018002B354] rva stru_180021614>
    // [.PDATA:000000018002B360] RUNTIME_FUNCTION <rva sub_18000E624, rva algn_18000E64E, \
    // [.PDATA:000000018002B360] rva stru_1800217D0>
    // [.PDATA:000000018002B36C] RUNTIME_FUNCTION <rva sqrtf, rva atan2f, rva stru_180021090>
    // [.PDATA:000000018002B378] RUNTIME_FUNCTION <rva atan2f, rva algn_18000EC06, rva stru_180021048>
    // [.PDATA:000000018002B384] RUNTIME_FUNCTION <rva fmodf, rva algn_18000ECD6, rva stru_180021068>
    // [.PDATA:000000018002B390] RUNTIME_FUNCTION <rva fabs, rva byte_18000EDC0, rva stru_180021070>
    // [.PDATA:000000018002B39C] RUNTIME_FUNCTION <rva strcmp, rva acosf, rva stru_180021080>
    // [.PDATA:000000018002B3A8] RUNTIME_FUNCTION <rva acosf, rva algn_18000F119, rva stru_180021084>
    // [.PDATA:000000018002B3B4] RUNTIME_FUNCTION <rva sqrt, rva algn_18000F226, rva stru_180021090>
    // [.PDATA:000000018002B3C0] RUNTIME_FUNCTION <rva srand, rva algn_18000F296, rva stru_1800217D0>
    // [.PDATA:000000018002B3CC] RUNTIME_FUNCTION <rva rand, rva algn_18000F2C3, rva stru_180021284>
    // [.PDATA:000000018002B3D8] RUNTIME_FUNCTION <rva _purecall, rva algn_18000F2FB, \
    // [.PDATA:000000018002B3D8] rva stru_180021284>
    // [.PDATA:000000018002B3E4] RUNTIME_FUNCTION <rva atan, rva algn_18000F592, rva stru_180021098>
    // [.PDATA:000000018002B3F0] RUNTIME_FUNCTION <rva sub_18000F594, rva algn_18000F5CD, \
    // [.PDATA:000000018002B3F0] rva stru_1800210CC>
    // [.PDATA:000000018002B3FC] RUNTIME_FUNCTION <rva ??8type_info@@QEBA_NAEBV0@@Z, \  // type_info::operator==(type_info const &)
    // [.PDATA:000000018002B3FC] rva algn_18000F5EE, rva stru_180021284>
    // [.PDATA:000000018002B408] RUNTIME_FUNCTION <rva sprintf, rva algn_18000F690, rva stru_1800210A4>
    // [.PDATA:000000018002B414] RUNTIME_FUNCTION <rva strcat, rva algn_18000F730, rva stru_1800210B0>
    // [.PDATA:000000018002B420] RUNTIME_FUNCTION <rva strcpy, rva byte_18000F7F7, rva stru_1800210B4>
    // [.PDATA:000000018002B42C] RUNTIME_FUNCTION <rva memmove, \  // _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
    // [.PDATA:000000018002B42C] rva ??0_LocaleUpdate@@QEAA@PEAUlocaleinfo_struct@@@Z,\
    // [.PDATA:000000018002B42C] rva stru_1800210B8>
    // [.PDATA:000000018002B438] RUNTIME_FUNCTION <rva ??0_LocaleUpdate@@QEAA@PEAUlocaleinfo_struct@@@Z,\  // _LocaleUpdate::_LocaleUpdate(localeinfo_struct *)
    // [.PDATA:000000018002B438] rva algn_18000FBE5, rva stru_1800217D0>
    // [.PDATA:000000018002B444] RUNTIME_FUNCTION <rva ?_Copy_str@exception@std@@AEAAXPEBD@Z, \  // std::exception::_Copy_str(char const *)
    // [.PDATA:000000018002B444] rva algn_18000FC72, rva stru_1800210BC>
    // [.PDATA:000000018002B450] RUNTIME_FUNCTION <rva ?_Tidy@exception@std@@AEAAXXZ, \  // std::exception::_Tidy(void)
    // [.PDATA:000000018002B450] rva algn_18000FC9B, rva stru_1800217D0>
    // [.PDATA:000000018002B45C] RUNTIME_FUNCTION <rva ??0exception@std@@QEAA@AEBQEBD@Z, \  // std::exception::exception(char const * const &)
    // [.PDATA:000000018002B45C] rva algn_18000FCC9, rva stru_1800217D0>
    // [.PDATA:000000018002B468] RUNTIME_FUNCTION <rva ??4exception@std@@QEAAAEAV01@AEBV01@@Z, \  // std::exception::operator=(std::exception const &)
    // [.PDATA:000000018002B468] rva sub_18000FD10, rva stru_1800210CC>
    // [.PDATA:000000018002B474] RUNTIME_FUNCTION <rva sub_18000FD20, rva algn_18000FD4A, \
    // [.PDATA:000000018002B474] rva stru_180021204>
    // [.PDATA:000000018002B480] RUNTIME_FUNCTION <rva sub_18000FD4C, rva algn_18000FD76, \
    // [.PDATA:000000018002B480] rva stru_180021204>
    // [.PDATA:000000018002B48C] RUNTIME_FUNCTION <rva sub_18000FD78, rva algn_18000FD99, \
    // [.PDATA:000000018002B48C] rva stru_1800217D0>
    // [.PDATA:000000018002B498] RUNTIME_FUNCTION <rva ??0exception@std@@QEAA@AEBV01@@Z, \  // std::exception::exception(std::exception const &)
    // [.PDATA:000000018002B498] rva algn_18000FDC6, rva stru_1800217D0>
    // [.PDATA:000000018002B4A4] RUNTIME_FUNCTION <rva sub_18000FDC8, rva algn_18000FDE9, \
    // [.PDATA:000000018002B4A4] rva stru_1800217D0>
    // [.PDATA:000000018002B4B0] RUNTIME_FUNCTION <rva sub_18000FDEC, rva algn_18000FE25, \
    // [.PDATA:000000018002B4B0] rva stru_1800210CC>
    // [.PDATA:000000018002B4BC] RUNTIME_FUNCTION <rva sub_18000FE28, rva algn_18000FE49, \
    // [.PDATA:000000018002B4BC] rva stru_1800217D0>
    // [.PDATA:000000018002B4C8] RUNTIME_FUNCTION <rva sub_18000FE4C, rva algn_18000FE6D, \
    // [.PDATA:000000018002B4C8] rva stru_1800217D0>
    // [.PDATA:000000018002B4D4] RUNTIME_FUNCTION <rva strlen, rva __onexitinit, rva stru_1800210D8>
    // [.PDATA:000000018002B4E0] RUNTIME_FUNCTION <rva __onexitinit, rva algn_18000FF6B, \
    // [.PDATA:000000018002B4E0] rva stru_1800217D0>
    // [.PDATA:000000018002B4EC] RUNTIME_FUNCTION <rva _onexit, rva algn_180010076, rva stru_1800210DC>
    // [.PDATA:000000018002B4F8] RUNTIME_FUNCTION <rva atexit, rva algn_18001008F, rva stru_180021284>
    // [.PDATA:000000018002B504] RUNTIME_FUNCTION <rva ??2@YAPEAX_K@Z, rva algn_180010133, \  // operator new(unsigned __int64)
    // [.PDATA:000000018002B504] rva stru_18002160C>
    // [.PDATA:000000018002B510] RUNTIME_FUNCTION <rva system, rva _time64, rva stru_18002110C>
    // [.PDATA:000000018002B51C] RUNTIME_FUNCTION <rva _time64, rva algn_180010299, rva stru_1800217D0>
    // [.PDATA:000000018002B528] RUNTIME_FUNCTION <rva malloc, rva byte_18001035A, rva stru_1800219E0>
    // [.PDATA:000000018002B534] RUNTIME_FUNCTION <rva memset, rva algn_18001045A, rva stru_180021120>
    // [.PDATA:000000018002B540] RUNTIME_FUNCTION <rva _vsprintf_l, rva algn_180010511, \
    // [.PDATA:000000018002B540] rva stru_180021124>
    // [.PDATA:000000018002B54C] RUNTIME_FUNCTION <rva _CRT_INIT, rva algn_18001068E, \
    // [.PDATA:000000018002B54C] rva stru_180021138>
    // [.PDATA:000000018002B558] RUNTIME_FUNCTION <rva __DllMainCRTStartup, rva algn_1800107AB, \
    // [.PDATA:000000018002B558] rva stru_180021158>
    // [.PDATA:000000018002B564] RUNTIME_FUNCTION <rva DllEntryPoint, rva algn_1800107E9, \
    // [.PDATA:000000018002B564] rva stru_1800219E0>
    // [.PDATA:000000018002B570] RUNTIME_FUNCTION <rva sub_1800107EC, rva algn_180010A5B, \
    // [.PDATA:000000018002B570] rva stru_180021184>
    // [.PDATA:000000018002B57C] RUNTIME_FUNCTION <rva _sincosf_special, rva algn_180010AF3, \
    // [.PDATA:000000018002B57C] rva stru_1800211A0>
    // [.PDATA:000000018002B588] RUNTIME_FUNCTION <rva ?terminate@@YAXXZ, rva algn_180010B3F, \  // terminate(void)
    // [.PDATA:000000018002B588] rva stru_1800211A8>
    // [.PDATA:000000018002B594] RUNTIME_FUNCTION <rva ?_inconsistency@@YAXXZ, rva algn_180010B65, \  // _inconsistency(void)
    // [.PDATA:000000018002B594] rva stru_1800211C8>
    // [.PDATA:000000018002B5A0] RUNTIME_FUNCTION <rva _initp_eh_hooks, rva algn_180010B85, \
    // [.PDATA:000000018002B5A0] rva stru_180021284>
    // [.PDATA:000000018002B5AC] RUNTIME_FUNCTION <rva __C_specific_handler, rva algn_180010D85, \
    // [.PDATA:000000018002B5AC] rva stru_1800211E8>
    // [.PDATA:000000018002B5B8] RUNTIME_FUNCTION <rva free, rva algn_180010DC5, rva stru_180021204>
    // [.PDATA:000000018002B5C4] RUNTIME_FUNCTION <rva _exception_enabled, rva algn_180010E81, \
    // [.PDATA:000000018002B5C4] rva stru_1800219E0>
    // [.PDATA:000000018002B5D0] RUNTIME_FUNCTION <rva _handle_errorf, rva algn_180010FDF, \
    // [.PDATA:000000018002B5D0] rva stru_18002120C>
    // [.PDATA:000000018002B5DC] RUNTIME_FUNCTION <rva _handle_error, rva unknown_libname_26, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002B5DC] rva stru_18002120C>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002B5E8] RUNTIME_FUNCTION <rva _statfp, rva algn_1800111D1, rva stru_180021284>
    // [.PDATA:000000018002B5F4] RUNTIME_FUNCTION <rva _clrfp, rva algn_1800111F1, rva stru_1800217D0>
    // [.PDATA:000000018002B600] RUNTIME_FUNCTION <rva _ctrlfp, rva _set_statfp, rva stru_18002122C>
    // [.PDATA:000000018002B60C] RUNTIME_FUNCTION <rva _set_statfp, rva algn_18001128F, \
    // [.PDATA:000000018002B60C] rva stru_1800217D0>
    // [.PDATA:000000018002B618] RUNTIME_FUNCTION <rva _raise_exc_ex, rva _raise_exc, \
    // [.PDATA:000000018002B618] rva stru_180021254>
    // [.PDATA:000000018002B624] RUNTIME_FUNCTION <rva _raise_exc, rva algn_1800115C3, \
    // [.PDATA:000000018002B624] rva stru_1800216B8>
    // [.PDATA:000000018002B630] RUNTIME_FUNCTION <rva _raise_excf, rva algn_1800115EE, \
    // [.PDATA:000000018002B630] rva stru_1800216B8>
    // [.PDATA:000000018002B63C] RUNTIME_FUNCTION <rva _handle_exc, rva algn_18001185A, \
    // [.PDATA:000000018002B63C] rva stru_180021268>
    // [.PDATA:000000018002B648] RUNTIME_FUNCTION <rva _set_errno_from_matherr, rva algn_180011889, \
    // [.PDATA:000000018002B648] rva stru_180021284>
    // [.PDATA:000000018002B654] RUNTIME_FUNCTION <rva _umatherr, rva _handle_qnan1, \
    // [.PDATA:000000018002B654] rva stru_18002128C>
    // [.PDATA:000000018002B660] RUNTIME_FUNCTION <rva _handle_qnan1, rva algn_180011A07, \
    // [.PDATA:000000018002B660] rva stru_180021294>
    // [.PDATA:000000018002B66C] RUNTIME_FUNCTION <rva _except1, rva algn_180011AFA, \
    // [.PDATA:000000018002B66C] rva stru_1800212A0>
    // [.PDATA:000000018002B678] RUNTIME_FUNCTION <rva _mtterm, rva algn_180011CE1, rva stru_180021284>
    // [.PDATA:000000018002B684] RUNTIME_FUNCTION <rva _initptd, rva algn_180011D99, \
    // [.PDATA:000000018002B684] rva stru_1800212C0>
    // [.PDATA:000000018002B690] RUNTIME_FUNCTION <rva _getptd_noexit, rva _getptd, rva stru_1800210CC>
    // [.PDATA:000000018002B69C] RUNTIME_FUNCTION <rva _getptd, rva _freefls, rva stru_1800217D0>
    // [.PDATA:000000018002B6A8] RUNTIME_FUNCTION <rva _freefls, rva algn_180011F77, \
    // [.PDATA:000000018002B6A8] rva stru_1800212F4>
    // [.PDATA:000000018002B6B4] RUNTIME_FUNCTION <rva _freeptd, rva algn_180011FB6, \
    // [.PDATA:000000018002B6B4] rva stru_1800217D0>
    // [.PDATA:000000018002B6C0] RUNTIME_FUNCTION <rva _mtinit, rva algn_180012039, rva stru_1800217D0>
    // [.PDATA:000000018002B6CC] RUNTIME_FUNCTION <rva abort, rva _set_abort_behavior, \
    // [.PDATA:000000018002B6CC] rva stru_180021284>
    // [.PDATA:000000018002B6D8] RUNTIME_FUNCTION <rva _NMSG_WRITE, rva algn_180012321, \
    // [.PDATA:000000018002B6D8] rva stru_180021328>
    // [.PDATA:000000018002B6E4] RUNTIME_FUNCTION <rva _FF_MSGBANNER, rva algn_180012367, \
    // [.PDATA:000000018002B6E4] rva stru_180021284>
    // [.PDATA:000000018002B6F0] RUNTIME_FUNCTION <rva unknown_libname_27, rva _flsbuf, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002B6F0] rva stru_18002134C>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002B6FC] RUNTIME_FUNCTION <rva _flsbuf, rva algn_180012569, rva stru_18002136C>
    // [.PDATA:000000018002B708] RUNTIME_FUNCTION <rva write_char, rva algn_1800125B2, \
    // [.PDATA:000000018002B708] rva stru_1800217D0>
    // [.PDATA:000000018002B714] RUNTIME_FUNCTION <rva write_multi_char, rva algn_180012605, \
    // [.PDATA:000000018002B714] rva stru_180021380>
    // [.PDATA:000000018002B720] RUNTIME_FUNCTION <rva write_string, rva algn_18001269D, \
    // [.PDATA:000000018002B720] rva stru_180022924>
    // [.PDATA:000000018002B72C] RUNTIME_FUNCTION <rva _output_l, rva sub_18001314C, \
    // [.PDATA:000000018002B72C] rva stru_180021394>
    // [.PDATA:000000018002B738] RUNTIME_FUNCTION <rva _call_reportfault, rva algn_18001329F, \
    // [.PDATA:000000018002B738] rva stru_1800213B8>
    // [.PDATA:000000018002B744] RUNTIME_FUNCTION <rva _invoke_watson, rva algn_1800132D1, \
    // [.PDATA:000000018002B744] rva stru_180021284>
    // [.PDATA:000000018002B750] RUNTIME_FUNCTION <rva _invalid_parameter, rva algn_180013343, \
    // [.PDATA:000000018002B750] rva stru_1800213D8>
    // [.PDATA:000000018002B75C] RUNTIME_FUNCTION <rva _invalid_parameter_noinfo, rva algn_180013362, \
    // [.PDATA:000000018002B75C] rva stru_1800216B0>
    // [.PDATA:000000018002B768] RUNTIME_FUNCTION <rva _errno, rva __doserrno, rva stru_180021284>
    // [.PDATA:000000018002B774] RUNTIME_FUNCTION <rva __doserrno, rva _dosmaperr, rva stru_180021284>
    // [.PDATA:000000018002B780] RUNTIME_FUNCTION <rva _dosmaperr, rva algn_180013432, \
    // [.PDATA:000000018002B780] rva stru_1800217D0>
    // [.PDATA:000000018002B78C] RUNTIME_FUNCTION <rva ?setSBCS@@YAXPEAUthreadmbcinfostruct@@@Z, \  // setSBCS(threadmbcinfostruct *)
    // [.PDATA:000000018002B78C] rva ?setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z, \  // setSBUpLow(threadmbcinfostruct *)
    // [.PDATA:000000018002B78C] rva stru_180022568>
    // [.PDATA:000000018002B798] RUNTIME_FUNCTION <rva ?setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z, \  // setSBUpLow(threadmbcinfostruct *)
    // [.PDATA:000000018002B798] rva __updatetmbcinfo, rva stru_1800213EC>
    // [.PDATA:000000018002B7A4] RUNTIME_FUNCTION <rva __updatetmbcinfo, rva algn_18001376A, \
    // [.PDATA:000000018002B7A4] rva stru_18002140C>
    // [.PDATA:000000018002B7B0] RUNTIME_FUNCTION <rva ?getSystemCP@@YAHH@Z, rva _setmbcp_nolock, \  // getSystemCP(int)
    // [.PDATA:000000018002B7B0] rva stru_18002160C>
    // [.PDATA:000000018002B7BC] RUNTIME_FUNCTION <rva _setmbcp_nolock, rva algn_180013A71, \
    // [.PDATA:000000018002B7BC] rva stru_180021430>
    // [.PDATA:000000018002B7C8] RUNTIME_FUNCTION <rva _setmbcp, rva algn_180013C52, \
    // [.PDATA:000000018002B7C8] rva stru_18002144C>
    // [.PDATA:000000018002B7D4] RUNTIME_FUNCTION <rva __initmbctable, rva __addlocaleref, \
    // [.PDATA:000000018002B7D4] rva stru_180021284>
    // [.PDATA:000000018002B7E0] RUNTIME_FUNCTION <rva __freetlocinfo, rva algn_180013F25, \
    // [.PDATA:000000018002B7E0] rva stru_1800219E0>
    // [.PDATA:000000018002B7EC] RUNTIME_FUNCTION <rva _updatetlocinfoEx_nolock, rva algn_180013F7F, \
    // [.PDATA:000000018002B7EC] rva stru_1800217D0>
    // [.PDATA:000000018002B7F8] RUNTIME_FUNCTION <rva __updatetlocinfo, rva algn_180013FF5, \
    // [.PDATA:000000018002B7F8] rva stru_18002147C>
    // [.PDATA:000000018002B804] RUNTIME_FUNCTION <rva _tolower_l, rva algn_180014146, \
    // [.PDATA:000000018002B804] rva stru_18002149C>
    // [.PDATA:000000018002B810] RUNTIME_FUNCTION <rva strcpy_s, rva algn_1800141C9, \
    // [.PDATA:000000018002B810] rva stru_1800217D0>
    // [.PDATA:000000018002B81C] RUNTIME_FUNCTION <rva _malloc_crt, rva algn_18001424A, \
    // [.PDATA:000000018002B81C] rva stru_1800214AC>
    // [.PDATA:000000018002B828] RUNTIME_FUNCTION <rva _calloc_crt, rva algn_1800142CF, \
    // [.PDATA:000000018002B828] rva stru_1800214AC>
    // [.PDATA:000000018002B834] RUNTIME_FUNCTION <rva _realloc_crt, rva algn_180014355, \
    // [.PDATA:000000018002B834] rva stru_1800214AC>
    // [.PDATA:000000018002B840] RUNTIME_FUNCTION <rva _recalloc_crt, rva _msize, rva stru_180022924>
    // [.PDATA:000000018002B84C] RUNTIME_FUNCTION <rva _msize, rva algn_180014419, rva stru_180021284>
    // [.PDATA:000000018002B858] RUNTIME_FUNCTION <rva __crtCorExitProcess, rva algn_180014455, \
    // [.PDATA:000000018002B858] rva stru_1800217D0>
    // [.PDATA:000000018002B864] RUNTIME_FUNCTION <rva __crtExitProcess, rva algn_18001446E, \
    // [.PDATA:000000018002B864] rva stru_1800217D0>
    // [.PDATA:000000018002B870] RUNTIME_FUNCTION <rva _init_pointers, rva algn_1800144CB, \
    // [.PDATA:000000018002B870] rva stru_1800217D0>
    // [.PDATA:000000018002B87C] RUNTIME_FUNCTION <rva _initterm, rva algn_1800144FF, \
    // [.PDATA:000000018002B87C] rva stru_1800214C4>
    // [.PDATA:000000018002B888] RUNTIME_FUNCTION <rva _initterm_e, rva algn_180014539, \
    // [.PDATA:000000018002B888] rva stru_1800210CC>
    // [.PDATA:000000018002B894] RUNTIME_FUNCTION <rva _cinit, rva algn_1800145EB, rva stru_1800210CC>
    // [.PDATA:000000018002B8A0] RUNTIME_FUNCTION <rva doexit, rva algn_18001477B, rva stru_1800214D0>
    // [.PDATA:000000018002B8AC] RUNTIME_FUNCTION <rva _amsg_exit, rva algn_1800147BE, \
    // [.PDATA:000000018002B8AC] rva stru_1800217D0>
    // [.PDATA:000000018002B8B8] RUNTIME_FUNCTION <rva _callnewh, rva algn_1800147FB, \
    // [.PDATA:000000018002B8B8] rva stru_1800217D0>
    // [.PDATA:000000018002B8C4] RUNTIME_FUNCTION <rva _CxxThrowException, rva algn_18001488F, \
    // [.PDATA:000000018002B8C4] rva stru_180021500>
    // [.PDATA:000000018002B8D0] RUNTIME_FUNCTION <rva _spawnvpe, rva algn_180014B5E, \
    // [.PDATA:000000018002B8D0] rva stru_180021A8C>
    // [.PDATA:000000018002B8DC] RUNTIME_FUNCTION <rva comexecmd, rva algn_180014BED, \
    // [.PDATA:000000018002B8DC] rva stru_180021510>
    // [.PDATA:000000018002B8E8] RUNTIME_FUNCTION <rva _spawnve, rva algn_180014E76, \
    // [.PDATA:000000018002B8E8] rva stru_18002151C>
    // [.PDATA:000000018002B8F4] RUNTIME_FUNCTION <rva sub_180014E78, rva _getenv_helper_nolock, \
    // [.PDATA:000000018002B8F4] rva stru_1800217D0>
    // [.PDATA:000000018002B900] RUNTIME_FUNCTION <rva _getenv_helper_nolock, rva algn_180014F99, \
    // [.PDATA:000000018002B900] rva stru_1800219E0>
    // [.PDATA:000000018002B90C] RUNTIME_FUNCTION <rva _dupenv_s, rva algn_18001509E, \
    // [.PDATA:000000018002B90C] rva stru_18002153C>
    // [.PDATA:000000018002B918] RUNTIME_FUNCTION <rva _heap_init, rva algn_1800150F6, \
    // [.PDATA:000000018002B918] rva stru_180021284>
    // [.PDATA:000000018002B924] RUNTIME_FUNCTION <rva _heap_term, rva algn_180015116, \
    // [.PDATA:000000018002B924] rva stru_180021284>
    // [.PDATA:000000018002B930] RUNTIME_FUNCTION <rva _ioinit, rva algn_1800153EA, rva stru_18002157C>
    // [.PDATA:000000018002B93C] RUNTIME_FUNCTION <rva _ioterm, rva algn_18001545F, rva stru_1800219E0>
    // [.PDATA:000000018002B948] RUNTIME_FUNCTION <rva _setenvp, rva parse_cmdline, rva stru_1800213D8>
    // [.PDATA:000000018002B954] RUNTIME_FUNCTION <rva parse_cmdline, rva algn_18001575F, \
    // [.PDATA:000000018002B954] rva stru_180021598>
    // [.PDATA:000000018002B960] RUNTIME_FUNCTION <rva _setargv, rva algn_180015856, \
    // [.PDATA:000000018002B960] rva stru_1800215B4>
    // [.PDATA:000000018002B96C] RUNTIME_FUNCTION <rva __crtGetEnvironmentStringsA, rva sub_18001594C, \
    // [.PDATA:000000018002B96C] rva stru_180021668>
    // [.PDATA:000000018002B978] RUNTIME_FUNCTION <rva sub_18001594C, rva sub_180015984, \
    // [.PDATA:000000018002B978] rva stru_1800210CC>
    // [.PDATA:000000018002B984] RUNTIME_FUNCTION <rva sub_180015984, rva _XcptFilter, \
    // [.PDATA:000000018002B984] rva stru_1800210CC>
    // [.PDATA:000000018002B990] RUNTIME_FUNCTION <rva _XcptFilter, rva __CppXcptFilter, \
    // [.PDATA:000000018002B990] rva stru_180022568>
    // [.PDATA:000000018002B99C] RUNTIME_FUNCTION <rva __security_init_cookie, rva algn_180015C53, \
    // [.PDATA:000000018002B99C] rva stru_1800215C4>
    // [.PDATA:000000018002B9A8] RUNTIME_FUNCTION <rva __GSHandlerCheckCommon, rva algn_180015CB7, \
    // [.PDATA:000000018002B9A8] rva stru_1800217D0>
    // [.PDATA:000000018002B9B4] RUNTIME_FUNCTION <rva __GSHandlerCheck, rva byte_180015CD5, \
    // [.PDATA:000000018002B9B4] rva stru_180021284>
    // [.PDATA:000000018002B9C0] RUNTIME_FUNCTION <rva __security_check_cookie, rva algn_180015D0F, \
    // [.PDATA:000000018002B9C0] rva stru_1800215D0>
    // [.PDATA:000000018002B9CC] RUNTIME_FUNCTION <rva _local_unwind, rva algn_180015D44, \
    // [.PDATA:000000018002B9CC] rva stru_1800215D8>
    // [.PDATA:000000018002B9D8] RUNTIME_FUNCTION <rva _NLG_Notify, rva algn_180015D68, \
    // [.PDATA:000000018002B9D8] rva stru_1800215E0>
    // [.PDATA:000000018002B9E4] RUNTIME_FUNCTION <rva __NLG_Dispatch2, rva algn_180015D71, \
    // [.PDATA:000000018002B9E4] rva stru_1800215E4>
    // [.PDATA:000000018002B9F0] RUNTIME_FUNCTION <rva __NLG_Return2, rva algn_180015D81, \
    // [.PDATA:000000018002B9F0] rva stru_1800215E8>
    // [.PDATA:000000018002B9FC] RUNTIME_FUNCTION <rva _IsNonwritableInCurrentImage, \
    // [.PDATA:000000018002B9FC] rva algn_180015E51, rva stru_1800215EC>
    // [.PDATA:000000018002BA08] RUNTIME_FUNCTION <rva _forcdecpt_l, rva algn_180015ED3, \
    // [.PDATA:000000018002BA08] rva stru_18002160C>
    // [.PDATA:000000018002BA14] RUNTIME_FUNCTION <rva _cropzeros_l, rva algn_180015F71, \
    // [.PDATA:000000018002BA14] rva stru_18002160C>
    // [.PDATA:000000018002BA20] RUNTIME_FUNCTION <rva _fassign_l, rva algn_180015FCE, \
    // [.PDATA:000000018002BA20] rva stru_180021614>
    // [.PDATA:000000018002BA2C] RUNTIME_FUNCTION <rva _cftoe2_l, rva algn_180016219, \
    // [.PDATA:000000018002BA2C] rva stru_18002161C>
    // [.PDATA:000000018002BA38] RUNTIME_FUNCTION <rva _cftoe_l, rva algn_180016313, \
    // [.PDATA:000000018002BA38] rva stru_180021638>
    // [.PDATA:000000018002BA44] RUNTIME_FUNCTION <rva _cftoa_l, rva _cftof2_l, rva stru_180021650>
    // [.PDATA:000000018002BA50] RUNTIME_FUNCTION <rva _cftof2_l, rva algn_18001688D, \
    // [.PDATA:000000018002BA50] rva stru_180021668>
    // [.PDATA:000000018002BA5C] RUNTIME_FUNCTION <rva _cftof_l, rva algn_180016961, \
    // [.PDATA:000000018002BA5C] rva stru_180021680>
    // [.PDATA:000000018002BA68] RUNTIME_FUNCTION <rva _cftog_l, rva _cfltcvt_l, rva stru_180021698>
    // [.PDATA:000000018002BA74] RUNTIME_FUNCTION <rva _cfltcvt_l, rva algn_180016B2D, \
    // [.PDATA:000000018002BA74] rva stru_1800216B0>
    // [.PDATA:000000018002BA80] RUNTIME_FUNCTION <rva _cfltcvt, rva _initp_misc_cfltcvt_tab, \
    // [.PDATA:000000018002BA80] rva stru_1800216B8>
    // [.PDATA:000000018002BA8C] RUNTIME_FUNCTION <rva _initp_misc_cfltcvt_tab, rva algn_180016B8A, \
    // [.PDATA:000000018002BA8C] rva stru_1800210CC>
    // [.PDATA:000000018002BA98] RUNTIME_FUNCTION <rva _get_fpsr, rva _set_fpsr, rva stru_1800216C0>
    // [.PDATA:000000018002BAA4] RUNTIME_FUNCTION <rva _mtinitlocks, rva _mtdeletelocks, \
    // [.PDATA:000000018002BAA4] rva stru_1800216C8>
    // [.PDATA:000000018002BAB0] RUNTIME_FUNCTION <rva _mtdeletelocks, rva algn_180016CFB, \
    // [.PDATA:000000018002BAB0] rva stru_180022568>
    // [.PDATA:000000018002BABC] RUNTIME_FUNCTION <rva _mtinitlocknum, rva algn_180016DFA, \
    // [.PDATA:000000018002BABC] rva stru_1800216DC>
    // [.PDATA:000000018002BAC8] RUNTIME_FUNCTION <rva _lock, rva _initp_misc_winsig, \
    // [.PDATA:000000018002BAC8] rva stru_1800210CC>
    // [.PDATA:000000018002BAD4] RUNTIME_FUNCTION <rva raise, rva algn_1800170A2, rva stru_180021708>
    // [.PDATA:000000018002BAE0] RUNTIME_FUNCTION <rva sub_1800170A4, rva wcscat_s, rva stru_180021738>
    // [.PDATA:000000018002BAEC] RUNTIME_FUNCTION <rva wcscat_s, rva algn_180017331, \
    // [.PDATA:000000018002BAEC] rva stru_1800217D0>
    // [.PDATA:000000018002BAF8] RUNTIME_FUNCTION <rva wcsncpy_s, rva algn_180017403, \
    // [.PDATA:000000018002BAF8] rva stru_1800217D0>
    // [.PDATA:000000018002BB04] RUNTIME_FUNCTION <rva wcscpy_s, rva algn_18001746F, \
    // [.PDATA:000000018002BB04] rva stru_1800217D0>
    // [.PDATA:000000018002BB10] RUNTIME_FUNCTION <rva _set_error_mode, rva _lseeki64_nolock, \
    // [.PDATA:000000018002BB10] rva stru_180021284>
    // [.PDATA:000000018002BB1C] RUNTIME_FUNCTION <rva _lseeki64_nolock, rva algn_180017545, \
    // [.PDATA:000000018002BB1C] rva stru_1800210CC>
    // [.PDATA:000000018002BB28] RUNTIME_FUNCTION <rva _lseeki64, rva algn_18001762B, \
    // [.PDATA:000000018002BB28] rva stru_180021754>
    // [.PDATA:000000018002BB34] RUNTIME_FUNCTION <rva _write_nolock, rva _write, rva stru_180021780>
    // [.PDATA:000000018002BB40] RUNTIME_FUNCTION <rva _write, rva algn_180017E6B, rva stru_1800217A4>
    // [.PDATA:000000018002BB4C] RUNTIME_FUNCTION <rva _getbuf, rva algn_180017EBF, rva stru_1800217D0>
    // [.PDATA:000000018002BB58] RUNTIME_FUNCTION <rva _isatty, rva algn_180017F1F, rva stru_180021284>
    // [.PDATA:000000018002BB64] RUNTIME_FUNCTION <rva __initstdio, rva __endstdio, rva stru_1800217D0>
    // [.PDATA:000000018002BB70] RUNTIME_FUNCTION <rva __endstdio, rva algn_18001802F, \
    // [.PDATA:000000018002BB70] rva stru_180021284>
    // [.PDATA:000000018002BB7C] RUNTIME_FUNCTION <rva _lock_file, rva algn_180018093, \
    // [.PDATA:000000018002BB7C] rva stru_1800217D0>
    // [.PDATA:000000018002BB88] RUNTIME_FUNCTION <rva _lock_file2, rva algn_1800180C5, \
    // [.PDATA:000000018002BB88] rva stru_1800217D0>
    // [.PDATA:000000018002BB94] RUNTIME_FUNCTION <rva _fileno, rva algn_18001815A, rva stru_180021284>
    // [.PDATA:000000018002BBA0] RUNTIME_FUNCTION <rva _isleadbyte_l, rva algn_1800181A1, \
    // [.PDATA:000000018002BBA0] rva stru_18002160C>
    // [.PDATA:000000018002BBAC] RUNTIME_FUNCTION <rva isleadbyte, rva algn_1800181EB, \
    // [.PDATA:000000018002BBAC] rva stru_18002160C>
    // [.PDATA:000000018002BBB8] RUNTIME_FUNCTION <rva _wctomb_s_l, rva wctomb_s, rva stru_1800217D8>
    // [.PDATA:000000018002BBC4] RUNTIME_FUNCTION <rva wctomb_s, rva sub_1800183DC, rva stru_1800216B0>
    // [.PDATA:000000018002BBD0] RUNTIME_FUNCTION <rva ?__crtLCMapStringA_stat@@YAHPEAUlocaleinfo_struct@@KKPEBDHPEADHHH@Z,\  // __crtLCMapStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char *,int,int,int)
    // [.PDATA:000000018002BBD0] rva algn_1800186AE, rva stru_1800217E8>
    // [.PDATA:000000018002BBDC] RUNTIME_FUNCTION <rva __crtLCMapStringA, rva algn_180018746, \
    // [.PDATA:000000018002BBDC] rva stru_180021810>
    // [.PDATA:000000018002BBE8] RUNTIME_FUNCTION <rva ?__crtGetStringTypeA_stat@@YAHPEAUlocaleinfo_struct@@KPEBDHPEAGHHH@Z,\  // __crtGetStringTypeA_stat(localeinfo_struct *,ulong,char const *,int,ushort *,int,int,int)
    // [.PDATA:000000018002BBE8] rva algn_1800188A6, rva stru_180021820>
    // [.PDATA:000000018002BBF4] RUNTIME_FUNCTION <rva __crtGetStringTypeA, rva algn_180018926, \
    // [.PDATA:000000018002BBF4] rva stru_180021A68>
    // [.PDATA:000000018002BC00] RUNTIME_FUNCTION <rva __free_lc_time, rva algn_180018D16, \
    // [.PDATA:000000018002BC00] rva stru_180021848>
    // [.PDATA:000000018002BC0C] RUNTIME_FUNCTION <rva __free_lconv_num, rva __free_lconv_mon, \
    // [.PDATA:000000018002BC0C] rva stru_180021204>
    // [.PDATA:000000018002BC18] RUNTIME_FUNCTION <rva __free_lconv_mon, rva algn_180018E8E, \
    // [.PDATA:000000018002BC18] rva stru_180021848>
    // [.PDATA:000000018002BC24] RUNTIME_FUNCTION <rva _isctype_l, rva strcat_s, rva stru_180021850>
    // [.PDATA:000000018002BC30] RUNTIME_FUNCTION <rva strcat_s, rva byte_180018FF4, \
    // [.PDATA:000000018002BC30] rva stru_1800217D0>
    // [.PDATA:000000018002BC3C] RUNTIME_FUNCTION <rva memcmp, rva byte_1800190D7, rva stru_180021860>
    // [.PDATA:000000018002BC48] RUNTIME_FUNCTION <rva strncmp, rva algn_1800191A5, rva stru_180021868>
    // [.PDATA:000000018002BC54] RUNTIME_FUNCTION <rva _calloc_impl, rva algn_180019242, \
    // [.PDATA:000000018002BC54] rva stru_1800210CC>
    // [.PDATA:000000018002BC60] RUNTIME_FUNCTION <rva realloc, rva algn_180019317, rva stru_1800219E0>
    // [.PDATA:000000018002BC6C] RUNTIME_FUNCTION <rva _recalloc, rva algn_18001939E, \
    // [.PDATA:000000018002BC6C] rva stru_1800219E0>
    // [.PDATA:000000018002BC78] RUNTIME_FUNCTION <rva _mbsrchr_l, rva algn_180019485, \
    // [.PDATA:000000018002BC78] rva stru_18002186C>
    // [.PDATA:000000018002BC84] RUNTIME_FUNCTION <rva _getpath, rva _mbschr_l, rva stru_18002187C>
    // [.PDATA:000000018002BC90] RUNTIME_FUNCTION <rva _mbschr_l, rva _mbschr, rva stru_180021890>
    // [.PDATA:000000018002BC9C] RUNTIME_FUNCTION <rva _dospawn, rva algn_1800198D2, \
    // [.PDATA:000000018002BC9C] rva stru_1800218A4>
    // [.PDATA:000000018002BCA8] RUNTIME_FUNCTION <rva _cenvarg, rva algn_180019DA7, \
    // [.PDATA:000000018002BCA8] rva stru_1800218BC>
    // [.PDATA:000000018002BCB4] RUNTIME_FUNCTION <rva _mbsnbicoll_l, rva algn_180019EAA, \
    // [.PDATA:000000018002BCB4] rva stru_1800218DC>
    // [.PDATA:000000018002BCC0] RUNTIME_FUNCTION <rva __wtomb_environ, rva algn_180019FA6, \
    // [.PDATA:000000018002BCC0] rva stru_1800218F4>
    // [.PDATA:000000018002BCCC] RUNTIME_FUNCTION <rva calloc, rva algn_180019FE9, rva stru_1800217D0>
    // [.PDATA:000000018002BCD8] RUNTIME_FUNCTION <rva ?x_ismbbtype_l@@YAHPEAUlocaleinfo_struct@@IHH@Z,\  // x_ismbbtype_l(localeinfo_struct *,uint,int,int)
    // [.PDATA:000000018002BCD8] rva algn_18001A067, rva stru_18002186C>
    // [.PDATA:000000018002BCE4] RUNTIME_FUNCTION <rva __report_gsfailure, rva algn_18001A1C6, \
    // [.PDATA:000000018002BCE4] rva stru_180021904>
    // [.PDATA:000000018002BCF0] RUNTIME_FUNCTION <rva isdigit, rva algn_18001A26E, rva stru_18002160C>
    // [.PDATA:000000018002BCFC] RUNTIME_FUNCTION <rva sub_18001A270, rva algn_18001A36F, \
    // [.PDATA:000000018002BCFC] rva stru_18002190C>
    // [.PDATA:000000018002BD08] RUNTIME_FUNCTION <rva sub_18001A370, rva algn_18001A46F, \
    // [.PDATA:000000018002BD08] rva stru_18002190C>
    // [.PDATA:000000018002BD14] RUNTIME_FUNCTION <rva _fptostr, rva __dtold, rva stru_1800210CC>
    // [.PDATA:000000018002BD20] RUNTIME_FUNCTION <rva __dtold, rva algn_18001A602, rva stru_180021924>
    // [.PDATA:000000018002BD2C] RUNTIME_FUNCTION <rva _fltout2, rva algn_18001A6B9, \
    // [.PDATA:000000018002BD2C] rva stru_18002192C>
    // [.PDATA:000000018002BD38] RUNTIME_FUNCTION <rva __alloca_probe, rva algn_18001A72E, \
    // [.PDATA:000000018002BD38] rva stru_180021948>
    // [.PDATA:000000018002BD44] RUNTIME_FUNCTION <rva _free_osfhnd, rva algn_18001A7DA, \
    // [.PDATA:000000018002BD44] rva stru_180021950>
    // [.PDATA:000000018002BD50] RUNTIME_FUNCTION <rva _get_osfhandle, rva __lock_fhandle, \
    // [.PDATA:000000018002BD50] rva stru_180021284>
    // [.PDATA:000000018002BD5C] RUNTIME_FUNCTION <rva __lock_fhandle, rva algn_18001A8F5, \
    // [.PDATA:000000018002BD5C] rva stru_180021968>
    // [.PDATA:000000018002BD68] RUNTIME_FUNCTION <rva _putwch_nolock, rva algn_18001A979, \
    // [.PDATA:000000018002BD68] rva stru_180021998>
    // [.PDATA:000000018002BD74] RUNTIME_FUNCTION <rva _mbtowc_l, rva algn_18001AAF1, \
    // [.PDATA:000000018002BD74] rva stru_1800219A0>
    // [.PDATA:000000018002BD80] RUNTIME_FUNCTION <rva _fcloseall, rva algn_18001ABA6, \
    // [.PDATA:000000018002BD80] rva stru_1800219B8>
    // [.PDATA:000000018002BD8C] RUNTIME_FUNCTION <rva _flush, rva algn_18001AC21, rva stru_1800219E0>
    // [.PDATA:000000018002BD98] RUNTIME_FUNCTION <rva _fflush_nolock, rva flsall, rva stru_1800217D0>
    // [.PDATA:000000018002BDA4] RUNTIME_FUNCTION <rva flsall, rva _flushall, rva stru_1800219F0>
    // [.PDATA:000000018002BDB0] RUNTIME_FUNCTION <rva _strnicmp_l, rva algn_18001AEB3, \
    // [.PDATA:000000018002BDB0] rva stru_180021A30>
    // [.PDATA:000000018002BDBC] RUNTIME_FUNCTION <rva _strnicmp, rva algn_18001AF03, \
    // [.PDATA:000000018002BDBC] rva stru_180021284>
    // [.PDATA:000000018002BDC8] RUNTIME_FUNCTION <rva _mbsnicmp_l, rva algn_18001B0DB, \
    // [.PDATA:000000018002BDC8] rva stru_180021A30>
    // [.PDATA:000000018002BDD4] RUNTIME_FUNCTION <rva ?__crtCompareStringA_stat@@YAHPEAUlocaleinfo_struct@@KKPEBDH1HH@Z,\  // __crtCompareStringA_stat(localeinfo_struct *,ulong,ulong,char const *,int,char const *,int,int)
    // [.PDATA:000000018002BDD4] rva __crtCompareStringA, rva stru_180021A48>
    // [.PDATA:000000018002BDE0] RUNTIME_FUNCTION <rva __crtCompareStringA, rva algn_18001B4B1, \
    // [.PDATA:000000018002BDE0] rva stru_180021A68>
    // [.PDATA:000000018002BDEC] RUNTIME_FUNCTION <rva _strnicoll_l, rva algn_18001B5B7, \
    // [.PDATA:000000018002BDEC] rva stru_180021A78>
    // [.PDATA:000000018002BDF8] RUNTIME_FUNCTION <rva __crtsetenv, rva sub_18001B954, \
    // [.PDATA:000000018002BDF8] rva stru_180021A8C>
    // [.PDATA:000000018002BE04] RUNTIME_FUNCTION <rva sub_18001B954, rva algn_18001BF1F, \
    // [.PDATA:000000018002BE04] rva stru_180021AA4>
    // [.PDATA:000000018002BE10] RUNTIME_FUNCTION <rva sub_18001BF20, rva algn_18001C4EB, \
    // [.PDATA:000000018002BE10] rva stru_180021AA4>
    // [.PDATA:000000018002BE1C] RUNTIME_FUNCTION <rva __strgtold12_l, rva algn_18001CD4D, \
    // [.PDATA:000000018002BE1C] rva stru_180021AC4>
    // [.PDATA:000000018002BE28] RUNTIME_FUNCTION <rva $I10_OUTPUT, rva algn_18001D7FA, \
    // [.PDATA:000000018002BE28] rva stru_180021AE8>
    // [.PDATA:000000018002BE34] RUNTIME_FUNCTION <rva __initconout, rva algn_18001D837, \
    // [.PDATA:000000018002BE34] rva stru_1800216B8>
    // [.PDATA:000000018002BE40] RUNTIME_FUNCTION <rva sub_18001D838, rva algn_18001D85A, \
    // [.PDATA:000000018002BE40] rva stru_180021284>
    // [.PDATA:000000018002BE4C] RUNTIME_FUNCTION <rva _fclose_nolock, rva algn_18001D8D6, \
    // [.PDATA:000000018002BE4C] rva stru_1800210CC>
    // [.PDATA:000000018002BE58] RUNTIME_FUNCTION <rva fclose, rva algn_18001D93E, rva stru_180021B0C>
    // [.PDATA:000000018002BE64] RUNTIME_FUNCTION <rva _commit, rva algn_18001DA17, rva stru_180021B30>
    // [.PDATA:000000018002BE70] RUNTIME_FUNCTION <rva _strdup, rva __mtold12, rva stru_180021B58>
    // [.PDATA:000000018002BE7C] RUNTIME_FUNCTION <rva __mtold12, rva algn_18001DCAF, \
    // [.PDATA:000000018002BE7C] rva stru_180021B68>
    // [.PDATA:000000018002BE88] RUNTIME_FUNCTION <rva _close_nolock, rva _close, rva stru_1800210CC>
    // [.PDATA:000000018002BE94] RUNTIME_FUNCTION <rva _close, rva algn_18001DE2F, rva stru_180021B84>
    // [.PDATA:000000018002BEA0] RUNTIME_FUNCTION <rva _freebuf, rva algn_18001DE67, \
    // [.PDATA:000000018002BEA0] rva stru_1800217D0>
    // [.PDATA:000000018002BEAC] RUNTIME_FUNCTION <rva sub_18001DE88, rva algn_18001DEA9, \
    // [.PDATA:000000018002BEAC] rva stru_1800217D0>
    // [.PDATA:000000018002BEB8] RUNTIME_FUNCTION <rva sub_18001DEAC, rva algn_18001DEE2, \
    // [.PDATA:000000018002BEB8] rva stru_1800216B8>
    // [.PDATA:000000018002BEC4] RUNTIME_FUNCTION <rva sub_18001DEE4, rva algn_18001DF05, \
    // [.PDATA:000000018002BEC4] rva stru_1800217D0>
    // [.PDATA:000000018002BED0] RUNTIME_FUNCTION <rva sub_18001DF08, rva algn_18001DF3E, \
    // [.PDATA:000000018002BED0] rva stru_1800216B8>
    // [.PDATA:000000018002BEDC] RUNTIME_FUNCTION <rva sub_18001DF40, rva algn_18001DF61, \
    // [.PDATA:000000018002BEDC] rva stru_1800217D0>
    // [.PDATA:000000018002BEE8] RUNTIME_FUNCTION <rva sub_18001DF64, rva algn_18001DF93, \
    // [.PDATA:000000018002BEE8] rva stru_1800210CC>
    // [.PDATA:000000018002BEF4] RUNTIME_FUNCTION <rva ?_GetEstablisherFrame@@YAPEA_KPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@0@Z,\  // _GetEstablisherFrame(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,unsigned __int64 *)
    // [.PDATA:000000018002BEF4] rva algn_18001E07E, rva stru_1800228A4>
    // [.PDATA:000000018002BF00] RUNTIME_FUNCTION <rva _GetImageBase, rva algn_18001E095, \
    // [.PDATA:000000018002BF00] rva stru_180021284>
    // [.PDATA:000000018002BF0C] RUNTIME_FUNCTION <rva _GetThrowImageBase, rva algn_18001E0AD, \
    // [.PDATA:000000018002BF0C] rva stru_180021284>
    // [.PDATA:000000018002BF18] RUNTIME_FUNCTION <rva _SetImageBase, rva algn_18001E0CB, \
    // [.PDATA:000000018002BF18] rva stru_1800217D0>
    // [.PDATA:000000018002BF24] RUNTIME_FUNCTION <rva _SetThrowImageBase, rva algn_18001E0E7, \
    // [.PDATA:000000018002BF24] rva stru_1800217D0>
    // [.PDATA:000000018002BF30] RUNTIME_FUNCTION <rva ?__FrameUnwindToEmptyState@@YAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z,\  // __FrameUnwindToEmptyState(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *)
    // [.PDATA:000000018002BF30] rva algn_18001E193, rva stru_1800228C0>
    // [.PDATA:000000018002BF3C] RUNTIME_FUNCTION <rva __CxxFrameHandler3, rva algn_18001E21B, \
    // [.PDATA:000000018002BF3C] rva stru_1800228D8>
    // [.PDATA:000000018002BF48] RUNTIME_FUNCTION <rva ?__SehTransFilter@@YAHPEAU_EXCEPTION_POINTERS@@PEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@PEAH@Z,\  // __SehTransFilter(_EXCEPTION_POINTERS *,EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int *)
    // [.PDATA:000000018002BF48] rva algn_18001E2BD, rva stru_1800228E8>
    // [.PDATA:000000018002BF54] RUNTIME_FUNCTION <rva _CallSETranslator, rva algn_18001E311, \
    // [.PDATA:000000018002BF54] rva stru_180022904>
    // [.PDATA:000000018002BF60] RUNTIME_FUNCTION <rva ?_GetRangeOfTrysToCheck@@YAPEBU_s_TryBlockMapEntry@@PEA_KPEBU_s_FuncInfo@@HHPEAI2PEAU_xDISPATCHER_CONTEXT@@@Z,\  // _GetRangeOfTrysToCheck(unsigned __int64 *,_s_FuncInfo const *,int,int,uint *,uint *,_xDISPATCHER_CONTEXT *)
    // [.PDATA:000000018002BF60] rva algn_18001E43D, rva stru_180022924>
    // [.PDATA:000000018002BF6C] RUNTIME_FUNCTION <rva _CreateFrameInfo, rva algn_18001E483, \
    // [.PDATA:000000018002BF6C] rva stru_1800217D0>
    // [.PDATA:000000018002BF78] RUNTIME_FUNCTION <rva _IsExceptionObjectToBeDestroyed, \
    // [.PDATA:000000018002BF78] rva algn_18001E4B6, rva stru_1800217D0>
    // [.PDATA:000000018002BF84] RUNTIME_FUNCTION <rva _FindAndUnlinkFrame, rva algn_18001E516, \
    // [.PDATA:000000018002BF84] rva stru_1800210CC>
    // [.PDATA:000000018002BF90] RUNTIME_FUNCTION <rva _UnwindNestedFrames, \  // FindSITargetTypeInstance(_s_RTTICompleteObjectLocator const *,TypeDescriptor *,TypeDescriptor *,unsigned __int64)
    // [.PDATA:000000018002BF90] rva ?FindSITargetTypeInstance@@YAPEBU_s_RTTIBaseClassDescriptor@@PEBU_s_RTTICompleteObjectLocator@@PEAUTypeDescriptor@@1_K@Z,\
    // [.PDATA:000000018002BF90] rva stru_18002293C>
    // [.PDATA:000000018002BF9C] RUNTIME_FUNCTION <rva ?FindSITargetTypeInstance@@YAPEBU_s_RTTIBaseClassDescriptor@@PEBU_s_RTTICompleteObjectLocator@@PEAUTypeDescriptor@@1_K@Z,\  // FindSITargetTypeInstance(_s_RTTICompleteObjectLocator const *,TypeDescriptor *,TypeDescriptor *,unsigned __int64)
    // [.PDATA:000000018002BF9C] rva ?FindMITargetTypeInstance@@YAPEBU_s_RTTIBaseClassDescriptor@@PEAXPEBU_s_RTTICompleteObjectLocator@@PEAUTypeDescriptor@@_J2_K@Z,\  // FindMITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,__int64,TypeDescriptor *,unsigned __int64)
    // [.PDATA:000000018002BF9C] rva stru_180022A18>
    // [.PDATA:000000018002BFA8] RUNTIME_FUNCTION <rva ?FindMITargetTypeInstance@@YAPEBU_s_RTTIBaseClassDescriptor@@PEAXPEBU_s_RTTICompleteObjectLocator@@PEAUTypeDescriptor@@_J2_K@Z,\  // FindMITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,__int64,TypeDescriptor *,unsigned __int64)
    // [.PDATA:000000018002BFA8] rva algn_18001E855, rva stru_18002295C>
    // [.PDATA:000000018002BFB4] RUNTIME_FUNCTION <rva ?FindVITargetTypeInstance@@YAPEBU_s_RTTIBaseClassDescriptor@@PEAXPEBU_s_RTTICompleteObjectLocator@@PEAUTypeDescriptor@@_J2_K@Z,\  // FindVITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,__int64,TypeDescriptor *,unsigned __int64)
    // [.PDATA:000000018002BFB4] rva algn_18001EACD, rva stru_180022974>
    // [.PDATA:000000018002BFC0] RUNTIME_FUNCTION <rva __RTDynamicCast, rva algn_18001EC4F, \
    // [.PDATA:000000018002BFC0] rva stru_18002298C>
    // [.PDATA:000000018002BFCC] RUNTIME_FUNCTION <rva ?__StateFromIp@@YAHPEBU_s_FuncInfo@@PEAU_xDISPATCHER_CONTEXT@@_J@Z,\  // __StateFromIp(_s_FuncInfo const *,_xDISPATCHER_CONTEXT *,__int64)
    // [.PDATA:000000018002BFCC] rva algn_18001ECDA, rva stru_180022568>
    // [.PDATA:000000018002BFD8] RUNTIME_FUNCTION <rva ?__GetCurrentState@@YAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z,\  // __GetCurrentState(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *)
    // [.PDATA:000000018002BFD8] rva algn_18001ED0B, rva stru_180021284>
    // [.PDATA:000000018002BFE4] RUNTIME_FUNCTION <rva ?__SetUnwindTryBlock@@YAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@H@Z,\  // __SetUnwindTryBlock(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int)
    // [.PDATA:000000018002BFE4] rva algn_18001ED53, rva stru_1800210CC>
    // [.PDATA:000000018002BFF0] RUNTIME_FUNCTION <rva ?__GetUnwindTryBlock@@YAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z,\  // __GetUnwindTryBlock(unsigned __int64 *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *)
    // [.PDATA:000000018002BFF0] rva algn_18001ED7D, rva stru_1800217D0>
    // [.PDATA:000000018002BFFC] RUNTIME_FUNCTION <rva sub_18001ED90, rva algn_18001EDC9, \
    // [.PDATA:000000018002BFFC] rva stru_1800210CC>
    // [.PDATA:000000018002C008] RUNTIME_FUNCTION <rva __TypeMatch, rva algn_18001EEEF, \
    // [.PDATA:000000018002C008] rva stru_1800214AC>
    // [.PDATA:000000018002C014] RUNTIME_FUNCTION <rva __FrameUnwindFilter, rva algn_18001EF41, \
    // [.PDATA:000000018002C014] rva stru_180021284>
    // [.PDATA:000000018002C020] RUNTIME_FUNCTION <rva __FrameUnwindToState, rva algn_18001F0CD, \
    // [.PDATA:000000018002C020] rva stru_1800229BC>
    // [.PDATA:000000018002C02C] RUNTIME_FUNCTION <rva __DestructExceptionObject, rva algn_18001F112, \
    // [.PDATA:000000018002C02C] rva stru_1800229F8>
    // [.PDATA:000000018002C038] RUNTIME_FUNCTION <rva ?IsInExceptionSpec@@YAEPEAUEHExceptionRecord@@PEBU_s_ESTypeList@@@Z,\  // IsInExceptionSpec(EHExceptionRecord *,_s_ESTypeList const *)
    // [.PDATA:000000018002C038] rva algn_18001F20B, rva stru_180022A18>
    // [.PDATA:000000018002C044] RUNTIME_FUNCTION <rva __CxxCallCatchBlock, rva algn_18001F41E, \
    // [.PDATA:000000018002C044] rva stru_180022A40>
    // [.PDATA:000000018002C050] RUNTIME_FUNCTION <rva __BuildCatchObjectHelper, rva algn_18001F622, \
    // [.PDATA:000000018002C050] rva stru_180022A7C>
    // [.PDATA:000000018002C05C] RUNTIME_FUNCTION <rva __BuildCatchObject, \  // CatchIt(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,_s_HandlerType const *,_s_CatchableType const *,_s_TryBlockMapEntry const *,int,unsigned __int64 *,uchar,uchar)
    // [.PDATA:000000018002C05C] rva ?CatchIt@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@PEBU_s_HandlerType@@PEBU_s_CatchableType@@PEBU_s_TryBlockMapEntry@@H1EE@Z,\
    // [.PDATA:000000018002C05C] rva stru_180022AAC>
    // [.PDATA:000000018002C068] RUNTIME_FUNCTION <rva ?CatchIt@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@PEBU_s_HandlerType@@PEBU_s_CatchableType@@PEBU_s_TryBlockMapEntry@@H1EE@Z,\  // CatchIt(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,_s_HandlerType const *,_s_CatchableType const *,_s_TryBlockMapEntry const *,int,unsigned __int64 *,uchar,uchar)
    // [.PDATA:000000018002C068] rva algn_18001F795, rva stru_180022AD4>
    // [.PDATA:000000018002C074] RUNTIME_FUNCTION <rva ?FindHandlerForForeignException@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@HH1@Z,\  // FindHandlerForForeignException(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,int,int,unsigned __int64 *)
    // [.PDATA:000000018002C074] rva ?FindHandler@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@EH1@Z,\  // FindHandler(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,uchar,int,unsigned __int64 *)
    // [.PDATA:000000018002C074] rva stru_180022AEC>
    // [.PDATA:000000018002C080] RUNTIME_FUNCTION <rva ?FindHandler@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@EH1@Z,\  // FindHandler(EHExceptionRecord *,unsigned __int64 *,_CONTEXT *,_xDISPATCHER_CONTEXT *,_s_FuncInfo const *,uchar,int,unsigned __int64 *)
    // [.PDATA:000000018002C080] rva algn_18001FE9D, rva stru_180022B04>
    // [.PDATA:000000018002C08C] RUNTIME_FUNCTION <rva sub_18001FEA0, rva algn_18001FEC1, \
    // [.PDATA:000000018002C08C] rva stru_1800217D0>
    // [.PDATA:000000018002C098] RUNTIME_FUNCTION <rva __InternalCxxFrameHandler, rva algn_1800200E9, \
    // [.PDATA:000000018002C098] rva stru_180022B20>
    // [.PDATA:000000018002C0A4] RUNTIME_FUNCTION <rva _CallSettingFrame, rva _GetNextInstrOffset, \
    // [.PDATA:000000018002C0A4] rva stru_180022B38>
    // [.PDATA:000000018002C0B0] RUNTIME_FUNCTION <rva _onexit$fin$0, rva _CRT_INIT$fin$0, \
    // [.PDATA:000000018002C0B0] rva stru_180021960>
    // [.PDATA:000000018002C0BC] RUNTIME_FUNCTION <rva _CRT_INIT$fin$0, rva __DllMainCRTStartup$filt$0,\
    // [.PDATA:000000018002C0BC] rva stru_180021960>
    // [.PDATA:000000018002C0C8] RUNTIME_FUNCTION <rva __DllMainCRTStartup$filt$0, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0C8] rva unknown_libname_29, rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0D4] RUNTIME_FUNCTION <rva unknown_libname_29, rva unknown_libname_30, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0D4] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0E0] RUNTIME_FUNCTION <rva unknown_libname_30, rva byte_180020201, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0E0] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0EC] RUNTIME_FUNCTION <rva unknown_libname_31, rva unknown_libname_32, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0EC] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0F8] RUNTIME_FUNCTION <rva unknown_libname_32, rva unknown_libname_33, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C0F8] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C104] RUNTIME_FUNCTION <rva unknown_libname_33, rva unknown_libname_34, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C104] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C110] RUNTIME_FUNCTION <rva unknown_libname_34, rva doexit$fin$0, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C110] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C11C] RUNTIME_FUNCTION <rva doexit$fin$0, rva unknown_libname_35, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C11C] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C128] RUNTIME_FUNCTION <rva unknown_libname_35, rva algn_1800202B1, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C128] rva stru_180021534>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C134] RUNTIME_FUNCTION <rva unknown_libname_36, rva _mtinitlocknum$fin$0, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C134] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C140] RUNTIME_FUNCTION <rva _mtinitlocknum$fin$0, rva raise$fin$0, \
    // [.PDATA:000000018002C140] rva stru_180021960>
    // [.PDATA:000000018002C14C] RUNTIME_FUNCTION <rva raise$fin$0, rva unknown_libname_37, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C14C] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C158] RUNTIME_FUNCTION <rva unknown_libname_37, rva unknown_libname_38, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C158] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C164] RUNTIME_FUNCTION <rva unknown_libname_38, rva unknown_libname_39, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C164] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C170] RUNTIME_FUNCTION <rva unknown_libname_39, rva unknown_libname_40, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C170] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C17C] RUNTIME_FUNCTION <rva unknown_libname_40, rva byte_180020395, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C17C] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C188] RUNTIME_FUNCTION <rva unknown_libname_41, rva unknown_libname_42, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C188] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C194] RUNTIME_FUNCTION <rva unknown_libname_42, rva unknown_libname_43, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C194] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C1A0] RUNTIME_FUNCTION <rva unknown_libname_43, rva sub_1800203EB, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C1A0] rva stru_180021960>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C1AC] RUNTIME_FUNCTION <rva sub_180020407, rva byte_180020484, \
    // [.PDATA:000000018002C1AC] rva stru_180021DB4>
    // [.PDATA:000000018002C1B8] RUNTIME_FUNCTION <rva sub_180020497, rva sub_1800204D5, \
    // [.PDATA:000000018002C1B8] rva stru_180021DA0>
    // [.PDATA:000000018002C1C4] RUNTIME_FUNCTION <rva ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA,\  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [.PDATA:000000018002C1C4] rva ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA_0,\  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [.PDATA:000000018002C1C4] rva stru_180022380>
    // [.PDATA:000000018002C1D0] RUNTIME_FUNCTION <rva ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA_0,\  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [.PDATA:000000018002C1D0] rva byte_180020511, rva stru_180022380>
    // [.PDATA:000000018002C1DC] RUNTIME_FUNCTION <rva sub_18002051B, rva sub_180020536, \
    // [.PDATA:000000018002C1DC] rva stru_180021FBC>
    // [.PDATA:000000018002C1E8] RUNTIME_FUNCTION <rva sub_180020536, rva sub_180020551, \
    // [.PDATA:000000018002C1E8] rva stru_18002207C>
    // [.PDATA:000000018002C1F4] RUNTIME_FUNCTION <rva sub_180020551, rva sub_18002056C, \
    // [.PDATA:000000018002C1F4] rva stru_180022114>
    // [.PDATA:000000018002C200] RUNTIME_FUNCTION <rva sub_18002056C, rva byte_180020588, \
    // [.PDATA:000000018002C200] rva stru_180021960>
    // [.PDATA:000000018002C20C] RUNTIME_FUNCTION <rva sub_18002059C, rva algn_1800205E9, \
    // [.PDATA:000000018002C20C] rva stru_18002219C>
    // [.PDATA:000000018002C218] RUNTIME_FUNCTION <rva sub_18002060C, rva sub_18002062C, \
    // [.PDATA:000000018002C218] rva stru_18002224C>
    // [.PDATA:000000018002C224] RUNTIME_FUNCTION <rva sub_18002065C, rva byte_18002067E, \
    // [.PDATA:000000018002C224] rva stru_180021960>
    // [.PDATA:000000018002C230] RUNTIME_FUNCTION <rva sub_18002069C, rva byte_1800206BE, \
    // [.PDATA:000000018002C230] rva stru_180021960>
    // [.PDATA:000000018002C23C] RUNTIME_FUNCTION <rva ?dtor$0@?0??make@DNameStatusNode@@SAPEAV1@W4DNameStatus@@@Z@4HA_1,\  // int `DNameStatusNode::make(DNameStatus)'::`1'::dtor$0
    // [.PDATA:000000018002C23C] rva sub_180020702, rva stru_180022380>
    // [.PDATA:000000018002C248] RUNTIME_FUNCTION <rva sub_180020702, rva unknown_libname_45, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C248] rva stru_1800223F0>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C254] RUNTIME_FUNCTION <rva unknown_libname_45, rva sub_180020738, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C254] rva stru_18002247C>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C260] RUNTIME_FUNCTION <rva sub_180020738, rva sub_180020753, \
    // [.PDATA:000000018002C260] rva stru_1800224F4>
    // [.PDATA:000000018002C26C] RUNTIME_FUNCTION <rva unknown_libname_47, rva sub_18002077A, \  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C26C] rva stru_1800225E8>  // Microsoft VisualC v7/14 64bit runtime
    // [.PDATA:000000018002C278] RUNTIME_FUNCTION <rva sub_18002077A, rva byte_1800207AE, \
    // [.PDATA:000000018002C278] rva stru_180022650>
    // [.PDATA:000000018002C284] RUNTIME_FUNCTION <rva sub_1800207BA, rva byte_1800207EE, \
    // [.PDATA:000000018002C284] rva stru_180022650>
    // [.PDATA:000000018002C290] RUNTIME_FUNCTION <rva sub_18002080A, rva byte_18002083E, \
    // [.PDATA:000000018002C290] rva stru_180022650>
    // [.PDATA:000000018002C29C] RUNTIME_FUNCTION <rva sub_18002085A, rva byte_18002088E, \
    // [.PDATA:000000018002C29C] rva stru_180022650>
    // [.PDATA:000000018002C2A8] RUNTIME_FUNCTION <rva sub_18002089A, rva sub_1800208CE, \
    // [.PDATA:000000018002C2A8] rva stru_180022650>
    // [.PDATA:000000018002C2B4] RUNTIME_FUNCTION <rva _CallSETranslator$filt$0, \
    // [.PDATA:000000018002C2B4] rva __RTDynamicCast$filt$0, rva stru_1800228FC>
    // [.PDATA:000000018002C2C0] RUNTIME_FUNCTION <rva __RTDynamicCast$filt$0, \
    // [.PDATA:000000018002C2C0] rva __FrameUnwindToState$filt$0, rva stru_180021534>
    // [.PDATA:000000018002C2CC] RUNTIME_FUNCTION <rva __FrameUnwindToState$filt$0, rva byte_180020964,\
    // [.PDATA:000000018002C2CC] rva stru_180021960>
    // [.PDATA:000000018002C2D8] RUNTIME_FUNCTION <rva __FrameUnwindToState$fin$1, \
    // [.PDATA:000000018002C2D8] rva __DestructExceptionObject$filt$0, \
    // [.PDATA:000000018002C2D8] rva stru_180021960>
    // [.PDATA:000000018002C2E4] RUNTIME_FUNCTION <rva __DestructExceptionObject$filt$0, \
    // [.PDATA:000000018002C2E4] rva __CxxCallCatchBlock$filt$0, rva stru_180021960>
    // [.PDATA:000000018002C2F0] RUNTIME_FUNCTION <rva __CxxCallCatchBlock$filt$0, rva byte_180020AA3, \
    // [.PDATA:000000018002C2F0] rva stru_180021960>
    // [.PDATA:000000018002C2FC] RUNTIME_FUNCTION <rva __CxxCallCatchBlock$fin$1, rva algn_180020B3E, \
    // [.PDATA:000000018002C2FC] rva stru_180022A34>
    // [.PDATA:000000018002C308] RUNTIME_FUNCTION <rva sub_180020C30, rva algn_180020C4D, \
    // [.PDATA:000000018002C308] rva stru_18002284C>
    // [.PDATA:000000018002C314] RUNTIME_FUNCTION <rva sub_180020F10, rva algn_180020F73, \
    // [.PDATA:000000018002C314] rva stru_180022864>
    // [.PDATA:000000018002C320] RUNTIME_FUNCTION <rva sub_180020FF4, rva algn_18002100A, \
    // [.PDATA:000000018002C320] rva stru_180022884>
    // [.PDATA:000000018002C32C] RUNTIME_FUNCTION <rva sinf, rva algn_18002D37D, rva stru_180021038>
    // [.PDATA:000000018002C338] RUNTIME_FUNCTION <rva cosf, rva algn_18002D680, rva stru_180021040>
    // [.PDATA:000000018002C344] align 0x1000
    // [.PDATA:000000018002C344] _pdata ends
    // [.PDATA:000000018002C344] 
    // Section 4. (virtual address 0002D000)
    // Virtual size                  : 00000680 (   1664.)
    // Section size in file          : 00000800 (   2048.)
    // Offset to raw data for section: 00026000
    // Flags 20000040: Data Executable
    // Alignment     : default
    // ===========================================================================

    // Segment type: Pure code
    // Segment permissions: Execute
    // [TEXT] segment para public 'CODE' use64
    // [ASSUME] cs:text
    //org 18002D000h
    // [ASSUME] es:nothing, ss:nothing, ds:_data, fs:nothing, gs:nothing
    // [0000037D BYTES: COLLAPSED FUNCTION sinf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18002D37D:
    // [ALIGN] 0x20
    // [00000300 BYTES: COLLAPSED FUNCTION cosf. PRESS CTRL-NUMPAD+ TO EXPAND]
class="lbl">algn_18002D680:
    // [ALIGN] 0x200
    // [DQ] 0x100 dup(?)
    // [TEXT] ends


}
