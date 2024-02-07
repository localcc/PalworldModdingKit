#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalFoliageDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFoliageDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalFoliageDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

