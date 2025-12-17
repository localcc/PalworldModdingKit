#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStaticCharacterInfo_LeanParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_LeanParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RotLimit;
    
    PAL_API FPalStaticCharacterInfo_LeanParameter();
};

