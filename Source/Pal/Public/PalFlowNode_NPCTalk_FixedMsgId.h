#pragma once
#include "CoreMinimal.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_NPCTalk_FixedMsgId.generated.h"

class UPalNPCTalkSystem;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_NPCTalk_FixedMsgId : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MsgIdList;
    
public:
    UPalFlowNode_NPCTalk_FixedMsgId();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEndText(UPalNPCTalkSystem* TalkSystem);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetRowNames() const;
    
};

