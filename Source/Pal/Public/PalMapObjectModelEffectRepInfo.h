#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "EPalStatusID.h"
#include "PalMapObjectModelEffectRepInfo.generated.h"

class UPalMapObjectModelEffectBase;

USTRUCT(BlueprintType)
struct FPalMapObjectModelEffectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalStatusID StatusId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectModelEffectBase* Effect;
    
    PAL_API FPalMapObjectModelEffectRepInfo();
};

