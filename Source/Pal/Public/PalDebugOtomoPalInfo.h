#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalDebugOtomoPalInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugOtomoPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWazaID> WazaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> PassiveSkill;
    
    PAL_API FPalDebugOtomoPalInfo();
};

