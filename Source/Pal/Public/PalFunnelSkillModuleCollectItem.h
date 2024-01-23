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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CollectItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSetSkillAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalFunnelSkillModuleCollectItemSearchInfo> SearchItemInfoList;
    
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

