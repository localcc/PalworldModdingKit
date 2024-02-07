#include "PalPlayerUtility.h"

UPalPlayerUtility::UPalPlayerUtility() {
}

void UPalPlayerUtility::WritePlayerGrappling(FPalNetArchive& Blackboard, const FVector& HitLocatoin, const FVector& MoveEndLocation, const float& Speed) {
}

void UPalPlayerUtility::WritePlayerFeedItemTo(FPalNetArchive& Blackboard, const FPalItemSlotId& itemSlotId, const int32& itemNum) {
}

void UPalPlayerUtility::ReadPlayerGrappling(const FPalNetArchive& Blackboard, FVector& HitLocatoin, FVector& MoveEndLocation, float& Speed) {
}

void UPalPlayerUtility::ReadPlayerFeedItemTo(const FPalNetArchive& Blackboard, FPalItemSlotId& itemSlotId, int32& itemNum) {
}


