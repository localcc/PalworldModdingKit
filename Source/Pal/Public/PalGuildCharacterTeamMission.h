#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalGuildCharacterTeamMissionInfo.h"
#include "PalGuildPlayerInfo.h"
#include "PalGuildCharacterTeamMission.generated.h"

class UPalGroupGuildBase;
class UPalGuildCharacterTeamMission;

UCLASS(Blueprintable)
class PAL_API UPalGuildCharacterTeamMission : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateReleasedMissionInfoDelegate, UPalGuildCharacterTeamMission*, Mission);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReleasedMissionInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalGuildCharacterTeamMissionInfo> ReleasedMissionInfos;
    
public:
    UPalGuildCharacterTeamMission();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerTowerBossDefeatFlag_ServerInternal(FName Key, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerTowerBossDefeatCount_ServerInternal(FName Key, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerInfo_ServerInternal(const UPalGroupGuildBase* Owner, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReleasedMissionInfos();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedApplyWorldSaveData_ServerInternal();
    
};

