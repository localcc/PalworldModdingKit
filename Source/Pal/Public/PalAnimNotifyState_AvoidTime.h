#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Engine/EngineTypes.h"
#include "PalAnimNotifyState_AvoidTime.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPalAnimNotifyState_AvoidTime : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> AttackResponseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionResponse>> BulletResponseMap;
    
public:
    UPalAnimNotifyState_AvoidTime();
};

