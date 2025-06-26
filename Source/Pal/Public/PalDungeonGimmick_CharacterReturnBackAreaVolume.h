#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDungeonGimmick_CharacterAffectionVolume.h"
#include "PalDungeonGimmick_CharacterReturnBackAreaVolume.generated.h"

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_CharacterReturnBackAreaVolume : public APalDungeonGimmick_CharacterAffectionVolume {
    GENERATED_BODY()
public:
    APalDungeonGimmick_CharacterReturnBackAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetReturnPointTransform(FTransform& OutTransform) const;
    
};

