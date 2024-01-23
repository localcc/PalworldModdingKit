#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
#include "CollisionLimitBase.h"
#include "SphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FSphericalLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimit();
};

