#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOptionWorldSettings.h"
#include "PalSpawnerGroupInfo.h"
#include "PalUIPaldexDistributionData.h"
#include "PalWorldSubsystem.h"
#include "PalRandomizerManager.generated.h"

class APalNPCSpawnerBase;
class UObject;
class UPalRandomizerManager;

UCLASS(Blueprintable)
class PAL_API UPalRandomizerManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPalRandomizerManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeWorldSettings_ForClient(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalSpawnerGroupInfo> GetRandomSpawnerGroupInfo(APalNPCSpawnerBase* spawnerActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRandomizerType GetRandomizerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRandomizerManager* GetRandomizerManagerFromContextObject(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPaldexDistributionData(FName InPalName, FPalUIPaldexDistributionData& OutPaldexDestributionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDungeonLevel(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolTime(FName InSpawnerName) const;
    

    // Fix for true pure virtual functions not being implemented
};

