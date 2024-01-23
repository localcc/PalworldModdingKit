#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "PalDungeonLevelDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDungeonLevelDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LevelBounds;
    
    UPalDungeonLevelDataAsset();
};

