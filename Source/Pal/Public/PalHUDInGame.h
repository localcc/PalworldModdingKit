#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/HUD.h"
#include "GameplayTagContainer.h"
#include "EPalHUDWidgetPriority.h"
#include "EPalWidgetBlueprintType.h"
#include "EPalWorldHUDWidgetBlueprintType.h"
#include "FlagContainer.h"
#include "PalHUDServiceProviderInterface.h"
#include "PalWorldHUDParameter.h"
#include "Templates/SubclassOf.h"
#include "PalHUDInGame.generated.h"

class UAkAudioEvent;
class UPalHUDDispatchParameterBase;
class UPalSoundPlayer;
class UPalUIHUDLayoutBase;
class UPalUIInputGuard;
class UPalUILiftSlotModel;
class UPalUserWidget;
class UPalUserWidgetStackableUI;
class UPalUserWidgetWorldHUD;
class UPalWorldHUDDisplayInfo;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class PAL_API APalHUDInGame : public AHUD, public IPalHUDServiceProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIHUDLayoutBase> HUDLayoutClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUIInputGuard> PlayerInputGuardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalUIHUDLayoutBase* HUDLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalUserWidgetWorldHUD*> WorldHUDWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalUserWidget*> HUDWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalUserWidgetStackableUI*> StackableUIWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalUILiftSlotModel* LiftSlotModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* HoverWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalWorldHUDDisplayInfo*> WorldHUDDisplayInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalWorldHUDDisplayInfo*> ActiveWorldHUDDisplayInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWidgetBlueprintType, TSoftClassPtr<UPalUserWidgetStackableUI>> CommonUIClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWorldHUDWidgetBlueprintType, TSoftClassPtr<UPalUserWidgetWorldHUD>> WorldHUDClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWidgetBlueprintType, TSubclassOf<UPalUserWidgetStackableUI>> LoadedCommonUIClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWorldHUDWidgetBlueprintType, TSubclassOf<UPalUserWidgetWorldHUD>> LoadedWorldHUDClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalSoundPlayer* SoundPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GameMenuLayerTagOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFlagContainer> LayerHideFlagMap;
    
public:
    APalHUDInGame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TickWorldHUDs();
    
    UFUNCTION(BlueprintCallable)
    void ShowLiftIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUDFromWidgetId(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    FGuid PushWidgetStackableUI(TSubclassOf<UPalUserWidgetStackableUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnApplicationActivationStateChanged(bool bIsFocused);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideLiftIcon();
    
private:
    UFUNCTION(BlueprintCallable)
    void Debug_DrawInteractPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    UPalUserWidgetWorldHUD* CreateWorldHUDWidget(TSubclassOf<UPalUserWidgetWorldHUD> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    UPalUserWidget* CreateHUDWidget(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void CloseWorldHUDWidget(const FGuid WidgetId);
    
    UFUNCTION(BlueprintCallable)
    void CloseOverlayUI(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void CloseHUDWidget(UPalUserWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetupPlayerUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindGameOverUI();
    
    UFUNCTION(BlueprintCallable)
    FGuid AddWorldHUD(FPalWorldHUDParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddHUD(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AkEvent) override PURE_VIRTUAL(PlayAkSound,);
    
    UFUNCTION(BlueprintCallable)
    UPalSoundPlayer* GetSoundPlayer() override PURE_VIRTUAL(GetSoundPlayer, return NULL;);
    
};

