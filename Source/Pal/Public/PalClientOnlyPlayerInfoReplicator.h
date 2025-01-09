#pragma once
#include "CoreMinimal.h"
#include "FastPlayerPlatformInfoArray.h"
#include "PalGameStateReplicatorBase.h"
#include "PalClientOnlyPlayerInfoReplicator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalClientOnlyPlayerInfoReplicator : public UPalGameStateReplicatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFastPlayerPlatformInfoArray RepPlayerPlatformInfoArray;
    
public:
    UPalClientOnlyPlayerInfoReplicator();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

