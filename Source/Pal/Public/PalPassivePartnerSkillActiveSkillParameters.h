#pragma once
#include "CoreMinimal.h"
#include "EPalRidingActiveSkillNotWeaponCondition.h"
#include "EPalWazaID.h"
#include "PalPassivePartnerSkillActiveSkillParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillActiveSkillParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWazaID WazaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdlelCostDecreaseEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecSkillContinuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOneShotRideAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveSkill_MainValue_Overview_EditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRidingActiveSkillNotWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalRidingActiveSkillNotWeaponCondition RidingActiveSkillNotWeaponCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToggleRidingActiveSkillNotWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActiveSkill_MainValueByRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActiveSkill_OverWriteCoolTimeByRank;
    
    PAL_API FPalPassivePartnerSkillActiveSkillParameters();
};

