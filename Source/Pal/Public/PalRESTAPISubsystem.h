#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PalRESTAPISubsystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRESTAPISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPalRESTAPISubsystem();

};

