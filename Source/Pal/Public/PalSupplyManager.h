#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalSupplyType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOnSupplyEventDelegate.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalSupplyManager.generated.h"

class APalRandomIncidentSpawnerBase;
class APalSupplyDropActor;
class UPalSupplySpawnerData;

UCLASS(Blueprintable)
class PAL_API UPalSupplyManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnSupplyEvent OnSupplyStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnSupplyEvent OnSupplyEndedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LotteryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSupplyType, float> SupplyTypeLotteryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugFullRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSupplyType DebugSupplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnNPCSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BroadcastLogDistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupplyFirstDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupplyCoolDownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotteryCoolDownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupplyTotalFallSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupplyDespawnSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalSupplyDropActor> SupplyCapsuleDropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalSupplyDropActor> SupplyMeteorDropClass;
    
public:
    UPalSupplyManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSupplySpawnerData* GetSupplySpawnerFromIncidentSpawner(APalRandomIncidentSpawnerBase* IncidentSpawner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSupplySpawnerData* GetSupplySpawnerDataFromID(FGuid ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalSupplySpawnerData*> GetSupplySpawnerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSupplySpawnerData* GetSupplySpawnerByIncidentSpawner(APalRandomIncidentSpawnerBase* SpawnerBase, bool bIsPalSpawner) const;
    
    UFUNCTION(BlueprintCallable)
    APalRandomIncidentSpawnerBase* GetIncidentSpawnerByID(FGuid ID, bool bPalSpawner);
    
    UFUNCTION(BlueprintCallable)
    APalRandomIncidentSpawnerBase* GetIncidentSpawner(UPalSupplySpawnerData* InSpawner, bool bPalSpawner);
    
    UFUNCTION(BlueprintCallable)
    UPalSupplySpawnerData* CreateSupplySpawnerData();
    
    UFUNCTION(BlueprintCallable)
    void CompleteIncident(bool bIsPalSpawner, APalRandomIncidentSpawnerBase* SpawnerBase);
    

    // Fix for true pure virtual functions not being implemented
};

