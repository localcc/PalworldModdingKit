#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDeadInfo.h"
#include "PalExpDatabase.generated.h"

class APalPlayerCharacter;
class APalPlayerState;
class UDataTable;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalExpDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExpDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PaldexBonusExpDataTable;
    
public:
    UPalExpDatabase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalExp(int32 Level, bool IsPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextExp(int32 Level, bool IsPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDropExp(int32 Level, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void DistributionExpValue_forPlayerParty_Server(int32 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcPaldexBonusExp(const FName CharacterID, int32 CaptureCount, APalPlayerState* captureOwnerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcLevelFromTotalExp(int32 TotalEXP, bool IsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AddExpValue_forPlayerParty_Server(int32 ExpValue, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_forPlayerParty_TowerBoss(UPalIndividualCharacterHandle* DeadEnemyHandle, TArray<APalPlayerCharacter*> GiftPlayerList, bool isCallDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_forBaseCamp(UPalIndividualCharacterHandle* DeadEnemyHandle, UPalBaseCampModel* CampModel);
    
    UFUNCTION(BlueprintCallable)
    void AddExp_EnemyDeath(FPalDeadInfo DeadInfo);
    
};

