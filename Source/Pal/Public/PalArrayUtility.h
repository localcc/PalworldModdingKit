#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalArrayUtility.generated.h"

class IDependencyElementInterface;
class UDependencyElementInterface;

UCLASS(Blueprintable)
class PAL_API UPalArrayUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalArrayUtility();

    UFUNCTION(BlueprintCallable)
    static bool TryTopologicalSort(TArray<TScriptInterface<IDependencyElementInterface>>& OutResult);
    
};

