#pragma once
#include "CoreMinimal.h"
#include "PalSoundOptions.generated.h"

USTRUCT(BlueprintType)
struct FPalSoundOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeInTime;
    
    PAL_API FPalSoundOptions();
};

