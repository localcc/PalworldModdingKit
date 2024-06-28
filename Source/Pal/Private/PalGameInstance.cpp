#include "PalGameInstance.h"
#include "PalActionDummyTargetManager.h"
#include "PalAssetStreamableManager.h"
#include "PalAudioSettingSystem.h"
#include "PalBaseCampManager.h"
#include "PalCharacterContainerManager.h"
#include "PalCharacterImportanceManager.h"
#include "PalCharacterManager.h"
#include "PalCoopSkillSearchSystem.h"
#include "PalDamagePopUpManager.h"
#include "PalDataTableRowIdMapper.h"
#include "PalDatabaseCharacterParameter.h"
#include "PalDeadBodyManager.h"
#include "PalDeathPenaltyManager.h"
#include "PalEventNotifySystem.h"
#include "PalExpDatabase.h"
#include "PalGameSetting.h"
#include "PalHUDService.h"
#include "PalItemContainerManager.h"
#include "PalLocationManager.h"
#include "PalLogManager.h"
#include "PalMapObjectManager.h"
#include "PalMasterDataTables.h"
#include "PalNPCManager.h"
#include "PalObjectCollector.h"
#include "PalPassiveSkillManager.h"
#include "PalPersistentSoundPlayer.h"
#include "PalPlayerDataStorage.h"
#include "PalPlayerManager.h"
#include "PalSaveGameManager.h"
#include "PalShopManager.h"
#include "PalSkinManager.h"
#include "PalSupplyManager.h"
#include "PalTutorialManager.h"
#include "PalVisualEffectDataBase.h"
#include "PalWazaDatabase.h"
#include "PalWorkProgressManager.h"
#include "PalWorldSecuritySystem.h"

UPalGameInstance::UPalGameInstance() {
    this->bNetworkError = false;
    this->bSaveError = false;
    this->GameSettingClass = UPalGameSetting::StaticClass();
    this->GameSetting = NULL;
    this->MasterDataTablesClass = UPalMasterDataTables::StaticClass();
    this->MasterDataTables = NULL;
    this->MapObjectManagerClass = UPalMapObjectManager::StaticClass();
    this->GroupManagerClass = NULL;
    this->CharacterManagerClass = UPalCharacterManager::StaticClass();
    this->CharacterContainerManagerClass = UPalCharacterContainerManager::StaticClass();
    this->CharacterContainerManager = NULL;
    this->BaseCampManagerClass = UPalBaseCampManager::StaticClass();
    this->WorkProgressManagerClass = UPalWorkProgressManager::StaticClass();
    this->DamagePopUpManagerClass = UPalDamagePopUpManager::StaticClass();
    this->DamagePopUpManager = NULL;
    this->ItemContainerManagerClass = UPalItemContainerManager::StaticClass();
    this->ItemIDManagerClass = UPalItemContainerManager::StaticClass();
    this->ItemIDManager = NULL;
    this->WazaDatabaseClass = UPalWazaDatabase::StaticClass();
    this->WazaDatabase = NULL;
    this->BattleManagerClass = NULL;
    this->BossBattleManagerClass = NULL;
    this->RaidBossManagerClass = NULL;
    this->OilrigManagerClass = NULL;
    this->PlayerDataStorageClass = UPalPlayerDataStorage::StaticClass();
    this->PlayerDataStorage = NULL;
    this->HUDServiceClass = UPalHUDService::StaticClass();
    this->HUDService = NULL;
    this->ExpDatabaseClass = UPalExpDatabase::StaticClass();
    this->ExpDatabase = NULL;
    this->DatabaseCharacterParameterClass = UPalDatabaseCharacterParameter::StaticClass();
    this->DatabaseCharacterParameter = NULL;
    this->AssetStreamableManagerClass = UPalAssetStreamableManager::StaticClass();
    this->AssetStreamableManager = NULL;
    this->PassiveSkillManagerClass = UPalPassiveSkillManager::StaticClass();
    this->PassiveSkillManager = NULL;
    this->DataTableRowIdMapperClass = UPalDataTableRowIdMapper::StaticClass();
    this->DataTableRowIdMapper = NULL;
    this->DeadBodyManagerClass = UPalDeadBodyManager::StaticClass();
    this->DeadBodyManager = NULL;
    this->BulletCreatorClass = NULL;
    this->BulletCreator = NULL;
    this->PlayerManagerClass = UPalPlayerManager::StaticClass();
    this->SaveGameManagerClass = UPalSaveGameManager::StaticClass();
    this->SaveGameManager = NULL;
    this->VisualEffectDataBaseClass = UPalVisualEffectDataBase::StaticClass();
    this->VisualEffectDataBase = NULL;
    this->EventNotifySystemClass = UPalEventNotifySystem::StaticClass();
    this->WorldSecuritySystemClass = UPalWorldSecuritySystem::StaticClass();
    this->LocationManagerClass = UPalLocationManager::StaticClass();
    this->NPCManagerClass = UPalNPCManager::StaticClass();
    this->NPCManager = NULL;
    this->DeathPenaltyManagerClass = UPalDeathPenaltyManager::StaticClass();
    this->DeathPenaltyManager = NULL;
    this->CoopSkillSearchSystemClass = UPalCoopSkillSearchSystem::StaticClass();
    this->CoopSkillSearchSystem = NULL;
    this->CharacterImportanceManagerClass = UPalCharacterImportanceManager::StaticClass();
    this->CharacterImportanceManager = NULL;
    this->AudioSettingClass = UPalAudioSettingSystem::StaticClass();
    this->AudioSettingSystem = NULL;
    this->CharacterParameterStorageSubsystemClass = NULL;
    this->TutorialManagerClass = UPalTutorialManager::StaticClass();
    this->ObjectCollectorClass = UPalObjectCollector::StaticClass();
    this->ActionDummyTargetManager = UPalActionDummyTargetManager::StaticClass();
    this->LogManagerClass = UPalLogManager::StaticClass();
    this->SkinManagerClass = UPalSkinManager::StaticClass();
    this->SkinManager = NULL;
    this->SupplyManagerClass = UPalSupplyManager::StaticClass();
    this->ShopManagerSubsystemClass = UPalShopManager::StaticClass();
    this->revisionNum = 55394;
    this->DisplaySafeAreaDebugger = NULL;
    this->TitleBGMPlayerClass = UPalPersistentSoundPlayer::StaticClass();
    this->TitleBGMPlayer = NULL;
    this->bIsNewGame = false;
}

void UPalGameInstance::ShowUIMultiplayRestriction(bool bOverrideChecking) {
}



void UPalGameInstance::SetNewWorldName(const FString& WorldName) {
}

void UPalGameInstance::SetIsNewGame() {
}

bool UPalGameInstance::SelectWorldSaveDirectoryName(const FString& WorldSaveDirectoryName) {
    return false;
}

bool UPalGameInstance::SelectWorld(const FString& WorldName) {
    return false;
}


void UPalGameInstance::OnInitializeCompleteSystem() {
}

void UPalGameInstance::OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type) {
}

void UPalGameInstance::OnCompletedFindSessions(bool bIsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr) {
}


bool UPalGameInstance::IsPlayFromTitle() {
    return false;
}

bool UPalGameInstance::IsNewGame() const {
    return false;
}

void UPalGameInstance::GoToDefaultMap() {
}

FString UPalGameInstance::GetSelectedWorldSaveDirectoryName() const {
    return TEXT("");
}

FString UPalGameInstance::GetSelectedWorldName() const {
    return TEXT("");
}

void UPalGameInstance::CompleteInitCharacterMakeData() {
}

void UPalGameInstance::ClearSaveError() {
}

void UPalGameInstance::ClearNetworkError() {
}

void UPalGameInstance::CheckInvite() {
}

void UPalGameInstance::ApplicationHasReactivated() {
}

void UPalGameInstance::ApplicationHasEnteredForeground() {
}


