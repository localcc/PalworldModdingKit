#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "PalItemThrottledSpawnUtilitySubsystem.generated.h"

class UPalItemThrottledSpawnRequest;
class UPalMapObjectSpawnRequestHandler;

UCLASS(Blueprintable)
class UPalItemThrottledSpawnUtilitySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalItemThrottledSpawnRequest*> SpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectSpawnRequestHandler*> ActiveSpawnedHandlers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, int32> GridSpawnCounterMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SpawnedItems;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ElapsedSpawnTime;
    
public:
    UPalItemThrottledSpawnUtilitySubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    int32 IncreaseGridSpawnCounter(const FVector& Location);
    
    UFUNCTION()
    uint64 GetGridKey(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFrameSpawnLimit() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecreaseGridSpawnCounter(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    bool CanSpawnInGrid(const FVector& Location) const;
    
};

