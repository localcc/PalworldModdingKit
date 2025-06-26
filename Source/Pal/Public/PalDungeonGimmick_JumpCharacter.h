#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_JumpCharacter.generated.h"

class AActor;
class ACharacter;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_JumpCharacter : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
    APalDungeonGimmick_JumpCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapTriggerCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchCharacter(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UShapeComponent* GetTriggerCollision() const;
    
};

