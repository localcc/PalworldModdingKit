#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorWallV2Tall.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelConnectorWallV2Tall : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo UpConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DownConnectInfo;
    
public:
    UPalMapObjectModelConnectorWallV2Tall();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

