#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/FlowNode.h"
#include "PalNetworkNPCTalkRequestData.h"
#include "PalFlowNode_NPCTalkBase.generated.h"

class APalCharacter;
class UObject;
class UPalNPCTalkSystem;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_NPCTalkBase : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetworkInvokeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveNetworkInvoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvokeWhenAlreadySaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> WeakWorldContextObject;
    
public:
    UPalFlowNode_NPCTalkBase();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestInvokeInServer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalNetworkNPCTalkRequestData MakeNetworkRequestData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetTalker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNPCTalkSystem* GetNPCTalkSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNetworkInvokeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTalkCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    FName BP_InvokePalNPCNetworkRequestInServer(const UObject* WorldContextObject, const FGuid& PlayerUId, const FPalNetworkNPCTalkRequestData& RequestData);
    
};

