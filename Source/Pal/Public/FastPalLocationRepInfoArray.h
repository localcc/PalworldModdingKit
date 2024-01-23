#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalLocationRepInfo.h"
#include "FastPalLocationRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPalLocationRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalLocationRepInfo> Items;
    
    PAL_API FFastPalLocationRepInfoArray();
};

