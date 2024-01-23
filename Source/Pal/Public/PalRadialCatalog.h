#pragma once
#include "CoreMinimal.h"
#include "PalRadialCatalog.generated.h"

USTRUCT(BlueprintType)
struct FPalRadialCatalog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> Catalog;
    
    PAL_API FPalRadialCatalog();
};

