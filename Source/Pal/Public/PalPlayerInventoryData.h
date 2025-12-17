#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EPalItemOperationResult.h"
#include "EPalItemTypeA.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "EPalPlayerInventoryType.h"
#include "PalContainerId.h"
#include "PalItemAndNum.h"
#include "PalItemId.h"
#include "PalPlayerDataEquipLanternData.h"
#include "PalPlayerDataInventoryInfo.h"
#include "PalPlayerInventoryData.generated.h"

class UAkAudioEvent;
class UPalItemContainer;
class UPalItemContainerMultiHelper;
class UPalItemSlot;
class UPalMoneyData;
class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class PAL_API UPalPlayerInventoryData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWeightInventoryDelegate, float, NowWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMaxWeightInventoryDelegate, float, MaxWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateLoadoutSlotDelegate, UPalItemSlot*, itemSlot, EPalPlayerInventoryType, UpdatedLoadoutType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateLanternEquipSettingDelegate, const FPalPlayerDataEquipLanternData&, LanternEquipData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateInventoryContainerDelegate, UPalItemContainer*, Container);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEssentialContainerDelegate, UPalItemContainer*, Container);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateEquipmentSlotDelegate, UPalItemSlot*, itemSlot, EPalPlayerEquipItemSlotType, slotType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupItemDelegate, TArray<FPalItemAndNum>&, ItemInfos);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverWeightInventoryDelegate, float, NowWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMaxWeightBuffedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFixedWeightInventoryDelegate, float, NowWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentWeightBuffedDelegate, float, ChangedWeight);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateInventoryContainerDelegate OnUpdateInventoryContainerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateEssentialContainerDelegate OnUpdateEssentialContainerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateLoadoutSlotDelegate OnUpdateLoadoutSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateEquipmentSlotDelegate OnUpdateEquipmentSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateWeightInventoryDelegate OnUpdateWeightInventoryDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateMaxWeightInventoryDelegate OnUpdateMaxWeightInventoryDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverWeightInventoryDelegate OnOverWeightInventoryDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFixedWeightInventoryDelegate OnFixedInventoryWeightDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaxWeightBuffedDelegate OnMaxWeightBuffedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentWeightBuffedDelegate OnCurrentWeightBuffedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupItemDelegate OnPickupItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupItemDelegate OnGetItemFromConvertItemMapObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateLanternEquipSettingDelegate OnUpdateLanternEquipSettingDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InventoryInfo, meta=(AllowPrivateAccess=true))
    FPalPlayerDataInventoryInfo MyInventoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FullInventoryLogGuardTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdatePassiveSkillRecheckTimerHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NowItemWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_maxInventoryWeight, meta=(AllowPrivateAccess=true))
    float MaxInventoryWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInventoryWeight_Cached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalItemContainerMultiHelper* InventoryMultiHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffMaxWeight, meta=(AllowPrivateAccess=true))
    float PassiveBuffedMaxWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BuffCurrentWeight, meta=(AllowPrivateAccess=true))
    float PassiveBuffedCurrentWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMoneyData* MyMoneyData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipmentBreakAudioEvent;
    
public:
    UPalPlayerInventoryData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePassiveSkill();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryRemoveEquipment(UPalItemSlot* EquipSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetItemSlotFromEquipmentType(EPalPlayerEquipItemSlotType EquipmentSlotType, UPalItemSlot*& OutSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetItemIdBySlot(EPalPlayerEquipItemSlotType EquipmentSlotType, FPalItemId& OutItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalPlayerEquipItemSlotType TryGetEquipmentTypeFromStaticItemID(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetEquipmentContainerIDFromStaticItemID(const FName& StaticItemId, FPalContainerId& OutContainerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetEmptySlot(EPalPlayerInventoryType inventoryType, UPalItemSlot*& EmptySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainerIdFromItemType(EPalItemTypeA ItemTypeA, FPalContainerId& OutContainerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainerIDFromInventoryType(const EPalPlayerInventoryType inventoryType, FPalContainerId& OutContainerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainerFromStaticItemID(const FName& StaticItemId, UPalItemContainer*& OutContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainerFromInventoryType(const EPalPlayerInventoryType inventoryType, UPalItemContainer*& OutContainer) const;
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipSlot(UPalItemSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void RequestSortInventory_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortInventory();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestForceMarkAllDirty_ToServer(const bool ForceOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestForceMarkAllDirty(const bool IsOn);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestFillSlotToTargetContainerFromInventory_ToServer(const FPalContainerId& ToContainerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestFillSlotToInventoryFromTargetContainer_ToServer(const FPalContainerId& FromContainerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestChangeLanternSetting(const FPalPlayerDataEquipLanternData& NewLanternSettings);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddItem(const FName StaticItemId, const int32 Count, bool IsAssignPassive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateLoadoutSlot(UPalItemSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEssentialContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEquipmentSlot_ForServer(UPalItemSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEquipmentSlot(UPalItemSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateAnyEquipmentDurability(float OldDurability, float NewDurability);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_maxInventoryWeight();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InventoryInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffMaxWeight();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BuffCurrentWeight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOnUpdateStatusPoint(FName StatusName, int32 prevPoint, int32 NewPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEquipSlotChanged(UPalItemSlot* Slot, EPalPlayerEquipItemSlotType slotType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistItem(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipSlot(UPalItemSlot* CheckSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquip(EPalPlayerEquipItemSlotType EquipmentSlotType, const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlreadyEquipedAccessory(const FName& AccessoryItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessorySlot(UPalItemSlot*& Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedFoodEquipSlotNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedAccessorySlotNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveBuffedItemWeight(const UPalStaticItemDataBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNowItemWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxItemWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalPlayerDataEquipLanternData GetLanternEquipData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemInfoByItemTypeA(TArray<EPalItemTypeA> ItemTypeA, TArray<FPalItemAndNum>& OutItemInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalPlayerInventoryType GetInventoryTypeFromStaticItemID(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalPlayerInventoryType GetInventoryTypeFromItemTypeA(const EPalItemTypeA ItemTypeA) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountItemNum(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquip(EPalPlayerEquipItemSlotType EquipmentSlotType, const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCheckPalTalentsByInventoryItem();
    
    UFUNCTION(BlueprintCallable)
    EPalItemOperationResult AddItem_ServerInternal(const FName StaticItemId, const int32 Count, bool IsAssignPassive, const float LogDelay);
    
    UFUNCTION(BlueprintCallable)
    void AddFullInventoryLog_Client();
    
};

