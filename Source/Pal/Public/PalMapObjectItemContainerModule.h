#pragma once
#include "CoreMinimal.h"
#include "EPalContainerUsageType.h"
#include "EPalMapObjectItemContainerSlotAttribute.h"
#include "PalContainerId.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectItemContainerModuleSlotIndexes.h"
#include "PalMapObjectItemContainerModule.generated.h"

class UPalItemContainer;
class UPalMapObjectItemContainerModule;

UCLASS(Blueprintable)
class UPalMapObjectItemContainerModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentsMulticastDelegate, UPalMapObjectItemContainerModule*, Module);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateContentsDelegate, UPalMapObjectItemContainerModule*, Module);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* TargetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bDropItemAtDisposed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectItemContainerModuleSlotIndexes> SlotAttributeIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalMapObjectItemContainerSlotAttribute> AllSlotAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalContainerUsageType UsageType;
    
public:
    UPalMapObjectItemContainerModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnbindUpdateContents(UPalMapObjectItemContainerModule::FUpdateContentsDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainer(UPalItemContainer*& OutContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContents(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetContainer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId GetContainerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void BindUpdateContents(UPalMapObjectItemContainerModule::FUpdateContentsDelegate Delegate);
    
};

