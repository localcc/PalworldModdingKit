#pragma once
#include "CoreMinimal.h"
#include "EPalShopProductCostType.h"
#include "FixedPoint64.h"
#include "PalShopProductCostValue.generated.h"

USTRUCT(BlueprintType)
struct FPalShopProductCostValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalShopProductCostType CostType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedPoint64 CostValue;
    
    PAL_API FPalShopProductCostValue();
};

