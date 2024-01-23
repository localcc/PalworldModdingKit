#pragma once
#include "CoreMinimal.h"
#include "CommonLocalPlayer.h"
#include "PalLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalLocalPlayer : public UCommonLocalPlayer {
    GENERATED_BODY()
public:
    UPalLocalPlayer();
};

