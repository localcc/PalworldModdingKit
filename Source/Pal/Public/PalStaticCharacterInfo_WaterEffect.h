#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStaticCharacterInfo_WaterEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_WaterEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    PAL_API FPalStaticCharacterInfo_WaterEffect();
};

