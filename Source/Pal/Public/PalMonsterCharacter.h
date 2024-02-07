#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInflictDamageNotifyInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalItemSlotId.h"
#include "PalNPC.h"
#include "PalMonsterCharacter.generated.h"

class AActor;
class APalCharacter;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalCharacterLiftupObjectComponent;
class UPalHUDDispatchParameterBase;

UCLASS(Blueprintable)
class PAL_API APalMonsterCharacter : public APalNPC, public IPalInteractiveObjectIndicatorInterface, public IPalInflictDamageNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCharacterLiftupObjectComponent* LiftupObjectComponent;
    
    APalMonsterCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SelectedFeedingItem(const FPalItemSlotId& itemSlotId, const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void MasterWazaUpdateWhenLevelUp(int32 addLevel, int32 nowLevel);
    
    UFUNCTION(BlueprintCallable)
    void MasterWazaSetup(APalCharacter* InCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLiftupObject() const;
    

    // Fix for true pure virtual functions not being implemented
};

