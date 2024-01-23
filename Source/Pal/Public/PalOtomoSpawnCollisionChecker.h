#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "PalOtomoSpawnCollisionChecker.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class PAL_API UPalOtomoSpawnCollisionChecker : public UObject {
    GENERATED_BODY()
public:
    UPalOtomoSpawnCollisionChecker();
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform_WhenSpawnPalNearTrainer(AActor* Trainer);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocation_WhenSpawnPalSphgereThrow(FHitResult Hit, APawn* CurrentSelectPalActor);
    
};

