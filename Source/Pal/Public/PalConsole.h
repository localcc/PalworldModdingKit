#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "PalConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalConsole : public UConsole {
    GENERATED_BODY()
public:
    UPalConsole();

};

