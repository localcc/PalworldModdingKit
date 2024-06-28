#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalMapObjectConvertItemModelRequestResult.h"
#include "PalBaseCampModuleTransportItemRequirerInterface.h"
#include "PalInstanceID.h"
#include "PalItemRecipe.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "PalMapObjectConvertItemModel.generated.h"

class UPalItemContainer;
class UPalItemSlot;
class UPalMapObjectConvertItemModel;
class UPalMapObjectEnergyModule;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalMapObjectConvertItemModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface, public IPalBaseCampModuleTransportItemRequirerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSettingDelegate, UPalMapObjectConvertItemModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateRecipeDelegate, UPalMapObjectConvertItemModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecieveUpdateRecipeRequestResultDelegate, EPalMapObjectConvertItemModelRequestResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishConvertDelegate, UPalMapObjectConvertItemModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateRecipeDelegate OnUpdateRecipeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishConvertDelegate OnFinishConvertDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecieveUpdateRecipeRequestResultDelegate OnRecieveUpdateRecipeRequestResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSettingDelegate OnUpdateSettingDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentRecipeId, meta=(AllowPrivateAccess=true))
    FName CurrentRecipeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RequestedProductNum, meta=(AllowPrivateAccess=true))
    int32 RequestedProductNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainProductNum, meta=(AllowPrivateAccess=true))
    int32 RemainProductNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsWorkable, meta=(AllowPrivateAccess=true))
    bool bIsWorkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> RecipeIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentRecipeRequestPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> TargetTypesA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> TargetTypesB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetRankMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> MaterialTypesA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> MaterialTypesB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPickUpInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanTransportOutProduct;
    
public:
    UPalMapObjectConvertItemModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ReceivePickupProductResult_Client(const FPalNetArchive& Archive);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceivedPickProductResult(UPalItemSlot* Slot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PickupProduct_ServerInternal(const int32 RequestPlayerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RequestedProductNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainProductNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsWorkable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRecipeId();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnEndWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransportToStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProductNumInfinite(const int32 ProductNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemSlot* GetSlotInjectableMaterial(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndexProductOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetSlotIndexesMaterialInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainCreateNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRecipes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemSlot* GetProductSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentRecipeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemRecipe GetCurrentRecipe() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeRecipe_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void Cancel_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRequiredAmount(const float BaseRequiredAmount) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AddConvertItemResultLog(const FPalNetArchive& Archive);
    

    // Fix for true pure virtual functions not being implemented
};

