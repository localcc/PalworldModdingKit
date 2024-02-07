#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PalTreasureBoxVisualBase.generated.h"

class UPalSkeletalMeshComponent;

UCLASS(Blueprintable)
class PAL_API APalTreasureBoxVisualBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalSkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    APalTreasureBoxVisualBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMontageNotifyBegin_BP(FName NotifyName);
    
    UFUNCTION()
    void OnPlayMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
};

