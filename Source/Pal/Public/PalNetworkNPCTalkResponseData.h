#pragma once
#include "CoreMinimal.h"
#include "PalNetworkNPCTalkResponseData.generated.h"

class UPalNPCTalkFlowComponent;

USTRUCT(BlueprintType)
struct FPalNetworkNPCTalkResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNPCTalkFlowComponent* TalkFlowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputPinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetworkInvokeName;
    
    PAL_API FPalNetworkNPCTalkResponseData();
};

