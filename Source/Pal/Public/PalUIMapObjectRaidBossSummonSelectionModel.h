#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalRaidBossBattleType.h"
#include "PalUIRaidBossStoneInfo.h"
#include "PalUIRaidBossStoneSelectionInfo.h"
#include "PalUIMapObjectRaidBossSummonSelectionModel.generated.h"

class UPalUIMapObjectRaidBossSummonSelectionModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectRaidBossSummonSelectionModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectRaidBossSummonSelectionModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateSelectedInfoDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateSelectedBattleTypeDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIRaidBossStoneSelectionInfo SelectedInfo;
    
public:
    UPalUIMapObjectRaidBossSummonSelectionModel();

    UFUNCTION(BlueprintCallable)
    void SubmitSelectedInfo();
    
    UFUNCTION(BlueprintCallable)
    void SelectStoneItemId(const FName StoneItemId);
    
    UFUNCTION(BlueprintCallable)
    void SelectBattleType(const EPalRaidBossBattleType BattleType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedStoneItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRaidBossBattleType GetSelectedBattleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAvailableRaidBossStoneInfos(TArray<FPalUIRaidBossStoneInfo>& OutStoneInfos) const;
    
};

