#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalOptionGraphicsSettings.h"
#include "PalStaticMeshImposterChunk.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class PAL_API APalStaticMeshImposterChunk : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHierarchicalInstancedStaticMeshComponent*> HISMComponents;
    
public:
    APalStaticMeshImposterChunk(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetChunkGridSize(const int32 NewChunkGridSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeGraphicsSettings(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Dev_SetChunkVisible(const bool bVisible);
    
};

