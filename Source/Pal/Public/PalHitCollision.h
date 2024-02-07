#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalHitCollision.generated.h"

class UPalHitFilter;

UCLASS(Abstract, Blueprintable)
class PAL_API APalHitCollision : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHitFilter* HitFilter;
    
public:
    APalHitCollision(const FObjectInitializer& ObjectInitializer);

};

