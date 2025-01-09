#pragma once
#include "CoreMinimal.h"
#include "PalDataLayerRuntimeSetting.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalDataLayerRuntimeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRuntimeUnload;
    
    PAL_API FPalDataLayerRuntimeSetting();
};

