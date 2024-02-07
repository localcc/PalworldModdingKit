#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "PalHeatSourceInfo.h"
#include "PalTemperatureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalTemperatureComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTemperatureDelegate, int32, NextTemperature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTemperatureDelegate OnChangeTemperatureDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelfKeyName;
    
public:
    UPalTemperatureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveHeatSource(FName UniqueName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeHour();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTemperature();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CallOnChangeTemperature(int32 Next);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallAllDelegate();
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddHeatSource(FName UniqueName, int32 HeatLevel);
    
};

