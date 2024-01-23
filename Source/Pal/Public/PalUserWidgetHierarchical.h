#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUserWidgetHierarchical.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPalUserWidgetHierarchical : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUserWidgetHierarchical();
};

