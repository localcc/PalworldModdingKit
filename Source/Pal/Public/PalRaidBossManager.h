#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalRaidBossBattleFinishType.h"
#include "PalRaidBossDataRow.h"
#include "PalRaidBossSpawnInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalRaidBossManager.generated.h"

class AActor;
class APalMapObject;
class UDataTable;
class UPalRaidBossComponent;

UCLASS(Blueprintable)
class PAL_API UPalRaidBossManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidBossBattleStartDelegate, FGuid, CampID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRaidBossBattleFinishDelegate, FGuid, CampID, EPalRaidBossBattleFinishType, FinishType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidBossBattleStartDelegate OnRaidBossBattleStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidBossBattleFinishDelegate OnRaidBossBattleFinishDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RaidBossDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPCTargetCount_ForForcePlayerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LargeDownHPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RaidBossBattleActorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalRaidBossComponent*> RaidComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
public:
    UPalRaidBossManager();

    UFUNCTION(BlueprintCallable)
    bool IsRaidBossOfferItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNPCTargetCount_ForForcePlayerTarget() const;
    
    UFUNCTION(BlueprintCallable)
    UPalRaidBossComponent* FindRaidComponent_ByBuildObject(APalMapObject* BuildObject);
    
    UFUNCTION(BlueprintCallable)
    UPalRaidBossComponent* FindRaidComponent(FGuid BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    FPalRaidBossSpawnInfo FindRaidBossInfoByCharacterID(FName CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalRaidBossDataRow FindRaidBossData(FName ItemName) const;
    
};

