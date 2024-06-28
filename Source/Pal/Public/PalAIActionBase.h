#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "AITypes.h"
#include "Actions/PawnAction_BlueprintBase.h"
#include "EPalAIActionCategory.h"
#include "EPalMovementSpeedType.h"
#include "PalAIActionDynamicParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBase.generated.h"

class AController;
class APalAIController;
class APalCharacter;
class APawn;
class UObject;
class UPalAIActionBase;
class UPalAIActionComponent;
class UPalActionComponent;
class UPalCharacterParameterComponent;
class UPawnAction;
class UPawnActionsComponent;

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionBase : public UPawnAction_BlueprintBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionDelegate, UPalAIActionBase*, action);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionByDelegate, UPalAIActionBase*, action, const UPawnAction*, byAction);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoStopBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAIActionCategory AiActionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalAIActionDynamicParameter DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAIRequestPriority::Type> DefaultPriority;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionDelegate OnStartActionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionByDelegate OnPauseActionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionDelegate OnResumeActionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionDelegate OnFinishActionDelegate;
    
    UPalAIActionBase();

    UFUNCTION(BlueprintCallable)
    void SetWalkSpeed_ForAIAction(EPalMovementSpeedType MoveSpeedType);
    
    UFUNCTION(BlueprintCallable)
    UPalAIActionBase* SetAIActionClassParameter(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    bool PushChildAction(UPawnAction* action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChildActionFinished(UPawnAction* action, EPawnActionResult::Type WithResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSimpleName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EAIRequestPriority::Type GetRequestPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalAIController* GetPalAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPawnActionsComponent* GetOwnerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalCharacterParameterComponent* GetCharacterParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionComponent* GetAIActionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActionComponent* GetActionComponent() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPawnAction* CreateActionInstanceFixName(UObject* WorldContextObject, TSubclassOf<UPawnAction> actionClass, FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionAbort(APawn* ControlledPawn);
    
};

