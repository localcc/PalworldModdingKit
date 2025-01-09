#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildResultParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalBuildResultParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstallLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBuildingNum;
    
    PAL_API FPalBuildResultParameter();
};

