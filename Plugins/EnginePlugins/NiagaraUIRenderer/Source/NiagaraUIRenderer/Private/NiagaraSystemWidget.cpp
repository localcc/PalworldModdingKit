#include "NiagaraSystemWidget.h"

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool NewTickWhenPaused) {
}

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(UNiagaraSystem* NewNiagaraSystem) {
}

void UNiagaraSystemWidget::SetRemapMaterial(UMaterialInterface* OriginalMaterial, UMaterialInterface* RemapMaterial) {
}

void UNiagaraSystemWidget::SetDesiredWidgetSize(FVector2D NewDesiredSize) {
}

UMaterialInterface* UNiagaraSystemWidget::GetRemapMaterial(UMaterialInterface* OriginalMaterial) {
    return NULL;
}

UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent() {
    return NULL;
}

void UNiagaraSystemWidget::DeactivateSystem() {
}

void UNiagaraSystemWidget::ActivateSystem(bool Reset) {
}

UNiagaraSystemWidget::UNiagaraSystemWidget() {
    this->NiagaraSystemReference = NULL;
    this->AutoActivate = true;
    this->TickWhenPaused = false;
    this->FakeDepthScale = false;
    this->FakeDepthScaleDistance = 1000.00f;
    this->ShowDebugSystemInWorld = false;
    this->DisableWarnings = false;
    this->NiagaraActor = NULL;
    this->NiagaraComponent = NULL;
}

