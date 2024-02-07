#include "PalUIDisplayCharacter.h"
#include "Components/SceneComponent.h"
#include "PalSkeletalMeshComponent.h"

APalUIDisplayCharacter::APalUIDisplayCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PalSkeletalMeshComponent = CreateDefaultSubobject<UPalSkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->PalSkeletalMeshComponent->SetupAttachment(DefaultSceneRoot);
}

void APalUIDisplayCharacter::GetHairBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor) {
}

void APalUIDisplayCharacter::GetEyeBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor) {
}

void APalUIDisplayCharacter::GetBrowBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor) {
}

void APalUIDisplayCharacter::GetBodyBaseColor(UPalSkeletalMeshComponent* TargetSkeletalMesh, FLinearColor& OutColor) {
}

void APalUIDisplayCharacter::ApplyCharacterMakeInfoFromPlayerData() {
}

void APalUIDisplayCharacter::ApplyCharacterMakeInfo(const FPalPlayerDataCharacterMakeInfo& MakeInfo) {
}


