#include "PalArenaSoloNPCSpawner.h"

APalArenaSoloNPCSpawner::APalArenaSoloNPCSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void APalArenaSoloNPCSpawner::OnSpawnedAll() {
}

void APalArenaSoloNPCSpawner::OnSpawned(const UPalIndividualCharacterHandle* IndividualHandle) {
}

int32 APalArenaSoloNPCSpawner::GetOtomoNum() const {
    return 0;
}



bool APalArenaSoloNPCSpawner::GetInitializedOtomoSaveParameter(int32 Index, FPalIndividualCharacterSaveParameter& outParameter) {
    return false;
}

bool APalArenaSoloNPCSpawner::GetInitializedNPCSaveParameter(FPalIndividualCharacterSaveParameter& outParameter) {
    return false;
}

bool APalArenaSoloNPCSpawner::GetInitializedCharacterSaveParemter(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, int32 TalentLevel, const TArray<EPalWazaID>& WazaList, const TArray<FPalDataTableRowName_PassiveSkillData>& PassiveSkillList, int32 Rank, const TArray<FPalCharacterStatusRank>& ArenaStatusRank, int32 FriendshipRank) {
    return false;
}


