#pragma once
#include "CoreMinimal.h"
#include "EPalWorkDefenseCombatType.h"
#include "EPalWorkType.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalWorkAssignHandleId.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBaseCampDefenseBase.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UPalAICombatModule;
class UPalActionBase;

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionBaseCampDefenseBase : public UPalAIActionBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalCharacter* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAICombatModule* CombatModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkType CurrentWorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalWorkAssignHandleId CurrentWorkAssignId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkDefenseCombatType DefenseCombatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> DefenseActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> DefenseWaitActionClass;
    
public:
    UPalAIActionBaseCampDefenseBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalAIController* GetControllerRef();
    

    // Fix for true pure virtual functions not being implemented
};

