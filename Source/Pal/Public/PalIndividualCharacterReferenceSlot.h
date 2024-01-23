#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSlot.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterReferenceSlot.generated.h"

// todo: probably has params
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateSlotReferenceHandleDelegate);

UCLASS(Blueprintable)
class UPalIndividualCharacterReferenceSlot : public UPalIndividualCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSlotReferenceHandleDelegate OnUpdateSlotReferenceHandleDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
public:
    UPalIndividualCharacterReferenceSlot();
};

