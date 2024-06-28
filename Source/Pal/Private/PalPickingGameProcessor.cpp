#include "PalPickingGameProcessor.h"

UPalPickingGameProcessor::UPalPickingGameProcessor() {
    this->FixedDifficultyType = EPalPickingGameDifficultyType::Invalid;
}

void UPalPickingGameProcessor::StartNewGame() {
}

void UPalPickingGameProcessor::SetupByDifficultyType(EPalPickingGameDifficultyType DifficultyType) {
}

void UPalPickingGameProcessor::SetPickingToolPosition(float NewPosition) {
}

void UPalPickingGameProcessor::SetKeyPosition(float NewPosition) {
}

void UPalPickingGameProcessor::SetAutoKeyReturn(bool IsAutoReturn) {
}

void UPalPickingGameProcessor::RestartGame() {
}

void UPalPickingGameProcessor::GetUnlockableRange(float& OutMin, float& OutMax) {
}


EPalPickingGameDifficultyType UPalPickingGameProcessor::GetDifficultyType() {
    return EPalPickingGameDifficultyType::Invalid;
}

void UPalPickingGameProcessor::AddPickingToolPosition(float AddPosition) {
}

void UPalPickingGameProcessor::AddKeyPosition(float AddPosition) {
}


