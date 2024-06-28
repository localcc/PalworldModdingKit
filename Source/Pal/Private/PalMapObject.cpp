#include "PalMapObject.h"
#include "Net/UnrealNetwork.h"
#include "PalMapObjectDamageReactionComponent.h"
#include "PalMapObjectVisualEffectComponent.h"

APalMapObject::APalMapObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ConcreteModelClass = NULL;
    this->DamageReaction = CreateDefaultSubobject<UPalMapObjectDamageReactionComponent>(TEXT("DamageReaction"));
    this->VisualEffect = CreateDefaultSubobject<UPalMapObjectVisualEffectComponent>(TEXT("VisualEffect"));
    this->bSpawnableIfOverlapped = false;
    this->bLevelSpawnObject = false;
    this->bSpawnSlipAboveIfAnyOverlap = false;
    this->bShakeOnDamaged = false;
    this->DestroyFXType = EPalMapObjectDestroyFXType::Normal;
    this->PlayDestroyFXPlayerRange = 0.00f;
    this->bShowOutlineInTargettingReticle = false;
    this->bShowOutlineNearPlayer = false;
    this->bAutoDestroyByOverlapSpawning = false;
    this->bInDoorObject = false;
    this->bBaseObject = false;
    this->DamagableType = EPalMapObjectDamagableType::OtherGroup;
    this->MapObjectModel = NULL;
    this->bUnmanagedInLocal = false;
    this->IndicatorWidgetClass = NULL;
    this->ChangeMeshFXType = EPalMapObjectChangeMeshFXType::None;
    this->bWorkLocationGroupRaycastStartOffsetOrigin = false;
    this->bShouldPlayDestroyFX = false;
}

void APalMapObject::TryGetConcreteModel(EPalMapObjectGetModelOutPinType& OutputPin, UPalMapObjectConcreteModelBase*& ConcreteModel) {
}

void APalMapObject::SetIgnoreSave_ServerInternal(const bool bIgnore) {
}

void APalMapObject::OnUpdatedEnableTickByModel(UPalMapObjectModel* Model) {
}

void APalMapObject::OnRep_MapObjectModel() {
}

void APalMapObject::OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void APalMapObject::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void APalMapObject::OnDisposeModel_ServerInternal(UPalMapObjectModel* DisposeModel, const FPalMapObjectDisposeOptions& Options) {
}

void APalMapObject::OnDamaged(UPalMapObjectModel* TargetModel, const FPalDamageInfo& DamageInfo) {
}

void APalMapObject::OnCloseParameter(UPalHUDDispatchParameterBase* Parameter) {
}

UPalMapObjectModel* APalMapObject::GetModel() const {
    return NULL;
}

FGuid APalMapObject::GetGroupIdBelongTo() const {
    return FGuid{};
}

void APalMapObject::DisposeSelf_ServerInternal() {
}

void APalMapObject::CallOrRegisterOnSetConcreteModel(FPalMapObjectConcreteModelDelegate Delegate) {
}

void APalMapObject::BroadcastShouldPlayDestroyFX_Implementation() {
}

void APalMapObject::BP_OnSetConcreteModel_Implementation(UPalMapObjectConcreteModelBase* ConcreteModel) {
}

void APalMapObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalMapObject, ModelInstanceId);
    DOREPLIFETIME(APalMapObject, MapObjectModel);
}


