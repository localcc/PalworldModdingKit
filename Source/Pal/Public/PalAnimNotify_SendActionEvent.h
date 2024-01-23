#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EPalCurrentActionNotifyType.h"
#include "PalAnimNotify_SendActionEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_SendActionEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalCurrentActionNotifyType NotifyType;
    
    UPalAnimNotify_SendActionEvent();
};

