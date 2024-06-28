#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "PalBulletCreator.generated.h"

class AActor;
class APalBullet;
class APalWeaponBase;
class APawn;

UCLASS(Blueprintable)
class PAL_API UPalBulletCreator : public UObject {
    GENERATED_BODY()
public:
    UPalBulletCreator();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    APalBullet* SpawnBullet(const UObject* WorldContextObject, TSubclassOf<APalBullet> BulletClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, AActor* Owner, APawn* instigato);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    APalBullet* CreateBullet(const UObject* WorldContextObject, APalWeaponBase* Weapon, TSubclassOf<APalBullet> BulletClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod collisionHandlingOverride, AActor* Owner, APawn* Instigator);
    
};

