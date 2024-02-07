#include "PalLawUtility.h"

UPalLawUtility::UPalLawUtility() {
}

bool UPalLawUtility::IsEqualsGroupIndividualIdAndSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot) {
    return false;
}

bool UPalLawUtility::ExistOtherGroupFromSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot, FGuid& OutGroupId) {
    return false;
}


