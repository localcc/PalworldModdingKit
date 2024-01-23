#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalUIBaseCampWorkerListModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIBaseCampWorkerListModel;

UCLASS(Blueprintable)
class UPalUIBaseCampWorkerListModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIBaseCampWorkerListModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid CurrentDisplayBaseCampId;
    
public:
    UPalUIBaseCampWorkerListModel();
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstEmptyHandleSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentPageSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetCurrentDisplayBaseCampId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBaseCampName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
};

