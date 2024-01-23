#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalRandomIncidentSpawnIncidentParameter.h"
#include "PalRandomIncidentLotteryBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRandomIncidentLotteryBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LotteryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomIncidentSpawnIncidentParameter> LotteryParameters;
    
public:
    UPalRandomIncidentLotteryBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LotteryIncident(FPalRandomIncidentSpawnIncidentParameter& OutResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetLotteryRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetLotteryParameters(TArray<FPalRandomIncidentSpawnIncidentParameter>& OutParam) const;
    
};

