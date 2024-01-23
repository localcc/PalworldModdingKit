#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalContainerId.h"
#include "PalContainerIdUtility.generated.h"

UCLASS(Blueprintable)
class UPalContainerIdUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalContainerIdUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalContainerId NoneContainerId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoneContainerId(const FPalContainerId& ContainerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_NotEqual(const FPalContainerId& A, const FPalContainerId& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_Equal(const FPalContainerId& A, const FPalContainerId& B);
    
};

