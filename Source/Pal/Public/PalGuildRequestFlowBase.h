#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SequentialProcessSystem.h"
#include "PalGuildRequestFlowBase.generated.h"

class UPalGuildRequestFlowBase;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalGuildRequestFlowBase : public USequentialProcessSystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGuildRequestFlowBase*, Flow);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid FlowId;
    
public:
    UPalGuildRequestFlowBase();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishFlow();
    
};

