#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampRaidDetectorBase.h"
#include "PalDamageInfo.h"
#include "PalBaseCampRaidDetector_MapObject.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampRaidDetector_MapObject : public UPalBaseCampRaidDetectorBase {
    GENERATED_BODY()
public:
    UPalBaseCampRaidDetector_MapObject();

private:
    UFUNCTION(BlueprintCallable)
    void OnMapObjectRegistered(UPalMapObjectModel* RegisteredMapObject);
    
    UFUNCTION(BlueprintCallable)
    void OnMapObjectDamaged(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, int32 LastHp);
    
};

