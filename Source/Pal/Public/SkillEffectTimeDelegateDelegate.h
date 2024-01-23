#pragma once
#include "CoreMinimal.h"
#include "SkillEffectSpawnParameter.h"
#include "SkillEffectTimeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSkillEffectTimeDelegate, const FSkillEffectSpawnParameter&, Parameter);

