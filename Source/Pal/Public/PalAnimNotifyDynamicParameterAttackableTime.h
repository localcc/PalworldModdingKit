#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalAnimNotifyDynamicParameterBase.h"
#include "PalAnimNotifyDynamicParameterAttackableTime.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPalAnimNotifyDynamicParameterAttackableTime : public UPalAnimNotifyDynamicParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> AttackResponseMap;
    
    UPalAnimNotifyDynamicParameterAttackableTime();

};

