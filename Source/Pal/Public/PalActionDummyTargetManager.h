#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalActionDummyTargetManager.generated.h"

class APalActionDummyTargetActor;

UCLASS(Blueprintable)
class UPalActionDummyTargetManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalActionDummyTargetActor*> ActionDummyTargetCache;
    
public:
    UPalActionDummyTargetManager();
};

