#pragma once
#include "CoreMinimal.h"
#include "PalWorldSubsystem.h"
#include "PalCullSubsystem.generated.h"

class APalCullVolumeBase;

UCLASS(Blueprintable)
class PAL_API UPalCullSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APalCullVolumeBase*> CullVolumes;
    
public:
    UPalCullSubsystem();

};

