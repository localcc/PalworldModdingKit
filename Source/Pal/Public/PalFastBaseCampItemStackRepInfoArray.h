#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampItemStackRepInfo.h"
#include "PalFastBaseCampItemStackRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampItemStackRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampItemStackRepInfo> Items;
    
    PAL_API FPalFastBaseCampItemStackRepInfoArray();
};

