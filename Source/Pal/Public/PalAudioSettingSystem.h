#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalAudioBus.h"
#include "EPalAudioFadeType.h"
#include "FloatContainer.h"
#include "PalAudioFadeParameter.h"
#include "PalAudioSettingSystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAudioSettingSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAudioBus, FFloatContainer> BusVolumeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAudioBus, FPalAudioFadeParameter> BussFadeMap;
    
public:
    UPalAudioSettingSystem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartAudioFade(EPalAudioBus AudioBus, EPalAudioFadeType FadeType, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAudioBusVolume(EPalAudioBus AudioBus, const FName& Key, float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAudioBusMute(EPalAudioBus AudioBus, bool IsMute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString PalAudioBusToString(EPalAudioBus AudioBus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsAudioBusMute(EPalAudioBus AudioBus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAudioBusVolume(EPalAudioBus AudioBus) const;
    
};

