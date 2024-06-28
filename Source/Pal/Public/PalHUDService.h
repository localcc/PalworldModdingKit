#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPalFadeWidgetLayerType.h"
#include "EPalHUDWidgetPriority.h"
#include "EPalWidgetBlueprintType.h"
#include "PalUICommonItemInfoDisplayData.h"
#include "PalUICommonRewardDisplayData.h"
#include "PalUIPalCaptureInfo.h"
#include "PalWorldHUDParameter.h"
#include "Templates/SubclassOf.h"
#include "UITransientData.h"
#include "PalHUDService.generated.h"

class IPalHUDServiceProviderInterface;
class UPalHUDServiceProviderInterface;
class UAkAudioEvent;
class UPalHUDDispatchParameterBase;
class UPalHUDDispatchParameter_FadeWidget;
class UPalSoundPlayer;
class UPalUILiftSlotModel;
class UPalUserWidget;
class UPalUserWidgetStackableUI;
class UWidget;

UCLASS(Blueprintable)
class PAL_API UPalHUDService : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessedCapturePal, const FPalUIPalCaptureInfo&, CaptureInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPushedStackableUI, const FGuid&, pushedWidgetID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnApplicationActivationStateChangedDelegate, bool, bIsFocused);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInvalidatePlayerInputGuard);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushedStackableUI OnPushedStackableUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessedCapturePal OnSuccessedCapturePal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnApplicationActivationStateChangedDelegate OnApplicationActivationStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvalidatePlayerInputGuard OnInvalidatePlayerInputGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUITransientData TransientData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalHUDServiceProviderInterface> ServiceProvider;
    
public:
    UPalHUDService();
    UFUNCTION(BlueprintCallable)
    void StartFadeOut(EPalFadeWidgetLayerType LayerType);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn(EPalFadeWidgetLayerType LayerType, UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    
    UFUNCTION(BlueprintCallable)
    FGuid ShowCommonUI(const EPalWidgetBlueprintType WBPType, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData);
    
    UFUNCTION(BlueprintCallable)
    void ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDLayerHideFlag(const FGameplayTag& LayerTagName, const FName& HideReasonName, bool IsHide);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUDFromWidgetId(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHUD(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    FGuid Push(TSubclassOf<UPalUserWidgetStackableUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable)
    void InvokeFunction_Int32(const FName FunctionName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeFunction_FName(const FName FunctionName, FName Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeFunction(const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void HideCommonItemInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalSoundPlayer* GetSoundPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUILiftSlotModel* GetLiftSlotModel();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateFocusCursor();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalHUDDispatchParameterBase* CreateDispatchParameterForK2Node(const UObject* WorldContextObject, TSubclassOf<UPalHUDDispatchParameterBase> ParameterClass);
    
    UFUNCTION(BlueprintCallable)
    void CloseOwnerStackableUI(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void CloseOverlayUIAll();
    
    UFUNCTION(BlueprintCallable)
    void Close(const FGuid& ID);
    
    UFUNCTION(BlueprintCallable)
    void ClearFadeQueue();
    
    UFUNCTION(BlueprintCallable)
    FGuid AddWorldHUD(FPalWorldHUDParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddHUD(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePlayerInputGuard();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFocusCursor(UWidget* TargetWidget);
    
};

