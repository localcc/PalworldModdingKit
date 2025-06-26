#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerTreasureMapPointRepInfo.h"
#include "PalFastPlayerTreasureMapPointRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastPlayerTreasureMapPointRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPlayerTreasureMapPointRepInfo> Items;
    
    PAL_API FPalFastPlayerTreasureMapPointRepInfoArray();
};

