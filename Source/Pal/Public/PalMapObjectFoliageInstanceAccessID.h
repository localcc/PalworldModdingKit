#pragma once
#include "CoreMinimal.h"
#include "PalFoliageInstanceId.h"
#include "PalMapObjectFoliageInstanceAccessID.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFoliageInstanceAccessID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFoliageInstanceId InstanceId;
    
    PAL_API FPalMapObjectFoliageInstanceAccessID();
};

