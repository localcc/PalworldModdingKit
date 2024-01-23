#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalNPCInteractionDataTableRow.h"
#include "PalNPCInteractionDataTableUtility.generated.h"

UCLASS(Blueprintable)
class UPalNPCInteractionDataTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalNPCInteractionDataTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetJSONStringByInteractionDataTable(FString& OutString, const TMap<FName, FPalNPCInteractionDataTableRow>& DataRows);
    
};

