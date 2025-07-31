#include "PalCopyMeshVisualEffect.h"
#include "Components/CapsuleComponent.h"
#include "PalPoseableMeshComponent.h"

APalCopyMeshVisualEffect::APalCopyMeshVisualEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootCapsule"));
    this->RootCapsule = (UCapsuleComponent*)RootComponent;
    this->PoseableSkeletalMeshComponent = CreateDefaultSubobject<UPalPoseableMeshComponent>(TEXT("PoseableMeshComponent"));
    this->PoseableSkeletalMeshRideNPCComponent = NULL;
    this->PoseableSkeletalMeshComponent->SetupAttachment(RootComponent);
}

void APalCopyMeshVisualEffect::SetupMonsterRideNPCMesh(USkeletalMeshComponent* MeshComponent) {
}

void APalCopyMeshVisualEffect::SetupMainMesh(USkeletalMeshComponent* MeshComponent) {
}

TArray<UMaterialInstanceDynamic*> APalCopyMeshVisualEffect::GetMainMeshMaterials() const {
    return TArray<UMaterialInstanceDynamic*>();
}

USkinnedMeshComponent* APalCopyMeshVisualEffect::GetMainMesh() const {
    return NULL;
}

void APalCopyMeshVisualEffect::GetAllMesh(TArray<USceneComponent*>& OutComponent) const {
}


