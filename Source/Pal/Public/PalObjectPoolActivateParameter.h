#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "PalObjectPoolActivateParameter.generated.h"

class AActor;
class APawn;

USTRUCT(BlueprintType)
struct PAL_API FPalObjectPoolActivateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> actorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnIfEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
    
    FPalObjectPoolActivateParameter();
};

