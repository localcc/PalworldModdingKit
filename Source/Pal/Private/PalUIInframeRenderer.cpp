#include "PalUIInframeRenderer.h"
#include "Templates/SubclassOf.h"

UPalStaticCharacterParameterComponent* APalUIInframeRenderer::GetStaticParameteComponentFromActorClassr(const TSubclassOf<AActor>& TargetActorClass) {
    return NULL;
}

USkeletalMeshComponent* APalUIInframeRenderer::GetSkeletalMeshComponentFromActorClass(const TSubclassOf<AActor>& TargetActorClass) {
    return NULL;
}

void APalUIInframeRenderer::ClearOverrideMaterials(USkeletalMeshComponent* TargetSkeletalMesh) {
}

APalUIInframeRenderer::APalUIInframeRenderer() {
}

