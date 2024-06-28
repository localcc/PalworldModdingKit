#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalBuildObjectMaterialArray.h"
#include "PalBuildObjectVisualControlComponent.generated.h"

class UChildActorComponent;
class UDecalComponent;
class UMaterialInterface;
class UMeshComponent;
class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBuildObjectVisualControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, FPalBuildObjectMaterialArray> NormalMaterialMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDecalComponent*, UMaterialInterface*> DecalNormalMaterialMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DamageNiagaraComp;
    
public:
    UPalBuildObjectVisualControlComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReplicatedChildActor(UChildActorComponent* ChildActorComponent);
    
};

