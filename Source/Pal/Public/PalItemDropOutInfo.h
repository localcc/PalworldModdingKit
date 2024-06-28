#pragma once
#include "CoreMinimal.h"
#include "PalItemDropOutInfo.generated.h"

class UPalMapObjectSpawnRequestHandler;

USTRUCT(BlueprintType)
struct FPalItemDropOutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectSpawnRequestHandler*> OutSpawnRequestHandlers;
    
    PAL_API FPalItemDropOutInfo();
};

