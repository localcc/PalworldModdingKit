#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionCompositeBase.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionCompositeWorker.generated.h"

class UPalAIActionBase;

UCLASS(Blueprintable)
class UPalAIActionCompositeWorker : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> WaitActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> ApproachActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> WaitForWorkableActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> WorkingActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBase> CurrentActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeedFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWalkSpeed;
    
public:
    UPalAIActionCompositeWorker();
    UFUNCTION(BlueprintCallable)
    void UnregisterFixAssignWork();
    
    UFUNCTION(BlueprintCallable)
    bool TryFindNextWork();
    
    UFUNCTION(BlueprintCallable)
    void RegisterFixedAssignWorkAttack(const FGuid& MapObjectModelInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFixedAssignWork(const FGuid& WorkId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickInWaitAction(float DeltaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAction(UPalAIActionBase* action);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetWorkable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetAssignable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedToTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionWaitForWorkable();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionWait();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionApproachToWorkArea();
    
};

