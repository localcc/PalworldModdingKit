#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCharacterList.h"
#include "PalCharacterSpatialGrid.h"
#include "PalObjectCollectorMapObjectSpawnerId.h"
#include "PalWorldSubsystem.h"
#include "PalObjectCollector.generated.h"

class APalCharacter;
class APalMapObjectSpawnerBase;

UCLASS(Blueprintable, Config=Game)
class UPalObjectCollector : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalCharacter*> PalCharacter_All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalCharacter*> PalCharacter_NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalCharacter*> PalCharacter_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCharacterSpatialGrid PalCharacterGrid_All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCharacterSpatialGrid PalCharacterGrid_NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCharacterSpatialGrid PalCharacterGrid_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalObjectCollectorMapObjectSpawnerId, APalMapObjectSpawnerBase*> MapObjectSpawnerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APalCharacter*, FPalCharacterList> NearestCharacter_FromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APalMapObjectSpawnerBase*> NearestSpawnerBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APalCharacter*, FPalCharacterList> CalculationNearestCharacter_FromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APalMapObjectSpawnerBase*> CalculationNearSpawnerBase_FromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APalMapObjectSpawnerBase*> CalculationNearSpawnerBase_FromBaseCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> BaseCampLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUpdateBaseCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldRecalculateNearSpawn_RegisteredSpawnerInsideBaseCamp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearStartDistanceForSpawnerBase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearEndDistanceForSpawnerBase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearDistanceForSpawnerBaseFromBaseCamp;
    
public:
    UPalObjectCollector();

private:
    UFUNCTION(BlueprintCallable)
    void OnRemoveBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateBaseCampModel_ServerInternal(const FGuid BaseCampId);
    
};

