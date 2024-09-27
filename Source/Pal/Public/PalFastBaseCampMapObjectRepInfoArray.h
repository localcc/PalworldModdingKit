#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampMapObjectRepInfo.h"
#include "PalFastBaseCampMapObjectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampMapObjectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampMapObjectRepInfo> Items;
    
    PAL_API FPalFastBaseCampMapObjectRepInfoArray();
};

