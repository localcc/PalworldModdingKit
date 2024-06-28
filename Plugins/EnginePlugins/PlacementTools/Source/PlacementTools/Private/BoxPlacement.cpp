#include "BoxPlacement.h"
#include "Components/BoxComponent.h"

ABoxPlacement::ABoxPlacement() {
    this->BoxBrush = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBrush"));
    this->TraceChannel = ECC_Visibility;
    this->BoxBrush->SetupAttachment(RootComponent);
}

