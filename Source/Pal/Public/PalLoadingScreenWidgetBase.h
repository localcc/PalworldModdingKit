#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalLoadingScreenWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalLoadingScreenWidgetBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalLoadingScreenWidgetBase();
};

