#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalLongPressObject.generated.h"

UCLASS(Blueprintable)
class UPalLongPressObject : public UObject {
    GENERATED_BODY()
public:
    UPalLongPressObject();
private:
    UFUNCTION(BlueprintCallable)
    void ReleaseCallback();
    
    UFUNCTION(BlueprintCallable)
    void PressCallback();
    
    UFUNCTION(BlueprintCallable)
    void LongPressCallback();
    
};

