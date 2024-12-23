#pragma once
#include "CoreMinimal.h"
#include "EPalRandomizerType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOptionWorldSettings.h"
#include "PalRandomizerSpawnInfoSaveData.h"
#include "PalSpawnerGroupInfo.h"
#include "PalSpawnerGroupInfoList.h"
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
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalSpawnerGroupInfoList> RegionRandomizeSpawnerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FPalSpawnerGroupInfoList> AllRandomizeSpawnerInstanceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalUIPaldexDistributionData> RegionRandomizeDistributionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalUIPaldexDistributionData> AllRandomizeDistributionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerRegionHashList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalRandomizerSpawnInfoSaveData> RandomizerSpawnerInstanceHashList;
    
public:
    UPalRandomizerManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeWorldSettings_ForClient(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializedRandomizer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalSpawnerGroupInfo> GetRandomSpawnerGroupInfoFromActor(APalNPCSpawnerBase* spawnerActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRandomSpawnerGroupInfo(FName InSpawnerName, const FString& InInstanceName, TArray<FPalSpawnerGroupInfo>& OutGroupInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalRandomizerType GetRandomizerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalRandomizerManager* GetRandomizerManagerFromContextObject(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPaldexDistributionData(FName InPalName, FPalUIPaldexDistributionData& OutPaldexDestributionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetImprisonmentBossRemap(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFieldBossRemap(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDungeonLevel(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolTime(FName InSpawnerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBossRemap(FName InSpawnerName) const;
    

    // Fix for true pure virtual functions not being implemented
};

