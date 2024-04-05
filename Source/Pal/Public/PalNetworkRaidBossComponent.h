#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalNetworkRaidBossComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkRaidBossComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkRaidBossComponent(const FObjectInitializer& ObjectInitializer);

};

