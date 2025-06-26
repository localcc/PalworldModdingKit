#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalNetworkNPCTalkRequestData.generated.h"

class UPalNPCTalkFlowComponent;

USTRUCT(BlueprintType)
struct FPalNetworkNPCTalkRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNPCTalkFlowComponent* TalkFlowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetworkInvokeName;
    
    PAL_API FPalNetworkNPCTalkRequestData();
};

