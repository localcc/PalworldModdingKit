#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalNetworkTransmitterDelaySpawnInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalNetworkTransmitterDelaySpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SpawnGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnActor;
    
    PAL_API FPalNetworkTransmitterDelaySpawnInfo();
};

