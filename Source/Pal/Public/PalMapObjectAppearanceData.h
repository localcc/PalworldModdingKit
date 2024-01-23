#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalMapObjectAppearanceData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectAppearanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime DateTime;
    
    PAL_API FPalMapObjectAppearanceData();
};

