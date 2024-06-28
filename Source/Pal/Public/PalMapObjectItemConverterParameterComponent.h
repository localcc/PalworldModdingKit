#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalMapObjectItemConverterParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemConverterParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> TargetTypesA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> TargetTypesB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetRankMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> MaterialTypesA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> MaterialTypesB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoWorkAmountBySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
    UPalMapObjectItemConverterParameterComponent(const FObjectInitializer& ObjectInitializer);

};

