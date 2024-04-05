#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalMapObjectOperationResult.h"
#include "PalItemVisualModelFXInfo.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectUtility.generated.h"

class AActor;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class UPalMapObjectUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetItemVisualModelStaticMesh(TSubclassOf<AActor> actorClass, UStaticMesh*& OutStaticMesh, FTransform& OutComponentTransform, FVector& OutCenterOfMass, UMaterialInterface*& OutMaterialInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalMapObjectOperationResult ToMapObjectOperationResult(const int32 ResultIntValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalMapObjectOperationResult SelectPriorityResult(EPalMapObjectOperationResult Result1, EPalMapObjectOperationResult Result2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MapObjectOperationResultToString(const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainsCollisionProfiles(const UPrimitiveComponent* Component, const TArray<FName>& CollisionProfiles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetItemVisualModelFX(TSubclassOf<AActor> actorClass, TArray<FPalItemVisualModelFXInfo>& OutFXInfos);
    
};

