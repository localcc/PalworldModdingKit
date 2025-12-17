#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorDiagonalWall.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelConnectorDiagonalWall : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DiagonalUpConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DiagonalDownConnectInfo;
    
public:
    UPalMapObjectModelConnectorDiagonalWall();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

