#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalWorldBaseInfoSaveData.h"
#include "PalWorldBaseInfoSaveDataUtility.generated.h"

UCLASS(Blueprintable)
class UPalWorldBaseInfoSaveDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorldBaseInfoSaveDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWorldName(const FPalWorldBaseInfoSaveData& SaveData);
    
};

