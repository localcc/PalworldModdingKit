#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalPickingGameDifficultyType.h"
#include "PalPickingGameSettingData.h"
#include "PalPickingGameProcessor.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPickingGameProcessor : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePickingToolPosition, float, ToolPosition);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateKeyPosition, float, KeyPositon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSuccessPicking);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStopTurningKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartGame, const FPalPickingGameSettingData, NewSettingData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFailPicking);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartGame OnStartGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePickingToolPosition OnUpdatePickingToolPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateKeyPosition OnUpdateKeyPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopTurningKey OnStopTurningKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFailPicking OnFailPicking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSuccessPicking OnSuccessPicking;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPickingGameSettingData OriginalSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPickingGameSettingData ModifiedSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPickingGameDifficultyType FixedDifficultyType;
    
public:
    UPalPickingGameProcessor();

    UFUNCTION(BlueprintCallable)
    void StartNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SetupByDifficultyType(EPalPickingGameDifficultyType DifficultyType);
    
    UFUNCTION(BlueprintCallable)
    void SetPickingToolPosition(float NewPosition);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetKeyPosition(float NewPosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoKeyReturn(bool IsAutoReturn);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnlockableRange(float& OutMin, float& OutMax);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSettingDataByDifficultyType(EPalPickingGameDifficultyType DifficultyType, FPalPickingGameSettingData& OutSettingData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalPickingGameDifficultyType GetDifficultyType();
    
    UFUNCTION(BlueprintCallable)
    void AddPickingToolPosition(float AddPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddKeyPosition(float AddPosition);
    
};

