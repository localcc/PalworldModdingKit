#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelObjectInterface.h"
#include "PalMapObject.h"
#include "PalMapLevelObject.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapLevelObject : public APalMapObject, public IPalLevelObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
public:
    APalMapLevelObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLevelObjectInstanceId() const;
    

    // Fix for true pure virtual functions not being implemented
};

