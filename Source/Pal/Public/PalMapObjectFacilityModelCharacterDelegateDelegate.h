#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFacilityModelCharacterDelegateDelegate.generated.h"

class UPalIndividualCharacterHandle;
class UPalMapObjectConcreteModelBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalMapObjectFacilityModelCharacterDelegate, UPalMapObjectConcreteModelBase*, Model, UPalIndividualCharacterHandle*, IndividualHandle);

