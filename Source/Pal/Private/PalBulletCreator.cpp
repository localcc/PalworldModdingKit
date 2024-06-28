#include "PalBulletCreator.h"
#include "Templates/SubclassOf.h"

UPalBulletCreator::UPalBulletCreator() {
}

APalBullet* UPalBulletCreator::SpawnBullet(const UObject* WorldContextObject, TSubclassOf<APalBullet> BulletClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, AActor* Owner, APawn* instigato) {
    return NULL;
}



