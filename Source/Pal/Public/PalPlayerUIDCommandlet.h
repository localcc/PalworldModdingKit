#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "PalPlayerUIDCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalPlayerUIDCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPalPlayerUIDCommandlet();

};

