#include "PalWorldSecuritySystem.h"

UPalWorldSecuritySystem::UPalWorldSecuritySystem() {
    this->LawClassDirectoryPath = TEXT("/Game/Pal/Blueprint/WorldSecurity/Law");
}

void UPalWorldSecuritySystem::ReportCriminal(UPalIndividualCharacterHandle* CriminalHandle, UPalIndividualCharacterHandle* ReporterHandle) {
}

void UPalWorldSecuritySystem::ReleaseWanted(UPalIndividualCharacterHandle* CriminalHandle) {
}

void UPalWorldSecuritySystem::ReleaseCrime(UPalIndividualCharacterHandle* CriminalHandle, const FGuid& CrimeInstanceId) {
}

APalTriggerAreaBase* UPalWorldSecuritySystem::GetNearestTriggerArea(FVector Location) {
    return NULL;
}

FName UPalWorldSecuritySystem::GetCrimeIdByCrimeInstanceId(const FGuid& CrimeInstanceId) {
    return NAME_None;
}


