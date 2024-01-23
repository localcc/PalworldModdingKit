#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EPalFacialMouthType.h"
#include "PalAnimNotify_FacialMouth.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_FacialMouth : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFacialMouthType MouthType;
    
    UPalAnimNotify_FacialMouth();
};

