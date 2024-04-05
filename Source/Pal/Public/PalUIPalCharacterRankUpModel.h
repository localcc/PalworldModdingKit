#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalUIPalCharacterRankUpRequestResult.h"
#include "EPalUIPalCharacterRankUpSelectMode.h"
#include "EPalUIPalCharacterRankUpSelectResourceType.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalUIPalCharacterRankUpModel.generated.h"

class UPalHUDDispatchParameter_CharacterRankUp;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalIndividualCharacterReferenceSlot;
class UPalIndividualCharacterSlot;
class UPalUIPalCharacterRankUpModel;
class UPalUIPalStorageModel;

UCLASS(Blueprintable)
class UPalUIPalCharacterRankUpModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModelDelegate, UPalUIPalCharacterRankUpModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelDelegate OnUpdateTargetSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelDelegate OnUpdateResourceSlotDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelDelegate OnUpdateSelectModeDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalContainerId LocalContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIPalStorageModel> PalStorageModelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUIPalStorageModel* PalStorageModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalUIPalCharacterRankUpSelectMode SelectMode;
    
public:
    UPalUIPalCharacterRankUpModel();

    UFUNCTION(BlueprintCallable)
    bool ToggleResourceCharacter(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UPalHUDDispatchParameter_CharacterRankUp* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SelectTargetCharacter(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void SelectResourcesAuto(const EPalUIPalCharacterRankUpSelectResourceType SelectType);
    
    UFUNCTION(BlueprintCallable)
    bool SelectResourceCharacterTo(UPalIndividualCharacterHandle* Handle, const int32 ToResourceSlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateTargetSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateTargetCharacterRank(const int32 nowRank, const int32 oldRank);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateResourceSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectableSlotInternal(const UPalIndividualCharacterSlot* Slot) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverflowResourcesForTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFilledResourcesForTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeRankUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterReferenceSlot* GetTargetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterReferenceSlot* GetSlot(const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResourceSlots(TArray<UPalIndividualCharacterSlot*>& Slots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentResourceCount() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterParameter* CreatePredicateTargetCharacterParameter();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelected();
    
    UFUNCTION(BlueprintCallable)
    void ClearResourceCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalUIPalCharacterRankUpRequestResult CanInvokeRankUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcRankByCurrentSelectForUI(int32& OutToRank, int32& OutToRankUpExp, int32& OutTotalRankUpExp) const;
    
};

