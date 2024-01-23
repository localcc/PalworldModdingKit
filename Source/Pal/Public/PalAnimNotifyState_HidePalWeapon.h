#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PalAnimNotifyState_HidePalWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_HidePalWeapon : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPalAnimNotifyState_HidePalWeapon();
};

