#pragma once
#include "CoreMinimal.h"
#include "PalDungeonRewardSpawnerPointBehaviour.h"
#include "PalDungeonRewardSpawnerPointBehaviour_Cage.generated.h"

class APalCapturedCage;

UCLASS(Blueprintable)
class PAL_API UPalDungeonRewardSpawnerPointBehaviour_Cage : public UPalDungeonRewardSpawnerPointBehaviour {
    GENERATED_BODY()
public:
    UPalDungeonRewardSpawnerPointBehaviour_Cage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnObtainedCharacter_ServerInternal(APalCapturedCage* CapturedCage);
    
};

