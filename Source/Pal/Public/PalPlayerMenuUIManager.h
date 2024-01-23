#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalContainerId.h"
#include "PalItemSlotId.h"
#include "PalPlayerMenuUIManager.generated.h"

class UPalPlayerMenuUI;

UCLASS(Blueprintable)
class PAL_API UPalPlayerMenuUIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalPlayerMenuUI* PlayerMenuUI;
    
    UPalPlayerMenuUIManager();
    UFUNCTION(BlueprintCallable)
    void ToggleInventoryWindow();
    
    UFUNCTION(BlueprintCallable)
    void Test_SetPlayerContainerID(const FPalContainerId& ContainerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId Test_GetPlayerContainerID() const;
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(FPalItemSlotId SelectSlot);
    
};

