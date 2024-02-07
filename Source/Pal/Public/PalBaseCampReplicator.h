#pragma once
#include "CoreMinimal.h"
#include "FastPalBaseCampRepInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalBaseCampReplicator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalBaseCampReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFastPalBaseCampRepInfoArray RepInfoArray;
    
public:
    UPalBaseCampReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

