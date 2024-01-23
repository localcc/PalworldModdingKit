#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalLocationUIData.generated.h"

class UPalUICompassIconBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLocationUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUICompassIconBase> compassIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float displayLength;
    
    PAL_API FPalLocationUIData();
};

