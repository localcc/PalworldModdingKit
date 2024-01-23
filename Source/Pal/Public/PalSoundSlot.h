#pragma once
#include "CoreMinimal.h"
#include "AkGameplayStatics.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PalDataTableRowName_SoundID.h"
#include "PalSoundOptions.h"
#include "PalSoundSlot.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class UPalSoundSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_SoundID, UAkAudioEvent*> SoundMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalDataTableRowName_SoundID> PlaySoundParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalSoundPlayer* SoundPlayer;
    
public:
    UPalSoundSlot();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void StopSoundBySoundId(const FPalDataTableRowName_SoundID& SoundId);
    
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
private:
    UFUNCTION(BlueprintCallable)
    void StopByPlayingId(int32 PlayingID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(const FName& Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySoundByAkEvent(UAkAudioEvent* AkEvent, const FPalSoundOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Options);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBySoundId(const FPalDataTableRowName_SoundID& SoundId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSoundPlayer* GetSoundPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkAudioEvent* GetAkEvent(const FPalDataTableRowName_SoundID& ID);
    
};

