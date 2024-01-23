#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalGuildPlayerInfo.h"
#include "PalGuildPlayerInfoUtility.generated.h"

UCLASS(Blueprintable)
class UPalGuildPlayerInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGuildPlayerInfoUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalGuildPlayerInfo& PlayerInfo);
    
};

