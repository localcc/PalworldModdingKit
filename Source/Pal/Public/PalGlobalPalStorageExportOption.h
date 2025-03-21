#pragma once
#include "CoreMinimal.h"
#include "PalGlobalPalStorageExportOption.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageExportOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOldData;
    
    PAL_API FPalGlobalPalStorageExportOption();
};

