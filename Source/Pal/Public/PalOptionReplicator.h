#pragma once
#include "CoreMinimal.h"
#include "PalGameStateReplicatorBase.h"
#include "PalOptionWorldSettings.h"
#include "PalOptionReplicator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalOptionReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OptionWorldSettings, meta=(AllowPrivateAccess=true))
    FPalOptionWorldSettings OptionWorldSettings;
    
public:
    UPalOptionReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OptionWorldSettings();
    
};

