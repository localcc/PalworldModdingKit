#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalBuildObjectMaterialArray.h"
#include "PalBuildObjectMaterialInstanceDynamicArray.h"
#include "PalBuildObjectPaintData.h"
#include "PalBuildObjectVisualControlComponent.generated.h"

class UChildActorComponent;
class UDecalComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UNiagaraComponent;
class UPalMapObjectModelPaint;
class UPalMapObjectWorkPositionVisualizerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBuildObjectVisualControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, FPalBuildObjectMaterialArray> NormalMaterialMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, FPalBuildObjectMaterialInstanceDynamicArray> MaterialInstanceDynamicMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDecalComponent*, UMaterialInterface*> DecalNormalMaterialMapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DamageNiagaraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectWorkPositionVisualizerComponent*> WorkPositionVisualizers;
    
public:
    UPalBuildObjectVisualControlComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSetPaintDataInServer(UPalMapObjectModelPaint* Paint);
    
    UFUNCTION(BlueprintCallable)
    void OnReplicatedChildActor(UChildActorComponent* ChildActorComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPaintDataChanged(const FPalBuildObjectPaintData& NewPaintData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPaintData_ToAll(const FPalBuildObjectPaintData& InPaintData);
    
};

