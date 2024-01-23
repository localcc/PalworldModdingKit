#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalUIPalBoxModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIPalBoxModel;

UCLASS(Blueprintable)
class UPalUIPalBoxModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIPalBoxModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPageIndex;
    
public:
    UPalUIPalBoxModel();
    UFUNCTION(BlueprintCallable)
    void ToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void ToNextPage();
    
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWholePageCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetCurrentPageSlots() const;
    
};

