#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalDungeonInstanceModel.h"
#include "PalDungeonInstanceModelFixedDungeon.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDungeonInstanceModelFixedDungeon : public UPalDungeonInstanceModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime RespawnBossTimeAt;
    
public:
    UPalDungeonInstanceModelFixedDungeon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDateTime GetRespawnBossTimeAt() const;
    
};

