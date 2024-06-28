#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUICharacterStatus.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUICharacterStatus : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUICharacterStatus();

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleFavoritePal(UPalIndividualCharacterHandle* targetHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveSkill(UPalIndividualCharacterHandle* targetHandle, EPalWazaID targetWazaID);
    
    UFUNCTION(BlueprintCallable)
    void DropCharacter(UPalIndividualCharacterHandle* targetHandle);
    
    UFUNCTION(BlueprintCallable)
    void ChangeNickname(UPalIndividualCharacterHandle* targetHandle, const FText& NewNickName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActiveSkill(UPalIndividualCharacterHandle* targetHandle, EPalWazaID changeWazaID, EPalWazaID newWazaID);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveSkill(UPalIndividualCharacterHandle* targetHandle, EPalWazaID newWazaID);
    
};

