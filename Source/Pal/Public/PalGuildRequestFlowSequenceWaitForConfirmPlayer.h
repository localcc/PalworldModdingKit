#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SequentialProcessSequenceBase_WaitOneProcess.h"
#include "PalGuildRequestFlowSequenceWaitForConfirmPlayer.generated.h"

class USequentialProcessSequenceBase;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalGuildRequestFlowSequenceWaitForConfirmPlayer : public USequentialProcessSequenceBase_WaitOneProcess {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerUIdWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USequentialProcessSequenceBase* NextSequenceIfConfirmYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressTime;
    
public:
    UPalGuildRequestFlowSequenceWaitForConfirmPlayer();

};

