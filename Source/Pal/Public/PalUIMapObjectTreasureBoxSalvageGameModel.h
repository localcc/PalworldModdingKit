#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMapObjectTreasureBoxSalvageGameModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectTreasureBoxSalvageGameModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnResultDelegate, const bool, bSuccess);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeSize;
    
public:
    UPalUIMapObjectTreasureBoxSalvageGameModel();

    UFUNCTION(BlueprintCallable)
    void SetGaugeSize(const float Size);
    
    UFUNCTION(BlueprintCallable)
    void SendResult(const bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelSalvageAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCursorSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void CalcGaugeRandomRange(float& Start, float& End);
    
};

