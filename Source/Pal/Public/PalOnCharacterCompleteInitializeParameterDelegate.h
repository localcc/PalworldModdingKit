#pragma once
#include "CoreMinimal.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.generated.h"

class APalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalOnCharacterCompleteInitializeParameter, APalCharacter*, InCharacter);

