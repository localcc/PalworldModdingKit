#pragma once
#include "CoreMinimal.h"
#include "PalMissileLauncherTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMissileLauncherTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InRangeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSentWarningSign;
    
    PAL_API FPalMissileLauncherTargetInfo();
};

