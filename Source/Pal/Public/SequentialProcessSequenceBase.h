#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SequentialProcessSequenceBase.generated.h"

class USequentialProcessHandle;

UCLASS(Abstract, Blueprintable)
class USequentialProcessSequenceBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USequentialProcessHandle*> ProcessHandles;
    
public:
    USequentialProcessSequenceBase();

};

