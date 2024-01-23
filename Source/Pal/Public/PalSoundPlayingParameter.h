#pragma once
#include "CoreMinimal.h"
#include "PalSoundOptions.h"
#include "PalSoundPlayingParameter.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPalSoundPlayingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalSoundOptions Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAbsolutely;
    
    PAL_API FPalSoundPlayingParameter();
};

