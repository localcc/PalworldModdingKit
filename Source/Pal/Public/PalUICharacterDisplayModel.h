#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalInstanceID.h"
#include "PalUICharacterDisplayModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUICharacterDisplayModel;

UCLASS(Blueprintable)
class UPalUICharacterDisplayModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateDelegate, UPalUICharacterDisplayModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateDelegate OnUpdateDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterSlot*> DisplaySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> NotSelectableIndividualIds;
    
public:
    UPalUICharacterDisplayModel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectable(const int32 DisplayIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplaySlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
};

