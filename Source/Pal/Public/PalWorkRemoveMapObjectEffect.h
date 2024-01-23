#pragma once
#include "CoreMinimal.h"
#include "EPalStatusID.h"
#include "PalWorkBase.h"
#include "PalWorkRemoveMapObjectEffect.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkRemoveMapObjectEffect : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalStatusID TargetEffectType;
    
public:
    UPalWorkRemoveMapObjectEffect();
};

