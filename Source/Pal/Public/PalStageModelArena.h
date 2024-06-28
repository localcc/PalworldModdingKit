#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelArena.generated.h"

class UPalArenaInstanceModel;

UCLASS(Blueprintable)
class PAL_API UPalStageModelArena : public UPalStageModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalArenaInstanceModel* InstanceModel;
    
public:
    UPalStageModelArena();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalArenaInstanceModel* GetInstanceModel() const;
    
};

