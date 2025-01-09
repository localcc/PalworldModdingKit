#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "PalFarmSkillFruitsVisualComponent.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFarmSkillFruitsVisualComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SpawnFX;
    
public:
    UPalFarmSkillFruitsVisualComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisual();
    
};

