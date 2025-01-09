#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectItemContainerAccessDelegateDelegate.h"
#include "PalMapObjectItemContainerAccessInterface.h"
#include "PalMapObjectGuildChestModel.generated.h"

class UPalGuildItemStorage;
class UPalItemContainer;
class UPalMapObjectGuildChestModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectGuildChestModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectItemContainerAccessInterface, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectGuildChestModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateGuildBelongToInServerDelegate;
    
    UPalMapObjectGuildChestModel();

private:
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerInGuildItemStorage(UPalGuildItemStorage* ItemStorage);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerContents(UPalItemContainer* ItemContainer);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) override PURE_VIRTUAL(UnregisterOnReadyItemContainerEvent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopItemContainerReplication() const override PURE_VIRTUAL(RequestStopItemContainerReplication,);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartItemContainerReplication() const override PURE_VIRTUAL(RequestStartItemContainerReplication,);
    
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer_ItemContainerAccessInterface() override PURE_VIRTUAL(RequestSortContainer_ItemContainerAccessInterface,);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) override PURE_VIRTUAL(RegisterOnReadyItemContainerEvent,);
    
    UFUNCTION(BlueprintCallable)
    UPalItemContainer* GetItemContainer_ItemContainerAccessInterface() const override PURE_VIRTUAL(GetItemContainer_ItemContainerAccessInterface, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyItemContainerEvent(FPalMapObjectItemContainerAccessDelegate Delegate) override PURE_VIRTUAL(CallOrRegisterOnReadyItemContainerEvent,);
    
};

