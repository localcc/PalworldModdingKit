#include "PalBuildObjectOverlapChecker.h"

void UPalBuildObjectOverlapChecker::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalBuildObjectOverlapChecker::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPalBuildObjectOverlapChecker::UPalBuildObjectOverlapChecker() {
    this->Collision = NULL;
    this->Owner = NULL;
    this->OverlappedActor = NULL;
}

