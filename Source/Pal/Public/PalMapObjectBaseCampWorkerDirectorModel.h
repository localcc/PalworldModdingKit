#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerDirectionBattleType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectBaseCampWorkerDirectorModel.generated.h"

class UPalMapObjectBaseCampWorkerDirectorModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectBaseCampWorkerDirectorModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectBaseCampWorkerDirectorModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnNotifiedChangeBaseCampBattleTypeDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BaseCampBattleTypeForClientRead, meta=(AllowPrivateAccess=true))
    EPalBaseCampWorkerDirectionBattleType BaseCampBattleTypeForClientRead;
    
public:
    UPalMapObjectBaseCampWorkerDirectorModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateBaseCampBattleType_ServerInternal(const int32 RequestPlayerId, const int32 BattleTypeInt);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseCampBattleTypeForClientRead();
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifyChangeBaseCampBattleType_ClientInternal();
    
};

