#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWazaBulletEmiiterOverlapSphere.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaBulletEmiiterOverlapSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    PAL_API FPalWazaBulletEmiiterOverlapSphere();
};

