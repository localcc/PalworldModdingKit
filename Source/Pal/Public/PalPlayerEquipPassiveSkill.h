#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalPassiveSkillBase.h"
#include "PalPlayerEquipPassiveSkill.generated.h"

class UPalItemSlot;

UCLASS(Blueprintable)
class PAL_API UPalPlayerEquipPassiveSkill : public UPalPassiveSkillBase {
    GENERATED_BODY()
public:
    UPalPlayerEquipPassiveSkill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerTowerBossDefeatFlag_ServerInternal(FName Key, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateEquipmentSlot(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    
};

