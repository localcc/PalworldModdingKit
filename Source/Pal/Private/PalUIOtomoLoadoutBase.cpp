#include "PalUIOtomoLoadoutBase.h"

UPalUIOtomoLoadoutBase::UPalUIOtomoLoadoutBase() {
}

void UPalUIOtomoLoadoutBase::RequestApplyLoadoutData(int32 LoadoutIndex) {
}

bool UPalUIOtomoLoadoutBase::GetLocalPlayerOtomoLoadout(TArray<FPalOtomoLoadoutData>& OutData) {
    return false;
}

bool UPalUIOtomoLoadoutBase::DeletePresetData(int32 LoadoutIndex) {
    return false;
}

void UPalUIOtomoLoadoutBase::ChangeLoadoutPresetName(const FString& NewName, int32 LoadoutIndex) {
}

bool UPalUIOtomoLoadoutBase::ChangeLoadoutPresetData(int32 LoadoutIndex) {
    return false;
}

bool UPalUIOtomoLoadoutBase::AddCurrentOtomoLoadoutData() {
    return false;
}


