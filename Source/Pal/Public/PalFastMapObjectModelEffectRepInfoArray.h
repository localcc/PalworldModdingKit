#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalMapObjectModelEffectRepInfo.h"
#include "PalFastMapObjectModelEffectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastMapObjectModelEffectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectModelEffectRepInfo> Items;
    
    PAL_API FPalFastMapObjectModelEffectRepInfoArray();
};

