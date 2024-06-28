#pragma once
#include "CoreMinimal.h"
#include "AkGameplayStatics.h"
#include "UObject/NoExportTypes.h"
#include "EPalAudioRTPC.h"
#include "EPalAudioState.h"
#include "EPalAudioStateGroup.h"
#include "EPalAudioTrigger.h"
#include "PalSoundOptions.h"
#include "PalWorldSubsystem.h"
#include "PalAudioWorldSubsystem.generated.h"

class AActor;
class AController;
class APalAmbientSoundAreaBase;
class APalPlayerCharacter;
class APalSpotAreaBase;
class APawn;
class UAkAudioEvent;
class UAkCallbackInfo;
class UPalBaseCampModel;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class PAL_API UPalAudioWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSoundPlayer* SoundPlayer;
    
public:
    UPalAudioWorldSubsystem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetStateFlagByName(FName StateGroup, bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetStateFlagByEnum(EPalAudioStateGroup StateGroup, bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetStateByName(FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable)
    void SetStateByEnum(EPalAudioStateGroup StateGroup, EPalAudioState State);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundPlayerLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValueByName(const FName& Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValueByEnum(EPalAudioRTPC RTPC, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputBusVolume(float Volume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDsiableBattleBGM(bool bIsDisable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostTriggerByString(const FString& Trigger);
    
    UFUNCTION(BlueprintCallable)
    void PostTriggerByEnum(EPalAudioTrigger Trigger);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(UAkAudioEvent* AudioEvent, const FPalSoundOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedLocalPlayerCharacter(APawn* Pawn, AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerExitSpotArea(APalPlayerCharacter* Player, APalSpotAreaBase* SpotArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerExitBaseCamp(APalPlayerCharacter* Player, UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerExitAmbientArea(APalPlayerCharacter* Player, APalAmbientSoundAreaBase* AmbientSoundArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnterSpotArea(APalPlayerCharacter* Player, APalSpotAreaBase* SpotArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnterBaseCamp(APalPlayerCharacter* Player, UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnterAmbientArea(APalPlayerCharacter* Player, APalAmbientSoundAreaBase* AmbientSoundArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndOfEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeSystem(AActor* AkOwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSoundPlayerLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutByPlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlay();
    
};

