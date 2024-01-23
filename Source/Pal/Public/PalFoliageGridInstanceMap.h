#pragma once
#include "CoreMinimal.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageGridInstanceMap.generated.h"

class UPalFoliageInstance;

USTRUCT(BlueprintType)
struct FPalFoliageGridInstanceMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalFoliageInstanceId, UPalFoliageInstance*> InstanceMap;
    
    PAL_API FPalFoliageGridInstanceMap();
};

