#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "PalClimbingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalClimbingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalClimbingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryClimbAfterGrappling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartClimb(const FHitResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceCancelClimb();
    
};

