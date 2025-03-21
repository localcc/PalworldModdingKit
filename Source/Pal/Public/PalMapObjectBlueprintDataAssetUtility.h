#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalMapObjectBlueprintDataAssetUtility.generated.h"

class UDataTable;
class UObject;
class UPalMapObjectBlueprintDataAsset;

UCLASS(Blueprintable)
class UPalMapObjectBlueprintDataAssetUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectBlueprintDataAssetUtility();

    UFUNCTION(BlueprintCallable)
    static void ResetBlueprintComponentByMapObjectBlueprintAsset(UObject* AssetObject, UPalMapObjectBlueprintDataAsset* BlueprintAsset, UDataTable* EnemyCampMapObjectMasterDataTable);
    
};

