#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalContainerId.h"
#include "PalItemId.h"
#include "PalItemPermission.h"
#include "PalItemSlotId.h"
#include "PalItemSlot.generated.h"

class UPalDynamicItemDataBase;
class UPalItemSlot;
class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class UPalItemSlot : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSlotContentDurabilityDelegate, float, OldDurability, float, NewDurability);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSlotContentDelegate, UPalItemSlot*, Slot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLiftedSlotContentDelegate, const int32, LiftItemNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFinishLiftedContentDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotContentDelegate OnUpdateSlotContentDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiftedSlotContentDelegate OnLiftedSlotContentDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishLiftedContentDelegate OnFinishLiftedContentDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotContentDurabilityDelegate OnUpdateSlotContentDurabilityDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotContentDelegate OnUpdateSlotCorruptionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> DirtyMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemId, meta=(AllowPrivateAccess=true))
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StackCount, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CorruptionProgressValue, meta=(AllowPrivateAccess=true))
    float CorruptionProgressValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Permission, meta=(AllowPrivateAccess=true))
    FPalItemPermission Permission;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DynamicItemData, meta=(AllowPrivateAccess=true))
    UPalDynamicItemDataBase* DynamicItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalItemId LastItemId_Client;
    
public:
    UPalItemSlot();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetStaticItemData(UPalStaticItemDataBase*& OutStaticItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetDynamicItemData(UPalDynamicItemDataBase*& OutDynamicItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSlotContentDurability(float OldDurability, float NewDurability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StackCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Permission();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicItemData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CorruptionProgressValue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemSlotId GetSlotId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemPermission GetPermission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalItemId GetItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCorruptionRemainTimeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorruptionProgressRate() const;
    
};

