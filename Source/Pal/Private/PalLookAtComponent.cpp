#include "PalLookAtComponent.h"
#include "Net/UnrealNetwork.h"

UPalLookAtComponent::UPalLookAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookAtTargetActor = NULL;
    this->LookAtInInterpTime = 0.25f;
    this->LookAtOutInterpTime = 0.25f;
    this->bIsEnableLookAt = false;
    this->InterpolatedSpeed = 20.00f;
    this->bIsShowDebugImage = false;
}

void UPalLookAtComponent::StopLookAt(float interpTime) {
}

void UPalLookAtComponent::StartLookAtForActor(AActor* Actor, FName BoneName, float interpTime) {
}

void UPalLookAtComponent::StartLookAt(FVector LookAtTarget, float interpTime) {
}

void UPalLookAtComponent::SetLookAtDisable(FName flagName, bool bIsDisable) {
}

void UPalLookAtComponent::OnChangeShootState(bool IsAim, bool IsShooting) {
}

bool UPalLookAtComponent::IsEnableLookAt() const {
    return false;
}

FVector UPalLookAtComponent::GetLookAtTarget() const {
    return FVector{};
}

float UPalLookAtComponent::GetLookAtOutInterpTime() const {
    return 0.0f;
}

float UPalLookAtComponent::GetLookAtInInterpTime() const {
    return 0.0f;
}

void UPalLookAtComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLookAtComponent, LookAtTargetLocation);
    DOREPLIFETIME(UPalLookAtComponent, LookAtTargetActor);
    DOREPLIFETIME(UPalLookAtComponent, bIsEnableLookAt);
}


