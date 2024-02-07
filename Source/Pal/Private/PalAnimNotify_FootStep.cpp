#include "PalAnimNotify_FootStep.h"

UPalAnimNotify_FootStep::UPalAnimNotify_FootStep() {
    this->EffectAssetCache = NULL;
}

void UPalAnimNotify_FootStep::SpawnFootStepEffect(UObject* WorldObject, EPalLandingType LandingType, TEnumAsByte<EPhysicalSurface> PhysicalSurface, const FVector& Location, const FRotator& Rotation, UPalStaticCharacterParameterComponent* StaticParam) const {
}

void UPalAnimNotify_FootStep::SpawnFootStepDecal(AActor* Owner, TEnumAsByte<EPhysicalSurface> PhysicalSurface, EPalFootType FootType, FVector Location, FVector CurrentNormal, float LifeSpan, float FadeTime) const {
}

bool UPalAnimNotify_FootStep::GetFloorPosition(AActor* Owner, FTransform FootTransform, FHitResult& HitResult) const {
    return false;
}


