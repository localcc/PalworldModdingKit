#pragma once
#include "CoreMinimal.h"
#include "PalStageAreaInfo.h"
#include "PalStageInstanceId.h"
#include "PalWorldSubsystem.h"
#include "PalStageWorldSubsystem.generated.h"

class UDataLayerAsset;
class UPalStageModelBase;

UCLASS(Blueprintable)
class PAL_API UPalStageWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalStageInstanceId, UPalStageModelBase*> StageModelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDataLayerAsset*, FPalStageAreaInfo> StageAreaInfoMap;
    
public:
    UPalStageWorldSubsystem();
};

