#pragma once
#include "CoreMinimal.h"
#include "EPalContainerOperationRestrictType.h"
#include "PalContainerId.h"
#include "PalContainerInitializeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferenceSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOnSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalContainerOperationRestrictType OperationRestrictType;
    
    PAL_API FPalContainerInitializeParameter();
};

