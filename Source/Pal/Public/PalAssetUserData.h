#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "PalAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPalAssetUserData();

};

