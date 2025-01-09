#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShooterSpringCameraParameter.generated.h"

USTRUCT(BlueprintType)
struct FShooterSpringCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndCameraInterpTime;
    
    PAL_API FShooterSpringCameraParameter();
};

