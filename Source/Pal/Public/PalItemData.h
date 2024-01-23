#pragma once
#include "CoreMinimal.h"
#include "PalItemData.generated.h"

class UPalDynamicItemDataBase;
class UPalStaticItemDataBase;

USTRUCT(BlueprintType)
struct FPalItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataBase* StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* DynamicData;
    
    PAL_API FPalItemData();
};

