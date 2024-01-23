#pragma once
#include "CoreMinimal.h"
#include "PalAmbientSoundAreaData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPalAmbientSoundAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbientPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> DayAmbientEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> NightAmbientEvents;
    
    PAL_API FPalAmbientSoundAreaData();
};

