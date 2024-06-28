#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectStaticMeshComponentBase.h"
#include "PalMapObjectStaticMeshComponentHiddenInNoItem.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectItemContainerModule;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectStaticMeshComponentHiddenInNoItem : public UPalMapObjectStaticMeshComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExistsItems, meta=(AllowPrivateAccess=true))
    bool bExistsItems;
    
public:
    UPalMapObjectStaticMeshComponentHiddenInNoItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainerContents(UPalMapObjectItemContainerModule* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnSetConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExistsItems();
    
    UFUNCTION(BlueprintCallable)
    void OnReadyModule_ServerInternal(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module);
    
};

