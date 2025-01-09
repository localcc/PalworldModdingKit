#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIItemChestFilterMulticastDelegateDelegate.h"
#include "PalUIItemChestFilterModel.generated.h"

class IPalMapObjectItemContainerAccessInterface;
class UPalMapObjectItemContainerAccessInterface;
class UPalItemContainer;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemContainerModule;

UCLASS(Blueprintable)
class PAL_API UPalUIItemChestFilterModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIItemChestFilterMulticastDelegate OnUpdateFilterPreferenceDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectConcreteModelBase> WeakTargetModel;
    
public:
    UPalUIItemChestFilterModel();

    UFUNCTION(BlueprintCallable)
    void Setup(UPalMapObjectConcreteModelBase* InConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeFilter(const FName InFilterName, const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestAllUncheck();
    
    UFUNCTION(BlueprintCallable)
    void RequestAllCheck();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFilterPreference(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectItemContainerModule* GetItemContainerModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IPalMapObjectItemContainerAccessInterface> GetItemContainerAccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetItemContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FName> GetFilterIdAndDisplayTextId() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
};

