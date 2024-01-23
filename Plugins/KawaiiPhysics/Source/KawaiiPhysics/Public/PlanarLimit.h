#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionLimitBase.h"
#include "PlanarLimit.generated.h"

USTRUCT(BlueprintType)
struct FPlanarLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlane Plane;
    
    KAWAIIPHYSICS_API FPlanarLimit();
};

