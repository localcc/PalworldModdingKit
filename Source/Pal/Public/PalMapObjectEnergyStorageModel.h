#pragma once
#include "CoreMinimal.h"
#include "EPalEnergyType.h"
#include "PalBaseCampEnergyStorageInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectEnergyStorageModel.generated.h"

class UPalMapObjectEnergyStorageModel;

UCLASS(Blueprintable)
class UPalMapObjectEnergyStorageModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampEnergyStorageInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEnergyAmountDelegate, UPalMapObjectEnergyStorageModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateEnergyAmountDelegate OnUpdateStoredEnergyAmountDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalEnergyType EnergyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxEnergyStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StoredEnergyAmount, meta=(AllowPrivateAccess=true))
    float StoredEnergyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ConsumeEnergySpeed;
    
public:
    UPalMapObjectEnergyStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StoredEnergyAmount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStoredEnergyAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxEnergyStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    

    // Fix for true pure virtual functions not being implemented
};

