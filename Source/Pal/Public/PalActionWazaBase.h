#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalActionBase.h"
#include "PalActionWazaBase.generated.h"

class APalPlayerCharacter;
class UAkAudioEvent;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class PAL_API UPalActionWazaBase : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSoundPlayer* SoundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFullStomachCost;
    
public:
    UPalActionWazaBase();
    UFUNCTION(BlueprintCallable)
    void StopAkSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalWazaID GetWazaID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalPlayerCharacter* GetRiderPlayer();
    
};

