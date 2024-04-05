#pragma once
#include "CoreMinimal.h"
#include "SequentialProcessSequenceBase.h"
#include "SequentialProcessSequenceBase_WaitOneProcess.generated.h"

class USequentialProcessHandle;

UCLASS(Abstract, Blueprintable)
class USequentialProcessSequenceBase_WaitOneProcess : public USequentialProcessSequenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USequentialProcessHandle* SelfManagedProcessHandle;
    
public:
    USequentialProcessSequenceBase_WaitOneProcess();

};

