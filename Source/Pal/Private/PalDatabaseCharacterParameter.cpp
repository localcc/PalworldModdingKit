#include "PalDatabaseCharacterParameter.h"

UPalDatabaseCharacterParameter::UPalDatabaseCharacterParameter() {
    this->PettingPressetClass = NULL;
    this->PlayerParameterDataTable = NULL;
    this->MonsterParameterDataTable = NULL;
    this->HumanParameterDataTable = NULL;
    this->DropItemDataTable = NULL;
    this->MonsterNameDataTable = NULL;
    this->HumanNameDataTable = NULL;
    this->CharacterIconDataTable = NULL;
    this->CharacterSkinIconDataTable = NULL;
    this->BPClassDataTable = NULL;
    this->PartnerSkillDataTable = NULL;
    this->PalSizeParameterDataTable = NULL;
    this->PalCapturedCageDataTable = NULL;
    this->PalStatusEffectFoodDataTable = NULL;
    this->PalGainStatusPointsItemDataTable = NULL;
    this->PalCombiUniqueDataTable = NULL;
    this->PalTalentUpItemDataTable = NULL;
    this->NPCOtomoWazaDataTable = NULL;
    this->PettingPressetInstance = NULL;
    this->CombiMonsterParameter = NULL;
}

void UPalDatabaseCharacterParameter::UpdateApplyDatabaseToIndividualParameter(UPalIndividualCharacterParameter* IndividualParameter) {
}

bool UPalDatabaseCharacterParameter::SetupSaveParameter(const FName CharacterID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter) {
    return false;
}

int32 UPalDatabaseCharacterParameter::HigherLevelOtomoFromTrainer(const UPalIndividualCharacterParameter* IndividualCharacterParameter) const {
    return 0;
}

void UPalDatabaseCharacterParameter::GetWorkSuitabilityRank(FName RowName, TMap<EPalWorkSuitability, int32>& WorkSuitabilities) {
}

void UPalDatabaseCharacterParameter::GetWorkSuitabilityMaterialSubTypes(FName RowName, TArray<EPalMapObjectMaterialSubType>& MaterialSubTypes) {
}

void UPalDatabaseCharacterParameter::GetWorkSuitability(FName RowName, TArray<EPalWorkSuitability>& WorkSuitabilities) {
}

EPalWeaponType UPalDatabaseCharacterParameter::GetWeaponType(FName RowName) {
    return EPalWeaponType::None;
}

bool UPalDatabaseCharacterParameter::GetWeaponEquip(FName RowName) {
    return false;
}

int32 UPalDatabaseCharacterParameter::GetViewingDistance_cm(FName RowName) {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetViewingAngle_Degree(FName RowName) {
    return 0;
}

bool UPalDatabaseCharacterParameter::GetUseBossHPGauge(FName RowName) {
    return false;
}

EPalTribeID UPalDatabaseCharacterParameter::GetTribe(FName RowName) {
    return EPalTribeID::None;
}

int32 UPalDatabaseCharacterParameter::GetSupportBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetSupport(UPalIndividualCharacterParameter* IndividualParameter) {
    return 0;
}

EPalSizeType UPalDatabaseCharacterParameter::GetSize(FName RowName) {
    return EPalSizeType::None;
}

int32 UPalDatabaseCharacterParameter::GetShotAttackBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetShotAttack(const UPalIndividualCharacterParameter* IndividualParameter) const {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetRarity(FName RowName) {
    return 0;
}

float UPalDatabaseCharacterParameter::GetPriceRate(FName RowName) {
    return 0.0f;
}

void UPalDatabaseCharacterParameter::GetPrefixNameMsgID(const FName& CharacterID, FName& OutMsgID) {
}

UPalPettingPresset* UPalDatabaseCharacterParameter::GetPettingPreset() {
    return NULL;
}

void UPalDatabaseCharacterParameter::GetPassiveSkill(FName RowName, TArray<FName>& PassiveSkill) {
}

void UPalDatabaseCharacterParameter::GetPartnerSkillMsgID(const FName& CharacterID, FName& OutMsgID) {
}

EPalOrganizationType UPalDatabaseCharacterParameter::GetOrganizationType(FName RowName) {
    return EPalOrganizationType::None;
}

bool UPalDatabaseCharacterParameter::GetNocturnal(FName RowName) {
    return false;
}

int32 UPalDatabaseCharacterParameter::GetMeleeAttackBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetMeleeAttack(UPalIndividualCharacterParameter* IndividualParameter) {
    return 0;
}

void UPalDatabaseCharacterParameter::GetLocalizedCharacterName(const FName& CharacterID, FText& OutText) {
}

bool UPalDatabaseCharacterParameter::GetIsTowerBoss(FName RowName) {
    return false;
}

bool UPalDatabaseCharacterParameter::GetIsRaidBoss(FName RowName) {
    return false;
}

bool UPalDatabaseCharacterParameter::GetIsPal(FName RowName) {
    return false;
}

bool UPalDatabaseCharacterParameter::GetIsBoss(FName RowName) {
    return false;
}

int32 UPalDatabaseCharacterParameter::GetHPBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) const {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetHP(const UPalIndividualCharacterParameter* IndividualParameter) const {
    return 0;
}

float UPalDatabaseCharacterParameter::GetHearingRate(FName RowName) {
    return 0.0f;
}

EPalGenusCategoryType UPalDatabaseCharacterParameter::GetGenusCategory(FName RowName) {
    return EPalGenusCategoryType::None;
}

int32 UPalDatabaseCharacterParameter::GetFoodAmount(FName RowName) {
    return 0;
}

float UPalDatabaseCharacterParameter::GetExpRatio(FName RowName) {
    return 0.0f;
}

void UPalDatabaseCharacterParameter::GetElementType(FName RowName, EPalElementType& Element1, EPalElementType& Element2) {
}

bool UPalDatabaseCharacterParameter::GetDropItemData(const FName& CharacterID, const int32 Level, FPalDropItemDatabaseRow& OutData) {
    return false;
}

int32 UPalDatabaseCharacterParameter::GetDefenseBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetDefense(const UPalIndividualCharacterParameter* IndividualParameter) {
    return 0;
}

TArray<FPalWorkSuitabilityInfo> UPalDatabaseCharacterParameter::GetCraftSpeeds(UPalIndividualCharacterParameter* IndividualParameter) {
    return TArray<FPalWorkSuitabilityInfo>();
}

int32 UPalDatabaseCharacterParameter::GetCraftSpeedBySaveParameter(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalDatabaseCharacterParameter::GetCraftSpeed(UPalIndividualCharacterParameter* IndividualParameter) {
    return 0;
}

FSoftObjectPath UPalDatabaseCharacterParameter::GetCharacterIconTexturePath(const FName CharacterID) const {
    return FSoftObjectPath{};
}

TSoftObjectPtr<UTexture2D> UPalDatabaseCharacterParameter::GetCharacterIconTextureBySkinName(const FName& SkinName) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UPalDatabaseCharacterParameter::GetCharacterIconTextureByIndividualHandle(const UPalIndividualCharacterHandle* IndividualHandle) const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UPalDatabaseCharacterParameter::GetCharacterIconTexture(const FName CharacterID) const {
    return NULL;
}

float UPalDatabaseCharacterParameter::GetCaptureRateCorrect(FName RowName) {
    return 0.0f;
}

FName UPalDatabaseCharacterParameter::GetBPClassName(FName RowName) {
    return NAME_None;
}

TSoftClassPtr<APalCharacter> UPalDatabaseCharacterParameter::GetBPClass(FName RowName) {
    return NULL;
}

EPalBattleBGMType UPalDatabaseCharacterParameter::GetBattleBGM(FName RowName) {
    return EPalBattleBGMType::None;
}

bool UPalDatabaseCharacterParameter::FindTalentUpItem(FName ItemName, FPalTalentUpItemDataRow& OutData) const {
    return false;
}

bool UPalDatabaseCharacterParameter::FindPalSizeParameter(EPalSizeType CharacterSize, FPalSizeParameterDataRow& RowData) const {
    return false;
}

int32 UPalDatabaseCharacterParameter::CalcCorrectedLevel(const int32 TrainerLevel, const int32 TargetCharacterLevel, const UObject* WorldContextObject) const {
    return 0;
}


