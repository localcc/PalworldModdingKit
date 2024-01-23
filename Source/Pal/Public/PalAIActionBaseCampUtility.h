#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalRequestSoftScriptPriorityAdd.h"
#include "PalAIActionBaseCampUtility.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAIActionBaseCampUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EAIRequestPriority::Type> GetRequestSoftScriptPriority(const EPalRequestSoftScriptPriorityAdd AddPriority);
    
};

