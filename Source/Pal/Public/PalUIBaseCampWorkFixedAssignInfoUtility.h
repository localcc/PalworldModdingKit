#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalWorkSuitability.h"
#include "EPalWorkType.h"
#include "PalUIBaseCampWorkFixedAssignInfo.h"
#include "PalUIBaseCampWorkFixedAssignInfoUtility.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalUIBaseCampWorkFixedAssignInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalUIBaseCampWorkFixedAssignInfoUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalWorkType GetWorkType(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EPalWorkSuitability> GetWorkSuitability(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalWorkProgress* GetWorkProgress(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalWorkBase* GetWorkBase(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPalMapObjectConcreteModelBase* GetOwnerMapObjectConcreteModel(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAssignableNum(const FPalUIBaseCampWorkFixedAssignInfo& Info);
    
};

