#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStateMachineStateBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalStateMachineStateBase : public UObject {
    GENERATED_BODY()
public:
    UPalStateMachineStateBase();
};

