#pragma once
#include "CoreMinimal.h"
#include "PalSignificanceUpdaterBase.h"
#include "PalSignificanceUpdater_MapObject.generated.h"

UCLASS(Blueprintable, Config=Game)
class UPalSignificanceUpdater_MapObject : public UPalSignificanceUpdaterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificanceUpdateProcessingFrames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificanceCalculationProcessingFrames;
    
public:
    UPalSignificanceUpdater_MapObject();

};

