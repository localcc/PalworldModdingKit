#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBuildObjectPaintData.h"
#include "PalMapObjectModelPaint.generated.h"

class UPalMapObjectModelPaint;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelPaint : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectModelPaint*, Paint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPaintDataChanged, const FPalBuildObjectPaintData&, PaintData);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PaintData, meta=(AllowPrivateAccess=true))
    FPalBuildObjectPaintData PaintData;
    
public:
    UPalMapObjectModelPaint();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PaintData();
    
};

