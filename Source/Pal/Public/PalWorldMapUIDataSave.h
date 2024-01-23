#pragma once
#include "CoreMinimal.h"
#include "PalWorldMapUIDataSave.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldMapUIDataSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> unlockedRegionMap;
    
    PAL_API FPalWorldMapUIDataSave();
};

