#pragma once
#include "CoreMinimal.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPalBoxSortWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPalBoxSortWindow : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIPalBoxSortWindow();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestSort(const FPalCharacterContainerSortInfo& SortInfo);
    
};

