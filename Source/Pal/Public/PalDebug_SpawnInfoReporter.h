#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalDebug_SpawnInfoReporter.generated.h"

class APalNPCSpawnerBase;

UCLASS(Blueprintable)
class APalDebug_SpawnInfoReporter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalNPCSpawnerBase*> CacheSpawner;
    
public:
    APalDebug_SpawnInfoReporter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDebugInfoString(APalNPCSpawnerBase* spawner);
    
};

