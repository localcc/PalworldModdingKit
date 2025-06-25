#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalWorkSuitability.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DisplayOtomo.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DisplayOtomo : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> RequirePalIdArray_OR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> RequirePassiveIdArray_OR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkSuitability> RequireWorkSuitabilityArray_OR;
    
public:
    UPalQuestBlock_DisplayOtomo();

    UFUNCTION(BlueprintCallable)
    bool Validate(const FGuid& PlayerUId);
    
};

