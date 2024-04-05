#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PalProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPalProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

