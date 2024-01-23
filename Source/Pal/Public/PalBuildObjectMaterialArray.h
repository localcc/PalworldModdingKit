#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectMaterialArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPalBuildObjectMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    PAL_API FPalBuildObjectMaterialArray();
};

