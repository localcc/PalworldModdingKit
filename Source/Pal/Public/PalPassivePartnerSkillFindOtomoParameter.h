#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalPassivePartnerSkillFindOtomoParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillFindOtomoParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType TargetElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> TargetPalIds;
    
    PAL_API FPalPassivePartnerSkillFindOtomoParameter();
};

