#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAICombatModule.h"
#include "PalAICombatModule_RaidBoss.generated.h"

class AActor;
class APalMapObject;
class UPalBaseCampModel;

UCLASS(Blueprintable)
class PAL_API UPalAICombatModule_RaidBoss : public UPalAICombatModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMapObject* TargetBaseCampActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetBaseCampID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPalBaseCampModel> TargetCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRaidBossArena;
    
public:
    UPalAICombatModule_RaidBoss();

    UFUNCTION(BlueprintCallable)
    void Setup_ForBP(FGuid CampID);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleFinish_forDelegate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool JudgeReturnCombatStartPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaidBossArena() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBaseCampActor();
    
    UFUNCTION(BlueprintCallable)
    AActor* FindPlayerTarget();
    
    UFUNCTION(BlueprintCallable)
    AActor* FindNearTarget();
    
};

