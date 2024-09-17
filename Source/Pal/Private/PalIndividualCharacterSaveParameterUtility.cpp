#include "PalIndividualCharacterSaveParameterUtility.h"

UPalIndividualCharacterSaveParameterUtility::UPalIndividualCharacterSaveParameterUtility() {
}

bool UPalIndividualCharacterSaveParameterUtility::IsValid(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return false;
}

FPalWorkSuitabilityPreferenceInfo UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_WorkSuitabilityOptionInfo(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return FPalWorkSuitabilityPreferenceInfo{};
}

EPalBaseCampWorkerSickType UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_WorkerSick(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return EPalBaseCampWorkerSickType::None;
}

FName UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_UniqueNPCID(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return NAME_None;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Talent_Shot(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Talent_HP(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Talent_Defense(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Support(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

FName UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_SkinName(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return NAME_None;
}

float UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_SanityValue(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0.0f;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_RankUpExp(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Rank_HP(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Rank_Defence(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Rank_CraftSpeed(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Rank_Attack(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Rank(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

EPalStatusPhysicalHealthType UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_PhysicalHealth(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return EPalStatusPhysicalHealthType::Healthful;
}

TArray<FName> UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_PassiveSkillList(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return TArray<FName>();
}

FGuid UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_OwnerPlayerUId(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return FGuid{};
}

TArray<FGuid> UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_OldOwnerPlayerUIds(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return TArray<FGuid>();
}

FString UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_NickName(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return TEXT("");
}

FFixedPoint64 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_MaxHP(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return FFixedPoint64{};
}

float UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_MaxFullStomach(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0.0f;
}

TArray<EPalWazaID> UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_MasteredWaza(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return TArray<EPalWazaID>();
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Level(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

bool UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_IsRarePal(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return false;
}

bool UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_IsPlayer(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return false;
}

bool UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_IsFavoritePal(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return false;
}

EPalStatusHungerType UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_HungerType(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return EPalStatusHungerType::Default;
}

FFixedPoint64 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_HP(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return FFixedPoint64{};
}

EPalGenderType UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Gender(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return EPalGenderType::None;
}

float UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_FullStomach(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0.0f;
}

int64 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_Exp(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

TArray<EPalWazaID> UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_EquipWaza(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return TArray<EPalWazaID>();
}

int32 UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_CraftSpeed(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return 0;
}

FName UPalIndividualCharacterSaveParameterUtility::GetSaveParameterValue_CharacterID(const FPalIndividualCharacterSaveParameter& SaveParameter) {
    return NAME_None;
}


