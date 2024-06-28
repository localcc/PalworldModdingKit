#include "PalPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "PalNetworkPlayerStateComponent.h"
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
    this->bIsSelectedInitMapPoint = false;
    this->bDetectedInValidPlayer = false;
    this->LocalRecordData = NULL;
    this->WorldMapData = NULL;
    this->QuestManager = NULL;
    this->GuildBelongTo = NULL;
    this->NetworkComp = CreateDefaultSubobject<UPalNetworkPlayerStateComponent>(TEXT("NetworkComp"));
    this->SyncTeleportComp = CreateDefaultSubobject<UPalSyncTeleportComponent>(TEXT("SyncTeleportComp"));
    this->UserAchievementChecker = NULL;
    this->bIsNewCharacter = false;
    this->TryCreateIndividualHandleTemporarily = NULL;
    this->bIsCompleteSyncPlayerFromServer_InClient = false;
    this->ChatCounter = 0;
    this->DisableGuildJoin = false;
}

void APalPlayerState::WaitWorldPartitionDelegate(FTimerHandle& OutTimerHandle, APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate) {
}

void APalPlayerState::ShowUnlockHardModeUI() {
}

void APalPlayerState::ShowTowerBossDefeatRewardUI() {
}

void APalPlayerState::ShowBossDefeatRewardUI(int32 TechPoint) {
}

void APalPlayerState::SendDeath_ToServer_Implementation(APalCharacter* Target) {
}

void APalPlayerState::SendDamage_ToServer_Implementation(APalCharacter* Target, const FPalDamageInfo& Info) {
}

void APalPlayerState::SendAccountInitData_ForServer_Implementation(const FPalPlayerAccountInitData& accountInitData) {
}

void APalPlayerState::RequestUpdatePlayerSettingsForServer_ToServer_Implementation(const FPalPlayerSettingsForServer& NewSettings) {
}

void APalPlayerState::RequestUnlockFastTravelPoint_ToServer_Implementation(const FName UnlockFlagKey) {
}

void APalPlayerState::RequestSpawnMonsterForPlayer_Implementation(const FName& CharacterID, int32 Num, int32 Level) {
}

void APalPlayerState::RequestRespawn_Implementation() {
}

void APalPlayerState::RequestPalBoxSyncPage_ToServer_Implementation(int32 pageIndex) {
}

void APalPlayerState::RequestObtainLevelObject_ToServer_Implementation(APalLevelObjectObtainable* TargetObject) {
}

void APalPlayerState::RequestJoinPlayer_ToServer_Implementation(const FGuid& JoinPlayerUId, const FPalPlayerInitializeParameter& InitPlayerParam) {
}

void APalPlayerState::RequestForceSyncPalBoxSlot_ToServer_Implementation(bool isForceSync) {
}

void APalPlayerState::RequestBotLocation_Implementation() {
}

void APalPlayerState::RequestAccountInitData_ForClient_Implementation() {
}

void APalPlayerState::RegisterForPalDex_ToClient_Implementation(const FPalUIPalCaptureInfo& CaptureInfo) {
}

void APalPlayerState::RegisterForPalDex_ServerInternal(FPalInstanceID IndividualId) {
}

void APalPlayerState::ReceiveNotifyLoginComplete_Implementation() {
}

void APalPlayerState::OnUpdatePlayerInfoInGuildBelongTo(const UPalGroupGuildBase* Guild, const FGuid& InPlayerUId, const FPalGuildPlayerInfo& InPlayerInfo) {
}

void APalPlayerState::OnRep_WinGDKUniqueId() {
}

void APalPlayerState::OnRep_PlayerUId() {
}

void APalPlayerState::OnRep_GuildBelongTo(UPalGroupGuildBase* OldValue) {
}

void APalPlayerState::OnRelicNumAdded(int32 AddNum) {
}

void APalPlayerState::OnNotifiedReturnToFieldFromStage_ToClient_Implementation() {
}

void APalPlayerState::OnNotifiedEnteredStage_ToClient_Implementation() {
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

void APalPlayerState::OnChangeOptionCommonSettings(const FPalOptionCommonSettings& PrevSettings, const FPalOptionCommonSettings& NewSettings) {
}

void APalPlayerState::NotifyStartInitSelectMap_ToServer_Implementation() {
}

void APalPlayerState::NotifyRunInitialize_ToClient() {
}

void APalPlayerState::NotifyRemovedCharacterFromPalBox_ToServer_Implementation(const FPalInstanceID& IndividualId) {
}

void APalPlayerState::NotifyObtainComplete_ToServer_Implementation(const FPalInstanceID& IndividualId) {
}

void APalPlayerState::NotifyInvalidPlayer_ToClient_Implementation() {
}

void APalPlayerState::NotifyForceUpdateInventory_ToServer_Implementation(bool IsOpen) {
}

void APalPlayerState::NotifyFailedJoin_ToClient_Implementation(const EPalPlayerJoinResult Result) {
}

void APalPlayerState::NotifyDropOtomoInfo_Implementation(const TArray<FPalLogInfo_DropPal>& InDropPalInfo) {
}

void APalPlayerState::NotifyCompleteInitSelectMap_ToServer_Implementation() {
}

void APalPlayerState::NotifyClientInitializeToServer_Implementation(FUniqueNetIdRepl ReceiveUniqueId) {
}

void APalPlayerState::NotifyClientInitializedEssential_ToServer_Implementation() {
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

bool APalPlayerState::IsCompleteLoadInitWorldPartition() {
    return false;
}

void APalPlayerState::GrantExpForParty_Implementation(const int32 ExpValue) {
}

UPalWorldMapUIData* APalPlayerState::GetWorldMapData() const {
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

void APalPlayerState::DropOtomoSingle_ToServer_Implementation(const FVector DropLocation, const FPalInstanceID& dropID) {
}

void APalPlayerState::Debug_ShutdownToClient_Implementation() {
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

void APalPlayerState::CallOrRegisterOnCompleteSyncPlayerFromServer_InClient(APalPlayerState::FReturnSelfSingleDelegate Delegate) {
}

void APalPlayerState::CallOrRegisterOnCompleteLoadInitWorldPartition_InClient(APalPlayerState::FOnCompleteLoadWorldPartitionDelegate Delegate) {
}

void APalPlayerState::AddMealLog_Implementation(const TArray<FPalMealLogDisplayData>& DisplayDataArray) {
}

void APalPlayerState::AddItemGetLog_ToClient_Implementation(const FPalStaticItemIdAndNum& ItemAndNum) const {
}

void APalPlayerState::AddFullPalBoxLog_ToClient_Implementation() const {
}

void APalPlayerState::AddFullInventoryLog_ToClient_Implementation() const {
}

void APalPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalPlayerState, WinGDKUniqueId);
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
    DOREPLIFETIME(APalPlayerState, bIsSelectedInitMapPoint);
    DOREPLIFETIME(APalPlayerState, GuildBelongTo);
    DOREPLIFETIME(APalPlayerState, ChatCounter);
    DOREPLIFETIME(APalPlayerState, DisableGuildJoin);
}


