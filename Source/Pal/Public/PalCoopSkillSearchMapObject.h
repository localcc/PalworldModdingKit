#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalCoopSkillSearchBase.h"
#include "PalCoopSkillSearchMapObject.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchMapObject : public UPalCoopSkillSearchBase {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchMapObject();
    UFUNCTION(BlueprintCallable)
    void SearchMapObjects(const TArray<FName>& SearchMapObjIds, const FVector& Origin, float SearchRadius, const FGuid& RequestPlayerUId);
    
};

