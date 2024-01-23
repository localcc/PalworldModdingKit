#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterContainerMulticastDelegateDelegate.generated.h"

class UPalIndividualCharacterContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalIndividualCharacterContainerMulticastDelegate, UPalIndividualCharacterContainer*, Container);

