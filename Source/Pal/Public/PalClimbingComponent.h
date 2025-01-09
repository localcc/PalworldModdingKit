#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "PalClimbingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalClimbingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbMoveSpeedRateBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbStaminaSpeedRateBuff;
    
public:
    UPalClimbingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateClimbBuff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryClimbAfterGrappling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartClimb(const FHitResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClimbStaminaSpeedRateBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClimbMoveSpeedRateBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceCancelClimb();
    
};

