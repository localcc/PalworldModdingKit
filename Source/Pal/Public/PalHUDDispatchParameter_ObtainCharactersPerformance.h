#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalInstanceID.h"
#include "PalHUDDispatchParameter_ObtainCharactersPerformance.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ObtainCharactersPerformance : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> IndividualIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RewardTextId;
    
    UPalHUDDispatchParameter_ObtainCharactersPerformance();

};

