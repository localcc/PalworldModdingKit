#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInventoryType.h"
#include "PalItemSelectorComponent.h"
#include "PalLoadoutSynchronalizedData.h"
#include "Templates/SubclassOf.h"
#include "PalLoadoutSelectorComponent.generated.h"

class APalWeaponBase;
class UPalItemSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLoadoutSelectorComponent : public UPalItemSelectorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRemoveItem, EPalPlayerInventoryType, inventoryType, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentItem, EPalPlayerInventoryType, inventoryType, int32, Index);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalWeaponBase> ThrowOtomoPalWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalWeaponBase> DummyBallWeaponClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentItem OnEquipmentItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveItem OnRemoveItemDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalPlayerInventoryType primaryTargetInventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 currentItemSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName NowEquipBallItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalWeaponBase* ThrowOtomoPalWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalWeaponBase*> spawnedWeaponsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, APalWeaponBase*> spawnedBallMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalWeaponBase* DummyBall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PrimaryTargetInventoryType, meta=(AllowPrivateAccess=true))
    EPalPlayerInventoryType replicatedPrimaryTargetInventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentItemSlotIndex, meta=(AllowPrivateAccess=true))
    int32 replicatedCurrentItemSlotIndex;
    
public:
    UPalLoadoutSelectorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TryEquipNowSelectedWeapon_ToAll();
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipNowSelectedWeapon();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetWeaponLoadoutIndex_Internal(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponLoadoutIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetupItemContainer();
    
    UFUNCTION(BlueprintCallable)
    void SetBallLoadoutIndex_Internal(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBallLoadoutIndex(int32 Index);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestChangeNowEquipBallItemID_ToServer(FName NextBallID);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWeaponLoadoutSlot(UPalItemSlot* itemSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventorySlot(UPalItemSlot* itemSlot);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryTargetInventoryType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentItemSlotIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveEquipItem(EPalPlayerInventoryType inventoryType, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipItem(EPalPlayerInventoryType inventoryType, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APalWeaponBase*> GetWeaponList() const;
    
    UFUNCTION(BlueprintCallable)
    EPalPlayerInventoryType GetPrimaryInventoryType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, APalWeaponBase*> GetPalSphereActorMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNowEquipedBallItemID(FName& OutBallItemID) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckRespawnWeaponActor(TArray<FPalLoadoutSynchronalizedData> synchroData, TArray<APalWeaponBase*> WeaponActorList, EPalPlayerInventoryType inventoryType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeWeaponByReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePrimiryInventoryType(EPalPlayerInventoryType targetInventory);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangePrevWeaponLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePrevWeaponLoadout();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangePrevBallLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePrevBallLoadout();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeNextWeaponLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeNextWeaponLoadout();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeNextBallLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeNextBallLoadout();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AttachSpawnOtomoPalThrowWeapon_ToServer(int32 issuerID, bool IsAttach, bool ShouldEquipDummyWeapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AttachSpawnOtomoPalThrowWeapon_ToAll(int32 issuerID, bool IsAttach, bool ShouldEquipDummyWeapon);
    
};

