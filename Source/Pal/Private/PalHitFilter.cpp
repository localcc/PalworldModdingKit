#include "PalHitFilter.h"

UPalHitFilter::UPalHitFilter() {
    this->MaxHitNum = 1;
    this->HitInterval = 0.00f;
    this->HitLocationCalculator = NULL;
    this->bIsIntersectionCollision = false;
    this->IntersectionNum = 0;
}

void UPalHitFilter::UnbindPrimitiveComponent(UPrimitiveComponent* Component) {
}

void UPalHitFilter::SetIntersectionNum(int32 Num) {
}

void UPalHitFilter::SetAttacker(AActor* Attacker) {
}

void UPalHitFilter::ResetFilter() {
}

void UPalHitFilter::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalHitFilter::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void UPalHitFilter::BindPrimitiveComponent(UPrimitiveComponent* Component) {
}


