#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PalAnimNotifyState_AttackCollision.generated.h"

class AActor;
class UPalHitFilter;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_AttackCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName attachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableHitStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideHitStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalHitFilter* AttackFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediateUpdateOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* ShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> ShapeComponents;
    
    UPalAnimNotifyState_AttackCollision();
private:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* MyHitComponent, AActor* HitActor, UPrimitiveComponent* HitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount) const;
    
};

