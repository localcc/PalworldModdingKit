#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObject.h"
#include "PalMapObjectTreasureBox.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API APalMapObjectTreasureBox : public APalMapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropItemLocalLocation;
    
public:
    APalMapObjectTreasureBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerOpen();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveOpenInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyStartOpenInAnimation();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastTriggerOpen();
    
};

