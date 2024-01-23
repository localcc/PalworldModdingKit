#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EPalLandingType.h"
#include "FootStepEffectInfo.h"
#include "PalFootStepEffectAssetBase.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class PAL_API UPalFootStepEffectAssetBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalLandingType, FFootStepEffectInfo> FootStepEffectInfo;
    
public:
    UPalFootStepEffectAssetBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UNiagaraSystem> GetEffectObjectPtr(EPalLandingType LandingType, TEnumAsByte<EPhysicalSurface> PhysicalSurface) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEffectInfo(EPalLandingType LandingType, FFootStepEffectInfo& OutVal) const;
    
};

