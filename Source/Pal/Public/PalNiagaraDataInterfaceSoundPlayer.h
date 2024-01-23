#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "PalNiagaraDataInterfaceSoundPlayer.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalNiagaraDataInterfaceSoundPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPalNiagaraDataInterfaceSoundPlayer();
};

