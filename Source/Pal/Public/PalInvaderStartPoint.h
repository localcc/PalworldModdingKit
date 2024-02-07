#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalBiomeType.h"
#include "PalInvaderStartPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalInvaderStartPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBiomeType BiomeType;
    
public:
    APalInvaderStartPoint(const FObjectInitializer& ObjectInitializer);

};

