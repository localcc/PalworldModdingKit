#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnableCheckParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnableCheckParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredOverlapCheckActors;
    
    PAL_API FPalMapObjectSpawnableCheckParameter();
};

