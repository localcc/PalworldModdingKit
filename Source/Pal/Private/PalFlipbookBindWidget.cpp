#include "PalFlipbookBindWidget.h"
#include "PaperFlipbook.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"

UPalFlipbookBindWidget::UPalFlipbookBindWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SourceFlipbook = NULL;
    this->TargetImage = NULL;
    this->PlayRate = 1.00f;
    this->CurrentPlayTime = 0.00f;
    this->CurrentTexture = NULL;
}

void UPalFlipbookBindWidget::SeuPause(bool bNewPauseFlag) {
}

void UPalFlipbookBindWidget::SetPlayRate(float NewPlayRate) {
}


