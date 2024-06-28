#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EPalChatCategory.h"
#include "EPalPlayerJoinResult.h"
#include "EPalStageType.h"
#include "PalChatMessage.h"
#include "PalDamageInfo.h"
#include "PalDebugOtomoPalInfo.h"
#include "PalGuildPlayerInfo.h"
#include "PalInstanceID.h"
#include "PalLogInfo_DropPal.h"
#include "PalMealLogDisplayData.h"
#include "PalOptionCommonSettings.h"
#include "PalPlayerAccountInitData.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerInfoForMap.h"
#include "PalPlayerInitializeParameter.h"
#include "PalPlayerSettingsForServer.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIPalCaptureInfo.h"
#include "PalPlayerState.generated.h"

class APalCharacter;
class APalLevelObjectObtainable;
class APalPlayerState;
class UPalGroupGuildBase;
class UPalIndividualCharacterHandle;
class UPalNetworkPlayerStateComponent;
class UPalPlayerDataCharacterMake;
class UPalPlayerDataPalStorage;
class UPalPlayerInventoryData;
class UPalPlayerLocalRecordData;
class UPalPlayerOtomoData;
class UPalPlayerRecordData;
class UPalPlayerSkinData;
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
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportCrimeIdsDelegate, UPalIndividualCharacterHandle*, CriminalHandle, const TArray<FName>&, CrimeIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReleaseWantedDelegate, UPalIndividualCharacterHandle*, CriminalHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadingProgressUpdate, int32, AddStep, int32, MaxStep);
    DECLARE_DYNAMIC_DELEGATE(FOnCompleteLoadWorldPartitionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCompleteLoadInitWorldPartitionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndCrimeDelegate, FGuid, CrimeInstanceId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePalDelegate, const FPalUIPalCaptureInfo&, CaptureInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinGDKUniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl WinGDKUniqueId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingProgressUpdate OnLoadingProgressUpdateDelegate;
    
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerUId, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
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
    bool bIsSelectedInitMapPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectedInValidPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPlayerLocalRecordData* LocalRecordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalWorldMapUIData* WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GuildBelongTo, meta=(AllowPrivateAccess=true))
    UPalGroupGuildBase* GuildBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNetworkPlayerStateComponent* NetworkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalSyncTeleportComponent* SyncTeleportComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StartPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUserAchievementChecker* UserAchievementChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNewCharacter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* TryCreateIndividualHandleTemporarily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LoginTryingPlayerUId_InServer;
    
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
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ChatCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool DisableGuildJoin;
    
    APalPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WaitWorldPartitionDelegate(FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void ShowUnlockHardModeUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowTowerBossDefeatRewardUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowBossDefeatRewardUI(int32 TechPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendDeath_ToServer(APalCharacter* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendDamage_ToServer(APalCharacter* Target, const FPalDamageInfo& Info);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendAccountInitData_ForServer(const FPalPlayerAccountInitData& accountInitData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUpdatePlayerSettingsForServer_ToServer(const FPalPlayerSettingsForServer& NewSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnlockFastTravelPoint_ToServer(const FName UnlockFlagKey);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSpawnMonsterForPlayer(const FName& CharacterID, int32 Num, int32 Level);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestRespawn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestPalBoxSyncPage_ToServer(int32 pageIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestObtainLevelObject_ToServer(APalLevelObjectObtainable* TargetObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestJoinPlayer_ToServer(const FGuid& JoinPlayerUId, const FPalPlayerInitializeParameter& InitPlayerParam);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestForceSyncPalBoxSlot_ToServer(bool isForceSync);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestBotLocation();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestAccountInitData_ForClient();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RegisterForPalDex_ToClient(const FPalUIPalCaptureInfo& CaptureInfo);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForPalDex_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveNotifyLoginComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerInfoInGuildBelongTo(const UPalGroupGuildBase* Guild, const FGuid& InPlayerUId, const FPalGuildPlayerInfo& InPlayerInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_WinGDKUniqueId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerUId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GuildBelongTo(UPalGroupGuildBase* OldValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRelicNumAdded(int32 AddNum);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnNotifiedReturnToFieldFromStage_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnNotifiedEnteredStage_ToClient();
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadInitWorldPartition_InClient(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeOptionCommonSettings(const FPalOptionCommonSettings& PrevSettings, const FPalOptionCommonSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyStartInitSelectMap_ToServer();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRunInitialize_ToClient();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyRemovedCharacterFromPalBox_ToServer(const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyObtainComplete_ToServer(const FPalInstanceID& IndividualId);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyInvalidPlayer_ToClient();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyForceUpdateInventory_ToServer(bool IsOpen);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyFailedJoin_ToClient(const EPalPlayerJoinResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyDropOtomoInfo(const TArray<FPalLogInfo_DropPal>& InDropPalInfo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyCompleteInitSelectMap_ToServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyClientInitializeToServer(FUniqueNetIdRepl ReceiveUniqueId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NotifyClientInitializedEssential_ToServer();
    
public:
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
    bool IsCompleteLoadInitWorldPartition();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void GrantExpForParty(const int32 ExpValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorldMapUIData* GetWorldMapData() const;
    
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
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DropOtomoSingle_ToServer(const FVector DropLocation, const FPalInstanceID& dropID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Debug_ShutdownToClient();
    
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
    void CallOrRegisterOnCompleteSyncPlayerFromServer_InClient(APalPlayerState::FReturnSelfSingleDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCompleteLoadInitWorldPartition_InClient(APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddMealLog(const TArray<FPalMealLogDisplayData>& DisplayDataArray);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddItemGetLog_ToClient(const FPalStaticItemIdAndNum& ItemAndNum) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddFullPalBoxLog_ToClient() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddFullInventoryLog_ToClient() const;
    
};

