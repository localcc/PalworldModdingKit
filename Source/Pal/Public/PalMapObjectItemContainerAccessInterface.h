#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalMapObjectItemContainerAccessDelegateDelegate.h"
#include "PalMapObjectItemContainerAccessInterface.generated.h"

class UPalItemContainer;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalMapObjectItemContainerAccessInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectItemContainerAccessInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnregisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) PURE_VIRTUAL(UnregisterOnReadyItemContainerEvent,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestStopItemContainerReplication() const PURE_VIRTUAL(RequestStopItemContainerReplication,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestStartItemContainerReplication() const PURE_VIRTUAL(RequestStartItemContainerReplication,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestSortContainer_ItemContainerAccessInterface() PURE_VIRTUAL(RequestSortContainer_ItemContainerAccessInterface,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RegisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) PURE_VIRTUAL(RegisterOnReadyItemContainerEvent,);
    
    UFUNCTION(BlueprintCallable)
    virtual UPalItemContainer* GetItemContainer_ItemContainerAccessInterface() const PURE_VIRTUAL(GetItemContainer_ItemContainerAccessInterface, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void CallOrRegisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) PURE_VIRTUAL(CallOrRegisterOnReadyItemContainerEvent,);
    
};

