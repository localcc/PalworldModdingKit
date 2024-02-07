#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalNPCTalkUIType.h"
#include "PalEnemyCampStatus.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalInstanceID.h"
#include "PalNPCSpawnInfo.h"
#include "Templates/SubclassOf.h"
#include "PalNPCManager.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UDataTable;
class UNavigationQueryFilter;
class UPalIndividualCharacterHandle;
class UPalNPCMultiTalkHandle;
class UPalWildPalDrinkWaterSpotProvider;

UCLASS(Blueprintable)
class PAL_API UPalNPCManager : public UObject, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FNPCSpawnCallback, FPalInstanceID, ID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> AIOnNavMeshFilterClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, FNPCSpawnCallback> CallbackMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, FPalNPCSpawnInfo> SpawnInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWildPalDrinkWaterSpotProvider* DrinkWaterSpotProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> RespawnDisableFlag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalAIController> NPCAIControllerBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UniqueNPCDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCOneTalkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NPCMultiTalkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalNPCTalkUIType, UDataTable*> TalkDataTableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EPalNPCTalkUIType> NPCNameTalkTypeMap;
    
public:
    UPalNPCManager();

private:
    UFUNCTION(BlueprintCallable)
    void SpawNPCCallback(FPalInstanceID ID);
    
public:
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterHandle* SpawnNPCForServer(FPalNPCSpawnInfo SpawnInfo, UPalNPCManager::FNPCSpawnCallback spawnCallback);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyCampStatus(FName KeyName, FPalEnemyCampStatus EnemyCampStatus);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveGroupWhenDestoryActor(AActor* DestoryActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkable(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalNPCTalkUIType GetTalkUIType(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCTalkDTFromTalkUIType(EPalNPCTalkUIType TalkUIType);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCOneTalkDTFromTalkId(FName TalkId);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCOneTalkDTFromCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UPalNPCMultiTalkHandle> GetNPCMultiTalkClassFromTalkId(FName TalkId);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UPalNPCMultiTalkHandle> GetNPCMultiTalkClass(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetNPCCharacterTalkDT(FName CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalEnemyCampStatus GetEnemyCampStatus(FName KeyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWildPalDrinkWaterSpotProvider* GetDrinkWaterSpotProvider();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterIDFromCharacterIDAndUniqueNPCID(FName CharacterID, FName UniqueNPCID);
    
private:
    UFUNCTION(BlueprintCallable)
    void AllResetBossRespawnFlag();
    

    // Fix for true pure virtual functions not being implemented
};

