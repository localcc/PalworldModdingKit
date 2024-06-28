#pragma once
#include "CoreMinimal.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaSequenceBase.h"
#include "PalArenaSequenceInBattle.generated.h"

class UPalArenaOutAreaChecker;

UCLASS(Blueprintable)
class UPalArenaSequenceInBattle : public UPalArenaSequenceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalArenaOutAreaChecker* OutAreaChecker;
    
public:
    UPalArenaSequenceInBattle();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupPalHate();
    
    UFUNCTION(BlueprintCallable)
    void ResetPalHate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndSequence_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSequence_Implementation();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerLose(EPalArenaPlayerIndex PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAlivePalNum(EPalArenaPlayerIndex PlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckBattleResult(bool bIsTimeup);
    
};

