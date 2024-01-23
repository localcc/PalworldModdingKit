#pragma once
#include "CoreMinimal.h"
#include "EPalAudioFadeType.h"
#include "PalAudioFadeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalAudioFadeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAudioFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentVolume;
    
    PAL_API FPalAudioFadeParameter();
};

