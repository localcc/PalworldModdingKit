#include "PalPoseableMeshComponent.h"

UPalPoseableMeshComponent::UPalPoseableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalPoseableMeshComponent::SetBoneTransformByName(FName BoneName, const FTransform& InTransform, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPalPoseableMeshComponent::SetBoneScaleByName(FName BoneName, FVector InScale3D, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPalPoseableMeshComponent::SetBoneRotationByName(FName BoneName, FRotator InRotation, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPalPoseableMeshComponent::SetBoneLocationByName(FName BoneName, FVector InLocation, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPalPoseableMeshComponent::ResetBoneTransformByName(FName BoneName) {
}

FTransform UPalPoseableMeshComponent::GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FTransform{};
}

FVector UPalPoseableMeshComponent::GetBoneScaleByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FVector{};
}

FRotator UPalPoseableMeshComponent::GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FRotator{};
}

FVector UPalPoseableMeshComponent::GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FVector{};
}

void UPalPoseableMeshComponent::CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy) {
}


