#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalDataTableRowName_ItemProductData.h"
#include "PalMapObjectItemSimpleProductParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemSimpleProductParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemProductData ItemProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGainExp;
    
    UPalMapObjectItemSimpleProductParameterComponent(const FObjectInitializer& ObjectInitializer);

};

