#pragma once
#include "CoreMinimal.h"
#include "ReserveMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FReserveMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    PAL_API FReserveMontage();
};

