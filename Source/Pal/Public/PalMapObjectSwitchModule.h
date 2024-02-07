#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectSwitchState.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectSwitchModule.generated.h"

class UPalMapObjectSwitchModule;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectSwitchModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectSwitchModule*, Module);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateSwitchStateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SwitchState, meta=(AllowPrivateAccess=true))
    EPalMapObjectSwitchState SwitchState;
    
public:
    UPalMapObjectSwitchModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SwitchState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectSwitchState GetSwitchState() const;
    
};

