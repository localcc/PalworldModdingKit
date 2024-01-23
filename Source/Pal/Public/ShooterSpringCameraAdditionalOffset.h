#pragma once
#include "CoreMinimal.h"
#include "ShooterSpringCameraParameter.h"
#include "ShooterSpringCameraAdditionalOffset.generated.h"

USTRUCT(BlueprintType)
struct FShooterSpringCameraAdditionalOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName flagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShooterSpringCameraParameter CameraOffset;
    
    PAL_API FShooterSpringCameraAdditionalOffset();
};

