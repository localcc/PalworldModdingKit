#pragma once
#include "CoreMinimal.h"
#include "TargetAbleInfoForEnemy.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTargetAbleInfoForEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DuplicateNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThreatLevel_OnlyCharacterParam;
    
    PAL_API FTargetAbleInfoForEnemy();
};

