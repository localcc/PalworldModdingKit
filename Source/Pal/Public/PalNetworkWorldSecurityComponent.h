#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalNetworkWorldSecurityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkWorldSecurityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkWorldSecurityComponent(const FObjectInitializer& ObjectInitializer);

};

