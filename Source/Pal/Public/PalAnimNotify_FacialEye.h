#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EPalFacialEyeType.h"
#include "PalAnimNotify_FacialEye.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PAL_API UPalAnimNotify_FacialEye : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFacialEyeType EyeType;
    
    UPalAnimNotify_FacialEye();
};

