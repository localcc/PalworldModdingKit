#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalPassiveSkillExtraParameterBase.h"
#include "PalPassiveSkillExtraParameterTribeIDList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalPassiveSkillExtraParameterTribeIDList : public UPalPassiveSkillExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalTribeID> TribeIDs;
    
    UPalPassiveSkillExtraParameterTribeIDList();

};

