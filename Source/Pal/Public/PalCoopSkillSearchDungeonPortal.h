#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchDungeonPortal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchDungeonPortal : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchDungeonPortal();
    UFUNCTION(BlueprintCallable)
    void SearchDungeonPortal(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

