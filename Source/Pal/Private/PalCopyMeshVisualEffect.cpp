#include "PalCopyMeshVisualEffect.h"
#include "Components/CapsuleComponent.h"
#include "PalPoseableMeshComponent.h"

void APalCopyMeshVisualEffect::Setup(USkeletalMeshComponent* MeshComponent) {
}

TArray<UMaterialInstanceDynamic*> APalCopyMeshVisualEffect::GetMainMeshMaterials() const {
    return TArray<UMaterialInstanceDynamic*>();
}

USkinnedMeshComponent* APalCopyMeshVisualEffect::GetMainMesh() const {
    return NULL;
}

void APalCopyMeshVisualEffect::GetAllMesh(TArray<USceneComponent*>& OutComponent) const {
}

APalCopyMeshVisualEffect::APalCopyMeshVisualEffect() {
    this->RootCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootCapsule"));
    this->PoseableSkeletalMeshComponent = CreateDefaultSubobject<UPalPoseableMeshComponent>(TEXT("PoseableMeshComponent"));
}

