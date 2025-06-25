#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalFastPlayerTreasureMapPointRepInfoArray.h"
#include "PalPlayerRecordDataFoundTreasureMapPoint.h"
#include "PalPlayerTreasureMapPointData.generated.h"

class UPalPlayerTreasureMapPointData;

UCLASS(Blueprintable)
class PAL_API UPalPlayerTreasureMapPointData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndPointIdMulticastDelegate, const UPalPlayerTreasureMapPointData*, PointData, const FGuid&, PointId);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastPlayerTreasureMapPointRepInfoArray TreasureMapPointRepInfoArray;
    
public:
    UPalPlayerTreasureMapPointData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRemovedPlayerFoundTreasureMapPoint_ServerInternal(const FGuid& PointId);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisterTreasureMapInteractivePoint_ServerInternal(const FGuid& PointId);
    
    UFUNCTION(BlueprintCallable)
    void OnMovedTreasureMapInteractivePoint_ServerInternal(const FGuid& PointId);
    
    UFUNCTION(BlueprintCallable)
    void OnAddedPlayerFoundTreasureMapPoint_ServerInternal(const FGuid& PointId, const FPalPlayerRecordDataFoundTreasureMapPoint& PointData);
    
};

