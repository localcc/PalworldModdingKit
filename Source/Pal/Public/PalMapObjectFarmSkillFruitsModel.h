#pragma once
#include "CoreMinimal.h"
#include "EPalFarmSkillFruitsState.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "ReactivePropertyFloat.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFarmSkillFruitsModel.generated.h"

class UPalItemContainer;
class UPalItemSlot;
class UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine;
class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectFarmSkillFruitsModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateStateDelegate, EPalFarmSkillFruitsState, NextState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateProductSlotDelegate, int32, ProductIndex, FName, StaticItemId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateStateDelegate OnUpdateStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateProductSlotDelegate OnUpdateProductSlotDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReactivePropertyFloat SkillFruitsProgressRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine* StateBehaviourMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName PlantedSkillFruitsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalFarmSkillFruitsState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanTransportOutProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SkillFruitsProgressRateValue, meta=(AllowPrivateAccess=true))
    float SkillFruitsProgressRateValue;
    
public:
    UPalMapObjectFarmSkillFruitsModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestSetCanTransportOutProduct_ServerInternal(const int32 RequestPlayerId, bool bInCanTransportOutProduct);
    
    UFUNCTION(BlueprintCallable)
    void RequestHarvest_ServerInternal(const int32 RequestPlayerId, int32 ProductIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSkillFruitsProgressRate(const float ProgressRate);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateProductSlot(UPalItemSlot* itemSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillFruitsProgressRateValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifyHarvestResult(const FPalNetArchive& Archive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlantedSkillFruitsId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalFarmSkillFruitsState GetCurrentState() const;
    
};

