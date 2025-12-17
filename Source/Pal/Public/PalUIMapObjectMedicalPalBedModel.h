#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMapObjectMedicalPalBedModel.generated.h"

class UPalMapObjectMedicalPalBedModel;
class UPalUIMapObjectMedicalPalBedModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectMedicalPalBedModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectMedicalPalBedModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateResurrectProgressDelegate;
    
    UPalUIMapObjectMedicalPalBedModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateResurrectSpeedMultiplier(UPalMapObjectMedicalPalBedModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateResurrectCompleteTime(UPalMapObjectMedicalPalBedModel* Model);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResurrectSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResurrectProgressRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingResurrectTime() const;
    
};

