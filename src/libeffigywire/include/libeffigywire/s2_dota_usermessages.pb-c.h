/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: s2_dota_usermessages.proto */

#ifndef PROTOBUF_C_s2_5fdota_5fusermessages_2eproto__INCLUDED
#define PROTOBUF_C_s2_5fdota_5fusermessages_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif




/* --- enums --- */

typedef enum _EDotaUserMessages {
  EDOTA_USER_MESSAGES__DOTA_UM_AddUnitToSelection = 464,
  EDOTA_USER_MESSAGES__DOTA_UM_AIDebugLine = 465,
  EDOTA_USER_MESSAGES__DOTA_UM_ChatEvent = 466,
  EDOTA_USER_MESSAGES__DOTA_UM_CombatHeroPositions = 467,
  EDOTA_USER_MESSAGES__DOTA_UM_CombatLogData = 468,
  EDOTA_USER_MESSAGES__DOTA_UM_CombatLogShowDeath = 470,
  EDOTA_USER_MESSAGES__DOTA_UM_CreateLinearProjectile = 471,
  EDOTA_USER_MESSAGES__DOTA_UM_DestroyLinearProjectile = 472,
  EDOTA_USER_MESSAGES__DOTA_UM_DodgeTrackingProjectiles = 473,
  EDOTA_USER_MESSAGES__DOTA_UM_GlobalLightColor = 474,
  EDOTA_USER_MESSAGES__DOTA_UM_GlobalLightDirection = 475,
  EDOTA_USER_MESSAGES__DOTA_UM_InvalidCommand = 476,
  EDOTA_USER_MESSAGES__DOTA_UM_LocationPing = 477,
  EDOTA_USER_MESSAGES__DOTA_UM_MapLine = 478,
  EDOTA_USER_MESSAGES__DOTA_UM_MiniKillCamInfo = 479,
  EDOTA_USER_MESSAGES__DOTA_UM_MinimapDebugPoint = 480,
  EDOTA_USER_MESSAGES__DOTA_UM_MinimapEvent = 481,
  EDOTA_USER_MESSAGES__DOTA_UM_NevermoreRequiem = 482,
  EDOTA_USER_MESSAGES__DOTA_UM_OverheadEvent = 483,
  EDOTA_USER_MESSAGES__DOTA_UM_SetNextAutobuyItem = 484,
  EDOTA_USER_MESSAGES__DOTA_UM_SharedCooldown = 485,
  EDOTA_USER_MESSAGES__DOTA_UM_SpectatorPlayerClick = 486,
  EDOTA_USER_MESSAGES__DOTA_UM_TutorialTipInfo = 487,
  EDOTA_USER_MESSAGES__DOTA_UM_UnitEvent = 488,
  EDOTA_USER_MESSAGES__DOTA_UM_ParticleManager = 489,
  EDOTA_USER_MESSAGES__DOTA_UM_BotChat = 490,
  EDOTA_USER_MESSAGES__DOTA_UM_HudError = 491,
  EDOTA_USER_MESSAGES__DOTA_UM_ItemPurchased = 492,
  EDOTA_USER_MESSAGES__DOTA_UM_Ping = 493,
  EDOTA_USER_MESSAGES__DOTA_UM_ItemFound = 494,
  EDOTA_USER_MESSAGES__DOTA_UM_CharacterSpeakConcept = 495,
  EDOTA_USER_MESSAGES__DOTA_UM_SwapVerify = 496,
  EDOTA_USER_MESSAGES__DOTA_UM_WorldLine = 497,
  EDOTA_USER_MESSAGES__DOTA_UM_TournamentDrop = 498,
  EDOTA_USER_MESSAGES__DOTA_UM_ItemAlert = 499,
  EDOTA_USER_MESSAGES__DOTA_UM_HalloweenDrops = 500,
  EDOTA_USER_MESSAGES__DOTA_UM_ChatWheel = 501,
  EDOTA_USER_MESSAGES__DOTA_UM_ReceivedXmasGift = 502,
  EDOTA_USER_MESSAGES__DOTA_UM_UpdateSharedContent = 503,
  EDOTA_USER_MESSAGES__DOTA_UM_TutorialRequestExp = 504,
  EDOTA_USER_MESSAGES__DOTA_UM_TutorialPingMinimap = 505,
  EDOTA_USER_MESSAGES__DOTA_UM_GamerulesStateChanged = 506,
  EDOTA_USER_MESSAGES__DOTA_UM_ShowSurvey = 507,
  EDOTA_USER_MESSAGES__DOTA_UM_TutorialFade = 508,
  EDOTA_USER_MESSAGES__DOTA_UM_AddQuestLogEntry = 509,
  EDOTA_USER_MESSAGES__DOTA_UM_SendStatPopup = 510,
  EDOTA_USER_MESSAGES__DOTA_UM_TutorialFinish = 511,
  EDOTA_USER_MESSAGES__DOTA_UM_SendRoshanPopup = 512,
  EDOTA_USER_MESSAGES__DOTA_UM_SendGenericToolTip = 513,
  EDOTA_USER_MESSAGES__DOTA_UM_SendFinalGold = 514,
  EDOTA_USER_MESSAGES__DOTA_UM_CustomMsg = 515,
  EDOTA_USER_MESSAGES__DOTA_UM_CoachHUDPing = 516,
  EDOTA_USER_MESSAGES__DOTA_UM_ClientLoadGridNav = 517,
  EDOTA_USER_MESSAGES__DOTA_UM_TE_Projectile = 518,
  EDOTA_USER_MESSAGES__DOTA_UM_TE_ProjectileLoc = 519,
  EDOTA_USER_MESSAGES__DOTA_UM_TE_DotaBloodImpact = 520,
  EDOTA_USER_MESSAGES__DOTA_UM_TE_UnitAnimation = 521,
  EDOTA_USER_MESSAGES__DOTA_UM_TE_UnitAnimationEnd = 522,
  EDOTA_USER_MESSAGES__DOTA_UM_AbilityPing = 523,
  EDOTA_USER_MESSAGES__DOTA_UM_ShowGenericPopup = 524,
  EDOTA_USER_MESSAGES__DOTA_UM_VoteStart = 525,
  EDOTA_USER_MESSAGES__DOTA_UM_VoteUpdate = 526,
  EDOTA_USER_MESSAGES__DOTA_UM_VoteEnd = 527,
  EDOTA_USER_MESSAGES__DOTA_UM_BoosterState = 528,
  EDOTA_USER_MESSAGES__DOTA_UM_WillPurchaseAlert = 529,
  EDOTA_USER_MESSAGES__DOTA_UM_TutorialMinimapPosition = 530,
  EDOTA_USER_MESSAGES__DOTA_UM_PlayerMMR = 531,
  EDOTA_USER_MESSAGES__DOTA_UM_AbilitySteal = 532,
  EDOTA_USER_MESSAGES__DOTA_UM_CourierKilledAlert = 533,
  EDOTA_USER_MESSAGES__DOTA_UM_EnemyItemAlert = 534,
  EDOTA_USER_MESSAGES__DOTA_UM_StatsMatchDetails = 535,
  EDOTA_USER_MESSAGES__DOTA_UM_MiniTaunt = 536,
  EDOTA_USER_MESSAGES__DOTA_UM_BuyBackStateAlert = 537,
  EDOTA_USER_MESSAGES__DOTA_UM_SpeechBubble = 538,
  EDOTA_USER_MESSAGES__DOTA_UM_CustomHeaderMessage = 539,
  EDOTA_USER_MESSAGES__DOTA_UM_QuickBuyAlert = 540,
  EDOTA_USER_MESSAGES__DOTA_UM_StatsHeroDetails = 541,
  EDOTA_USER_MESSAGES__DOTA_UM_PredictionResult = 542,
  EDOTA_USER_MESSAGES__DOTA_UM_ModifierAlert = 543,
  EDOTA_USER_MESSAGES__DOTA_UM_HPManaAlert = 544,
  EDOTA_USER_MESSAGES__DOTA_UM_GlyphAlert = 545,
  EDOTA_USER_MESSAGES__DOTA_UM_BeastChat = 546,
  EDOTA_USER_MESSAGES__DOTA_UM_SpectatorPlayerUnitOrders = 547,
  EDOTA_USER_MESSAGES__DOTA_UM_CustomHudElement_Create = 548,
  EDOTA_USER_MESSAGES__DOTA_UM_CustomHudElement_Modify = 549,
  EDOTA_USER_MESSAGES__DOTA_UM_CustomHudElement_Destroy = 550,
  EDOTA_USER_MESSAGES__DOTA_UM_CompendiumState = 551,
  EDOTA_USER_MESSAGES__DOTA_UM_ProjectionAbility = 552,
  EDOTA_USER_MESSAGES__DOTA_UM_ProjectionEvent = 553,
  EDOTA_USER_MESSAGES__DOTA_UM_CombatLogDataHLTV = 554,
  EDOTA_USER_MESSAGES__DOTA_UM_XPAlert = 555,
  EDOTA_USER_MESSAGES__DOTA_UM_UpdateQuestProgress = 556,
  EDOTA_USER_MESSAGES__DOTA_UM_MatchMetadata = 557,
  EDOTA_USER_MESSAGES__DOTA_UM_MatchDetails = 558
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(EDOTA_USER_MESSAGES)
} EDotaUserMessages;

/* --- messages --- */

/* --- per-message closures --- */


/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    edota_user_messages__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_s2_5fdota_5fusermessages_2eproto__INCLUDED */