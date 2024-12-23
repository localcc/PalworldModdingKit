#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalActionType.h"
#include "PalMapObject.h"
#include "PalMapObjectTreasureBox.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API APalMapObjectTreasureBox : public APalMapObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropItemLocalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongHoldInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalActionType InteractPlayerActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLockRiding;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenDelegate OnOpenDelegate;
    
    APalMapObjectTreasureBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerUnlockElemental();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerOpen();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnlockElementalInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveOpenInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyStartOpenInAnimation();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastTriggerUnlockElemental();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastTriggerOpen();
    
};

