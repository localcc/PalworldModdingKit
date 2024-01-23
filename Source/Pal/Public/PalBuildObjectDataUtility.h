#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalBuildObjectTypeA.h"
#include "EPalBuildObjectTypeB.h"
#include "PalBuildObjectData.h"
#include "PalItemRecipeMaterialInfo.h"
#include "PalBuildObjectDataUtility.generated.h"

UCLASS(Blueprintable)
class UPalBuildObjectDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalBuildObjectDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ToSortPriorityTypeB(const EPalBuildObjectTypeB TypeB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ToSortPriorityTypeA(const EPalBuildObjectTypeA TypeA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ToInt(const EPalBuildObjectTypeA TypeA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalBuildObjectTypeA ToBuildObjectTypeA(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaterialInfos(const FPalBuildObjectData& BuildObjectData, TArray<FPalItemRecipeMaterialInfo>& NewMaterialInfos);
    
};

