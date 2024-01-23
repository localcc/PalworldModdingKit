#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampPassiveEffectRepInfo.generated.h"

class UPalBaseCampPassiveEffectBase;

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveEffectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampPassiveEffectBase* Effect;
    
    PAL_API FPalBaseCampPassiveEffectRepInfo();
};

