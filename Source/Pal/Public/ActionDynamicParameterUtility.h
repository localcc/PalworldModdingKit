#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActionDynamicParameter.h"
#include "PalNetArchive.h"
#include "ActionDynamicParameterUtility.generated.h"

UCLASS(Blueprintable)
class UActionDynamicParameterUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActionDynamicParameterUtility();

    UFUNCTION(BlueprintCallable)
    static void SetBlackboard(UPARAM(Ref) FActionDynamicParameter& DynamicParameterRef, UPARAM(Ref) FPalNetArchive& Blackboard);
    
};

