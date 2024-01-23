#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIAction_LeaveBase.generated.h"

class AActor;
class APalCharacter;
class UPalCharacterMovementComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PAL_API UPalAIAction_LeaveBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterMovementComponent* Movement;
    
public:
    UPalAIAction_LeaveBase();
    UFUNCTION(BlueprintCallable)
    void InitializeObject(AActor* CombatTarget, APalCharacter* SelfCharactor);
    
};

