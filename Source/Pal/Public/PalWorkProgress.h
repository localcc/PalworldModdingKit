#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkBase.h"
#include "PalWorkProgress.generated.h"

class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalWorkProgress : public UPalWorkBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyWorkProgressDelegate, UPalWorkProgress*, WorkProgress);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkProgressDelegate OnUpdateWorkAmountInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyWorkProgressDelegate OnReflectWorkAmountDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RequiredWorkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWorkAmount, meta=(AllowPrivateAccess=true))
    float CurrentWorkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentWorkAmountByLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> WorkingPlayerUIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WorkExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float AutoWorkSelfAmountBySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNotAllowReactionOnWorkComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressTimeSinceLastTick;
    
public:
    UPalWorkProgress();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWorkAmount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRequiredWorkAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainWorkPredicateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainWorkAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWorkAmount() const;
    
};

