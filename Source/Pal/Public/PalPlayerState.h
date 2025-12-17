#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "Engine/EngineTypes.h"
#include "EPalChatCategory.h"
#include "EPalMapObjectOperationResult.h"
#include "EPalOptionWorldDeathPenalty.h"
#include "EPalPlayerJoinResult.h"
#include "EPalPlayerMatchingType.h"
#include "EPalStageType.h"
#include "PalBaseCampWorkerMovementLogDisplayData.h"
#include "PalBuildResultParameter.h"
#include "PalBuildingCountRepInfo.h"
#include "PalChatMessage.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalGuildLabCompleteLogDisplayData.h"
#include "PalGuildPlayerInfo.h"
#include "PalInstanceID.h"
#include "PalLogInfo_DropPal.h"
#include "PalMealLogDisplayData.h"
#include "PalOptionCommonSettings.h"
#include "PalPlayerAccountInitData.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerInfoForMap.h"
#include "PalPlayerInitializeParameter.h"
#include "PalPlayerReplicationEntity.h"
#include "PalPlayerSettingsForServer.h"
#include "PalRandomizerReplicateData.h"
#include "PalStageInstanceId.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIBossDefeatRewardDisplayData.h"
#include "PalUIPalCaptureInfo.h"
#include "PalPlayerState.generated.h"

class APalCharacter;
class APalPlayerState;
class UPalGroupGuildBase;
class UPalIndividualCharacterHandle;
class UPalPlayerDataCharacterMake;
class UPalPlayerDataPalStorage;
class UPalPlayerInventoryData;
class UPalPlayerLocalRecordData;
class UPalPlayerOtomoData;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
class UPalPlayerTreasureMapPointData;
class UPalQuestManager;
class UPalSyncTeleportComponent;
class UPalTechnologyData;
class UPalUserAchievementChecker;
class UPalWorldMapUIData;

UCLASS(Blueprintable, MinimalAPI)
class APalPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartCrimeDelegate, FGuid, CrimeInstanceId);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FReturnSelfSingleDelegate, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndStageInstanceIdDelegate, APalPlayerState*, PlayerState, const FPalStageInstanceId&, StageInstanceId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportCrimeIdsDelegate, UPalIndividualCharacterHandle*, CriminalHandle, const TArray<FName>&, CrimeIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReleaseWantedDelegate, UPalIndividualCharacterHandle*, CriminalHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOperatingResultNotifiedDelegate, const bool, IsSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMultiHatchCompleteDelegate, const TArray<FPalInstanceID>&, HatchedIDs);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadingProgressUpdate, int32, AddStep, int32, MaxStep);
    DECLARE_DYNAMIC_DELEGATE(FOnCompleteLoadWorldPartitionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteLoadInitWorldPartitionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedPlayerUId, APalPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKillPalDelegate, UPalIndividualCharacterHandle*, DeadEnemyHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndCrimeDelegate, FGuid, CrimeInstanceId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePalInServerDelegate, UPalIndividualCharacterHandle*, CaptureCharacterHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePalDelegate, const FPalUIPalCaptureInfo&, CaptureInfo);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_CountPvpItem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingProgressUpdate OnLoadingProgressUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnBoothTradeCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiHatchCompleteDelegate OnMultiHatchComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOperatingResultNotifiedDelegate OnOperatingPassiveComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOperatingResultNotifiedDelegate OnOperatingGenderComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReportCrimeIdsDelegate OnReportCrimeIdsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReleaseWantedDelegate OnReleaseWantedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartCrimeDelegate OnStartCrimeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndCrimeDelegate OnEndCrimeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleteLoadInitWorldPartitionDelegate OnCompleteLoadInitWorldPartitionDelegate_InClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfAndStageInstanceIdDelegate OnNotifiedMovedIntoStageInClientDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfAndStageInstanceIdDelegate OnNotifiedMovedToFieldFromStageInClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerUId, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OverridePlayerUIdFromClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualHandleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector CachedPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FQuat CachedPlayerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool CachedIsPlayerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool CachedIsPlayerDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerOtomoData* OtomoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerDataCharacterMake* CharacterMakeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalPlayerInventoryData* InventoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalPlayerDataPalStorage* PalStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalTechnologyData* TechnologyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalPlayerRecordData* RecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalPlayerSkinData* PlayerSkinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalPlayerTreasureMapPointData* TreasureMapPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSelectedInitMapPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPalBuildingCountRepInfo> BaseCampBuildingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectedInValidPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPlayerLocalRecordData* LocalRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalWorldMapUIData* WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UPalQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GuildBelongTo, meta=(AllowPrivateAccess=true))
    UPalGroupGuildBase* GuildBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalSyncTeleportComponent* SyncTeleportComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StartPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUserAchievementChecker* UserAchievementChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PvPItemCount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString DiscordPlayerUniqueID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNewCharacter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* TryCreateIndividualHandleTemporarily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LoginTryingPlayerUId_InServer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, bool> CompleteLoadWorldPartitionMap_InServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCompleteLoadInitWorldPartition_InServer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompleteSyncPlayerFromServer_InClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerAccountInitData AcountInitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerSettingsForServer PlayerSettingsForServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalLogInfo_DropPal> DropPalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FTimerHandle> WaitLoadingWorldPartitionTimerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalPlayerReplicationEntity ReplicationEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllowSkipNight, meta=(AllowPrivateAccess=true))
    bool bAllowSkipNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalPlayerMatchingType RegisteringMultiPlayerContentType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ChatCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool DisableGuildJoin;
    
    APalPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WaitWorldPartitionDelegateFromAction(FGuid InGuid, FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void WaitWorldPartitionDelegate(FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void ShowUnlockHardModeUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowTowerBossDefeatRewardUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowOilRigCrateOpenUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowBossDefeatRewardUI(const FPalUIBossDefeatRewardDisplayData& BossDefeatDisplayData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetDiscordPlayerUniqueID(const FString& InDiscordPlayerUniqueID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendRandomizerReplicateData(FPalRandomizerReplicateData InRandomizerReplicateData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendCompleteLoadWorldPartition_InServer(FGuid InGuid, bool bIsComplete);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendAccountInitData_ForServer(const FPalPlayerAccountInitData& accountInitData);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSpawnMonsterForPlayer(const FName& CharacterID, int32 Num, int32 Level);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRespawn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRandomizerReplicateData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPalBoxSyncPage_ToServer(int32 pageIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestJoinPlayer_ToServer(const FGuid& JoinPlayerUId, const FPalPlayerInitializeParameter& InitPlayerParam);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestForceSyncPalBoxSlot_ToServer(bool isForceSync);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDeletePlayerSelf_ToServer();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeletePlayerSelf();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBotLocation();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAllowSkipNight_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void RequestAllowSkipNight();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestAccountInitData_ForClient();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RegisterForPalDex_ToClient(const FPalUIPalCaptureInfo& CaptureInfo, bool bDisplayHUD);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForPalDex_ServerInternal(FPalInstanceID IndividualId, bool bDisplayHUD);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveNotifyLoginComplete();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveDeletePlayerSelf_ToRequestClient(bool bIsSuccess);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveBuildResult_ToRequestClient(const EPalMapObjectOperationResult Result, FPalBuildResultParameter BuildResultParameter);
    
    UFUNCTION(Reliable, Server)
    void OverridePsnAccountId(const uint64& InPsnAccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerInfoInGuildBelongTo(const UPalGroupGuildBase* Guild, const FGuid& InPlayerUId, const FPalGuildPlayerInfo& InPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnTimer_CountPvPItem();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerUId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GuildBelongTo(UPalGroupGuildBase* OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllowSkipNight();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRelicNumAdded(int32 AddNum);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnNotifiedReturnToFieldFromStage_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnNotifiedMovedToFieldFromStage_ToClient(const FPalStageInstanceId& StageInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnNotifiedMovedIntoStage_ToClient(const FPalStageInstanceId& StageInstanceId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnNotifiedEnteredStage_ToClient();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedClientInitializedEssentialInServer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMultiHatchedIndividualHandle_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishInitSelectMapTeleport(const FGuid TeleportPlayerUId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndLocalWorldAutoSave(bool bIsSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatePlayerIndividualHandle_InServer(FPalInstanceID ID);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedGrantedIndividualHandle_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncWorld_InClient(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer_InClient(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncAll_InClient(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadWorldPartitionAndAdjustCharacter_InServer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadInitWorldPartition_InClient(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClosedDeletePlayerSelfNotifyDialog(bool bYes);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeOptionCommonSettings(const FPalOptionCommonSettings& PrevSettings, const FPalOptionCommonSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyTradeComplete_ToClient();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRunInitialize_ToClient();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyPalBoxOpenInHardcore_ToServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyOperatingPassiveComplete_ToClient(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyOperatingGenderComplete_ToClient(bool IsSuccess);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyOnCompleteLoadInitWorldPartition_ToServer();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyMultiHatchComplete_ToClient(const TArray<FPalInstanceID>& HatchedIDs) const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyInvalidPlayer_ToClient();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyForceUpdateInventory_ToServer(bool IsOpen);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyFailedJoin_ToClient(const EPalPlayerJoinResult Result);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyDropOtomoInfo(const TArray<FPalLogInfo_DropPal>& InDropPalInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadTitleLevel(bool bIsSaveSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedInitMapPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerCompletelyDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStateByStageType(EPalStageType StageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPlayerMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleteLoadWorldPartition_InServer(FGuid InGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleteLoadInitWorldPartition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowSkipNight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorldMapUIData* GetWorldMapData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerTreasureMapPointData* GetTreasureMapPointData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalTechnologyData* GetTechnologyData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSyncTeleportComponent* GetSyncTeleportComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerRecordData* GetRecordData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalQuestManager* GetQuestManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerSkinData* GetPlayerSkinData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalPlayerInfoForMap GetPlayerInfoForMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerDataPalStorage* GetPalStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerOtomoData* GetPalPlayerOtomoData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerDataCharacterMake* GetPalPlayerCharacterMakeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerLocalRecordData* GetLocalRecordData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerInventoryData* GetInventoryData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalStageInstanceId GetEnteringStageInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalOptionWorldDeathPenalty GetDeathPenaltyModeForGameOverUI() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FPalLogInfo_DropPal> GetAndClearLastDropPalInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void FixedCharacterName(const FString& CharacterName);
    
    UFUNCTION(BlueprintCallable)
    void FixedCharacterMakeData(const FPalPlayerDataCharacterMakeInfo& MakeInfo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void EnterChat_Receive(const FPalChatMessage& ChatMessage);
    
    UFUNCTION(BlueprintCallable)
    bool EnterChat(FText Msg, EPalChatCategory Category);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_ShutdownToClient();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_SetOverridePlayerUID(FGuid NewPlayerUId);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_SetIsOverridePlayerUIDToClient(bool bIsOverride);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_SetDestructionByCompleteBuiltFlag_ToServer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestStopAICheckOfCharacter_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestStartAICheckOfCharacter_ToServer(APalCharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestShutdownRemoteServer_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestShutdownRemoteServer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestDeletePlayerSelf_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestDeletePlayerSelf();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestCauseServerCrash_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestCauseServerCrash();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RequestAllowBroadcastAIInfoOfCharacter_ToServer(APalCharacter* TargetCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_RepairEquipment_ToServer();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_ReceiveDeletePlayerSelf_ToRequestClient(const bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void Debug_OnCreatedIndividual(FPalInstanceID ID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_DeleteWorldAndShutdownRemoteServer_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_DeleteWorldAndShutdownRemoteServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_CaptureNewMonsterByDebugOtomoInfo_ToServer(const FPalDebugOtomoPalInfo& Info, bool bRandomPassiveSkill);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_CaptureNewMonster_ToServer(FName CharacterID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_BuildDebugBaseCamp_ToServer(FName CampMode, int32 workerCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Debug_BotEnterDungeon_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void ClearCompleteLoadWorldPartition_InServer(FGuid InGuid);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCompleteSyncPlayerFromServer_InClient(APalPlayerState::FReturnSelfSingleDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCompleteLoadInitWorldPartition_InClient(APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddMealLog(const TArray<FPalMealLogDisplayData>& DisplayDataArray);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddItemGetLog_ToClient(const FPalStaticItemIdAndNum& ItemAndNum, const float DelayTime) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddGuildLabCompleteLog(const TArray<FPalGuildLabCompleteLogDisplayData>& DisplayDataArray);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddFullPalBoxLog_ToClient() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddFullInventoryLog_ToClient() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddBaseCampWorkerMovementLog(const TArray<FPalBaseCampWorkerMovementLogDisplayData>& DisplayDataArray);
    
private:
    UFUNCTION(BlueprintCallable)
    void AchivementUnlockCheck();
    
};

