#include "PalBaseCampModuleRaidDetect.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleRaidDetect::UPalBaseCampModuleRaidDetect() {
    this->bIsUnderRaid = false;
}

bool UPalBaseCampModuleRaidDetect::IsUnderRaid() const {
    return false;
}

void UPalBaseCampModuleRaidDetect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleRaidDetect, bIsUnderRaid);
}


