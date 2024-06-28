#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalActionType.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalMapObjectTreasureBoxModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectTreasureBoxModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampAssignableObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectTreasureGradeType TreasureGradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DropItemLocalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LongHoldInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalActionType InteractPlayerActionType;
    
public:
    UPalMapObjectTreasureBoxModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestPicking_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestOpen_ServerInternal(const int32 RequestPlayerId, bool IgnoreOpenItem);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOpenSuccess_ClientInternal(const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveOpenFailed_ClientInternal(const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable)
    void OpenPickingGame_ClientInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnEndPickingGame(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPickingGameResult_ServerInternal(const int32 RequestPlayerId, bool IsSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectTreasureGradeType GetTreasureGradeType() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Debug_ReceiveObtainInfo_ClientInternal(const FPalNetArchive& Archive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalItemAndNum> CreateItemInfo() const;
    
};

