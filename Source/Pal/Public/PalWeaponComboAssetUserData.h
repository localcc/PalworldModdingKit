#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "PalWeaponComboAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalWeaponComboAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> StaminaConsumeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseInOverheat;
    
    UPalWeaponComboAssetUserData();

};

