#pragma once
#include "CoreMinimal.h"
#include "PalGuildLabRequestDebugParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalGuildLabRequestDebugParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotConsumeMaterials;
    
    PAL_API FPalGuildLabRequestDebugParameter();
};

