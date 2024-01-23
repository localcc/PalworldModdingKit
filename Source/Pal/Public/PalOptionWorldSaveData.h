#pragma once
#include "CoreMinimal.h"
#include "PalOptionWorldSettings.h"
#include "PalOptionWorldSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings Settings;
    
    PAL_API FPalOptionWorldSaveData();
};

