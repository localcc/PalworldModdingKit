#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "CommonLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class COMMONGAME_API UCommonLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UCommonLocalPlayer();

};

