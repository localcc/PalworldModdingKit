#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalContainerOperationRestrictType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalMapObjectItemChestParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemChestParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> TargetTypesA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> TargetTypesB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalContainerOperationRestrictType OperationRestrictType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyIfEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorruptionMultiplier;
    
    UPalMapObjectItemChestParameterComponent(const FObjectInitializer& ObjectInitializer);

};

