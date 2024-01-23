#include "PlacementToolBase.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"

void APlacementToolBase::RandomizeSeed() {
}

void APlacementToolBase::Generate() {
}

APlacementToolBase::APlacementToolBase() {
    this->isInEditor = true;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->EasySelectBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
    this->PlacementMode = Free;
    this->PlacementStyle = Fade;
    this->Amount = 10;
    this->Seed = 0;
    this->bRandomizeRotation = false;
    this->bRandomizeScale = false;
    this->bUniformScale = true;
    this->bRotateToSurface = false;
    this->bAdjustToSurface = false;
    this->bAvoidOverlapBounds = false;
    this->bDeleteChildrenWhenDeleted = true;
    this->bHideBrush = false;
}

