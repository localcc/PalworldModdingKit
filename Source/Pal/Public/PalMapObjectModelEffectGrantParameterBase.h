#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalMapObjectModelEffectGrantParameterBase.generated.h"

class UPalMapObjectModel;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectModelEffectGrantParameterBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectModel* OwnerModel;
    
    UPalMapObjectModelEffectGrantParameterBase();
};

