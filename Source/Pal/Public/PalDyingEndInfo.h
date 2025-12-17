#pragma once
#include "CoreMinimal.h"
#include "EPalDeadType.h"
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

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDeadType DeadType;
    
    PAL_API FPalDyingEndInfo();
};

