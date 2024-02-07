#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalWorldMapCapture.generated.h"

class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class PAL_API APalWorldMapCapture : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* worldMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* worldMapDetailRenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* worldMapHeightTexture;
    
public:
    APalWorldMapCapture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetWorldMapHeightMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderedWorldMapTexture();
    
    UFUNCTION(BlueprintCallable)
    bool CreateWorldMapTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureWorldMapTexture_Perspective();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CaptureWorldMapTexture_Ortho();
    
};

