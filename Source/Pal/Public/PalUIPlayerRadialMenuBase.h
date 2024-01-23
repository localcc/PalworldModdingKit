#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalUserWidget.h"
#include "PalUIPlayerRadialMenuBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIPlayerRadialMenuBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIPlayerRadialMenuBase();
private:
    UFUNCTION(BlueprintCallable)
    void SelectedFeed(const FPalItemSlotId& itemSlotId, const int32 itemNum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenOtomoFeedInventory();
    
};

