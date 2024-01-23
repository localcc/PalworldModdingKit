#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PalItemSlotId.h"
#include "Templates/SubclassOf.h"
#include "PalPlayerMenuUI.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalPlayerMenuUI : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalItemSlotId SelectItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDraging;
    
public:
    UPalPlayerMenuUI();
    UFUNCTION(BlueprintCallable)
    void SetSelectedItemSlot(FPalItemSlotId SelectSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDraging(bool Draging);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget(TSubclassOf<UUserWidget> WidgetClass, UUserWidget*& OutWidget, int32& ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenInventoryMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenChestMenu(UPalItemContainer* ChestContainer);
    
    UFUNCTION(BlueprintCallable)
    void InitBindAxis();
    
    UFUNCTION(BlueprintCallable)
    FPalItemSlotId GetSelectedItemSlot();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsDragingt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDragWidget(FPalItemSlotId SlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseInventoryMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseChestMenu(UPalItemContainer* ChestContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackOneWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMouseYawInput(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMousePitchInput(float Val);
    
};

