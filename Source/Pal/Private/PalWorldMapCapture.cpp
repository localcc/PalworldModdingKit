#include "PalWorldMapCapture.h"
#include "Components/SceneCaptureComponent2D.h"

UTexture2D* APalWorldMapCapture::GetWorldMapHeightMap() {
    return NULL;
}

UTextureRenderTarget2D* APalWorldMapCapture::GetRenderedWorldMapTexture() {
    return NULL;
}

bool APalWorldMapCapture::CreateWorldMapTexture() {
    return false;
}



APalWorldMapCapture::APalWorldMapCapture() {
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->worldMapTexture = NULL;
    this->worldMapDetailRenderTexture = NULL;
    this->worldMapHeightTexture = NULL;
}

