#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimationPoseType.h"
#include "WeaponNotifyAnimationInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWeaponNotifyAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAnimationPoseType, UAnimMontage*> PoseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAutoStop;
    
    PAL_API FWeaponNotifyAnimationInfo();
};

