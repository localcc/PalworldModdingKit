#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalAIActionNPCRelaxWanderUtility.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAIActionNPCRelaxWanderUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalAIActionNPCRelaxWanderUtility();

    UFUNCTION(BlueprintCallable)
    static void CreateWalkPointNodes(const FVector& Center, float Radius, int32 SplitNum, TArray<FVector>& OutNodes);
    
};

