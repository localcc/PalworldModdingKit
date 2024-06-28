#pragma once
#include "CoreMinimal.h"
#include "PalRandomizerSpawnInfoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerSpawnInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 KeyHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, uint32> RemapRowNameHashList;
    
    PAL_API FPalRandomizerSpawnInfoSaveData();
};

