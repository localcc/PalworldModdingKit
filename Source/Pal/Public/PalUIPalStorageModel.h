#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalItemSlotPressType.h"
#include "PalContainerId.h"
#include "PalUIPalStorageModel.generated.h"

class UPalUICharacterDisplayModel;
class UPalUIPalStorageModel;

UCLASS(Blueprintable)
class UPalUIPalStorageModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePageDelegate, UPalUIPalStorageModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePageDelegate OnUpdatePageDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUICharacterDisplayModel* DisplayModel;
    
public:
    UPalUIPalStorageModel();

    UFUNCTION(BlueprintCallable)
    void ToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void ToPage(const int32 pageIndex, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ToNextPage();
    
    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOperatedByOuter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWholePageCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId GetTargetContainerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToPrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToNext() const;
    
};

