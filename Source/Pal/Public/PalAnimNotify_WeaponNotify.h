#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWeaponNotifyType.h"
#include "PalAnimNotify_WeaponNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UPalAnimNotify_WeaponNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponNotifyType WeaponNotifyType;
    
    UPalAnimNotify_WeaponNotify();
};

