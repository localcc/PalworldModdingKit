#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule.h"
#include "PalAICombatModule_BaseCamp.generated.h"

class UPalAIActionBaseCampFighter;

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_BaseCamp : public UPalAICombatModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalAIActionBaseCampFighter> ParentFighterAction;
    
public:
    UPalAICombatModule_BaseCamp();
};

