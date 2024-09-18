#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalActorClassSpawnerInClientBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalActorClassSpawnerInClientBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
public:
    APalActorClassSpawnerInClientBase(const FObjectInitializer& ObjectInitializer);

};

