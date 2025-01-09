#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerPlatformInfo.h"
#include "FastPlayerPlatformInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPlayerPlatformInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPlayerPlatformInfo> Items;
    
    PAL_API FFastPlayerPlatformInfoArray();
};

