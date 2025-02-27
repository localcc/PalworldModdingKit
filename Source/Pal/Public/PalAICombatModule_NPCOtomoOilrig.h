#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule_Wild.h"
#include "PalAICombatModule_NPCOtomoOilrig.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_NPCOtomoOilrig : public UPalAICombatModule_Wild {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanTargetRange;
    
public:
    UPalAICombatModule_NPCOtomoOilrig();

};

