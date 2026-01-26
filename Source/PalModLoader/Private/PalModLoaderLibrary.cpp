#include "PalModLoaderLibrary.h"

UPalModLoaderLibrary::UPalModLoaderLibrary() {
}

void UPalModLoaderLibrary::SetNeedRestart() {
}

void UPalModLoaderLibrary::SetGlobalEnableMod(bool bEnable) {
}

void UPalModLoaderLibrary::SetActiveModList(const TArray<FString>& InModList) {
}

void UPalModLoaderLibrary::RestartGame(bool bSafeMode) {
}

void UPalModLoaderLibrary::OpenWorkshopPage() {
}

bool UPalModLoaderLibrary::IsNeedShowErrorOnNextStart() {
    return false;
}

bool UPalModLoaderLibrary::IsNeedRestart() {
    return false;
}

bool UPalModLoaderLibrary::IsGlobalEnableMod() {
    return false;
}

TArray<FPalModInfoStruct> UPalModLoaderLibrary::GetWorkshopModList() {
    return TArray<FPalModInfoStruct>();
}

FPalModInfoStruct UPalModLoaderLibrary::GetWorkshopMod(const FString& InPackageName) {
    return FPalModInfoStruct{};
}

TArray<FString> UPalModLoaderLibrary::GetActiveModList() {
    return TArray<FString>();
}

void UPalModLoaderLibrary::DeleteMod(FPalModInfoStruct InModInfo) {
}

void UPalModLoaderLibrary::DeactivateMod(FPalModInfoStruct InModInfo) {
}

void UPalModLoaderLibrary::ActivateMod(FPalModInfoStruct InModInfo) {
}


