#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGameStateReplicatorBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalGameStateReplicatorBase : public UObject {
    GENERATED_BODY()
public:
    UPalGameStateReplicatorBase();
};

