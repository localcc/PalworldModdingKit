#pragma once
#include "CoreMinimal.h"
#include "PalStageModelBase.h"
#include "PalStageModelDungeon.generated.h"

class UPalDungeonInstanceModel;

UCLASS(Blueprintable)
class PAL_API UPalStageModelDungeon : public UPalStageModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPalDungeonInstanceModel* InstanceModel;
    
public:
    UPalStageModelDungeon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalDungeonInstanceModel* GetInstanceModel() const;
    
};

