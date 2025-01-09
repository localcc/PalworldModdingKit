#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerPlatformInfo.generated.h"

class UPalPlayerPlatformInfoObject;

USTRUCT(BlueprintType)
struct FPalPlayerPlatformInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerPlatformInfoObject* Data;
    
    PAL_API FPalPlayerPlatformInfo();
};

