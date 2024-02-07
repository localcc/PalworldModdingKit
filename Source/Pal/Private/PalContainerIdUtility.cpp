#include "PalContainerIdUtility.h"

UPalContainerIdUtility::UPalContainerIdUtility() {
}

FPalContainerId UPalContainerIdUtility::NoneContainerId() {
    return FPalContainerId{};
}

bool UPalContainerIdUtility::IsNoneContainerId(const FPalContainerId& ContainerId) {
    return false;
}

bool UPalContainerIdUtility::BP_NotEqual(const FPalContainerId& A, const FPalContainerId& B) {
    return false;
}

bool UPalContainerIdUtility::BP_Equal(const FPalContainerId& A, const FPalContainerId& B) {
    return false;
}


