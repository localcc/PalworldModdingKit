#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.h"
#include "PalMapObjectModelConnectorSlopedRoofCorner.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelConnectorSlopedRoofCorner : public UPalMapObjectModelConnectorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DiagonalDownConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DiagonalLeftConnectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo DiagonalBackConnectInfo;
    
public:
    UPalMapObjectModelConnectorSlopedRoofCorner();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

