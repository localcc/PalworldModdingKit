#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalArenaResultFormation.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaResultFormation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> PalTransforms;
    
    PAL_API FPalArenaResultFormation();
};

