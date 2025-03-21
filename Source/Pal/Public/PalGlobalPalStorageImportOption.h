#pragma once
#include "CoreMinimal.h"
#include "PalGlobalPalStorageImportOption.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageImportOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteData;
    
    PAL_API FPalGlobalPalStorageImportOption();
};

