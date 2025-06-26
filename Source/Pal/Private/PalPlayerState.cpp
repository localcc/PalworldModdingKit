#include "PalPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "PalSyncTeleportComponent.h"

APalPlayerState::APalPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedIsPlayerDead = false;
    this->CachedIsPlayerDying = false;
    this->OtomoData = NULL;
    this->CharacterMakeData = NULL;
    this->InventoryData = NULL;
    this->PalStorage = NULL;
    this->TechnologyData = NULL;
    this->RecordData = NULL;
    this->PlayerSkinData = NULL;
    this->TreasureMapPointData = NULL;
    this->bIsSelectedInitMapPoint = false;
    this->bDetectedInValidPlayer = false;
    this->LocalRecordData = NULL;
    this->WorldMapData = NULL;
    this->QuestManager = NULL;
    this->GuildBelongTo = NULL;
    this->SyncTeleportComp = CreateDefaultSubobject<UPalSyncTeleportComponent>(TEXT("SyncTeleportComp"));
    this->UserAchievementChecker = NULL;
    this->bIsNewCharacter = false;
    this->TryCreateIndividualHandleTemporarily = NULL;
    this->bIsCompleteLoadInitWorldPartition_InServer = false;
    this->bIsCompleteSyncPlayerFromServer_InClient = false;
    this->bAllowSkipNight = false;
    this->ChatCounter = 0;
    this->DisableGuildJoin = false;
}

void APalPlayerState::WaitWorldPartitionDelegateFromAction(FGuid InGuid, FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate) {
}

void APalPlayerState::WaitWorldPartitionDelegate(FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate) {
}

void APalPlayerState::ShowUnlockHardModeUI() {
}

void APalPlayerState::ShowTowerBossDefeatRewardUI() {
}

void APalPlayerState::ShowOilRigCrateOpenUI() {
}

void APalPlayerState::ShowBossDefeatRewardUI(const FPalUIBossDefeatRewardDisplayData& BossDefeatDisplayData) {
}

void APalPlayerState::SendRandomizerReplicateData_Implementation(FPalRandomizerReplicateData InRandomizerReplicateData) {
}

void APalPlayerState::SendCompleteLoadWorldPartition_InServer_Implementation(FGuid InGuid, bool bIsComplete) {
}

void APalPlayerState::SendAccountInitData_ForServer_Implementation(const FPalPlayerAccountInitData& accountInitData) {
}

void APalPlayerState::RequestSpawnMonsterForPlayer_Implementation(const FName& CharacterID, int32 Num, int32 Level) {
}

void APalPlayerState::RequestRespawn_Implementation() {
}

void APalPlayerState::RequestRandomizerReplicateData_Implementation() {
}

void APalPlayerState::RequestPalBoxSyncPage_ToServer_Implementation(int32 pageIndex) {
}

void APalPlayerState::RequestJoinPlayer_ToServer_Implementation(const FGuid& JoinPlayerUId, const FPalPlayerInitializeParameter& InitPlayerParam) {
}

void APalPlayerState::RequestForceSyncPalBoxSlot_ToServer_Implementation(bool isForceSync) {
}

void APalPlayerState::RequestDeletePlayerSelf_ToServer_Implementation() {
}

bool APalPlayerState::RequestDeletePlayerSelf() {
    return false;
}

void APalPlayerState::RequestBotLocation_Implementation() {
}

void APalPlayerState::RequestAllowSkipNight_ToServer_Implementation() {
}

void APalPlayerState::RequestAllowSkipNight() {
}

void APalPlayerState::RequestAccountInitData_ForClient_Implementation() {
}

void APalPlayerState::RegisterForPalDex_ToClient_Implementation(const FPalUIPalCaptureInfo& CaptureInfo, bool bDisplayHUD) {
}

void APalPlayerState::RegisterForPalDex_ServerInternal(FPalInstanceID IndividualId, bool bDisplayHUD) {
}

void APalPlayerState::ReceiveNotifyLoginComplete_Implementation() {
}

void APalPlayerState::ReceiveDeletePlayerSelf_ToRequestClient_Implementation(bool bIsSuccess) {
}

void APalPlayerState::ReceiveBuildResult_ToRequestClient_Implementation(const EPalMapObjectOperationResult Result, FPalBuildResultParameter BuildResultParameter) {
}

void APalPlayerState::OverridePsnAccountId_Implementation(const uint64& InPsnAccountId) {
}

void APalPlayerState::OnUpdatePlayerInfoInGuildBelongTo(const UPalGroupGuildBase* Guild, const FGuid& InPlayerUId, const FPalGuildPlayerInfo& InPlayerInfo) {
}

void APalPlayerState::OnRep_PlayerUId() {
}

void APalPlayerState::OnRep_GuildBelongTo(UPalGroupGuildBase* OldValue) {
}

void APalPlayerState::OnRep_AllowSkipNight() {
}

void APalPlayerState::OnRelicNumAdded(int32 AddNum) {
}

void APalPlayerState::OnNotifiedReturnToFieldFromStage_ToClient_Implementation() {
}

void APalPlayerState::OnNotifiedEnteredStage_ToClient_Implementation() {
}

void APalPlayerState::OnNotifiedClientInitializedEssentialInServer() {
}

void APalPlayerState::OnMultiHatchedIndividualHandle_ServerInternal(FPalInstanceID IndividualId) {
}

void APalPlayerState::OnFinishInitSelectMapTeleport(const FGuid TeleportPlayerUId) {
}

void APalPlayerState::OnEndLocalWorldAutoSave(bool bIsSuccess) {
}

void APalPlayerState::OnCreatePlayerIndividualHandle_InServer(FPalInstanceID ID) {
}

void APalPlayerState::OnCreatedGrantedIndividualHandle_ServerInternal(FPalInstanceID IndividualId) {
}

void APalPlayerState::OnCompleteSyncWorld_InClient(APalPlayerState* PlayerState) {
}

void APalPlayerState::OnCompleteSyncPlayer_InClient(APalPlayerState* PlayerState) {
}

void APalPlayerState::OnCompleteSyncAll_InClient(APalPlayerState* PlayerState) {
}

void APalPlayerState::OnCompleteLoadInitWorldPartition_InClient(APalPlayerState* PlayerState) {
}

void APalPlayerState::OnClosedDeletePlayerSelfNotifyDialog(bool bYes) {
}

void APalPlayerState::OnChangeOptionCommonSettings(const FPalOptionCommonSettings& PrevSettings, const FPalOptionCommonSettings& NewSettings) {
}

void APalPlayerState::NotifyTradeComplete_ToClient_Implementation() {
}

void APalPlayerState::NotifyRunInitialize_ToClient() {
}

void APalPlayerState::NotifyPalBoxOpenInHardcore_ToServer_Implementation() {
}

void APalPlayerState::NotifyOperatingPassiveComplete_ToClient_Implementation(bool IsSuccess) {
}

void APalPlayerState::NotifyOperatingGenderComplete_ToClient_Implementation(bool IsSuccess) {
}

void APalPlayerState::NotifyMultiHatchComplete_ToClient_Implementation(const TArray<FPalInstanceID>& HatchedIDs) const {
}

void APalPlayerState::NotifyInvalidPlayer_ToClient_Implementation() {
}

void APalPlayerState::NotifyForceUpdateInventory_ToServer_Implementation(bool IsOpen) {
}

void APalPlayerState::NotifyFailedJoin_ToClient_Implementation(const EPalPlayerJoinResult Result) {
}

void APalPlayerState::NotifyDropOtomoInfo_Implementation(const TArray<FPalLogInfo_DropPal>& InDropPalInfo) {
}


bool APalPlayerState::IsSelectedInitMapPoint() {
    return false;
}

bool APalPlayerState::IsPlayerDying() const {
    return false;
}

bool APalPlayerState::IsPlayerDead() const {
    return false;
}

bool APalPlayerState::IsPlayerCompletelyDead() const {
    return false;
}

bool APalPlayerState::IsInStateByStageType(EPalStageType StageType) const {
    return false;
}

bool APalPlayerState::IsInStage() const {
    return false;
}

bool APalPlayerState::IsCompleteLoadWorldPartition_InServer(FGuid InGuid) const {
    return false;
}

bool APalPlayerState::IsCompleteLoadInitWorldPartition() {
    return false;
}

bool APalPlayerState::IsAllowSkipNight() const {
    return false;
}

UPalWorldMapUIData* APalPlayerState::GetWorldMapData() const {
    return NULL;
}

UPalPlayerTreasureMapPointData* APalPlayerState::GetTreasureMapPointData() const {
    return NULL;
}

UPalTechnologyData* APalPlayerState::GetTechnologyData() const {
    return NULL;
}

UPalSyncTeleportComponent* APalPlayerState::GetSyncTeleportComp() const {
    return NULL;
}

UPalPlayerRecordData* APalPlayerState::GetRecordData() const {
    return NULL;
}

UPalQuestManager* APalPlayerState::GetQuestManager() const {
    return NULL;
}

UPalPlayerSkinData* APalPlayerState::GetPlayerSkinData() const {
    return NULL;
}

FPalPlayerInfoForMap APalPlayerState::GetPlayerInfoForMap() {
    return FPalPlayerInfoForMap{};
}

UPalPlayerDataPalStorage* APalPlayerState::GetPalStorage() const {
    return NULL;
}

UPalPlayerOtomoData* APalPlayerState::GetPalPlayerOtomoData() const {
    return NULL;
}

UPalPlayerDataCharacterMake* APalPlayerState::GetPalPlayerCharacterMakeData() const {
    return NULL;
}

UPalPlayerLocalRecordData* APalPlayerState::GetLocalRecordData() const {
    return NULL;
}

UPalPlayerInventoryData* APalPlayerState::GetInventoryData() const {
    return NULL;
}

TArray<FPalLogInfo_DropPal> APalPlayerState::GetAndClearLastDropPalInfo() {
    return TArray<FPalLogInfo_DropPal>();
}

void APalPlayerState::FixedCharacterName(const FString& CharacterName) {
}

void APalPlayerState::FixedCharacterMakeData(const FPalPlayerDataCharacterMakeInfo& MakeInfo) {
}

void APalPlayerState::EnterChat_Receive_Implementation(const FPalChatMessage& ChatMessage) {
}

bool APalPlayerState::EnterChat(FText Msg, EPalChatCategory Category) {
    return false;
}

void APalPlayerState::Debug_ShutdownToClient_Implementation() {
}

void APalPlayerState::Debug_SetOverridePlayerUID(FGuid NewPlayerUId) {
}

void APalPlayerState::Debug_SetIsOverridePlayerUIDToClient_Implementation(bool bIsOverride) {
}

void APalPlayerState::Debug_SetDestructionByCompleteBuiltFlag_ToServer_Implementation() {
}

void APalPlayerState::Debug_RequestStopAICheckOfCharacter_ToServer_Implementation(APalCharacter* TargetCharacter) {
}

void APalPlayerState::Debug_RequestStartAICheckOfCharacter_ToServer_Implementation(APalCharacter* TargetCharacter) {
}

void APalPlayerState::Debug_RequestShutdownRemoteServer_ToServer_Implementation() {
}

void APalPlayerState::Debug_RequestShutdownRemoteServer() {
}

void APalPlayerState::Debug_RequestDeletePlayerSelf_ToServer_Implementation() {
}

void APalPlayerState::Debug_RequestDeletePlayerSelf() {
}

void APalPlayerState::Debug_RequestCauseServerCrash_ToServer_Implementation() {
}

void APalPlayerState::Debug_RequestCauseServerCrash() {
}

void APalPlayerState::Debug_RequestAllowBroadcastAIInfoOfCharacter_ToServer_Implementation(APalCharacter* TargetCharacter) {
}

void APalPlayerState::Debug_RepairEquipment_ToServer_Implementation() {
}

void APalPlayerState::Debug_ReceiveDeletePlayerSelf_ToRequestClient_Implementation(const bool bResult) {
}

void APalPlayerState::Debug_OnCreatedIndividual(FPalInstanceID ID) {
}

void APalPlayerState::Debug_DeleteWorldAndShutdownRemoteServer_ToServer_Implementation() {
}

void APalPlayerState::Debug_DeleteWorldAndShutdownRemoteServer() {
}

void APalPlayerState::Debug_CaptureNewMonsterByDebugOtomoInfo_ToServer_Implementation(const FPalDebugOtomoPalInfo& Info, bool bRandomPassiveSkill) {
}

void APalPlayerState::Debug_CaptureNewMonster_ToServer_Implementation(FName CharacterID) {
}

void APalPlayerState::Debug_BuildDebugBaseCamp_ToServer_Implementation(FName CampMode, int32 workerCount) {
}

void APalPlayerState::Debug_BotEnterDungeon_ToServer_Implementation() {
}

void APalPlayerState::ClearCompleteLoadWorldPartition_InServer(FGuid InGuid) {
}

void APalPlayerState::CallOrRegisterOnCompleteSyncPlayerFromServer_InClient(APalPlayerState::FReturnSelfSingleDelegate Delegate) {
}

void APalPlayerState::CallOrRegisterOnCompleteLoadInitWorldPartition_InClient(APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate) {
}

void APalPlayerState::AddMealLog_Implementation(const TArray<FPalMealLogDisplayData>& DisplayDataArray) {
}

void APalPlayerState::AddItemGetLog_ToClient_Implementation(const FPalStaticItemIdAndNum& ItemAndNum, const float DelayTime) const {
}

void APalPlayerState::AddGuildLabCompleteLog_Implementation(const TArray<FPalGuildLabCompleteLogDisplayData>& DisplayDataArray) {
}

void APalPlayerState::AddFullPalBoxLog_ToClient_Implementation() const {
}

void APalPlayerState::AddFullInventoryLog_ToClient_Implementation() const {
}

void APalPlayerState::AddBaseCampWorkerMovementLog_Implementation(const TArray<FPalBaseCampWorkerMovementLogDisplayData>& DisplayDataArray) {
}

void APalPlayerState::AchivementUnlockCheck() {
}

void APalPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalPlayerState, PlayerUId);
    DOREPLIFETIME(APalPlayerState, IndividualHandleId);
    DOREPLIFETIME(APalPlayerState, CachedPlayerLocation);
    DOREPLIFETIME(APalPlayerState, CachedPlayerRotation);
    DOREPLIFETIME(APalPlayerState, CachedIsPlayerDead);
    DOREPLIFETIME(APalPlayerState, CachedIsPlayerDying);
    DOREPLIFETIME(APalPlayerState, InventoryData);
    DOREPLIFETIME(APalPlayerState, PalStorage);
    DOREPLIFETIME(APalPlayerState, TechnologyData);
    DOREPLIFETIME(APalPlayerState, RecordData);
    DOREPLIFETIME(APalPlayerState, PlayerSkinData);
    DOREPLIFETIME(APalPlayerState, TreasureMapPointData);
    DOREPLIFETIME(APalPlayerState, bIsSelectedInitMapPoint);
    DOREPLIFETIME(APalPlayerState, BaseCampBuildingNum);
    DOREPLIFETIME(APalPlayerState, QuestManager);
    DOREPLIFETIME(APalPlayerState, GuildBelongTo);
    DOREPLIFETIME(APalPlayerState, bIsCompleteLoadInitWorldPartition_InServer);
    DOREPLIFETIME(APalPlayerState, bAllowSkipNight);
    DOREPLIFETIME(APalPlayerState, ChatCounter);
    DOREPLIFETIME(APalPlayerState, DisableGuildJoin);
}


