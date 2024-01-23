#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PalRCONSubsystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRCONSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPalRCONSubsystem();
};

