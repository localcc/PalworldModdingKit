#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalPlayerTreasureMapPointDataItem.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerTreasureMapPointDataItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rarity;
    
    PAL_API FPalPlayerTreasureMapPointDataItem();
};

