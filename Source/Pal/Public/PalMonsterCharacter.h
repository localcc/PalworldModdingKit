#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInflictDamageNotifyInterface.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalItemSlotId.h"
#include "PalNPC.h"
#include "PalMonsterCharacter.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UMaterialInterface;
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
public:
    APalMonsterCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SelectedFeedingItem(const FPalItemSlotId& itemSlotId, const int32 Num);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSkin(bool bIsActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLiftupObject() const;
    

    // Fix for true pure virtual functions not being implemented
};

