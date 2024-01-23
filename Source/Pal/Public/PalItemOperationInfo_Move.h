#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalItemOperationInfo_Move.generated.h"

USTRUCT(BlueprintType)
struct FPalItemOperationInfo_Move {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID ExecutorIndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemId> ItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemSlotId> FromSlotIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ToContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemSlotId> ToSlotIds;
    
    PAL_API FPalItemOperationInfo_Move();
};

