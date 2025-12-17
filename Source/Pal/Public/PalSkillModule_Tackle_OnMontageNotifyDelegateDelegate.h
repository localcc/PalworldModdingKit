#pragma once
#include "CoreMinimal.h"
#include "PalSkillModule_Tackle_OnMontageNotifyDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalSkillModule_Tackle_OnMontageNotifyDelegate, UAnimMontage*, Montage, FName, NotifyName);

