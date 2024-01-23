#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "PalAnimNotify_PlayNiagaraEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_PlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> UserParameterMap;
    
public:
    UPalAnimNotify_PlayNiagaraEffect();
};

