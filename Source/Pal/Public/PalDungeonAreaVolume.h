#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStageAreaVolume.h"
#include "PalDungeonAreaVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API APalDungeonAreaVolume : public APalStageAreaVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LevelWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LevelWorldRotation;
    
public:
    APalDungeonAreaVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapActor(AActor* Other);
    
};

