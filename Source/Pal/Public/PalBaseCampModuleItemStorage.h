#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampItemContainerInfo.h"
#include "PalBaseCampItemExistsInfo.h"
#include "PalBaseCampModuleItemStorage.generated.h"

class IPalMapObjectItemContainerAccessInterface;
class UPalMapObjectItemContainerAccessInterface;
class UPalBaseCampModuleItemStorage;
class UPalItemContainer;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemContainerModule;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModuleItemStorage : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMulticastReturnSelfAndUpdatedContainerDelegate, UPalBaseCampModuleItemStorage*, Self, UPalItemContainer*, UpdatedContainer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastReturnSelfAndUpdatedContainerDelegate OnUpdateAnyItemContainerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampItemContainerInfo> ContainerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampItemContainerInfo GuildContainerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampItemExistsInfo> RepairKitUsableItemExistsInfos;
    
public:
    UPalBaseCampModuleItemStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerModule(UPalMapObjectItemContainerModule* ItemContainerModule);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainer(UPalItemContainer* ItemContainer);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyItemContainerGuildChest(TScriptInterface<IPalMapObjectItemContainerAccessInterface> ItemContainerAccess);
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

