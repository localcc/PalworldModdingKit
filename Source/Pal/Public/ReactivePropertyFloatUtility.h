#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReactivePropertyFloat.h"
#include "ReactivePropertyFloatValueChangeDelegateDelegate.h"
#include "ReactivePropertyFloatUtility.generated.h"

UCLASS(Blueprintable)
class UReactivePropertyFloatUtility : public UObject {
    GENERATED_BODY()
public:
    UReactivePropertyFloatUtility();
    UFUNCTION(BlueprintCallable)
    static void BindProperty(UPARAM(Ref) FReactivePropertyFloat& Property, FReactivePropertyFloatValueChangeDelegate Delegate);
    
};

