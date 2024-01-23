#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalDropItemType.h"
#include "PalMapObjectWorldDisposerBase.h"
#include "PalMapObjectWorldDropItemInfoSet.h"
#include "PalMapObjectWorldDisposer_DropItem.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectWorldDisposer_DropItem : public UPalMapObjectWorldDisposerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalDropItemType, FPalMapObjectWorldDropItemInfoSet> DropItemInfoSetMap;
    
public:
    UPalMapObjectWorldDisposer_DropItem();
private:
    UFUNCTION(BlueprintCallable)
    void OnRestoreMapObject_ServerInternal(UPalMapObjectModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateMapObject_ServerInternal(UPalMapObjectModel* SpawnedModel, const FVector& SpawnLocation);
    
};

