#pragma once
#include "CoreMinimal.h"
#include "PalFastStageModelRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalStageReplicator.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalStageReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastStageModelRepInfoArray RepInfoArray;
    
public:
    UPalStageReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

