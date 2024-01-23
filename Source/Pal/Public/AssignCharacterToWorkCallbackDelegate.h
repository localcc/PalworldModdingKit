#pragma once
#include "CoreMinimal.h"
#include "AssignCharacterToWorkCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAssignCharacterToWorkCallback, bool, RequestResult);

