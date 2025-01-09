#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalDyingEndInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDyingEndInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID LastAttackerInstanceID;
    

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstantDeath;
    PAL_API FPalDyingEndInfo();
};

