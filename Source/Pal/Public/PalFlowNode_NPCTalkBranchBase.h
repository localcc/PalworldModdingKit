#pragma once
#include "CoreMinimal.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_NPCTalkBranchBase.generated.h"

class UPalNPCTalkSystem;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_NPCTalkBranchBase : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ChoiceMsgIDList;
    
public:
    UPalFlowNode_NPCTalkBranchBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnConfirmChoice(UPalNPCTalkSystem* TalkSystem, const FName& ChoiceMsgID, const int32 ChoiceIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetRowNames() const;
    
};

