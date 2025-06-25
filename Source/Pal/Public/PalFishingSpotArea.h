#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PalDataTableRowName_FishingSpotLotteryNameData.h"
#include "PalFishSpawnPointData.h"
#include "PalGrantCharacterRequestData.h"
#include "PalInstanceID.h"
#include "PalLevelObjectActor.h"
#include "PalNetArchive.h"
#include "PalSpawnedFishShadowData.h"
#include "PalFishingSpotArea.generated.h"

class APalFishShadow;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API APalFishingSpotArea : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDespawnFishShadowDelegate, int32, RemainFishCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDespawnFishShadowDelegate OnDespawnFishShadowDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FishShadowNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FishShadowRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference SpotAreaVolumeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> FishShadowSpawnPointRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FishingSpotLotteryNameData SpotLotteryName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalFishShadow*> FishShadowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnedFishShadowDataArray, meta=(AllowPrivateAccess=true))
    TArray<FPalSpawnedFishShadowData> SpawnedFishShadowDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalSpawnedFishShadowData> SpawnedFishShadowDataArrayMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalFishSpawnPointData> FishShadowSpawnPointDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ChangeDayTimeRespawnTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid SpotAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPalIndividualCharacterHandle*, FPalGrantCharacterRequestData> CreatedIndividualHandleMap;
    
public:
    APalFishingSpotArea(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnFish();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedFishShadowDataArray();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptySpot();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedIndividualHandle_ServerInternal(FPalInstanceID IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDayTime();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ObtainCatchCharacter_ServerInternal(const FPalNetArchive& Archive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyFishShadow() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EscapeAllFishShadow();
    
};

