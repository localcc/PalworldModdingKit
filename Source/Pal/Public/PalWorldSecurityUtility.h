#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalWorldSecurityUtility.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class UPalWorldSecurityUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorldSecurityUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWantedCharacter(APalCharacter* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCriminalCharacter(APalCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCriminalsInSight(APalCharacter* Target, TArray<APalCharacter*>& Criminals);
    
};

