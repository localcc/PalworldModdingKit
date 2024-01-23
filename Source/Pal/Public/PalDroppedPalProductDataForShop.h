#pragma once
#include "CoreMinimal.h"
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalDroppedPalProductDataForShop.generated.h"

USTRUCT(BlueprintType)
struct FPalDroppedPalProductDataForShop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterStoredParameterId StoredParameterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    PAL_API FPalDroppedPalProductDataForShop();
};

