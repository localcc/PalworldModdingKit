#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalPassiveSkillExtraParameterBase.h"
#include "PalPassiveSkillExtraParameterItemIDList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalPassiveSkillExtraParameterItemIDList : public UPalPassiveSkillExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> ItemIds;
    
    UPalPassiveSkillExtraParameterItemIDList();

};

