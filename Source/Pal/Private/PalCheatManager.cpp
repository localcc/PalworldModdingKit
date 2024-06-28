#include "PalCheatManager.h"

UPalCheatManager::UPalCheatManager() {
    this->DebugWindowSetting = NULL;
    this->DebugProgressPresetDataTable = NULL;
    this->SpawnerInfoReporterClass = NULL;
    this->PalImGui = NULL;
    this->PalCountSystem = NULL;
    this->SpawnInfoReporter = NULL;
}

void UPalCheatManager::WorkerEventLog() {
}

void UPalCheatManager::WorkerEventInterval(const float Interval) {
}

void UPalCheatManager::WildPalCombatStart() {
}

void UPalCheatManager::WazaCoolTimeFastMode() {
}

void UPalCheatManager::VisitorTravel() {
}

void UPalCheatManager::UpdateBaseCampWorkerSlotNum(const int32 SlotNum) {
}

void UPalCheatManager::UpdateBaseCampTickInvokeMaxNumInOneTick(const int32 Value) {
}

void UPalCheatManager::UpdateBaseCampLevelMax() {
}

void UPalCheatManager::UnlockTechnologyByLvCap(int32 Lv) {
}

void UPalCheatManager::UnlockOneTechnology(FName technologyName) {
}

void UPalCheatManager::UnlockMap(FName regionId) {
}

void UPalCheatManager::UnlockAllRecipeTechnology() {
}

void UPalCheatManager::UnlockAllCategoryTechnology() {
}

void UPalCheatManager::UnlockAchievement(const FString& AchievementId, int32 Progress) {
}

void UPalCheatManager::UNKO() {
}

void UPalCheatManager::TriggerBaseCampWorkerEvent(const EPalBaseCampWorkerEventType EventType) {
}

void UPalCheatManager::TraceReticleDirectionAllObjectType(const float Length) {
}

void UPalCheatManager::ToggleVisibleFoliageChunk() {
}

void UPalCheatManager::ToggleUserAchievementDebug() {
}

void UPalCheatManager::ToggleShowReticleLocation() {
}

void UPalCheatManager::ToggleShowDropItemHitEventLog() {
}


void UPalCheatManager::ToggleRevision() {
}

void UPalCheatManager::TogglePartnerSkillNoDecrease() {
}

void UPalCheatManager::ToggleLoadingScreen() {
}

void UPalCheatManager::ToggleHUD() {
}

void UPalCheatManager::ToggleForceSpawnRandomIncident() {
}

void UPalCheatManager::ToggleBuildInstallCheckLookToCamera() {
}

void UPalCheatManager::ToggleBaseCampWorkerSanityDetail() {
}


void UPalCheatManager::TeleportToSafePoint() {
}

void UPalCheatManager::TeleportToNearestPlayer() {
}

void UPalCheatManager::TeleportToNearestCamp() {
}

void UPalCheatManager::TeleportToLocationByClipboard() {
}

void UPalCheatManager::TeleportToLocation(float X, float Y, float Z) {
}

void UPalCheatManager::TeleportToLastLandingLocation() {
}

void UPalCheatManager::TeleportToDungeonEntranceRandom() {
}

void UPalCheatManager::TeleportToDungeonEntranceByRandomScattered() {
}

void UPalCheatManager::TeleportToDungeonEntranceByIndex(const int32 Index) {
}

void UPalCheatManager::TeleportToDungeonEntranceByDataLayer(const FName DataLayerName) {
}

void UPalCheatManager::TeleportToCurrentDungeonTreasureBox() {
}

void UPalCheatManager::TeleportToCurrentDungeonGoal() {
}

void UPalCheatManager::TeleportToBotLocation(int32 botIndex) {
}

void UPalCheatManager::TeleportToBotCamp(int32 botIndex) {
}

void UPalCheatManager::TeleportToBossTower(EPalBossType BossType) {
}

void UPalCheatManager::TeleportNearestPlayerToMe() const {
}

void UPalCheatManager::StringToPlayerUID(const FString& Str) {
}

void UPalCheatManager::StopTimerDropItem() {
}

void UPalCheatManager::StopOtomoMovement() const {
}

void UPalCheatManager::StopOtomoAI() const {
}


void UPalCheatManager::StartTraceAllOption() {
}

void UPalCheatManager::StartDismantlingMode() {
}

void UPalCheatManager::StartBuildMode(const FName BuildObjectId) {
}


void UPalCheatManager::SpectatorOn() {
}


void UPalCheatManager::SpectatorOff() {
}

void UPalCheatManager::SpawnPalEggBreedFarm(const FName MonsterId, const float Range) {
}

void UPalCheatManager::SpawnMonsterForPlayer(const FName& CharacterID, int32 Num, int32 Level) {
}

void UPalCheatManager::SpawnMonster(const FName CharacterID, int32 Level) {
}

void UPalCheatManager::SleepAllEnemy() {
}

void UPalCheatManager::SkipCutscene() {
}

void UPalCheatManager::ShutdownRemoteServer() {
}

void UPalCheatManager::ShowTargetLocalPlayerEnemyList() {
}

void UPalCheatManager::ShowStreamingLevel() {
}

void UPalCheatManager::ShowSpawnerInfo() {
}

void UPalCheatManager::ShowSnapMode() {
}

void UPalCheatManager::ShowPlayers() {
}

void UPalCheatManager::ShowPlayerMoveSpeed() {
}

void UPalCheatManager::ShowPalEggStatus() {
}

void UPalCheatManager::ShowPalCount() {
}

void UPalCheatManager::ShowObjectNameGround() {
}

void UPalCheatManager::ShowObjectNameForward() {
}

void UPalCheatManager::ShowMovementMode() {
}

void UPalCheatManager::ShowMaxPlayers() {
}

void UPalCheatManager::ShowMapObjectStatus() {
}

void UPalCheatManager::ShowMapObjectFoliageStatus() {
}

void UPalCheatManager::ShowMapObjectConnector() {
}

void UPalCheatManager::ShowLocalSaveData() {
}

void UPalCheatManager::ShowLaunchArguments() const {
}

void UPalCheatManager::ShowInviteCode() const {
}

void UPalCheatManager::ShowInvaderDebugLog() const {
}

void UPalCheatManager::ShowHateArrow() {
}

void UPalCheatManager::ShowFloorLocation() {
}

void UPalCheatManager::ShowDialog(FText Msg) {
}

void UPalCheatManager::ShowDefenseAttackTarget() {
}

void UPalCheatManager::ShowDefenseAttackableRange() {
}

void UPalCheatManager::ShowDebugWorkAssignTarget() {
}

void UPalCheatManager::ShowDebugWorkAssign() {
}

void UPalCheatManager::ShowDebugWanted() {
}

void UPalCheatManager::ShowDebugCrime() {
}

void UPalCheatManager::ShowCharacterStatus() {
}

void UPalCheatManager::ShowBuildObjectInstallCheck() {
}

void UPalCheatManager::ShowAlert(FText Msg) {
}

void UPalCheatManager::ShowAISound() {
}

void UPalCheatManager::ShowActionName() {
}

void UPalCheatManager::ShowActionAndStatus_ToServer() {
}

void UPalCheatManager::ShowActionAndStatus() {
}

void UPalCheatManager::SetVoiceID(int32 VoiceID) {
}

void UPalCheatManager::SetSunLightShadowDistance(const float InDistance) {
}

void UPalCheatManager::SetSanityToBaseCampPal(const float Sanity) {
}

void UPalCheatManager::SetPlayerSP(int32 NewSP) {
}

void UPalCheatManager::SetPlayerSkin(EPalSkinType Part, FName SkinName) {
}

void UPalCheatManager::SetPlayerHP(int32 NewHP) {
}

void UPalCheatManager::SetPlayerCameraBoomLengthRate(const float Rate) {
}

void UPalCheatManager::SetPassive_PlayerWeapon(FName firstPassive, FName secondPassive, FName thirdPassive) {
}

void UPalCheatManager::SetPalWorldTimeScale(float Rate) {
}

void UPalCheatManager::SetPalWorldTime(int32 Hour) {
}

void UPalCheatManager::SetPalEggStatusRange(const float Range) {
}

void UPalCheatManager::SetPaldexComplete(bool IsComplete) {
}

void UPalCheatManager::SetOtomoPalWorkSpeedRank(int32 Rank) {
}

void UPalCheatManager::SetOtomoPalRank(int32 Rank) {
}

void UPalCheatManager::SetOtomoPalHPRank(int32 Rank) {
}

void UPalCheatManager::SetOtomoPalDefenceRank(int32 Rank) {
}

void UPalCheatManager::SetOtomoPalAttackRank(int32 Rank) {
}

void UPalCheatManager::SetMultiplayRestriction(bool bRestriction) {
}

void UPalCheatManager::SetMapObjectStatusRange(const float Range) {
}

void UPalCheatManager::SetMapObjectStatusMapObjectId(const FName MapObjectId) {
}

void UPalCheatManager::SetLoadingSceneVisible(bool IsVisible) {
}

void UPalCheatManager::SetInventoryItemDurability(const float Percent) {
}

void UPalCheatManager::SetHardTowerBossDebugNo(int32 DebugNo) {
}

void UPalCheatManager::SetGameTime_NextNight_SecondsAgo(const int32 SecondsAgo) {
}

void UPalCheatManager::SetGameTime_NextNight() {
}

void UPalCheatManager::SetGameTime_NextDay_SecondsAgo(const int32 SecondsAgo) {
}

void UPalCheatManager::SetGameTime_NextDay() {
}

void UPalCheatManager::SetFPSForServer(float fps) {
}

void UPalCheatManager::SetForceSpawnRandomIncidentName(const FString& IncidentName) {
}

void UPalCheatManager::SetForceLocationTeleport(bool bForceLocationTeleport) {
}

void UPalCheatManager::SetDisableInteractReticleTarget(bool bIsEnable) {
}

void UPalCheatManager::SetDebugRespawnPointForPlayer(APalPlayerCharacter* Character, FVector Location) {
}

void UPalCheatManager::SetDebugFullStomachDecreaseRate(const float Rate) {
}

void UPalCheatManager::SetDamageTextMaxNum(int32 Num) {
}

void UPalCheatManager::SetCharacterName(const FString& Name) {
}

void UPalCheatManager::SetCharacterMakeColor(FColor Color) {
}

void UPalCheatManager::SetCharacterMakeAllRed() {
}

void UPalCheatManager::SetCharacterMakeAllNormal() {
}

void UPalCheatManager::SetCharacterMakeAllMin() {
}

void UPalCheatManager::SetCharacterMakeAllMax() {
}

void UPalCheatManager::SetCharacterMakeAllGreen() {
}

void UPalCheatManager::SetCharacterMakeAllBlue() {
}

void UPalCheatManager::SetBaseCampWorkerHpSingle(const float Percentage) {
}

void UPalCheatManager::SetBaseCampWorkerHp(const float Percentage) {
}

void UPalCheatManager::SetAlwaysGrantPassiveSkillMode(bool Flag) {
}

void UPalCheatManager::SetAllowBaseCampBattle(const bool bAllowBaseCampBattle) {
}

void UPalCheatManager::SetActivity(const FString& ConnStr, int32 maxPlayer, int32 currentPlayer) {
}

void UPalCheatManager::SendChatToBroadcast(const FString& Text) {
}

void UPalCheatManager::SaikyoGamePreset() {
}

void UPalCheatManager::RideIKEnable() {
}

void UPalCheatManager::RideIKDisable() {
}

void UPalCheatManager::RespawnPlayer() {
}

void UPalCheatManager::ResetOilrig() {
}

void UPalCheatManager::RerollCharacterMake() {
}

void UPalCheatManager::RequestLogTreasureBoxLocalPlayerAround() {
}

void UPalCheatManager::RequestLogServerThreadNum() {
}

void UPalCheatManager::RequestFillSlotChestToInventory() {
}

void UPalCheatManager::RequestFillSlotChestFromInventory() {
}

void UPalCheatManager::RepairEquipment() {
}

void UPalCheatManager::RemovePlayerSkin(EPalSkinType Part, FName InTarget) {
}

void UPalCheatManager::RandomizePassive_PlayerWeapon() {
}

void UPalCheatManager::PrintRealTime() {
}

void UPalCheatManager::PrintRandomizerInfo() {
}

void UPalCheatManager::PrintPlatformInventory() {
}

void UPalCheatManager::PrintInventoryDynamicItemLog() {
}

void UPalCheatManager::PrintGameTime() {
}

void UPalCheatManager::Ping(const FString& Address) {
}

void UPalCheatManager::ParallelForUpdateActiveTiles() {
}

void UPalCheatManager::PalmiTargetEnemny() {
}

void UPalCheatManager::OrderBaseCampWorker(const EPalMapBaseCampWorkerOrderType OrderType) {
}


void UPalCheatManager::OpenTitle() {
}


void UPalCheatManager::OpenPrivateServer() {
}


void UPalCheatManager::OpenMultiBattleMap() {
}

void UPalCheatManager::OpenDefaultMap() {
}

void UPalCheatManager::OnPingComplete(UPingIP* PingIP, const FString& Address, int32 TimeMS) {
}

void UPalCheatManager::NotDecreaseWeaponItem() {
}

void UPalCheatManager::NotDecreaseDefenseBullet() {
}

void UPalCheatManager::NotConsumeMaterialsInCraft() {
}

void UPalCheatManager::NotConsumeMaterialsInBuild() {
}

void UPalCheatManager::MutekiForPlayer() {
}

void UPalCheatManager::MutekiForFriend() {
}

void UPalCheatManager::MutekiALL() {
}

void UPalCheatManager::ManyUNKO() {
}

void UPalCheatManager::LoginNative() {
}

void UPalCheatManager::LoginEOS() {
}

void UPalCheatManager::LogBaseCampInfo() {
}

void UPalCheatManager::KillPlayer() {
}

void UPalCheatManager::KillGuildFriend() {
}

void UPalCheatManager::KillBaseCampWorkerSingle() {
}

void UPalCheatManager::KillBaseCampWorker() {
}

void UPalCheatManager::KillAllFriend() {
}

void UPalCheatManager::KillAllEnemy() {
}

void UPalCheatManager::KickPlayer(const FString& UserId, FText KickReason) {
}

void UPalCheatManager::JumpToClientStartLocation() {
}

void UPalCheatManager::JoinInviteCode(const FString& InviteCode) const {
}

void UPalCheatManager::JoinClientPlayerToServerGuild() {
}

bool UPalCheatManager::IsSkillCoolTime() const {
    return false;
}

bool UPalCheatManager::IsShowCharacterStatus() const {
    return false;
}

bool UPalCheatManager::IsNotDecreaseWeaponItem() const {
    return false;
}

bool UPalCheatManager::IsNotDecreaseDefenseBullet() const {
    return false;
}

bool UPalCheatManager::IsNotConsumeMaterialsInBuild() const {
    return false;
}

bool UPalCheatManager::IsMutekiForPlayer() const {
    return false;
}

bool UPalCheatManager::IsMutekiForFriend() const {
    return false;
}

bool UPalCheatManager::IsMutekiALL() const {
    return false;
}

bool UPalCheatManager::IsIgnoreBuildRestrictionBaseCamp() const {
    return false;
}

bool UPalCheatManager::IsFixedSP() const {
    return false;
}

bool UPalCheatManager::IsDisableEnemyEyeSight() const {
    return false;
}

bool UPalCheatManager::IsCaptureSuccessAlways() const {
    return false;
}

bool UPalCheatManager::IsCaptureFailAlways() const {
    return false;
}

void UPalCheatManager::IsAllStreamingCompleted() {
}

bool UPalCheatManager::IsActionName() const {
    return false;
}

void UPalCheatManager::InvokePlayerAction(const EPalActionType ActionType) {
}

void UPalCheatManager::InvaderMarchRandom() {
}

void UPalCheatManager::InvaderMarch() {
}

void UPalCheatManager::InstallVirtualBaseCamp() {
}

void UPalCheatManager::InsightsTraceStopForServer() {
}

void UPalCheatManager::InsightsTraceStopForLocal() {
}

void UPalCheatManager::InsightsTraceStartForServer() {
}

void UPalCheatManager::InsightsTraceStartForLocal() {
}

void UPalCheatManager::InitInventory(const FName StaticItemId, const int32 Count) {
}

void UPalCheatManager::IgnoreRestrictedByItemsForPartnerSkill() {
}

void UPalCheatManager::IgnoreDamageCheckByServer() {
}

void UPalCheatManager::IgnoreBuildRestrictionBaseCamp() {
}

void UPalCheatManager::HPOneAllCharacter() {
}


void UPalCheatManager::HideTutorialQuest() {
}

void UPalCheatManager::HideDebugInfo() {
}

void UPalCheatManager::GivePlayerSkin(FName SkinName) {
}

void UPalCheatManager::GivePlatformPromotionItem() {
}

void UPalCheatManager::GivePlatformInventoryItem(int32 ItemId, int32 Num) {
}

void UPalCheatManager::GetRelic(int32 Count) {
}

void UPalCheatManager::GetPlanerPal() {
}

void UPalCheatManager::GetPalEgg(const FName CharacterID) {
}

void UPalCheatManager::GetItemWithPassiveSkill(FName StaticItemId, int32 Count, FName PassiveSkillId) {
}

void UPalCheatManager::GetItemWithPassive(FName StaticItemId, int32 Count) {
}

void UPalCheatManager::GetItemToLoadoutWithPassive(FName StaticItemId, int32 Count) {
}

void UPalCheatManager::GetItemToLoadout(FName StaticItemId, int32 Count) {
}

void UPalCheatManager::GetItem(FName StaticItemId, int32 Count) {
}

void UPalCheatManager::GenerateCombiMonster() {
}

void UPalCheatManager::FullPowerForPlayer() {
}

void UPalCheatManager::ForceUpdateBaseCampWorkerEvent() {
}

void UPalCheatManager::ForceSpawnRarePal() {
}

void UPalCheatManager::ForceReportCriminal() {
}

void UPalCheatManager::ForceReloadPlayerParameter() {
}

void UPalCheatManager::ForceReleaseWanted() {
}

void UPalCheatManager::ForceLowerSpecSetting() {
}

void UPalCheatManager::ForceExitStageAllPlayer() {
}

void UPalCheatManager::ForceExitStage() {
}

void UPalCheatManager::ForceDisableTimerLight() {
}

void UPalCheatManager::ForceDisablePalMeshCollision() {
}

void UPalCheatManager::ForceArenaExitAll() {
}

void UPalCheatManager::FootIKEnable() {
}

void UPalCheatManager::FootIKDisable() {
}

void UPalCheatManager::FixedUseEagleForGlider() {
}

void UPalCheatManager::FixedSP() {
}

void UPalCheatManager::FixedActionRandomSeed() {
}

void UPalCheatManager::FetchMapObjectsTickIntervalInBackground() {
}

void UPalCheatManager::ExitGuildPlayer(const FString& GuildName, APalPlayerCharacter* Player) {
}

void UPalCheatManager::ExitGuildLocalPlayer(const FString& GuildName) {
}

void UPalCheatManager::EnterGuildPlayer(const FString& GuildName, APalPlayerCharacter* Player) {
}

void UPalCheatManager::EnterGuildOtherPlayerBelongTo(const FGuid& TargetPlayerUId) {
}

void UPalCheatManager::EnterGuildLocalPlayer(const FString& GuildName) {
}

void UPalCheatManager::EnterGroup(const FString& GroupName, FPalInstanceID IndividualId) {
}

void UPalCheatManager::EnableStatUnit() {
}

void UPalCheatManager::EnableStatPlayerInfo() {
}

void UPalCheatManager::EnableStatPalnet() {
}

void UPalCheatManager::EnableStatPalNavigation() {
}

void UPalCheatManager::EnableCommandToServer() {
}

void UPalCheatManager::EnableCollectServerPalCount() {
}

void UPalCheatManager::EasyGamePreset() {
}

void UPalCheatManager::DumpMapObjectOctreeStats() {
}

void UPalCheatManager::DropSupply() {
}

void UPalCheatManager::DropItems(const FName StaticItemId, const int32 Num, const int32 DropCount) {
}

void UPalCheatManager::DropItemByTimer(const FName StaticItemId, const int32 Num, const float Interval) {
}

void UPalCheatManager::DropItem(const FName StaticItemId, const int32 Num) {
}

void UPalCheatManager::DrawDebugRangeBaseCamp(const float LifeTime) {
}

void UPalCheatManager::DrawDebugLimitVolume(const EPalLimitVolumeFlag Flag, const float Range, const float Duration) {
}

void UPalCheatManager::DisposeGuild(const FString& GuildName) {
}

void UPalCheatManager::DismantleBaseCampFirst() {
}

void UPalCheatManager::DismantleBaseCampByBaseCampId(const FGuid& BaseCampId) {
}

void UPalCheatManager::DisableScreenMessage() {
}

void UPalCheatManager::DisableEnemyEyeSight() {
}

void UPalCheatManager::DeleteWorldAndShutdownRemoteServer() {
}

void UPalCheatManager::DeletePlayerSkin(FName SkinName) {
}

void UPalCheatManager::DeletePlayerAndQuitGame() {
}

void UPalCheatManager::DeleteAllMapObjectSpawner() {
}

void UPalCheatManager::DeleteAllMapObject() {
}

void UPalCheatManager::DebugWindow() {
}

void UPalCheatManager::DebugSaveWorldOptionData(const FString& WorldName) {
}

void UPalCheatManager::DebugSaveWorldData(const FString& saveName) {
}

void UPalCheatManager::DebugSaveLocalWorldData(const FString& saveName) {
}

void UPalCheatManager::DebugSaveFullWorldData(const FString& WorldName) {
}

void UPalCheatManager::DebugDeleteEnemyCampSaveData() {
}

void UPalCheatManager::DebugChangeAutoSaveTimespan(float saveSpan) {
}

void UPalCheatManager::DebugAutoSave() {
}

void UPalCheatManager::DebugAutoRun() {
}

void UPalCheatManager::CreateGuildWithAdmin(const FString& GuildName, const FGuid& AdminPlayerUId) {
}

void UPalCheatManager::CreateGuildAndEnterLocalPlayer(const FString& GuildName) {
}

void UPalCheatManager::CreateGuild(const FString& GuildName) {
}

void UPalCheatManager::CountPalCharacter() {
}

void UPalCheatManager::CopyWorldDirectoryName() {
}

void UPalCheatManager::CopyPlayerUId() {
}

void UPalCheatManager::CopyPlayerLocation() {
}

void UPalCheatManager::ConsumePlatformInventoryItem(int32 ItemId, int32 Num) {
}

void UPalCheatManager::CommandToServer(const FString& Command) {
}

void UPalCheatManager::CleatDebugInfoText() {
}

void UPalCheatManager::ClearSupply() {
}

void UPalCheatManager::ClearPlatformInventoryItem() {
}

void UPalCheatManager::CheckFoliageChunkStatus(const bool bShowInstanceDetail, const bool bShowGridDetail) {
}

void UPalCheatManager::ChangePassive_PlayerWeapon(int32 Index, FName SkillName) {
}

void UPalCheatManager::ChangeMaxPlayers(int32 Players) {
}

void UPalCheatManager::ChangeHUDScale(float Scale) {
}

void UPalCheatManager::CauseServerCrash() {
}

void UPalCheatManager::CauseEnsure() {
}

void UPalCheatManager::CauseCrash() {
}

void UPalCheatManager::CaptureSuccessAlways() {
}

void UPalCheatManager::CaptureNewMonster(const FName CharacterID) {
}

void UPalCheatManager::CaptureFailAlways() {
}

void UPalCheatManager::CaptureAllMonsters() {
}

void UPalCheatManager::CaptureAllEnemy() {
}

void UPalCheatManager::CancelPlayerAction(const EPalActionType ActionType) {
}

void UPalCheatManager::BuildNotConsumeMaterials() {
}

void UPalCheatManager::BuildDebugBaseCamp(FName Mode) {
}

void UPalCheatManager::BotOn() {
}

void UPalCheatManager::BotOff() {
}

void UPalCheatManager::BanPlayerFromGuildLocalPlayerBelongTo(const FGuid& TargetPlayerUId) {
}

void UPalCheatManager::ApplyDebugGameProgress(FName PresetName) {
}

void UPalCheatManager::AddTechnologyPoints(int32 AddPoints) {
}

void UPalCheatManager::AddPlayerExp(int32 addExp) {
}

void UPalCheatManager::AddPartyExp(int32 addExp) {
}

void UPalCheatManager::AddOneStatusPlayer() {
}

void UPalCheatManager::AddOneStatusOtomo() {
}

void UPalCheatManager::AddOneStatusEnemy() {
}

void UPalCheatManager::AddMoney(int64 addValue) {
}

void UPalCheatManager::AddMapObjectEffectVisualAround_Burn(const float Range) {
}

void UPalCheatManager::AddMapObjectEffectVisualAround(const float Range, const EPalMapObjectVisualEffectType EffectType) {
}

void UPalCheatManager::AddGameTime_Minutes(const int32 Minutes) {
}

void UPalCheatManager::AddGameTime_Hours(const int32 Hours) {
}

void UPalCheatManager::AddExStatusPoint(int32 Point) {
}

void UPalCheatManager::AddExpForALLPlayer(int32 addExp) {
}

void UPalCheatManager::AddBossTechnologyPoints(int32 AddPoints) {
}

void UPalCheatManager::AddBaseCampEnergyAmount(const EPalEnergyType EnergyType, const float Amount) {
}


