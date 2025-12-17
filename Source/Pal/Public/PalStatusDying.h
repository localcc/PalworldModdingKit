#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatusDying.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStatusDying : public UPalStatusBase {
    GENERATED_BODY()
public:
    UPalStatusDying();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsOtomoRevive() const;
    
};

