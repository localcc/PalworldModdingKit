#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalInstanceID.h"
#include "PalItemAndNum.h"
#include "PalPalBoothTradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPalBoothTradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID PalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemAndNum Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SellerPlayerUId;
    
    PAL_API FPalPalBoothTradeInfo();
};

