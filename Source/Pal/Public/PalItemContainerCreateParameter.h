#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemPermission.h"
#include "PalItemContainerCreateParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalItemContainerCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemPermission Permission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemContainerBelongInfo BelongInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> InitialItems;
    
    PAL_API FPalItemContainerCreateParameter();
};

