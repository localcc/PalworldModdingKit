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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedInputWorldName;
    
public:
    UPalUIWorldSettingBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryRequestWorldNameFilter(const FString& NewWorldName);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilteredWorldName(const FString& NewWorldName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedSaveSetting(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteSetting(const FPalOptionWorldSettings& NewSetting);
    
};

