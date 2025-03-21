#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDeathPenaltyPlayerParameter.generated.h"

class APalPlayerState;
class UPalIndividualCharacterSlot;
class UPalPlayerInventoryData;

USTRUCT(BlueprintType)
struct FPalDeathPenaltyPlayerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalPlayerInventoryData* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterSlot*> OtomoSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalPlayerState* PlayerState;
    
    PAL_API FPalDeathPenaltyPlayerParameter();
};

