#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalEnergyType.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalUIMapObjectEnergyStatusIndicatorModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectEnergyStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIMapObjectEnergyStatusIndicatorModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateStoredEnergyAmountDelegate;
    
    UPalUIMapObjectEnergyStatusIndicatorModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStoredEnergyAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxEnergyStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectConcreteModelBase* GetConcreteModel() const;
    
};

