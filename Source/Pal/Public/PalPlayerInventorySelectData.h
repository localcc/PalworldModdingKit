#pragma once
#include "CoreMinimal.h"
#include "PalPlayerInventorySelectData.generated.h"

class UPalItemContainer;

USTRUCT(BlueprintType)
struct FPalPlayerInventorySelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowSelectedContainerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalItemContainer* targetItemContainer;
    
    PAL_API FPalPlayerInventorySelectData();
};

