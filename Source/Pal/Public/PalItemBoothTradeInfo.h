#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalItemAndNum.h"
#include "PalItemBoothTradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemBoothTradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemAndNum Product;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemAndNum Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SellerPlayerUId;
    
    PAL_API FPalItemBoothTradeInfo();
};

