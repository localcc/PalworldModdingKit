#pragma once
#include "CoreMinimal.h"
#include "CollisionLimitBase.h"
#include "CapsuleLimit.generated.h"

USTRUCT(BlueprintType)
struct FCapsuleLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    KAWAIIPHYSICS_API FCapsuleLimit();
};

