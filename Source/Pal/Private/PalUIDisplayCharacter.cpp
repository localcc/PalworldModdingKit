#include "PalUIDisplayCharacter.h"
#include "Components/SceneComponent.h"
#include "PalSkeletalMeshComponent.h"

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

APalUIDisplayCharacter::APalUIDisplayCharacter() {
    this->DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PalSkeletalMeshComponent = CreateDefaultSubobject<UPalSkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

