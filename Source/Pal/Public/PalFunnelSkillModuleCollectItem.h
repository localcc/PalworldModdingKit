#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalFunnelSkillModule.h"
#include "PalFunnelSkillModuleCollectItemSearchInfo.h"
#include "PalFunnelSkillModuleCollectItem.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class PAL_API UPalFunnelSkillModuleCollectItem : public UPalFunnelSkillModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SearchItemRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseParallelSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CollectItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSetSkillAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalFunnelSkillModuleCollectItemSearchInfo> SearchItemInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchIntervalElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObservePendingPathRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObserveNextRequestTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ObserveRequestNonce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObserveLastQueryTargetLocation;
    
public:
    UPalFunnelSkillModuleCollectItem();
    UFUNCTION(BlueprintCallable)
    void SearchCollectableItem(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool Pickup();
    
    UFUNCTION(BlueprintCallable)
    void ObserveCollectItem(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearTargetLocation(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalMapObject* GetTargetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetLocation(FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetTargetId() const;
    
};

