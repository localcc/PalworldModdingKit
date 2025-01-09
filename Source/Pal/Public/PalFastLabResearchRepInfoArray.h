#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalLabResearchRepInfo.h"
#include "PalFastLabResearchRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastLabResearchRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalLabResearchRepInfo> Items;
    
    PAL_API FPalFastLabResearchRepInfoArray();
};

