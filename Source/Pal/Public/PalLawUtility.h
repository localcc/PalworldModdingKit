#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalInstanceID.h"
#include "PalItemSlotId.h"
#include "PalLawUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalLawUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalLawUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEqualsGroupIndividualIdAndSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ExistOtherGroupFromSlotIds(const UObject* WorldContextObject, const FPalInstanceID& IndividualId, const TArray<FPalItemSlotId>& SlotIds, const bool IgnoreNoBelongSlot, FGuid& OutGroupId);
    
};

