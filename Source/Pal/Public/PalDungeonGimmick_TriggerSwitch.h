#pragma once
#include "CoreMinimal.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_TriggerSwitch.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_TriggerSwitch : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerCooldownInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectPlayerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> InteractingActors;
    
public:
    APalDungeonGimmick_TriggerSwitch(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

