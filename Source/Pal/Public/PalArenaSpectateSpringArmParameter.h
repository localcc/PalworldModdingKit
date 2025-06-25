#pragma once
#include "CoreMinimal.h"
#include "PalArenaSpectateSpringArmParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaSpectateSpringArmParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCameraLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCameraRotationLag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRotationLagSpeed;
    
    PAL_API FPalArenaSpectateSpringArmParameter();
};

