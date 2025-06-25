#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponAnimationInfo.h"
#include "WeaponAnimationInfoWrap.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_WeaponAnimationInfoWrap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimationInfo Data;
    
    UDEPRECATED_WeaponAnimationInfoWrap();

    UFUNCTION(BlueprintCallable)
    void SetData(const FWeaponAnimationInfo& Input);
    
};

