#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDamageReactionComponent.h"
#include "PalSkillDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSkillDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDelegate OnDamageDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalSkillDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

