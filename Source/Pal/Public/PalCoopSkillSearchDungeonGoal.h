#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchDungeonGoal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchDungeonGoal : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchDungeonGoal();

    UFUNCTION(BlueprintCallable)
    bool SearchDungeonGoal(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId, FVector& OutGoalLocation);
    
};

