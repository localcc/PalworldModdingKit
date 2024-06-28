#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectConvertCharacterToItemProcessItem.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectConvertCharacterToItemProcessItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConvertProgressRate;
    
    PAL_API FPalMapObjectConvertCharacterToItemProcessItem();
};

