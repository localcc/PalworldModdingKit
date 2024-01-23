#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "NiagaraUIComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIAGARAUIRENDERER_API UNiagaraUIComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UNiagaraUIComponent();
};

