#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalAIControllerWorkerModule.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalAIControllerWorkerModule : public UObject {
    GENERATED_BODY()
public:
    UPalAIControllerWorkerModule();
};

