#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectSpawnerDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropItemOnDamaged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalMapObjectSpawnerDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

