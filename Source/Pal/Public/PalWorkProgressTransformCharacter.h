#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalInstanceID.h"
#include "PalWorkProgressTransformBase.h"
#include "PalWorkProgressTransformCharacter.generated.h"

UCLASS(Blueprintable)
class UPalWorkProgressTransformCharacter : public UPalWorkProgressTransformBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TransformCache;
    
public:
    UPalWorkProgressTransformCharacter();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

