#pragma once
#include "CoreMinimal.h"
#include "Engine/ActorChannel.h"
#include "PalActorChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalActorChannel : public UActorChannel {
    GENERATED_BODY()
public:
    UPalActorChannel();
};

