#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "EPalWorkType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalPassiveAbilitySkillParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveAbilitySkillParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkType WorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_MapObjectData> MapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_ItemData> ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AssignOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalElementType TargetElementType;
    
    PAL_API FPalPassiveAbilitySkillParameters();
};

