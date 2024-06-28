#pragma once
#include "CoreMinimal.h"
#include "PalCharacter.h"
#include "PalDeadInfo.h"
#include "PalNPC.generated.h"

class UPalNPCWeaponGenerator;

UCLASS(Blueprintable)
class PAL_API APalNPC : public APalCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalNPCWeaponGenerator* WeaponGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEnableJumpEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultVoiceID;
    
public:
    APalNPC(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyFromBattleManager(FPalDeadInfo DeadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedInitParam(APalCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void MasterWazaUpdateWhenLevelUp(int32 addLevel, int32 nowLevel);
    
    UFUNCTION(BlueprintCallable)
    void MasterWazaSetup(APalCharacter* InCharacter);
    
};

