#include "PalLocationPointStatic.h"
#include "Net/UnrealNetwork.h"

UPalLocationPointStatic::UPalLocationPointStatic() {
    this->RotationZ = 0.00f;
}

void UPalLocationPointStatic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPointStatic, Location);
    DOREPLIFETIME(UPalLocationPointStatic, RotationZ);
}


