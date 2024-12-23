#include "PalOptionWorldModePresetRow.h"

FPalOptionWorldModePresetRow::FPalOptionWorldModePresetRow() {
    this->WorldMode = EPalOptionWorldMode::None;
    this->bEnablePlayerToPlayerDamage = false;
    this->bCanPickupOtherGuildDeathPenaltyDrop = false;
    this->bEnableNonLoginPenalty = false;
    this->bIsStartLocationSelectByMap = false;
    this->bExistPlayerAfterLogout = false;
    this->bEnableDefenseOtherGuildPlayer = false;
}

