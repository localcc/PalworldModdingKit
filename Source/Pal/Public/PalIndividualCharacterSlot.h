#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalTribeID.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterSlot.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalIndividualCharacterSlot : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSlotLockDelegate, UPalIndividualCharacterSlot*, Slot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSlotHandleDelegate, UPalIndividualCharacterSlot*, Slot, UPalIndividualCharacterHandle*, LastHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotHandleDelegate OnUpdateSlotHandleDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotLockDelegate OnUpdateSlotLockDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HandleID, meta=(AllowPrivateAccess=true))
    FPalInstanceID ReplicateHandleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LockPlayerUId, meta=(AllowPrivateAccess=true))
    FGuid LockPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalTribeID PermissionTribeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReplicateCharacterParameter;
    
public:
    UPalIndividualCharacterSlot();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup(const int32 InSlotIndex, const FPalContainerId& InContainerId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LockPlayerUId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HandleID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalCharacterSlotId GetSlotId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLockPlayerUId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterHandle* GetHandle() const;
    
};

