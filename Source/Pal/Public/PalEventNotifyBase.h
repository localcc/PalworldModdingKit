#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalEventNotifyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalEventNotifyBase : public UObject {
    GENERATED_BODY()
public:
    UPalEventNotifyBase();
};

