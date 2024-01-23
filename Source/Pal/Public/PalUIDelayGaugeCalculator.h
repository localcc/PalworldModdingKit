#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIDelayGaugeCalculator.generated.h"

class UProgressBar;

UCLASS(Blueprintable)
class PAL_API UPalUIDelayGaugeCalculator : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartDelayGaugeTimerDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelayGaugeDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartDelayGaugeTimerDelegate OnStartDelayGaugeTimerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelayGaugeDelegate OnEndDelayGaugeDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* mainBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* subBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayGaugeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayGaugeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayGaugeProgressPerSecond;
    
public:
    UPalUIDelayGaugeCalculator();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UProgressBar* inMainBar, UProgressBar* inSubBar);
    
    UFUNCTION(BlueprintCallable)
    void SetPercentForce(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(float Percent);
    
};

