#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalMapObjectWorldDisposer.generated.h"

class UPalMapObjectWorldDisposerBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectWorldDisposer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectWorldDisposerBase*> WorldDisposers;
    
public:
    UPalMapObjectWorldDisposer();
};

