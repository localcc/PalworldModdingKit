#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIMapObjectFishPondCharacterInfo.h"
#include "PalUIMapObjectFishPondTargetInfo.h"
#include "PalUIMapObjectFishPondModel.generated.h"

class UPalUIMapObjectFishPondModel;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectFishPondModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectFishPondModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateSelectedLotteryNameDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateProductNumDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SelectedLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ProductNum;
    
public:
    UPalUIMapObjectFishPondModel();

    UFUNCTION(BlueprintCallable)
    void SetProductNum(const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SelectLotteryName(const FName LotteryName);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartProduce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetLotteryNames(TArray<FName>& OutTargetLotteryNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetInfos(TArray<FPalUIMapObjectFishPondTargetInfo>& OutInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedLotteryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequiredMaterialInfos(TArray<FPalStaticItemIdAndNum>& RequiredMaterialInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProductNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCaptureTargetCharacterInfos(TArray<FPalUIMapObjectFishPondCharacterInfo>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRequestStartProduce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcLocalPlayerMaxProductableNum();
    
};

