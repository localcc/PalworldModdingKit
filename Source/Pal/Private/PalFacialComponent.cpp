#include "PalFacialComponent.h"

UPalFacialComponent::UPalFacialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnableEyeBlink = true;
    this->MainModule = NULL;
}

void UPalFacialComponent::SetUpTestMesh(USkeletalMeshComponent* SkeletalMeshComponent) {
}

void UPalFacialComponent::SetDisableNotify(bool Disable) {
}

void UPalFacialComponent::SetDefaultLayer(EPalFacialEyeType Eye) {
}

bool UPalFacialComponent::ExistFacialNotifyInMontage(UAnimMontage* Montage) {
    return false;
}

bool UPalFacialComponent::ExistEyeNotifyInMontage(UAnimMontage* Montage) {
    return false;
}

void UPalFacialComponent::ChangeMouth_ForMontageNotify(EPalFacialMouthType Mouth) {
}

void UPalFacialComponent::ChangeEyeAndMouthMesh(EPalFacialEyeType Eye) {
}

void UPalFacialComponent::ChangeEye_ForMontageNotify(EPalFacialEyeType Eye) {
}

void UPalFacialComponent::ChangeDefaultFacial() {
}

void UPalFacialComponent::Blink() {
}


