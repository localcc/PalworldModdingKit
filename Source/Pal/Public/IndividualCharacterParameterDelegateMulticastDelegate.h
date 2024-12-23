#pragma once
#include "CoreMinimal.h"
#include "IndividualCharacterParameterDelegateMulticastDelegate.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIndividualCharacterParameterDelegateMulticast, UPalIndividualCharacterHandle*, Handle, UPalIndividualCharacterParameter*, Parameter);

