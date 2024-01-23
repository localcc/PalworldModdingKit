#pragma once
#include "CoreMinimal.h"
#include "PalCoopSkillModuleAssignPassiveSkillNames.h"
#include "PalCoopSkillModuleBase.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalCoopSkillModuleAssignPassiveSkill.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillModuleAssignPassiveSkill : public UPalCoopSkillModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCoopSkillModuleAssignPassiveSkillNames> AssignSkillNamesPerRank;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSkillAssignFlagName;
    
public:
    UPalCoopSkillModuleAssignPassiveSkill();
private:
    UFUNCTION(BlueprintCallable)
    void RemovePassiveSkills();
    
    UFUNCTION(BlueprintCallable)
    void AssignPassiveSkills(const TArray<FPalDataTableRowName_PassiveSkillData>& AssignSkillName);
    
    UFUNCTION(BlueprintCallable)
    void AssignPassiveSkill(const FName& SkillName);
    
};

