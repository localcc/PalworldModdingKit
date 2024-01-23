#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalStageModelRepInfo.h"
#include "PalFastStageModelRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastStageModelRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalStageModelRepInfo> Items;
    
    PAL_API FPalFastStageModelRepInfoArray();
};

