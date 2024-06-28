#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalBaseCampGroupedWorkBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalBaseCampGroupedWorkBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> WorkIds;
    
public:
    UPalBaseCampGroupedWorkBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

