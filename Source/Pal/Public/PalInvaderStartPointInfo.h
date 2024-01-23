#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBiomeType.h"
#include "PalInvaderStartPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderStartPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBiomeType BiomeType;
    
    PAL_API FPalInvaderStartPointInfo();
};

