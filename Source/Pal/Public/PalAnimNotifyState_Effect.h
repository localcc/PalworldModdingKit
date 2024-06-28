#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "PalAnimNotifyState_Effect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_Effect : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> UserParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleWithMesh;
    
public:
    UPalAnimNotifyState_Effect();

};

