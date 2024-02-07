#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectRespawnPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelObjectRespawnPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RespawnPointID;
    
public:
    APalLevelObjectRespawnPoint(const FObjectInitializer& ObjectInitializer);

};

