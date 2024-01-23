#pragma once
#include "CoreMinimal.h"
#include "PalInteractiveObjectActionInfoData.h"
#include "PalInteractiveObjectActionInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FPalInteractiveObjectActionInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInteractiveObjectActionInfoData Interact1_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInteractiveObjectActionInfoData Interact2_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInteractiveObjectActionInfoData Interact3_Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInteractiveObjectActionInfoData Interact4_Indicator;
    
    PAL_API FPalInteractiveObjectActionInfoSet();
};

