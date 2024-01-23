#pragma once
#include "CoreMinimal.h"
#include "PalItemRecipeMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemRecipeMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialCount;
    
    PAL_API FPalItemRecipeMaterialInfo();
};

