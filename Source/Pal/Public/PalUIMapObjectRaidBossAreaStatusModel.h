#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalRaidBossAreaPhase.h"
#include "PalStageInstanceId.h"
#include "PalUIMapObjectRaidBossAreaStatusModel.generated.h"

class UPalRaidBossAreaInstanceModel;
class UPalUIMapObjectRaidBossAreaStatusModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectRaidBossAreaStatusModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectRaidBossAreaStatusModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdatePhaseDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateRaidBossStaticItemIdDelegate;
    
    UPalUIMapObjectRaidBossAreaStatusModel();

    UFUNCTION(BlueprintCallable)
    void SetupOnReadyInstanceModel(UPalRaidBossAreaInstanceModel* InstanceModel);
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FPalStageInstanceId& StageInstanceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInstanceModelPhaseChanged(UPalRaidBossAreaInstanceModel* InstanceModel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaidAreaActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidPhaseTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRaidBossStaticItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPhaseRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRaidBossAreaPhase GetCurrentPhase() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJoinRaidArea() const;
    
};

