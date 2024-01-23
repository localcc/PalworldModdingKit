#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampPassiveEffectRepInfo.h"
#include "PalFastBaseCampPassiveEffectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampPassiveEffectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampPassiveEffectRepInfo> Items;
    
    PAL_API FPalFastBaseCampPassiveEffectRepInfoArray();
};

