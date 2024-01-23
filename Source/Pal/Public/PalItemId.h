#pragma once
#include "CoreMinimal.h"
#include "PalDynamicItemId.h"
#include "PalItemId.generated.h"

USTRUCT(BlueprintType)
struct FPalItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDynamicItemId DynamicId;
    
    PAL_API FPalItemId();
};

