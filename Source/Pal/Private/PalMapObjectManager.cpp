#include "PalMapObjectManager.h"

UPalMapObjectManager::UPalMapObjectManager() {
    this->BuildObjectDataTable = NULL;
    this->BuildObjectNameTable = NULL;
    this->BuildObjectDescTable = NULL;
    this->MapObjectAssignTable = NULL;
    this->FoliagePresetDataSet = NULL;
    this->FoliageModelChunkClass = NULL;
    this->FoliageGridSize = 25600;
    this->Foliage = NULL;
    this->BuildOperator = NULL;
    this->WorldDisposerForServer = NULL;
    this->BuildStartEffect = NULL;
    this->BuildCompleteEffect = NULL;
    this->BuildCompleteSE = NULL;
    this->RepairEffect = NULL;
    this->DamageEffect = NULL;
    this->DamageParam_MaxRate = 4.00f;
    this->DamageParam_MaxAddRate = 4.00f;
    this->DamageParam_MaxScale = 4.00f;
    this->DamageParam_MaxRadiusScale = 4.00f;
    this->DamageParam_RadiusScaleMultiplier = 3.00f;
    this->DamageFX_StartHPRate = 0.50f;
    this->DamageFX_DefaultBoundsSphereRadius = 0.00f;
    this->DamageFX_EndFadeTime = 1.00f;
    this->DropItemSpawnLocationFromActorBounds = 15.00f;
    this->DropItemSpawnDirectionZ = 6.00f;
    this->HitEffectSlotClass = NULL;
    this->SnapModeFXClass = NULL;
    this->Registrator = NULL;
    this->InDoorCheckProcessIndex_AnyThread = 0;
    this->InDoorCheckMaxNumPerFrame_AnyThread = 1000;
    this->SnapModeFX = NULL;
}

void UPalMapObjectManager::UpdateSkeletalMeshComponentForLOD(int32 InExecuteCount) {
}

void UPalMapObjectManager::UpdatePointLightComponentForCulling() {
}

void UPalMapObjectManager::UnResisterSkeletalMeshComponentForLOD(UObject* InComponent) {
}

void UPalMapObjectManager::UnResisterPointLightComponent(UObject* InComponent) {
}

void UPalMapObjectManager::ResisterSkeletalMeshComponentForLOD(UObject* InComponent) {
}

void UPalMapObjectManager::ResisterPointLightComponent(UObject* InComponent) {
}

void UPalMapObjectManager::RequestDismantleObject_OnResponseDialog(const bool bResult, UPalDialogParameterBase* DialogParameter) {
}

void UPalMapObjectManager::RecalcPointLightOverlap() {
}

void UPalMapObjectManager::PlayMapObjectDestroyFX(const FVector& Location, const FBoxSphereBounds& Bounds, const EPalMapObjectDestroyFXType Type) {
}

UPalMapObjectFoliage* UPalMapObjectManager::GetFoliage() const {
    return NULL;
}

UPalBuildOperator* UPalMapObjectManager::GetBuildOperator() const {
    return NULL;
}

UPalMapObjectModel* UPalMapObjectManager::FindModel(const FGuid& InstanceId) const {
    return NULL;
}

UPalMapObjectConcreteModelBase* UPalMapObjectManager::FindConcreteModel(const FGuid& InstanceId) const {
    return NULL;
}


