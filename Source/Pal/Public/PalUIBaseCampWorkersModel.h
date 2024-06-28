#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalUIBaseCampWorkersModel.generated.h"

class UPalBaseCampModel;
class UPalIndividualCharacterSlot;
class UPalUIBaseCampWorkersModel;

UCLASS(Blueprintable)
class UPalUIBaseCampWorkersModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIBaseCampWorkersModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPageIndex;
    
public:
    UPalUIBaseCampWorkersModel();

    UFUNCTION(BlueprintCallable)
    void ToPage(const int32 pageIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstEmptyHandleSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWholePageCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetCurrentPageSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampModel(const int32 pageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
};

