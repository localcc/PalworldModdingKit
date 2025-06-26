#pragma once
#include "CoreMinimal.h"
#include "PalDungeonRewardSpawnerContent.h"
#include "PalDungeonRewardSpawnerContent_Cage.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDungeonRewardSpawnerContent_Cage : public UPalDungeonRewardSpawnerContent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bObtained;
    
public:
    UPalDungeonRewardSpawnerContent_Cage();

};

