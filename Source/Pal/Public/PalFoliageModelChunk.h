#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalFoliageInstanceRepInfoArray.h"
#include "PalFoliageModelChunk.generated.h"

UCLASS(Blueprintable)
class PAL_API APalFoliageModelChunk : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFoliageInstanceRepInfoArray RepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ChunkGridSize, meta=(AllowPrivateAccess=true))
    int32 ChunkGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 InstanceNum;
    
public:
    APalFoliageModelChunk(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChunkGridSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedChunkGridSize(const int32 NewChunkGridSize);
    
};

