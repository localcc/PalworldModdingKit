#pragma once
#include "CoreMinimal.h"
#include "EPalEnemySpawnActorType.h"
#include "SpawnedEnemyInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnedEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalEnemySpawnActorType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    PAL_API FSpawnedEnemyInfo();
};

