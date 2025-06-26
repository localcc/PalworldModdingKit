#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalWazaID.h"
#include "PalCharacterStatusRank.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalArenaSoloNPCSpawner.generated.h"

class APalArenaSoloNPCSpawner;
class UObject;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class APalArenaSoloNPCSpawner : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnedAllDelegate, APalArenaSoloNPCSpawner*, Spawner);
    
    APalArenaSoloNPCSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSpawn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedAll();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawned(const UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOtomoNum() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPalIndividualCharacterHandle*> GetOtomoHandleList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalIndividualCharacterHandle* GetNPCHandle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetInitializedOtomoSaveParameter(int32 Index, FPalIndividualCharacterSaveParameter& outParameter);
    
    UFUNCTION(BlueprintCallable)
    bool GetInitializedNPCSaveParameter(FPalIndividualCharacterSaveParameter& outParameter);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetInitializedCharacterSaveParemter(const UObject* WorldContextObject, const FName CharacterID, const FName UniqueNPCID, const int32 Level, const FGuid& OwnerPlayerUId, FPalIndividualCharacterSaveParameter& outParameter, int32 TalentLevel, const TArray<EPalWazaID>& WazaList, const TArray<FPalDataTableRowName_PassiveSkillData>& PassiveSkillList, int32 Rank, const TArray<FPalCharacterStatusRank>& ArenaStatusRank, int32 FriendshipRank);
    
};

