#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "PalActivatableWidget.h"
#include "PalUIActionBindData.h"
#include "Templates/SubclassOf.h"
#include "PalUserWidget.generated.h"

class UAkAudioEvent;
class UPalHUDDispatchParameterBase;
class UPalUserWidgetOverlayUI;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPalUserWidget : public UPalActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncPlayerInventory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalHUDDispatchParameterBase* Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalUIActionBindData> BindedActionHandles;
    
public:
    UPalUserWidget();
    UFUNCTION(BlueprintCallable)
    void VisibilityOverride(ESlateVisibility changedVisibility);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterActionBinding(UPARAM(Ref) FPalUIActionBindData& BindingData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestInventorySync(bool bOpen) const;
    
    UFUNCTION(BlueprintCallable)
    FPalUIActionBindData RegisterActionBinding_NotConcume(const FName& ActionName, bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback);
    
    UFUNCTION(BlueprintCallable)
    FPalUIActionBindData RegisterActionBinding(const FName& ActionName, bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGuid Push(TSubclassOf<UPalUserWidgetOverlayUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAkSound(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup_AfterCreatedPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameWidget(const FGuid& checkID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalHUDDispatchParameterBase* GetParam() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* FindParentWidget(TSubclassOf<UUserWidget> Class);
    
};

