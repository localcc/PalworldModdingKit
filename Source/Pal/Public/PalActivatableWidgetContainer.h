#pragma once
#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "PalActivatableWidgetContainer.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalActivatableWidgetContainer : public UCommonActivatableWidgetStack {
    GENERATED_BODY()
public:
    UPalActivatableWidgetContainer();

};

