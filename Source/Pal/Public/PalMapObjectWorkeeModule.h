#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectWorkeeModuleWorkDelegateDelegate.h"
#include "PalMapObjectWorkeeModule.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable)
class UPalMapObjectWorkeeModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetWork, meta=(AllowPrivateAccess=true))
    UPalWorkBase* TargetWork;
    
public:
    UPalMapObjectWorkeeModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetWork();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkBase* GetWork() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyWork(FPalMapObjectWorkeeModuleWorkDelegate Delegate);
    
};

