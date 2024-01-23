#include "PalStaticItemDataStruct.h"

FPalStaticItemDataStruct::FPalStaticItemDataStruct() {
    this->TypeA = EPalItemTypeA::None;
    this->TypeB = EPalItemTypeB::None;
    this->Rank = 0;
    this->Rarity = 0;
    this->MaxStackCount = 0;
    this->Weight = 0.00f;
    this->Price = 0;
    this->SortID = 0;
    this->bInTreasureBox = false;
    this->bNotConsumed = false;
    this->bEnableHandcraft = false;
    this->TechnologyTreeLock = 0;
    this->DropItemType = EPalDropItemType::None;
    this->Editor_RowNameHash = 0;
    this->RestoreSatiety = 0;
    this->RestoreConcentration = 0;
    this->RestoreSanity = 0;
    this->RestoreHealth = 0;
    this->GrantEffect1Id = 0;
    this->GrantEffect1Time = 0.00f;
    this->GrantEffect2Id = 0;
    this->GrantEffect2Time = 0.00f;
    this->GrantEffect3Id = 0;
    this->GrantEffect3Time = 0.00f;
    this->Durability = 0;
    this->ElementType = EPalElementType::None;
    this->bSleepWeapon = false;
    this->MagazineSize = 0;
    this->SneakAttackRate = 0.00f;
    this->PhysicalAttackValue = 0;
    this->HPValue = 0;
    this->PhysicalDefenseValue = 0;
    this->ShieldValue = 0;
    this->MagicAttackValue = 0;
    this->MagicDefenseValue = 0;
    this->WazaID = EPalWazaID::None;
    this->CorruptionFactor = 0.00f;
    this->FloatValue1 = 0.00f;
}

