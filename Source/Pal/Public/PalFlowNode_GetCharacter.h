#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalInstanceID.h"
#include "PalFlowNode_GetCharacter.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_GetCharacter : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalHumanData NPCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_NPCUniqueData UniqueNPCID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PassiveSkillData> PassiveSkills;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CachedWorldContextObject;
    
public:
    UPalFlowNode_GetCharacter();

private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedIndividual(FPalInstanceID IndividualId);
    
};

