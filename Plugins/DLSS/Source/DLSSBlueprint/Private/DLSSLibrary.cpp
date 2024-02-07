#include "DLSSLibrary.h"

UDLSSLibrary::UDLSSLibrary() {
}

void UDLSSLibrary::SetDLSSSharpness(float Sharpness) {
}

void UDLSSLibrary::SetDLSSMode(UObject* WorldContextObject, UDLSSMode DLSSMode) {
}

UDLSSSupport UDLSSLibrary::QueryDLSSSupport() {
    return UDLSSSupport::Supported;
}

UDLSSSupport UDLSSLibrary::QueryDLSSRRSupport() {
    return UDLSSSupport::Supported;
}

bool UDLSSLibrary::IsDLSSSupported() {
    return false;
}

bool UDLSSLibrary::IsDLSSRRSupported() {
    return false;
}

bool UDLSSLibrary::IsDLSSRREnabled() {
    return false;
}

bool UDLSSLibrary::IsDLSSModeSupported(UDLSSMode DLSSMode) {
    return false;
}

bool UDLSSLibrary::IsDLSSEnabled() {
    return false;
}

bool UDLSSLibrary::IsDLAAEnabled() {
    return false;
}

TArray<UDLSSMode> UDLSSLibrary::GetSupportedDLSSModes() {
    return TArray<UDLSSMode>();
}

float UDLSSLibrary::GetDLSSSharpness() {
    return 0.0f;
}

void UDLSSLibrary::GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
}

void UDLSSLibrary::GetDLSSRRMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor) {
}

void UDLSSLibrary::GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness) {
}

UDLSSMode UDLSSLibrary::GetDLSSMode() {
    return UDLSSMode::Off;
}

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor) {
}

UDLSSMode UDLSSLibrary::GetDefaultDLSSMode() {
    return UDLSSMode::Off;
}

void UDLSSLibrary::EnableDLSSRR(bool bEnabled) {
}

void UDLSSLibrary::EnableDLSS(bool bEnabled) {
}

void UDLSSLibrary::EnableDLAA(bool bEnabled) {
}


