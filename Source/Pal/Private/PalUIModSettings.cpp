#include "PalUIModSettings.h"

UPalUIModSettings::UPalUIModSettings() {
}

void UPalUIModSettings::SaveModSettings() {
}

void UPalUIModSettings::RefreshModData() {
}

void UPalUIModSettings::OpenSteamWorkshop() {
}



bool UPalUIModSettings::IsModSupportIngame() const {
    return false;
}

bool UPalUIModSettings::IsAnySettingChanged() const {
    return false;
}

bool UPalUIModSettings::GetModDisplayData(const FPalUIModUniqueId& ModUniqueId, FPalUIModDisplayData& OutData) const {
    return false;
}

void UPalUIModSettings::GetAllModIds(TArray<FPalUIModUniqueId>& OutIds) const {
}

void UPalUIModSettings::GetAllModData(TMap<FPalUIModUniqueId, FPalUIModDisplayData>& OutMap) const {
}

bool UPalUIModSettings::CheckModVersionCompatibility(const FPalUIModUniqueId& ModUniqueId) {
    return false;
}

void UPalUIModSettings::ChangeModSupportIngame(const bool bActive) {
}

void UPalUIModSettings::ChangeModActive(const FPalUIModUniqueId& ModUniqueId, const bool bActive) {
}

bool UPalUIModSettings::CanChangeModSupportIngame() const {
    return false;
}


