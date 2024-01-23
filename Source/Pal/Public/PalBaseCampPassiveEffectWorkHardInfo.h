#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampPassiveEffectWorkHardInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveEffectWorkHardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AffectSanityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseFullStomachRate;
    
    PAL_API FPalBaseCampPassiveEffectWorkHardInfo();
};

