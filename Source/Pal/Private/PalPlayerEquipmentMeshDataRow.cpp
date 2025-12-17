#include "PalPlayerEquipmentMeshDataRow.h"

FPalPlayerEquipmentMeshDataRow::FPalPlayerEquipmentMeshDataRow() {
    this->IsHairAttachAccessory = false;
    this->bUseCustomDepthPass = false;
    this->bIsFullBodyEquipment = false;
    this->BodyShape = EPalPlayerBodyShape::Normal;
}

