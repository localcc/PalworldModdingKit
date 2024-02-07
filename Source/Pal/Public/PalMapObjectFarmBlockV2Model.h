#pragma once
#include "CoreMinimal.h"
#include "EPalFarmCropState.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "ReactivePropertyFloat.h"
#include "PalMapObjectFarmBlockV2Model.generated.h"

class UPalMapObjectFarmBlockV2ModelStateBehaviourMachine;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectFarmBlockV2Model : public UPalMapObjectConcreteModelBase, public IPalMapObjectItemCollectableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateStateDelegate, EPalFarmCropState, LastState, EPalFarmCropState, NextState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNotifySimpleDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateStateDelegate OnUpdateStateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReactivePropertyFloat CropProgressRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReactivePropertyFloat WaterStackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFarmBlockV2ModelStateBehaviourMachine* StateBehaviourMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentCropDataId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalFarmCropState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CropProgressRateValue, meta=(AllowPrivateAccess=true))
    float CropProgressRateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WaterStackRateValue, meta=(AllowPrivateAccess=true))
    float WaterStackRateValue;
    
public:
    UPalMapObjectFarmBlockV2Model();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWaterStackRate(const float UpdatedRate);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCropProgressRate(const float ProgressRate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WaterStackRateValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CropProgressRateValue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalFarmCropState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentCropDataId() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectableStaticItemIds(TArray<FName>& OutStaticItemIds) override PURE_VIRTUAL(GetCollectableStaticItemIds,);
    
};

