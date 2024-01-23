#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalArrowSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalArrowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    PAL_API FPalArrowSettings();
};

