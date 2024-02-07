#include "PalUILocalWorldSelectBase.h"

UPalUILocalWorldSelectBase::UPalUILocalWorldSelectBase() {
}

bool UPalUILocalWorldSelectBase::SelectWorld(const FString& WorldSaveDirectoryName, const FString& WorldName, FPalOptionWorldSaveData& OptionWorldData) {
    return false;
}

void UPalUILocalWorldSelectBase::GetWorldDisplayInfo(TMap<FString, FPalUILocalWorldDisplayData>& OutDisplayInfo) {
}

TArray<FPalUILocalWorldDisplayData> UPalUILocalWorldSelectBase::GetSortedWorldDisplayInfoArray(const TMap<FString, FPalUILocalWorldDisplayData>& DisplayInfoMap) {
    return TArray<FPalUILocalWorldDisplayData>();
}

bool UPalUILocalWorldSelectBase::DeleteWorld(const FString& WorldSaveDirectoryName) {
    return false;
}


