#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkBase.h"
#include "PalWorkMonsterFarm.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkMonsterFarm : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatInterval ActionIntervalSeconds;
    
public:
    UPalWorkMonsterFarm();
};

