#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalEditorDungeonAutoEnter.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable)
class PAL_API APalEditorDungeonAutoEnter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* TargetDataLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitSecondsBeforeEnterRequest;
    
public:
    APalEditorDungeonAutoEnter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadInitWorldPartition();
    
};

