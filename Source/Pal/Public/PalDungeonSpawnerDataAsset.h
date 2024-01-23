#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalDungeonSpawnerDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDungeonSpawnerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpawnerPatternNames;
    
    UPalDungeonSpawnerDataAsset();
};

