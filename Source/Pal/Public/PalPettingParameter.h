#pragma once
#include "CoreMinimal.h"
#include "PalPettingParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPettingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraCenterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraArmLength;
    
    PAL_API FPalPettingParameter();
};

