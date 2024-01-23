#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterContainerSingleDelegateDelegate.generated.h"

class UPalIndividualCharacterContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalIndividualCharacterContainerSingleDelegate, UPalIndividualCharacterContainer*, Container);

