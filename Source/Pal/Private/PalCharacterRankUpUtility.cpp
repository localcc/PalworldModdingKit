#include "PalCharacterRankUpUtility.h"

UPalCharacterRankUpUtility::UPalCharacterRankUpUtility() {
}

void UPalCharacterRankUpUtility::SimulateRankUpCharacterByHandle(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* Target, const TArray<UPalIndividualCharacterHandle*>& Resources, int32& OutToRank, int32& OutToRankUpExp) {
}

void UPalCharacterRankUpUtility::SimulateRankUpCharacter(const UObject* WorldContextObject, const FPalInstanceID& TargetId, const TArray<FPalInstanceID>& ResourceIds, int32& OutToRank, int32& OutToRankUpExp) {
}

int32 UPalCharacterRankUpUtility::GetRequiredInitRankCharacterNum(const UObject* WorldContextObject, const int32 Rank) {
    return 0;
}


