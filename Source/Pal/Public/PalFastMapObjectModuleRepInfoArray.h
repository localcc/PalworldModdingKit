#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalMapObjectModuleRepInfo.h"
#include "PalFastMapObjectModuleRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastMapObjectModuleRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectModuleRepInfo> Items;
    
    PAL_API FPalFastMapObjectModuleRepInfoArray();
};

