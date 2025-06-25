#include "PalAILeashActorBase.h"
#include "Components/SceneComponent.h"
#include "PalNavigationInvokerComponent.h"

APalAILeashActorBase::APalAILeashActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->LeashInnerRadius = 4000.00f;
    this->LeashOuterRadius = 5000.00f;
    this->InvokerExtentRadius = 500.00f;
    this->bAutoActivateLeash = false;
    this->LeashState = EPalLeashState::Inactive;
    this->NavigationInvoker = CreateDefaultSubobject<UPalNavigationInvokerComponent>(TEXT("NavigationInvoker"));
}

void APalAILeashActorBase::SetLeashLocation(const FVector& NewLeashLocation) {
}

bool APalAILeashActorBase::IsActiveLeash() const {
    return false;
}

void APalAILeashActorBase::DeactivateLeash() {
}

void APalAILeashActorBase::ActivateLeash() {
}


