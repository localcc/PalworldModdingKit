#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EPalFootType.h"
#include "EPalLandingType.h"
#include "PalAnimNotify_FootStep.generated.h"

class AActor;
class UObject;
class UPalFootStepEffectAssetBase;
class UPalStaticCharacterParameterComponent;

UCLASS(Blueprintable, CollapseCategories)
class UPalAnimNotify_FootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalFootStepEffectAssetBase> DefaultEffectAssetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalFootStepEffectAssetBase* EffectAssetCache;
    
public:
    UPalAnimNotify_FootStep();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnFootStepEffect(UObject* WorldObject, EPalLandingType LandingType, TEnumAsByte<EPhysicalSurface> PhysicalSurface, const FVector& Location, const FRotator& Rotation, UPalStaticCharacterParameterComponent* StaticParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnFootStepDecal(AActor* Owner, TEnumAsByte<EPhysicalSurface> PhysicalSurface, EPalFootType FootType, FVector Location, FVector CurrentNormal, float LifeSpan, float FadeTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetFloorPosition(AActor* Owner, FTransform FootTransform, FHitResult& HitResult) const;
    
};

