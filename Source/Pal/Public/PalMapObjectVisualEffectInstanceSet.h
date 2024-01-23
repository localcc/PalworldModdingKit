#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectVisualEffectInstanceSet.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FPalMapObjectVisualEffectInstanceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Instances;
    
    PAL_API FPalMapObjectVisualEffectInstanceSet();
};

