#include "PalWorkUtility.h"

UPalWorkUtility::UPalWorkUtility() {
}

bool UPalWorkUtility::BP_TryGetWorkLocation(const UPalWorkBase* Target, FVector& OutLocation) {
    return false;
}

FVector UPalWorkUtility::BP_GetWorkLocation(const UPalWorkBase* Target) {
    return FVector{};
}


