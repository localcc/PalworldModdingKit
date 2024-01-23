#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGameSystemInitSequenceBase.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS(Abstract, Blueprintable)
class UPalGameSystemInitSequenceBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalGameSystemInitProcessHandle*> ProcessHandles;
    
public:
    UPalGameSystemInitSequenceBase();
};

