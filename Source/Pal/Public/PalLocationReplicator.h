#pragma once
#include "CoreMinimal.h"
#include "FastPalLocationRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalLocationReplicator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalLocationReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFastPalLocationRepInfoArray RepInfoArray;
    
public:
    UPalLocationReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

