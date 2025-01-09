#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildingCountRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildingCountRepInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildingNum;
    
    PAL_API FPalBuildingCountRepInfo();
};

