#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequentialProcessHandle.generated.h"

class USequentialProcessHandle;

UCLASS(Blueprintable)
class USequentialProcessHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USequentialProcessHandle*> ChildProcessHandles;
    
public:
    USequentialProcessHandle();

};

