#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectTypeB.h"
#include "PalBuildObjectData.h"
#include "PalBuildObjectDataSetTypeB.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectDataSetTypeB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBuildObjectTypeB TypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBuildObjectData> DataArray;
    
    PAL_API FPalBuildObjectDataSetTypeB();
};

