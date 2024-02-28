#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalMapObjectVisualEffectType.h"
#include "EPalStatusID.h"
#include "PalMapObjectVisualEffectInstanceSet.h"
#include "PalMapObjectVisualEffectComponent.generated.h"

class UPalMapObjectModel;
class UPalMapObjectModelEffectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectVisualEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalMapObjectVisualEffectType, FPalMapObjectVisualEffectInstanceSet> SpawnedEffectMap;
    
public:
    UPalMapObjectVisualEffectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateVisualByEffect(UPalMapObjectModelEffectBase* Effect);
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveEffect(UPalMapObjectModel* Model, UPalMapObjectModelEffectBase* Effect, const EPalStatusID StatusId);
    
    UFUNCTION(BlueprintCallable)
    void OnGrantedEffect(UPalMapObjectModel* Model, UPalMapObjectModelEffectBase* Effect);
    
};

