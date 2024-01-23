#pragma once
#include "CoreMinimal.h"
#include "EPalUIRewardDisplayType.h"
#include "PalUICommonRewardDisplayData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalUICommonRewardDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SoftTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalUIRewardDisplayType DisplayType;
    
    PAL_API FPalUICommonRewardDisplayData();
};

