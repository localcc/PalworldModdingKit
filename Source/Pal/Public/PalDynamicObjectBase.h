#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalDynamicObjectBase.generated.h"

UCLASS(Blueprintable)
class APalDynamicObjectBase : public AActor {
    GENERATED_BODY()
public:
    APalDynamicObjectBase(const FObjectInitializer& ObjectInitializer);

};

