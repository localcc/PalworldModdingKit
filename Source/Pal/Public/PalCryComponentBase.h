#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalCryComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCryComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalCryComponentBase(const FObjectInitializer& ObjectInitializer);

};

