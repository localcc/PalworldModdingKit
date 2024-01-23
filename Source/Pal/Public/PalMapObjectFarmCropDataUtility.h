#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalMapObjectFarmCropData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalMapObjectFarmCropDataUtility.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectFarmCropDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectFarmCropDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaterialInfos(const FPalMapObjectFarmCropData& Data, TArray<FPalStaticItemIdAndNum>& NewMaterialInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FPalMapObjectFarmCropData& Data);
    
};

