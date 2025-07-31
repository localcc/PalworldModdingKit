#include "PalArenaUtility.h"

UPalArenaUtility::UPalArenaUtility() {
}

bool UPalArenaUtility::IsServerOwnerType(EPalArenaSequencerOwnerType OwnerType) {
    return false;
}

bool UPalArenaUtility::IsRestrictedPal(const FPalArenaRule& Rule, UPalIndividualCharacterParameter* IndividualParameter) {
    return false;
}

bool UPalArenaUtility::IsPlayerOwnerType(EPalArenaSequencerOwnerType OwnerType) {
    return false;
}

FText UPalArenaUtility::GetWorldRankingRecordCharacterNameText(const UObject* WorldContextObject, const FPalArenaWorldRankingRecord& Record) {
    return FText::GetEmpty();
}

EPalArenaRank UPalArenaUtility::GetReleasedSoloRank(const APalPlayerCharacter* PlayerCharacter) {
    return EPalArenaRank::Bronze;
}

void UPalArenaUtility::GetLocalPlayerArenaRankingInfo(const UObject* WorldContextObject) {
}

EPalArenaRank UPalArenaUtility::GetArenaRank(const UObject* WorldContextObject, int32 ArenaRankPoint) {
    return EPalArenaRank::Bronze;
}


