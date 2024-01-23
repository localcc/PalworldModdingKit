#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalDynamicItemSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDynamicItemId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    PAL_API FPalDynamicItemSaveData();
};

