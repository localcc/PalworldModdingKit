#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectMaterialInstanceDynamicArray.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FPalBuildObjectMaterialInstanceDynamicArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    PAL_API FPalBuildObjectMaterialInstanceDynamicArray();
};

