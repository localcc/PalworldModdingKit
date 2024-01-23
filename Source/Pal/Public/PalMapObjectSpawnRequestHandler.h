#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalMapObjectModelInitializeExtraParameters.h"
#include "PalMapObjectSpawnRequestHandler.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectSpawnRequestHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelInitializeExtraParameters ExtraParameters;
    
    UPalMapObjectSpawnRequestHandler();
};

