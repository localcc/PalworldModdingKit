#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalMapObjectOperationResult.h"
#include "PalRandomIncidentMapObjectSpawner.generated.h"

UCLASS(Blueprintable)
class PAL_API APalRandomIncidentMapObjectSpawner : public AActor {
    GENERATED_BODY()
public:
    APalRandomIncidentMapObjectSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnEgg(const FName MonsterId, const FVector& SpawnOffset);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDropItem(FName ItemId, int32 DropNum, const FVector& SpawnOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningEgg(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningDropItem(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};

