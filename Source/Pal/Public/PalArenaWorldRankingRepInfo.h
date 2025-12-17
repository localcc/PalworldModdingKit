#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalArenaWorldRankingRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaWorldRankingRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaWorldRankingRecord Record;
    
    PAL_API FPalArenaWorldRankingRepInfo();
};

