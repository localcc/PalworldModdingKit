#include "PalInvaderStartPoint.h"
#include "PalNavigationInvokerComponent.h"

APalInvaderStartPoint::APalInvaderStartPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavInvokerComponent = CreateDefaultSubobject<UPalNavigationInvokerComponent>(TEXT("NavInvokerComponent"));
    this->BiomeType = EPalBiomeType::Undefined;
}


