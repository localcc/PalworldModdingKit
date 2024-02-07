#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PalHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalHUD : public AHUD {
    GENERATED_BODY()
public:
    APalHUD(const FObjectInitializer& ObjectInitializer);

};

