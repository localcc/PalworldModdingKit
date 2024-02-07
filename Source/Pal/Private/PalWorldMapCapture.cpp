#include "PalWorldMapCapture.h"
#include "Components/SceneCaptureComponent2D.h"

APalWorldMapCapture::APalWorldMapCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->worldMapTexture = NULL;
    this->worldMapDetailRenderTexture = NULL;
    this->worldMapHeightTexture = NULL;
}

UTexture2D* APalWorldMapCapture::GetWorldMapHeightMap() {
    return NULL;
}

UTextureRenderTarget2D* APalWorldMapCapture::GetRenderedWorldMapTexture() {
    return NULL;
}

bool APalWorldMapCapture::CreateWorldMapTexture() {
    return false;
}




