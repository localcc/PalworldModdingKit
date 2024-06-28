#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectBasicBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectBasicBase : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectBasicBase(const FObjectInitializer& ObjectInitializer);

};

