#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectConcreteModelExtraFunctionBase.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectConcreteModelExtraFunctionEnterRoom.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectConcreteModelExtraFunctionEnterRoom : public UPalMapObjectConcreteModelExtraFunctionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceId;
    
public:
    UPalMapObjectConcreteModelExtraFunctionEnterRoom();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup_ServerInternal(const EPalInteractiveObjectActionType InActionType, UDataLayerAsset* InDataLayerAsset);
    
};

