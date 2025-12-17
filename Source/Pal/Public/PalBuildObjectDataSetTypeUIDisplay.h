#pragma once
#include "CoreMinimal.h"
#include "EPalBuildObjectTypeForUIDisplay.h"
#include "PalBuildObjectData.h"
#include "PalBuildObjectDataSetTypeUIDisplay.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildObjectDataSetTypeUIDisplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBuildObjectTypeForUIDisplay TypeUIDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBuildObjectData> DataArray;
    
    PAL_API FPalBuildObjectDataSetTypeUIDisplay();
};

