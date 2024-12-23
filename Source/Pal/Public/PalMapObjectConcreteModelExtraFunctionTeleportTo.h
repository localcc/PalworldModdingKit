#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectConcreteModelExtraFunctionBase.h"
#include "PalMapObjectConcreteModelExtraFunctionTeleportTo.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectConcreteModelExtraFunctionTeleportTo : public UPalMapObjectConcreteModelExtraFunctionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationIdTeleportTo;
    
public:
    UPalMapObjectConcreteModelExtraFunctionTeleportTo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup_ServerInternal(const EPalInteractiveObjectActionType InActionType, const FGuid& InLocationIdTeleportTo);
    
};

