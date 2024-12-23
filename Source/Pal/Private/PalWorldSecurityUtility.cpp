#include "PalWorldSecurityUtility.h"

UPalWorldSecurityUtility::UPalWorldSecurityUtility() {
}

bool UPalWorldSecurityUtility::IsWantedCharacter(APalCharacter* Target) {
    return false;
}

bool UPalWorldSecurityUtility::IsCriminalCharacter(APalCharacter* Target) {
    return false;
}

bool UPalWorldSecurityUtility::FindWantedsInSight(APalCharacter* Target, TArray<APalCharacter*>& Wanteds) {
    return false;
}

bool UPalWorldSecurityUtility::FindCriminalsInSight(APalCharacter* Target, TArray<APalCharacter*>& Criminals) {
    return false;
}


