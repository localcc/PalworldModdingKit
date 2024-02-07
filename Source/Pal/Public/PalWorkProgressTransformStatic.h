#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkProgressTransformBase.h"
#include "PalWorkProgressTransformStatic.generated.h"

UCLASS(Blueprintable)
class UPalWorkProgressTransformStatic : public UPalWorkProgressTransformBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
public:
    UPalWorkProgressTransformStatic();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

