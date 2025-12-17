#pragma once
#include "CoreMinimal.h"
#include "PalObjectCollectorMapObjectSpawnerId.generated.h"

USTRUCT(BlueprintType)
struct FPalObjectCollectorMapObjectSpawnerId {
    GENERATED_BODY()
public:
    PAL_API FPalObjectCollectorMapObjectSpawnerId();
};
FORCEINLINE uint32 GetTypeHash(const FPalObjectCollectorMapObjectSpawnerId) { return 0; }

