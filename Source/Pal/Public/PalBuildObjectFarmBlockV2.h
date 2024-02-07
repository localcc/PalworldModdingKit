#pragma once
#include "CoreMinimal.h"
#include "EPalFarmCropState.h"
#include "PalBuildObject.h"
#include "PalDataTableRowName_FarmCropData.h"
#include "PalBuildObjectFarmBlockV2.generated.h"

class APalMapObjectFarmCrop;
class UNiagaraSystem;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectFarmBlockV2 : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FarmCropData CropDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* GrowupFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalMapObjectFarmCrop* CropActor;
    
public:
    APalBuildObjectFarmBlockV2(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateState_ServerInternal(EPalFarmCropState LastCropState, EPalFarmCropState NextCropState);
    
};

