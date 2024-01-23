#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalWidgetAnimationArray.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class PAL_API UPalWidgetAnimationArray : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidgetAnimation*> AnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float multiplyTimeScale;
    
public:
    UPalWidgetAnimationArray();
    UFUNCTION(BlueprintCallable)
    void StopAnimation(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void PlayOneShotReverse(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayOneShotPingPong(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayOneshot(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopReverse(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoopPingPong(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLoop(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void PauseAnimation(const FName& animationName);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UUserWidget* inTargetWidget);
    
    UFUNCTION(BlueprintCallable)
    void GetAnimationNameArray(TArray<FName>& OutArray);
    
};

