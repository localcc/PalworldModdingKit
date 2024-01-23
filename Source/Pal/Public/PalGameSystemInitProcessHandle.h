#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGameSystemInitProcessHandle.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS(Blueprintable)
class UPalGameSystemInitProcessHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalGameSystemInitProcessHandle*> ChildProcessHandles;
    
public:
    UPalGameSystemInitProcessHandle();
};

