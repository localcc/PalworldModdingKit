#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "PalDimensionLockerTimeoutTimer.generated.h"

class UPalDimensionLockerControl;

UCLASS(Blueprintable)
class PAL_API UPalDimensionLockerTimeoutTimer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalDimensionLockerControl> WeakLockerControl;
    
public:
    UPalDimensionLockerTimeoutTimer();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimeout();
    
};

