#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalSphere.generated.h"

USTRUCT(BlueprintType)
struct FPalSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bXY;
    
    PAL_API FPalSphere();
};

