#include "PalLocationPointStatic.h"
#include "Net/UnrealNetwork.h"

void UPalLocationPointStatic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPointStatic, Location);
    DOREPLIFETIME(UPalLocationPointStatic, RotationZ);
}

UPalLocationPointStatic::UPalLocationPointStatic() {
    this->RotationZ = 0.00f;
}

