#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalCopyMeshVisualEffect.generated.h"

class UCapsuleComponent;
class UMaterialInstanceDynamic;
class UPalPoseableMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable)
class APalCopyMeshVisualEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* RootCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalPoseableMeshComponent* PoseableSkeletalMeshComponent;
    
    APalCopyMeshVisualEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(USkeletalMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> GetMainMeshMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkinnedMeshComponent* GetMainMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMesh(TArray<USceneComponent*>& OutComponent) const;
    
};

