#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStateMachine.generated.h"

class UPalStateMachineStateBase;

UCLASS(Blueprintable)
class PAL_API UPalStateMachine : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UPalStateMachineStateBase*> StateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalStateMachineStateBase* CurrentState;
    
public:
    UPalStateMachine();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Start(UClass* StartClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStateMachineStateBase* GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(UClass* ToStateClass);
    
    UFUNCTION(BlueprintCallable)
    void AddState(UPalStateMachineStateBase* State);
    
};

