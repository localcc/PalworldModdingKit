#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "EPalWazaID.h"
#include "PalAnimNotify_PlayNiagaraEffect.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_PlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> UserParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotSpawnWhenHidden;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWazaID, UNiagaraSystem*> WazaActionOverrideTemplete;
    
public:
    UPalAnimNotify_PlayNiagaraEffect();
};

