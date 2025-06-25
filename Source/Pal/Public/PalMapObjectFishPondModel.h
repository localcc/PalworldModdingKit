#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectFishPondCaughtCharacterInfo.h"
#include "PalNetArchive.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectFishPondModel.generated.h"

class UPalMapObjectFishPondModel;
class UPalUserWidgetOverlayUI;
class UPalWorkBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectFishPondModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectFishPondModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateTargetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateProductNumInfoDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetLotteryName, meta=(AllowPrivateAccess=true))
    FName TargetLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RequestedProductNum, meta=(AllowPrivateAccess=true))
    int32 RequestedProductNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainProductNum, meta=(AllowPrivateAccess=true))
    int32 RemainProductNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectFishPondCaughtCharacterInfo> CaughtCharacterInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bExistsCaughtCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> MenuUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> ObtainCharactersUIClass;
    
public:
    UPalMapObjectFishPondModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestStartProduct_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void RequestObtainCharacters_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelSelectedTarget_ServerInternal(const int32 RequestPlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLotteryName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RequestedProductNum();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainProductNum();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMultiHatchComplete(const TArray<FPalInstanceID>& HatchedIDs);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void NotifyFailedObtainCharacters_ClientInternal();
    
};

