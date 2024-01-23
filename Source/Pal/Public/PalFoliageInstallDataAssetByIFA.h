#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalFoliageInstallDataArray.h"
#include "PalFoliageInstallDataAssetByIFA.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalFoliageInstallDataAssetByIFA : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalFoliageInstallDataArray> InstallDataArrayMap;
    
public:
    UPalFoliageInstallDataAssetByIFA();
};

