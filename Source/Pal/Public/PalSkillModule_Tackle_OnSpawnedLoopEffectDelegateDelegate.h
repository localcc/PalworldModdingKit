#pragma once
#include "CoreMinimal.h"
#include "PalSkillModule_Tackle_OnSpawnedLoopEffectDelegateDelegate.generated.h"

class APalSkillEffectBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalSkillModule_Tackle_OnSpawnedLoopEffectDelegate, APalSkillEffectBase*, LoopEffect);

