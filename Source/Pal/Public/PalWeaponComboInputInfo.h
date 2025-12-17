#pragma once
#include "CoreMinimal.h"
#include "EPalWeaponComboInputTrigger.h"
#include "PalWeaponComboInputInfo.generated.h"

class UAnimNotifyState;

USTRUCT(BlueprintType)
struct FPalWeaponComboInputInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimNotifyState> SourceNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWeaponComboInputTrigger Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
    PAL_API FPalWeaponComboInputInfo();
};

