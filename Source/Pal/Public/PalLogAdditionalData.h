#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "PalStaticItemIdAndNum.h"
#include "Templates/SubclassOf.h"
#include "PalLogAdditionalData.generated.h"

class UPalLogWidgetBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLogAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> softTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalLogContentToneType logToneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultFontStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalLogWidgetBase> overrideWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticItemIdAndNum ItemIDAndNum;
    
    PAL_API FPalLogAdditionalData();
};

