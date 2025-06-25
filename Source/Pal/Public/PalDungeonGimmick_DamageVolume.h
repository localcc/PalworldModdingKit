#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDungeonGimmickTriggerTargetInterface.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_DamageVolume.generated.h"

class APalActivatableDamageAreaBase;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_DamageVolume : public APalDungeonLevelGimmickBase, public IPalDungeonGimmickTriggerTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTriggerOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TriggerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunchInfinitely;
    
public:
    APalDungeonGimmick_DamageVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APalActivatableDamageAreaBase* GetActivatableDamageArea() const;
    

    // Fix for true pure virtual functions not being implemented
};

