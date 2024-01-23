#pragma once
#include "CoreMinimal.h"
#include "AkGameplayStatics.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PalSoundOptions.h"
#include "PalSoundPlayingParameter.h"
#include "PalSoundPlayer.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UPalSoundPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAkPostEventCallback AkCallbackOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopWhenOwnerDestroyed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwnerAttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAkPostEventCallback AkCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalSoundPlayingParameter> PlaySoundParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> OutputBusVolumes;
    
public:
    UPalSoundPlayer();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateOutputBusBolume();
    
public:
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
    UFUNCTION(BlueprintCallable)
    void StopByPlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(const FName& Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputBusVolume(FName Name, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionRefreshInterval(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void PostTrigger(const FString& Trigger);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(UAkAudioEvent* AudioEvent, const FPalSoundOptions& Options);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    FVector GetWorldLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    FRotator GetOwnerRotation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetOwnerLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetOutputBusVolume(FName Name, float& Volume);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutByPlayingId(int32 PlayingID, int32 FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void ClearOutputBusVolume(FName Name);
    
};

