#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalContainerBelongInfo.h"
#include "PalItemContainerBelongInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalItemContainerBelongInfo : public FPalContainerBelongInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllableOthers;
    
    PAL_API FPalItemContainerBelongInfo();
};

