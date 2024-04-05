#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRaidBossSummon.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRaidBossSummon : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRaidBossSummonDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SummonRequestPlayerUId;
    
public:
    UPalMapObjectRaidBossSummon();

private:
    UFUNCTION(BlueprintCallable)
    void RequestSummonRaidBoss_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmSummonRaidBossResult(const bool bResult);
    
};

