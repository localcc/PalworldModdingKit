#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigNPCSpawnerBase.generated.h"

class APalCharacter;
class UPalIndividualCharacterHandle;
class UPalSquad;

UCLASS(Blueprintable)
class PAL_API APalOilrigNPCSpawnerBase : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSquad* Squad;
    
public:
    APalOilrigNPCSpawnerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetOilrig_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeOneNPCCombatMode(APalCharacter* Character, bool IsCombat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyWipedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWipedOut();
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterToGroup(UPalIndividualCharacterHandle* Handle);
    

    // Fix for true pure virtual functions not being implemented
};

