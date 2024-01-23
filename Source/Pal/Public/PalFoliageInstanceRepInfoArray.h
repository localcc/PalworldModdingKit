#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalFoliageInstanceRepInfo.h"
#include "PalFoliageInstanceRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageInstanceRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalFoliageInstanceRepInfo> Items;
    
    PAL_API FPalFoliageInstanceRepInfoArray();
};

