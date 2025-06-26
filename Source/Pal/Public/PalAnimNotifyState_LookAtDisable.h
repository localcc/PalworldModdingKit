#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PalAnimNotifyState_LookAtDisable.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_LookAtDisable : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableUVLookAt;
    
public:
    UPalAnimNotifyState_LookAtDisable();
};

