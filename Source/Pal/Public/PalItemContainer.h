#pragma once
#include "CoreMinimal.h"
#include "PalContainerBase.h"
#include "PalItemPermission.h"
#include "PalItemContainer.generated.h"

class UPalItemContainer;
class UPalItemSlot;

UCLASS(Blueprintable)
class PAL_API UPalItemContainer : public UPalContainerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentsDelegate, UPalItemContainer*, Container);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateContentsDelegate OnUpdateContentsDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_ItemSlotArray, meta=(AllowPrivateAccess=true))
    TArray<UPalItemSlot*> ItemSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Permission, meta=(AllowPrivateAccess=true))
    FPalItemPermission Permission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CorruptionMultiplier;
    
public:
    UPalItemContainer();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSlotContent(UPalItemSlot* Slot);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Permission();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemSlotArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemPermission GetPermission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemStackCount(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemSlot* Get(const int32 Index) const;
    
};

