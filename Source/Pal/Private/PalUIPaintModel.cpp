#include "PalUIPaintModel.h"

UPalUIPaintModel::UPalUIPaintModel() {
    this->bIsTargetPaintEnabled = false;
    this->CurrentPaintResult = EPalMapObjectOperationResult::Success;
    this->bIsPaintTriggerActive = false;
    this->bTriggerPaintToClear = false;
    this->TriggerPaletteIndex = 0;
}

void UPalUIPaintModel::StopRemoveColorTrigger() {
}

void UPalUIPaintModel::StopPaintTrigger() {
}

void UPalUIPaintModel::StartRemoveColorTrigger() {
}

void UPalUIPaintModel::StartPaintTrigger() {
}

void UPalUIPaintModel::StartBuildingMode() {
}

void UPalUIPaintModel::SetTriggerPaletteIndex(int32 NewPaletteIndex) {
}

void UPalUIPaintModel::SetTargetBuildObject(APalBuildObject* InTargetObject) {
}

void UPalUIPaintModel::SetPaletteColor(int32 PaletteIndex, const FColor& NewColor) {
}

void UPalUIPaintModel::ResetToOriginalColor() {
}

void UPalUIPaintModel::PickColorFromTarget(int32 PaletteIndex) {
}

void UPalUIPaintModel::OpenEditPaletteMenu() {
}

void UPalUIPaintModel::OnSubmitColorEditorMenu(const FLinearColor& Color) {
}

void UPalUIPaintModel::LoadPalette() {
}

bool UPalUIPaintModel::IsPaintTriggerActive() const {
    return false;
}

void UPalUIPaintModel::Initialize(APalBuildObject* InTargetObject) {
}

bool UPalUIPaintModel::HasGuildPermission() const {
    return false;
}

FColor UPalUIPaintModel::GetTriggerPaintColor() const {
    return FColor{};
}

FPalBuildObjectPaintData UPalUIPaintModel::GetTargetCurrentPaintData() const {
    return FPalBuildObjectPaintData{};
}

FColor UPalUIPaintModel::GetTargetCurrentColor() const {
    return FColor{};
}

FColor UPalUIPaintModel::GetPaletteColor(int32 PaletteIndex) const {
    return FColor{};
}

FText UPalUIPaintModel::GetPaintResultMessage() const {
    return FText::GetEmpty();
}

EPalMapObjectOperationResult UPalUIPaintModel::GetCurrentPaintResult() const {
    return EPalMapObjectOperationResult::None;
}

TArray<FColor> UPalUIPaintModel::GetAllPaletteColors() const {
    return TArray<FColor>();
}

void UPalUIPaintModel::FinishPainting() {
}

void UPalUIPaintModel::ExecutePaint(const FColor& NewColor) {
}

void UPalUIPaintModel::Dispose() {
}

bool UPalUIPaintModel::CanPickColor() const {
    return false;
}

bool UPalUIPaintModel::CanPaintWithResult(EPalMapObjectOperationResult& OutResult) const {
    return false;
}

bool UPalUIPaintModel::CanPaint() const {
    return false;
}


