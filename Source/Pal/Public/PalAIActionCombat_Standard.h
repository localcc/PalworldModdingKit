#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCombatBase.h"
#include "PalAIActionCombat_Standard.generated.h"

class UPalActiveSkill;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionCombat_Standard : public UPalAIActionCombatBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalActiveSkill* CommonAttackSkill;
    
public:
    UPalAIActionCombat_Standard();
};

