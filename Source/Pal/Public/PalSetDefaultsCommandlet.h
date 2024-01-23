#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "PalSetDefaultsCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalSetDefaultsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPalSetDefaultsCommandlet();
};

