#include "PalNavigationInvokerComponent.h"

UPalNavigationInvokerComponent::UPalNavigationInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->bIsAutoActivateInvoker = false;
    this->bIsWaitWorldPartition = true;
}

void UPalNavigationInvokerComponent::SetDisableInvorkerFlag(FName flagName, bool isDisable) {
}

bool UPalNavigationInvokerComponent::IsDisableInvorker() const {
    return false;
}

void UPalNavigationInvokerComponent::ActivateInvoker() {
}


