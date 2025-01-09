#pragma once
#include "CoreMinimal.h"
#include "IndividualCharacterParameterDelegateDelegate.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FIndividualCharacterParameterDelegate, UPalIndividualCharacterHandle*, Handle, UPalIndividualCharacterParameter*, Parameter);

