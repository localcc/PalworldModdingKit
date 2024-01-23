#pragma once
#include "CoreMinimal.h"
#include "PalAnimNotifyDynamicParameterBase.h"
#include "PalAnimNotifyDynamicParameterAttackCollision.generated.h"

class AActor;
class UPalHitFilter;
class UShapeComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UPalAnimNotifyDynamicParameterAttackCollision : public UPalAnimNotifyDynamicParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalHitFilter* AttackFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> TransientShapeComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HitStopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MyActor;
    
    UPalAnimNotifyDynamicParameterAttackCollision();
};

