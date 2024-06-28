#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CheatManager.h"
#include "EPalActionType.h"
#include "EPalBaseCampWorkerEventType.h"
#include "EPalBossType.h"
#include "EPalEnergyType.h"
#include "EPalLimitVolumeFlag.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "EPalMapObjectVisualEffectType.h"
#include "EPalSkinType.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalCheatManager.generated.h"

class APalDebug_SpawnInfoReporter;
class APalImGui;
class APalPlayerCharacter;
class UDataTable;
class UPalDebugWindowSetting;
class UPalStatPalCount;
class UPingIP;

UCLASS(Blueprintable)
class PAL_API UPalCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDebugWindowSetting* DebugWindowSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DebugProgressPresetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalDebug_SpawnInfoReporter> SpawnerInfoReporterClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalImGui* PalImGui;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStatPalCount* PalCountSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalDebug_SpawnInfoReporter* SpawnInfoReporter;
    
public:
    UPalCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void WorkerEventLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WorkerEventInterval(const float Interval);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WildPalCombatStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WazaCoolTimeFastMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void VisitorTravel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateBaseCampWorkerSlotNum(const int32 SlotNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateBaseCampTickInvokeMaxNumInOneTick(const int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateBaseCampLevelMax();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockTechnologyByLvCap(int32 Lv);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockOneTechnology(FName technologyName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMap(FName regionId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllRecipeTechnology();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllCategoryTechnology();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(const FString& AchievementId, int32 Progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UNKO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerBaseCampWorkerEvent(const EPalBaseCampWorkerEventType EventType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TraceReticleDirectionAllObjectType(const float Length);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleVisibleFoliageChunk();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUserAchievementDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowReticleLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowDropItemHitEventLog();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleRevision_BP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRevision();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePartnerSkillNoDecrease();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLoadingScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleForceSpawnRandomIncident();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBuildInstallCheckLookToCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBaseCampWorkerSanityDetail();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TimeStopForBP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToSafePoint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToNearestPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToNearestCamp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToLocationByClipboard();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToLastLandingLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToDungeonEntranceRandom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToDungeonEntranceByRandomScattered();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToDungeonEntranceByIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToDungeonEntranceByDataLayer(const FName DataLayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToCurrentDungeonTreasureBox();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToCurrentDungeonGoal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToBotLocation(int32 botIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToBotCamp(int32 botIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToBossTower(EPalBossType BossType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportNearestPlayerToMe() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void StringToPlayerUID(const FString& Str);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopTimerDropItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopOtomoMovement() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopOtomoAI() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWildPalCombat();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void StartTraceAllOption();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartDismantlingMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartBuildMode(const FName BuildObjectId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorOnForBP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpectatorOn();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpectatorOffForBP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpectatorOff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnPalEggBreedFarm(const FName MonsterId, const float Range);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnMonsterForPlayer(const FName& CharacterID, int32 Num, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnMonster(const FName CharacterID, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SleepAllEnemy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipCutscene();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShutdownRemoteServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowTargetLocalPlayerEnemyList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowStreamingLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSpawnerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowSnapMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPlayerMoveSpeed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPalEggStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPalCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowObjectNameGround();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowObjectNameForward();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMovementMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMaxPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMapObjectStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMapObjectFoliageStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMapObjectConnector();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowLocalSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowLaunchArguments() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowInviteCode() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowInvaderDebugLog() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowHateArrow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowFloorLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDialog(FText Msg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDefenseAttackTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDefenseAttackableRange();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugWorkAssignTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugWorkAssign();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugWanted();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugCrime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowCharacterStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowBuildObjectInstallCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAlert(FText Msg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAISound();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowActionName();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowActionAndStatus_ToServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowActionAndStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVoiceID(int32 VoiceID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSunLightShadowDistance(const float InDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSanityToBaseCampPal(const float Sanity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerSP(int32 NewSP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerSkin(EPalSkinType Part, FName SkinName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerHP(int32 NewHP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerCameraBoomLengthRate(const float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPassive_PlayerWeapon(FName firstPassive, FName secondPassive, FName thirdPassive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPalWorldTimeScale(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPalWorldTime(int32 Hour);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPalEggStatusRange(const float Range);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPaldexComplete(bool IsComplete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOtomoPalWorkSpeedRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOtomoPalRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOtomoPalHPRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOtomoPalDefenceRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOtomoPalAttackRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMultiplayRestriction(bool bRestriction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMapObjectStatusRange(const float Range);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMapObjectStatusMapObjectId(const FName MapObjectId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLoadingSceneVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInventoryItemDurability(const float Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHardTowerBossDebugNo(int32 DebugNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameTime_NextNight_SecondsAgo(const int32 SecondsAgo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameTime_NextNight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameTime_NextDay_SecondsAgo(const int32 SecondsAgo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameTime_NextDay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFPSForServer(float fps);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForceSpawnRandomIncidentName(const FString& IncidentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForceLocationTeleport(bool bForceLocationTeleport);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDisableInteractReticleTarget(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugRespawnPointForPlayer(APalPlayerCharacter* Character, FVector Location);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugFullStomachDecreaseRate(const float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDamageTextMaxNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeColor(FColor Color);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeAllRed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeAllNormal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeAllMin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeAllMax();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeAllGreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCharacterMakeAllBlue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBaseCampWorkerHpSingle(const float Percentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBaseCampWorkerHp(const float Percentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAlwaysGrantPassiveSkillMode(bool Flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllowBaseCampBattle(const bool bAllowBaseCampBattle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetActivity(const FString& ConnStr, int32 maxPlayer, int32 currentPlayer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendChatToBroadcast(const FString& Text);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaikyoGamePreset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RideIKEnable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RideIKDisable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetOilrig();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RerollCharacterMake();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestLogTreasureBoxLocalPlayerAround();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestLogServerThreadNum();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestFillSlotChestToInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestFillSlotChestFromInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RepairEquipment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemovePlayerSkin(EPalSkinType Part, FName InTarget);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RandomizePassive_PlayerWeapon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintRealTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintRandomizerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintPlatformInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintInventoryDynamicItemLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintGameTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ping(const FString& Address);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ParallelForUpdateActiveTiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PalmiTargetEnemny();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OrderBaseCampWorker(const EPalMapBaseCampWorkerOrderType OrderType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTitleForBP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OpenTitle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPrivateServerForBP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OpenPrivateServer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMultiBattleMapForBP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OpenMultiBattleMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenDefaultMap();
    
    UFUNCTION(BlueprintCallable)
    void OnPingComplete(UPingIP* PingIP, const FString& Address, int32 TimeMS);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotDecreaseWeaponItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotDecreaseDefenseBullet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotConsumeMaterialsInCraft();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotConsumeMaterialsInBuild();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MutekiForPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MutekiForFriend();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MutekiALL();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ManyUNKO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoginNative();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoginEOS();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogBaseCampInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillGuildFriend();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillBaseCampWorkerSingle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillBaseCampWorker();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllFriend();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllEnemy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KickPlayer(const FString& UserId, FText KickReason);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JumpToClientStartLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinInviteCode(const FString& InviteCode) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinClientPlayerToServerGuild();
    
    UFUNCTION(BlueprintCallable)
    bool IsSkillCoolTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacterStatus() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNotDecreaseWeaponItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNotDecreaseDefenseBullet() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNotConsumeMaterialsInBuild() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMutekiForPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMutekiForFriend() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMutekiALL() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsIgnoreBuildRestrictionBaseCamp() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFixedSP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableEnemyEyeSight() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCaptureSuccessAlways() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCaptureFailAlways() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void IsAllStreamingCompleted();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionName() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvokePlayerAction(const EPalActionType ActionType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvaderMarchRandom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvaderMarch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InstallVirtualBaseCamp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InsightsTraceStopForServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InsightsTraceStopForLocal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InsightsTraceStartForServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InsightsTraceStartForLocal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InitInventory(const FName StaticItemId, const int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IgnoreRestrictedByItemsForPartnerSkill();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IgnoreDamageCheckByServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IgnoreBuildRestrictionBaseCamp();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HPOneAllCharacter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTutorialQuest_BP();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void HideTutorialQuest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePlayerSkin(FName SkinName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePlatformPromotionItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePlatformInventoryItem(int32 ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetRelic(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlanerPal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPalEgg(const FName CharacterID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetItemWithPassiveSkill(FName StaticItemId, int32 Count, FName PassiveSkillId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetItemWithPassive(FName StaticItemId, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetItemToLoadoutWithPassive(FName StaticItemId, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetItemToLoadout(FName StaticItemId, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetItem(FName StaticItemId, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateCombiMonster();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FullPowerForPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceUpdateBaseCampWorkerEvent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSpawnRarePal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceReportCriminal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceReloadPlayerParameter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceReleaseWanted();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceLowerSpecSetting();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceExitStageAllPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceExitStage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceDisableTimerLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceDisablePalMeshCollision();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceArenaExitAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FootIKEnable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FootIKDisable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FixedUseEagleForGlider();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FixedSP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FixedActionRandomSeed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FetchMapObjectsTickIntervalInBackground();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExitGuildPlayer(const FString& GuildName, APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExitGuildLocalPlayer(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnterGuildPlayer(const FString& GuildName, APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnterGuildOtherPlayerBelongTo(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnterGuildLocalPlayer(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable)
    void EnterGroup(const FString& GroupName, FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableStatUnit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableStatPlayerInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableStatPalnet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableStatPalNavigation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableCommandToServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableCollectServerPalCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EasyGamePreset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpMapObjectOctreeStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DropSupply();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DropItems(const FName StaticItemId, const int32 Num, const int32 DropCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DropItemByTimer(const FName StaticItemId, const int32 Num, const float Interval);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DropItem(const FName StaticItemId, const int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DrawDebugRangeBaseCamp(const float LifeTime);
    
    UFUNCTION(Exec)
    void DrawDebugLimitVolume(const EPalLimitVolumeFlag Flag, const float Range, const float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisposeGuild(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DismantleBaseCampFirst();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DismantleBaseCampByBaseCampId(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableScreenMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableEnemyEyeSight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteWorldAndShutdownRemoteServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeletePlayerSkin(FName SkinName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeletePlayerAndQuitGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteAllMapObjectSpawner();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteAllMapObject();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugWindow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSaveWorldOptionData(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSaveWorldData(const FString& saveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSaveLocalWorldData(const FString& saveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSaveFullWorldData(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDeleteEnemyCampSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeAutoSaveTimespan(float saveSpan);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAutoSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAutoRun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGuildWithAdmin(const FString& GuildName, const FGuid& AdminPlayerUId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGuildAndEnterLocalPlayer(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateGuild(const FString& GuildName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CountPalCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CopyWorldDirectoryName();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CopyPlayerUId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CopyPlayerLocation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConsumePlatformInventoryItem(int32 ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CommandToServer(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CleatDebugInfoText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSupply();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPlatformInventoryItem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheckFoliageChunkStatus(const bool bShowInstanceDetail, const bool bShowGridDetail);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePassive_PlayerWeapon(int32 Index, FName SkillName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeMaxPlayers(int32 Players);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeHUDScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CauseServerCrash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CauseEnsure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CauseCrash();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureSuccessAlways();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureNewMonster(const FName CharacterID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureFailAlways();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureAllMonsters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureAllEnemy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CancelPlayerAction(const EPalActionType ActionType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildNotConsumeMaterials();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildDebugBaseCamp(FName Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotOn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotOff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BanPlayerFromGuildLocalPlayerBelongTo(const FGuid& TargetPlayerUId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyDebugGameProgress(FName PresetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddTechnologyPoints(int32 AddPoints);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerExp(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPartyExp(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddOneStatusPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddOneStatusOtomo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddOneStatusEnemy();
    
    UFUNCTION(Exec)
    void AddMoney(int64 addValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMapObjectEffectVisualAround_Burn(const float Range);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMapObjectEffectVisualAround(const float Range, const EPalMapObjectVisualEffectType EffectType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddGameTime_Minutes(const int32 Minutes);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddGameTime_Hours(const int32 Hours);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddExStatusPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddExpForALLPlayer(int32 addExp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBossTechnologyPoints(int32 AddPoints);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBaseCampEnergyAmount(const EPalEnergyType EnergyType, const float Amount);
    
};

