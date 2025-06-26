#pragma once
#include "CoreMinimal.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalFlowNode_NPCTalkCountBranch.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_NPCTalkCountBranch : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
    UPalFlowNode_NPCTalkCountBranch();

};

