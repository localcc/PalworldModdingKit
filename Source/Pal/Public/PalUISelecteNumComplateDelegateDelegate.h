#pragma once
#include "CoreMinimal.h"
#include "EPalUISelectNumResult.h"
#include "PalUISelecteNumComplateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPalUISelecteNumComplateDelegate, EPalUISelectNumResult, resultType, int32, selectedNum);

