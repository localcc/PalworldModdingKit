#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalItemRecipe.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIProductSettingModel.generated.h"

class UPalItemContainerMultiHelper;
class UPalMapObjectEnergyModule;
class UPalUIProductSettingModel;

UCLASS(Blueprintable)
class UPalUIProductSettingModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSettingDelegate, UPalUIProductSettingModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSettingDelegate OnUpdateRecipeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSettingDelegate OnUpdateProductNumDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSettingDelegate OnUpdateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TargetMapObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SelectedRecipeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FocusedRecipeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ProductNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectEnergyModule> WeakEnergyModule;
    
public:
    UPalUIProductSettingModel();
    UFUNCTION(BlueprintCallable)
    bool TryGetEnergyModule(UPalMapObjectEnergyModule*& Module);
    
    UFUNCTION(BlueprintCallable)
    void SetProductNumByInput(int32 InputNum);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedRecipe(const FName RecipeID);
    
    UFUNCTION(BlueprintCallable)
    void SelectRecipe(const FName RecipeID);
    
    UFUNCTION(BlueprintCallable)
    void ResetProductNum();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventory(UPalItemContainerMultiHelper* IInventoryContainers);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyUpdateForce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProductNumInfinite() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseProductNum();
    
    UFUNCTION(BlueprintCallable)
    void GetRequiredMaterialInfos(TArray<FPalStaticItemIdAndNum>& RequiredMaterialInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRecipeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemRecipe GetRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProductNum() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseProductNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcWorkAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcMaxProductableNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcConsumeEnergy() const;
    
};

