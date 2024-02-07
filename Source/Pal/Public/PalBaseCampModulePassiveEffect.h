#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalFastBaseCampPassiveEffectRepInfoArray.h"
#include "PalBaseCampModulePassiveEffect.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModulePassiveEffect : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastBaseCampPassiveEffectRepInfoArray RepInfoArray;
    
public:
    UPalBaseCampModulePassiveEffect();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* Model);
    
};

