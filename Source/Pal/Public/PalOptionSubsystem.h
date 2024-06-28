#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "EPalOptionGraphicsLevel.h"
#include "EPalOptionWorldDifficulty.h"
#include "PalKeyConfigSettings.h"
#include "PalOptionAudioSettings.h"
#include "PalOptionCommonSettings.h"
#include "PalOptionGraphicsSettings.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionLocalStaticSettings.h"
#include "PalOptionPadSettings.h"
#include "PalOptionUISettings.h"
#include "PalOptionWorldSettings.h"
#include "PalOptionWorldStaticSettings.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalOptionSubsystem.generated.h"

class APalPlayerCharacter;
class UDataTable;

UCLASS(Blueprintable)
class PAL_API UPalOptionSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeWorldSettingsDelegate, const FPalOptionWorldSettings&, PrevSettings, const FPalOptionWorldSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeUISettingDelegate, const FPalOptionUISettings&, PrevSettings, const FPalOptionUISettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeScreenRatioDelegate, float, newRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangePadDelegate, const FPalOptionPadSettings&, PrevSettings, const FPalOptionPadSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeKeyConfigDelegate, const FPalKeyConfigSettings&, PrevSettings, const FPalKeyConfigSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeKeyboardDelegate, const FPalOptionKeyboardSettings&, PrevSettings, const FPalOptionKeyboardSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeGraphicsDelegate, const FPalOptionGraphicsSettings&, PrevSettings, const FPalOptionGraphicsSettings&, NewSettings);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeCommonSettingsDelegate, const FPalOptionCommonSettings&, PrevSettings, const FPalOptionCommonSettings&, NewSettings);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeKeyboardDelegate OnChangeKeyboardDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangePadDelegate OnChangePadDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeGraphicsDelegate OnChangeGraphicsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeWorldSettingsDelegate OnChangeWorldSettingsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeKeyConfigDelegate OnChangeKeyConfigDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeUISettingDelegate OnChangeUISettingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeScreenRatioDelegate OnChangeScreenRatioDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCommonSettingsDelegate OnChangeCommonSettingDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionWorldStaticSettings OptionWorldStaticSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionLocalStaticSettings OptionLocalStaticSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings OptionWorldSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings OptionWorldSettingsCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionGraphicsSettings GraphicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionCommonSettings CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionKeyboardSettings KeyboardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionPadSettings PadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalKeyConfigSettings KeyConfigSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionUISettings UISettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OptionWorldPresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OptionWorldModePresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OptionGraphicsPresetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalPlayerCharacter> PalPlayerCharacterClass;
    
public:
    UPalOptionSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUISettings(const FPalOptionUISettings& InUISettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPadSettings(const FPalOptionPadSettings& InPadSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionWorldSettings(const FPalOptionWorldSettings& InOptionWorldSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyConfigSettings(const FPalKeyConfigSettings& InKeyConfigSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardSettings(const FPalOptionKeyboardSettings& InKeyboardSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsSettings(const FPalOptionGraphicsSettings& InGraphicsSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCommonSettings(const FPalOptionCommonSettings& InCommonSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioSettings(const FPalOptionAudioSettings& InAudioSettings);
    
    UFUNCTION(BlueprintCallable)
    void SaveLocalSettings();
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshBanList();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedGetBanlist(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionUISettings GetUISettings() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSupportScreenSizes(TArray<FIntPoint>& SupportResolutions, TEnumAsByte<EWindowMode::Type> WindowMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionPadSettings GetPadSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionWorldStaticSettings GetOptionWorldStaticSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionWorldSettings GetOptionWorldSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionLocalStaticSettings GetOptionLocalStaticSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalKeyConfigSettings GetKeyConfigSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionKeyboardSettings GetKeyboardSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionGraphicsSettings GetGraphicsSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetGameResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionCommonSettings GetCommonSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalOptionAudioSettings GetAudioSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyWorldSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWorldPreset(UPARAM(Ref) FPalOptionWorldSettings& OutSettings, EPalOptionWorldDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void ApplyWorldModePreset(UPARAM(Ref) FPalOptionWorldSettings& OutSettings, bool bIsPvP);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsPresetByBenchMark(UPARAM(Ref) FPalOptionGraphicsSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsPreset(UPARAM(Ref) FPalOptionGraphicsSettings& OutSettings, EPalOptionGraphicsLevel GraphicsLevel);
    
};

