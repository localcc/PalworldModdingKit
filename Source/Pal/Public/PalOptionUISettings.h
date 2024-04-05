#pragma once
#include "CoreMinimal.h"
#include "PalOptionUISettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionUISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTextScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageTextMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayTutorial;
    
    PAL_API FPalOptionUISettings();
};

