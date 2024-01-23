#pragma once
#include "CoreMinimal.h"
#include "PalContainerInfo.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemPermission.h"
#include "PalItemContainerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemContainerInfo : public FPalContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemContainerBelongInfo BelongInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemPermission Permission;
    
    PAL_API FPalItemContainerInfo();
};

