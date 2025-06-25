#pragma once
#include "CoreMinimal.h"
#include "FlowAsset.h"
#include "PalNPCTalkFlowAssetBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalNPCTalkFlowAssetBase : public UFlowAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishTalkFlow);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishTalkFlow OnFinishTalkFlowDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTalkCount;
    
public:
    UPalNPCTalkFlowAssetBase();

};

