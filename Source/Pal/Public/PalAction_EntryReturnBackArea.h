#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalActionBase.h"
#include "PalAction_EntryReturnBackArea.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAction_EntryReturnBackArea : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ReturnPointTransform;
    
public:
    UPalAction_EntryReturnBackArea();

    UFUNCTION(BlueprintCallable)
    void TeleportToReturnPoint();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeleportMoved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetReturnPointTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTeleportMoved();
    
};

