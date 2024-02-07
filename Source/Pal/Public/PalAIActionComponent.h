#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Actions/PawnActionsComponent.h"
#include "EPalAIActionCategory.h"
#include "EPalMovementSpeedType.h"
#include "PalAIActionDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionComponent.generated.h"

class UObject;
class UPalAIActionBase;
class UPalAIActionCompositeBase;
class UPawnAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAIActionComponent : public UPawnActionsComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalAIActionCompositeBase*> ActionCompositeRoots;
    
public:
    UPalAIActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateCurrentActionByClass(TSubclassOf<UPalAIActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkSpeed_ForAIAction(EPalMovementSpeedType MoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void SetRootComposite(UPalAIActionCompositeBase* NewCompositeAction, TEnumAsByte<EAIRequestPriority::Type> Priority);
    
    UFUNCTION(BlueprintCallable)
    UPalAIActionBase* SetActionClassParameter(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAction(const TSubclassOf<UPawnAction>& checkClass, TEnumAsByte<EAIRequestPriority::Type> checkPriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPawnAction* GetCurrentTopParentAction_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalAIActionCategory GetCurrentAIActionCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPawnAction* GetCurrentAction_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionCompositeBase* GetCompositeRoot(TEnumAsByte<EAIRequestPriority::Type> Priority) const;
    
    UFUNCTION(BlueprintCallable)
    void CacheControlledPawn_BP();
    
    UFUNCTION(BlueprintCallable)
    void AllCancelPushedAction(const UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void AllCancelActionPriorThanSoftScript(const UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void AllCancelAction_Logic_HardScript_Reaction(const UObject* Instigator);
    
};

