#include "PalAnimNotifyState_AttackCollision.h"

UPalAnimNotifyState_AttackCollision::UPalAnimNotifyState_AttackCollision() {
    this->bIsEnableHitStop = false;
    this->OverrideHitStopTime = 0.20f;
    this->AttackFilter = NULL;
    this->bImmediateUpdateOverlaps = false;
    this->ShapeComponent = NULL;
}

void UPalAnimNotifyState_AttackCollision::OnHit(UPrimitiveComponent* MyHitComponent, AActor* HitActor, UPrimitiveComponent* HitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount) const {
}


