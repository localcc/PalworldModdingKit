#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalOtomoAttackStopJudgeByBall.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOtomoAttackStopJudgeByBall : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsProhibitAttack;
    
public:
    UPalOtomoAttackStopJudgeByBall();
};

