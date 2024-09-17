#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalBaseCampItemStackInfo.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalBaseCampItemStackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* DynamicItemData;
    
    PAL_API FPalBaseCampItemStackInfo();
};

