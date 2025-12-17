#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalArenaWorldRankingRepInfo.h"
#include "PalFastArenaWorldRankingRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastArenaWorldRankingRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaWorldRankingRepInfo> Items;
    
    PAL_API FPalFastArenaWorldRankingRepInfoArray();
};

