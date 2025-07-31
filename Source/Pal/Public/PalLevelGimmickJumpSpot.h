#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPalCharacterMovementCustomMode.h"
#include "PalLevelObjectActor.h"
#include "PalLevelGimmickJumpSpot.generated.h"

class AActor;
class UPalCharacterMovementComponent;
class USceneComponent;

UCLASS(Blueprintable)
class APalLevelGimmickJumpSpot : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDynamicMulticastDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDynamicMulticastDelegate OnLaunchCharacterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpFowardVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    APalLevelGimmickJumpSpot(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EventOnCharacterMovementModeChanged(UPalCharacterMovementComponent* MovementComponent, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void EventOnCharacterJumpOrFly(UPalCharacterMovementComponent* MovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void EventOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EventOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

