#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorStair.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelConnectorStair : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo UpConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DownConnectInfo;
    
public:
    UPalMapObjectModelConnectorStair();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

