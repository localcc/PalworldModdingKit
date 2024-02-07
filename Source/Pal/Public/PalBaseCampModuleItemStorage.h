#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampItemContainerInfo.h"
#include "PalBaseCampItemExistsInfo.h"
#include "PalContainerId.h"
#include "PalBaseCampModuleItemStorage.generated.h"

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampItemExistsInfo> RepairKitItemExistsInfos;
    
public:
    UPalBaseCampModuleItemStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainer(UPalMapObjectItemContainerModule* ItemContainerModule);
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetContainerIds(TArray<FPalContainerId>& OutContainerIds) const;
    
};

