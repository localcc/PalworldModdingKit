#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectWorkeeModuleMulticastDelegateDelegate.h"
#include "PalMapObjectWorkeeModuleWorkDelegateDelegate.h"
#include "PalMapObjectWorkeeModule.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalMapObjectWorkeeModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectWorkeeModuleMulticastDelegate OnChangeCannotApproachDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetWork, meta=(AllowPrivateAccess=true))
    UPalWorkBase* TargetWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> CannotApproachWorkIdSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CannotApproachByWork, meta=(AllowPrivateAccess=true))
    bool bCannotApproachByWork;
    
public:
    UPalMapObjectWorkeeModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetWork();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CannotApproachByWork();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CannotApproachByWork() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyWork(FPalMapObjectWorkeeModuleWorkDelegate Delegate);
    
};

