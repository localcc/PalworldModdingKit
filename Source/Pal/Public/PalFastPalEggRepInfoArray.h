#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalEggRepInfo.h"
#include "PalFastPalEggRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastPalEggRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalEggRepInfo> Items;
    
    PAL_API FPalFastPalEggRepInfoArray();
};

