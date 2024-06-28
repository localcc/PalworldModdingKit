#include "PalPlayerUtility.h"

UPalPlayerUtility::UPalPlayerUtility() {
}

void UPalPlayerUtility::WritePlayerGrappling(FPalNetArchive& Blackboard, const FVector& HitLocatoin, const float& Speed, const FVector& HitNormal, const float& CoolTimeRate) {
}

void UPalPlayerUtility::WritePlayerFeedItemTo(FPalNetArchive& Blackboard, const FPalItemSlotId& itemSlotId, const int32& itemNum) {
}

void UPalPlayerUtility::ReadPlayerGrappling(const FPalNetArchive& Blackboard, FVector& HitLocatoin, float& Speed, FVector& HitNormal, float& CoolTimeRate) {
}

void UPalPlayerUtility::ReadPlayerFeedItemTo(const FPalNetArchive& Blackboard, FPalItemSlotId& itemSlotId, int32& itemNum) {
}


