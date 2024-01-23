#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchCharacter.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchCharacter : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchCharacter();
    UFUNCTION(BlueprintCallable)
    void SearchMonsters(const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

