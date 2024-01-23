#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalUserWidget.h"
#include "PalCommonScrollListBase.generated.h"

class UPalItemSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalCommonScrollListBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalCommonScrollListBase();
protected:
    UFUNCTION(BlueprintCallable)
    void MoveItem(const int32 Num, UPalItemSlot* MoveItemSlot, const FPalContainerId& TargetContainerId);
    
};

