#include "PalMapObjectCommonDropItem3D.h"

APalMapObjectCommonDropItem3D::APalMapObjectCommonDropItem3D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->registerdDistributeTick = false;
    this->CurrentLinearDamping = 0.50f;
    this->LinearDownSpeed = 2.00f;
}


