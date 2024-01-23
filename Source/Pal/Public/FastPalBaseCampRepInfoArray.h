#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampRepInfo.h"
#include "FastPalBaseCampRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPalBaseCampRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampRepInfo> Items;
    
    PAL_API FFastPalBaseCampRepInfoArray();
};

