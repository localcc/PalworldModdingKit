#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalFastArenaWorldRankingRepInfoArray.h"
#include "PalArenaWorldRankingInfo.generated.h"

class UDataTable;
class UPalGroupGuildBase;
class UPalIndividualCharacterParameter;
class UWordFilterReceiveObject;

UCLASS(Blueprintable)
class PAL_API APalArenaWorldRankingInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalArenaWorldRankingRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FastTopRankRecords, meta=(AllowPrivateAccess=true))
    FPalFastArenaWorldRankingRepInfoArray FastTopRankRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ArenaNPCDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UWordFilterReceiveObject*> ReceiveObjectSet;
    
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
    void OnRep_FastTopRankRecords();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerNameWordFilteringResult(UWordFilterReceiveObject* ReceiveObject, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedGuildNameWordFilteringResult(UWordFilterReceiveObject* ReceiveObject, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalArenaWorldRankingRecord> GetTopWorldArenaRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalArenaWorldRankingRecord GetRecordByPlayerUid_ServerInternal(const FGuid& PlayerUId) const;
    
};

