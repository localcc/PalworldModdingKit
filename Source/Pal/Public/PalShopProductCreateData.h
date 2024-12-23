#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalItemShopCreateDataStruct.h"
#include "PalItemShopSettingDataRow.h"
#include "PalShopProductCreateData.generated.h"

USTRUCT(BlueprintType)
struct FPalShopProductCreateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemShopSettingDataRow ItemShopSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemShopCreateDataStruct ItemShopCreateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter SaveParameter;
    
    PAL_API FPalShopProductCreateData();
};

