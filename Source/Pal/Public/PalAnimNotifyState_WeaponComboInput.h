#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EPalWeaponComboInputTrigger.h"
#include "PalAnimNotifyState_WeaponComboInput.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_WeaponComboInput : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWeaponComboInputTrigger InputType;
    
public:
    UPalAnimNotifyState_WeaponComboInput();

};

