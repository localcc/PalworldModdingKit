#pragma once
#include "CoreMinimal.h"
#include "PalOptionWorldSettings.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorldSettingBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIWorldSettingBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings OriginalSetting;
    
public:
    UPalUIWorldSettingBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedSaveSetting(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteSetting(const FPalOptionWorldSettings& NewSetting);
    
};

