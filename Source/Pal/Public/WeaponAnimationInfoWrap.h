#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeaponAnimationInfo.h"
#include "WeaponAnimationInfoWrap.generated.h"

UCLASS(Blueprintable)
class UWeaponAnimationInfoWrap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAnimationInfo Data;
    
    UWeaponAnimationInfoWrap();

    UFUNCTION(BlueprintCallable)
    void SetData(const FWeaponAnimationInfo& Input);
    
};

