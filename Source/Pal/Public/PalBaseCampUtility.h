#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalItemSlotId.h"
#include "PalBaseCampUtility.generated.h"

class APalAIController;

UCLASS(Blueprintable)
class UPalBaseCampUtility : public UObject {
    GENERATED_BODY()
public:
    UPalBaseCampUtility();

    UFUNCTION(BlueprintCallable)
    static void RequestMoveInventoryItemToBaseCamp(const UObject* WorldObjectContext, const FGuid& TargetBaseCampID, const TArray<FPalItemSlotId>& InventoryItemSlotIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunnableAction_PalRandomRest_BaseCamp(APalAIController* AIController);
    
};

