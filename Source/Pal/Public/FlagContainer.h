#pragma once
#include "CoreMinimal.h"
#include "FlagContainer.generated.h"

USTRUCT(BlueprintType)
struct FFlagContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Flags;
    
public:
    PAL_API FFlagContainer();
};

