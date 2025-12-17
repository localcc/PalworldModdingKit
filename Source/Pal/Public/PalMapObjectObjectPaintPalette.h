#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectObjectPaintPalette.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalMapObjectObjectPaintPalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> CustomColors;
    
    FPalMapObjectObjectPaintPalette();
};

