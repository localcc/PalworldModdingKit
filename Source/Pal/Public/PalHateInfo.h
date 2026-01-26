#pragma once
#include "CoreMinimal.h"
#include "PalHateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalHateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    PAL_API FPalHateInfo();
};

