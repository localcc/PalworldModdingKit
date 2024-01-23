#include "PalNavigationInvokerComponent.h"

void UPalNavigationInvokerComponent::SetDisableInvorkerFlag(FName flagName, bool isDisable) {
}

bool UPalNavigationInvokerComponent::IsDisableInvorker() const {
    return false;
}

void UPalNavigationInvokerComponent::ActivateInvoker() {
}

UPalNavigationInvokerComponent::UPalNavigationInvokerComponent() {
    this->bIsAutoActivateInvoker = false;
    this->bIsWaitWorldPartition = true;
}

