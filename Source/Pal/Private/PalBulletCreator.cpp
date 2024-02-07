#include "PalBulletCreator.h"
#include "Templates/SubclassOf.h"

UPalBulletCreator::UPalBulletCreator() {
}

APalBullet* UPalBulletCreator::SpawnBullet(const UObject* WorldContextObject, TSubclassOf<APalBullet> bulletClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, AActor* Owner, APawn* instigato) {
    return NULL;
}



