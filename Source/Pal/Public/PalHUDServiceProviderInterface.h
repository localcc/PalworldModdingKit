#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalHUDServiceProviderInterface.generated.h"

class UAkAudioEvent;
class UPalSoundPlayer;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalHUDServiceProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IPalHUDServiceProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void PlayAkSound(UAkAudioEvent* AkEvent) PURE_VIRTUAL(PlayAkSound,);
    
    UFUNCTION(BlueprintCallable)
    virtual UPalSoundPlayer* GetSoundPlayer() PURE_VIRTUAL(GetSoundPlayer, return NULL;);
    
};

