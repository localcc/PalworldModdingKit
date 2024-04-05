#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalCharacterSlotId.h"
#include "PalItemAndNum.h"
#include "PalItemSlotId.h"
#include "PalUILiftSlotModel.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;
class UPalItemSlot;
class UTexture2D;

UCLASS(Blueprintable)
class UPalUILiftSlotModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateIconDelegate, TSoftObjectPtr<UTexture2D>, IconTexture);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateHandleSlotDelegate, UPalIndividualCharacterSlot*, TargetHandleSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateCountDelegate, int32, Count);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedItemOperationDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateDelegate OnUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateHandleSlotDelegate OnUpdateHandleSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateIconDelegate OnUpdateIconDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateCountDelegate OnUpdateCountDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailedItemOperationDelegate OnFailedItemOperationDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SourceItemSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalItemAndNum SourceLiftItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterSlot* CharacterSlot;
    
public:
    UPalUILiftSlotModel();

    UFUNCTION(BlueprintCallable)
    void SelectItemSlot(const FPalItemSlotId SlotID, const EPalItemSlotPressType Type);
    
    UFUNCTION(BlueprintCallable)
    void SelectCharacterSlot(const FPalCharacterSlotId SlotID, const EPalItemSlotPressType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetLiftItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLiftItemSourceSlot(UPalItemSlot* Slot);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateLiftHandleSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLift() const;
    
};

