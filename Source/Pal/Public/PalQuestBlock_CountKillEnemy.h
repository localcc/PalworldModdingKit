#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountKillEnemy.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CountKillEnemy : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Count, meta=(AllowPrivateAccess=true))
    int32 CurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountOnCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> CountPalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalHumanData> CountHumanId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_NPCUniqueData> CountUniqueNPCId;
    
public:
    UPalQuestBlock_CountKillEnemy();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Count();
    
    UFUNCTION(BlueprintCallable)
    void OnKillCharacter(UPalIndividualCharacterHandle* DeadEnemyHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptureCharacter(UPalIndividualCharacterHandle* CharacterHandle);
    
};

