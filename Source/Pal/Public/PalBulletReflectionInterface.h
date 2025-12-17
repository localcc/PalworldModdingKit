#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalBulletReflectionInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalBulletReflectionInterface : public UInterface {
    GENERATED_BODY()
};

class IPalBulletReflectionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanReflect() const;
    
};

