#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectLockPickingModule.generated.h"

class UPalHUDDispatchParameterBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectLockPickingModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndPickingGame, bool, IsSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPickingGame OnEndPickingGameDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAnyonePicking;
    
public:
    UPalMapObjectLockPickingModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndPickingGame_Client(UPalHUDDispatchParameterBase* Param);
    
};

