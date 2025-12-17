#pragma once
#include "CoreMinimal.h"
#include "PalUIModDisplayData.h"
#include "PalUIModUniqueId.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIModSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIModSettings : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalUIModUniqueId, FPalUIModDisplayData> ModsMap;
    
public:
    UPalUIModSettings();

protected:
    UFUNCTION(BlueprintCallable)
    void SaveModSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshModData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenSteamWorkshop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModSupportIngame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySettingChanged() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModDisplayData(const FPalUIModUniqueId& ModUniqueId, FPalUIModDisplayData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllModIds(TArray<FPalUIModUniqueId>& OutIds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllModData(TMap<FPalUIModUniqueId, FPalUIModDisplayData>& OutMap) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckModVersionCompatibility(const FPalUIModUniqueId& ModUniqueId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeModSupportIngame(const bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ChangeModActive(const FPalUIModUniqueId& ModUniqueId, const bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeModSupportIngame() const;
    
};

