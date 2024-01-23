#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalFoliageInstallDataAsset.generated.h"

class UPalFoliageInstallDataAssetByIFA;

UCLASS(Blueprintable)
class PAL_API UPalFoliageInstallDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UPalFoliageInstallDataAssetByIFA>> InstallDataSetMap;
    
public:
    UPalFoliageInstallDataAsset();
};

