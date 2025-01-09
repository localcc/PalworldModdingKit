#include "PalUIInframeRenderer.h"
#include "Templates/SubclassOf.h"

APalUIInframeRenderer::APalUIInframeRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool APalUIInframeRenderer::IsSpiderPal(const TSubclassOf<AActor>& TargetActorClass) const {
    return false;
}

UPalStaticCharacterParameterComponent* APalUIInframeRenderer::GetStaticParameteComponentFromActorClassr(const TSubclassOf<AActor>& TargetActorClass) {
    return NULL;
}

USkeletalMeshComponent* APalUIInframeRenderer::GetSkeletalMeshComponentFromActorClass(const TSubclassOf<AActor>& TargetActorClass) {
    return NULL;
}

void APalUIInframeRenderer::ClearOverrideMaterials(USkeletalMeshComponent* TargetSkeletalMesh) {
}


