#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalLabResearchEffectRepInfo.h"
#include "PalFastLabResearchEffectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastLabResearchEffectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalLabResearchEffectRepInfo> Items;
    
    PAL_API FPalFastLabResearchEffectRepInfoArray();
};

