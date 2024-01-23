#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCombatBase.h"
#include "PalAIActionBaseCampFighterCombatGunner.generated.h"

class UPalMapObjectDefenseBulletLauncherModel;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampFighterCombatGunner : public UPalAIActionCombatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceAngleRange;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalMapObjectDefenseBulletLauncherModel> WeakDefenseModel;
    
public:
    UPalAIActionBaseCampFighterCombatGunner();
};

