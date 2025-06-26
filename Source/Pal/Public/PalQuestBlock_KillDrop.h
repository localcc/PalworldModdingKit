#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_KillDrop.generated.h"

class UPalIndividualCharacterHandle;
class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_KillDrop : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData DropItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> TargetPalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalHumanData> TargetHumanId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_NPCUniqueData> TargetUniqueNPCId;
    
public:
    UPalQuestBlock_KillDrop();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnKillCharacter(UPalIndividualCharacterHandle* DeadEnemyHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureCharacter(UPalIndividualCharacterHandle* CharacterHandle);
    
};

