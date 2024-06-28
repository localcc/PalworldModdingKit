#pragma once
#include "CoreMinimal.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "EPalOilrigType.h"
#include "PalOilrigLevelInstance.generated.h"

UCLASS(Blueprintable)
class PAL_API APalOilrigLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOilrigType OilrigName;
    
public:
    APalOilrigLevelInstance(const FObjectInitializer& ObjectInitializer);

};

