#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectFastTravelPointModel.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectFastTravelPointModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationInstanceId;
    
public:
    UPalMapObjectFastTravelPointModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

