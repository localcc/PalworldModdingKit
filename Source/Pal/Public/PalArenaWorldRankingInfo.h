#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalArenaWorldRankingInfo.generated.h"

class UDataTable;
class UPalGroupGuildBase;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class PAL_API APalArenaWorldRankingInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Records, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaWorldRankingRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> PlayerRankingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ArenaNPCDataTable;
    
public:
    APalArenaWorldRankingInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerName(UPalIndividualCharacterParameter* IndividualParameter, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerGuildName(const UPalGroupGuildBase* Guild, const FString& NewGuildName);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerGuild(const FGuid& PlayerUId, UPalGroupGuildBase* PrevGuild, UPalGroupGuildBase* AfterGuild);
    
    UFUNCTION(BlueprintCallable)
    void UpdateArenaRankPoint(UPalIndividualCharacterParameter* IndividualParameter, int32 NewArenaRankPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Records();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalArenaWorldRankingRecord> GetWorldArenaRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRankNo(const FGuid& PlayerUId) const;
    
};

