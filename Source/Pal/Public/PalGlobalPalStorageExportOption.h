#pragma once
#include "CoreMinimal.h"
#include "PalGlobalPalStorageExportOption.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageExportOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceExport;
    
    PAL_API FPalGlobalPalStorageExportOption();
};

