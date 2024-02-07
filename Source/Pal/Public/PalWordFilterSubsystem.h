#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PalWordFilterSubsystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWordFilterSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPalWordFilterSubsystem();

};

