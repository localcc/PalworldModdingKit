#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MonsterDetail.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MonsterDetail : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* IndividualHandle;
    
    UPalHUDDispatchParameter_MonsterDetail();
};

