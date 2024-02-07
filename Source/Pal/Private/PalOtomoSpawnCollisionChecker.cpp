#include "PalOtomoSpawnCollisionChecker.h"

UPalOtomoSpawnCollisionChecker::UPalOtomoSpawnCollisionChecker() {
}

FTransform UPalOtomoSpawnCollisionChecker::GetTransform_WhenSpawnPalNearTrainer(AActor* Trainer) {
    return FTransform{};
}

FVector UPalOtomoSpawnCollisionChecker::GetLocation_WhenSpawnPalSphgereThrow(FHitResult Hit, APawn* CurrentSelectPalActor) {
    return FVector{};
}


