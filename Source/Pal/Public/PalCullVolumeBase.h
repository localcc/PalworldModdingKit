#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "PalCullVolumeBase.generated.h"

class ULevel;

UCLASS(Abstract, Blueprintable)
class PAL_API APalCullVolumeBase : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActorsPerThreadPerFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> PendingLevelsToProcess;
    
public:
    APalCullVolumeBase(const FObjectInitializer& ObjectInitializer);

};

