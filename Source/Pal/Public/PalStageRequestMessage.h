#pragma once
#include "CoreMinimal.h"
#include "EPalStageRequestMessageType.h"
#include "PalStageRequestMessage.generated.h"

USTRUCT(BlueprintType)
struct FPalStageRequestMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalStageRequestMessageType MessageType;
    
    PAL_API FPalStageRequestMessage();
};

