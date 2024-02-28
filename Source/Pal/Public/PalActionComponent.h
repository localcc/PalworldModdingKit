#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ActionDynamicParameter.h"
#include "EPalActionType.h"
#include "Templates/SubclassOf.h"
#include "PalActionComponent.generated.h"

class AActor;
class APalCharacter;
class UPalActionBase;
class UPalActionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllActionFinishDelegate, const UPalActionComponent*, ActionComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionStartDelegate, const UPalActionBase*, action);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionNotify, const UPalActionBase*, action, FName, NotifyName);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalActionType, TSubclassOf<UPalActionBase>> ActionMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllActionFinishDelegate OnAllActionFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionStartDelegate OnActionBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionNotify OnActionNotifyDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalActionBase* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalActionBase*> ActionQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalActionBase*> TerminateWaitActionList;
    
public:
    UPalActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionParameter(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionLocationByType(FVector Location, EPalActionType Type);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionLocation(FVector Location, TSubclassOf<UPalActionBase> actionClass);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionByTypeParameter(FActionDynamicParameter Param, EPalActionType Type);
    
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayActionByType(AActor* ActionTarget, EPalActionType Type);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayAction_ToServer(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAction_ToALL(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayAction_LocalOnly(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
private:
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayAction_Internal(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalActionBase* PlayAction(AActor* ActionTarget, TSubclassOf<UPalActionBase> actionClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> reasonType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompleteCharacter(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalActionType GetCurrentActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalActionBase* GetCurrentAction() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CancelAllAction_ToServer(int32 ID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CancelAllAction_ToALL(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllAction_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAllAction();
    
    UFUNCTION(BlueprintCallable)
    void CancelActionByType(EPalActionType Type);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CancelAction_ToServer(int32 ID, FGuid ActionID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CancelAction_ToALL(int32 ID, FGuid ActionID);
    
    UFUNCTION(BlueprintCallable)
    void CancelAction_Internal(FGuid ActionID);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAction(UPalActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActionIsEmpty();
    
};

