#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalStageAreaVolume.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable)
class PAL_API APalStageAreaVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* RelatedDataLayerAsset;
    
public:
    APalStageAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRelatedDataLayerAsset(UDataLayerAsset* DataLayerAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerAsset* GetRelatedDataLayerAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBox GetBoundingBox() const;
    
};

