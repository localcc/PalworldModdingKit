#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalGuildPlayerInfoRepInfo.h"
#include "PalFastGuildPlayerInfoRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastGuildPlayerInfoRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalGuildPlayerInfoRepInfo> Items;
    
    PAL_API FPalFastGuildPlayerInfoRepInfoArray();
};

