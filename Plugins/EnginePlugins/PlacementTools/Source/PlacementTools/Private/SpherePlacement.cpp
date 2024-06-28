#include "SpherePlacement.h"
#include "Components/SphereComponent.h"

ASpherePlacement::ASpherePlacement() {
    this->Radius = 350.00f;
    this->SphereBrush = CreateDefaultSubobject<USphereComponent>(TEXT("SphereBrush"));
    this->FadeDirection = All;
    this->TraceChannel = ECC_Visibility;
    this->SphereBrush->SetupAttachment(RootComponent);
}

